using System;
using System.Collections.Generic;
using UnityEngine;

namespace Voice2Action.Samples.CityDemo.Scripts
{
    /// <summary>
    /// Inherited class of ShapeController if users want to add customized atomic functions to the system.
    /// </summary>
    /// <remarks>
    /// The atomic functions should <br/>
    /// 1. have the exact same name of the names initialized in MyEmbeddings.InitProperty(...) <br/>
    /// 2. all parameter types should be either well-defined in propertyExecutor.m_ParamTypeJsons, or customized attributes are declared for the system to ignore it. <br/>
    /// There are 2 ways to add customize attributes. <br/>
    /// 1. ShapeController.PropertyMethodAttribute denotes that the function is doing embedding match, then the function MUST contain 1 parameter and the propertyMappings is declared in (My)Embeddings. <br/>
    /// 2. ShapeController.PropertyParameterAttribute denotes that the function parameter has user-defined behavior and can be safely ignored, see GetAddress(...) below for its example usage. <br/>
    /// </remarks>
    public class MyShapeController: ShapeController
    {
        /// <summary>
        /// Initializes user-defined properties of the attached game object, needs to be called right after class initialization. User can customize its behavior.
        /// </summary>
        public override void InitMyShape() {}
        
        /// <returns>Selected properties of current game object for visualization, user can customize its behavior by overriding this function.</returns>
        public override (string, string)[] GetShapeInfo()
        {
            var myColor = Color.clear;
            // this gets the last renderer (the parent renderer) as the source of the default main color
            if (renderers.Count > 0) myColor = renderers[^1].material.color;
            
            var colorInfo = ("Color", myColor.ToString());
            
            // combine shapeInfo
            var childInfo = new[] { colorInfo };
            var parentInfo = base.GetShapeInfo();
            (string, string)[] myInfo = new (string, string)[parentInfo.Length + childInfo.Length];
            for (int i = 0; i < parentInfo.Length; i++) myInfo[i] = parentInfo[i];
            for (int i = 0; i < childInfo.Length; i++) myInfo[parentInfo.Length + i] = childInfo[i];
            return myInfo;
        }

        // user-defined atomic function for selection
        #region SelectionControll
        
        /// <summary>
        /// Select object with similar colors.
        /// </summary>
        /// <param name="color">RGB values of color in range [0-255].</param>
        /// <returns>Denote selection success.</returns>
        public bool GetColor(List<int> color)
        {
            // Utility function to check if two colors are similar enough.
            // threshold: Strength of determining if two colors are similar, lower means more similar is needed to return True.
            bool AreColorsSimilar(Color color1, Color color2, double threshold = 0.25)
            {
                double distance = Math.Sqrt(
                    Math.Pow(color1.r - color2.r, 2) +
                    Math.Pow(color1.g - color2.g, 2) +
                    Math.Pow(color1.b - color2.b, 2));
                return distance <= threshold;
            }
            
            if (color == null) return false;
            if (color.Count < 3) return false;
            float r = color[0], g = color[1], b = color[2];
            Color otherColor = new Color(r / 255, g / 255, b / 255);
            foreach (var myRenderer in renderers)
            {
                var controllerColor = myRenderer.material.color;
                if (AreColorsSimilar(controllerColor, otherColor))
                {
                    // If at least one child of the object has the matched color, add it
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// Select object on certain address. <br/>
        /// When "AddressMap" PropertyMethod is attached, this function will be matched with the string name (denoting Address in this case) as the key in the (My)Embeddings.m_AddressMap dictionary, <br/>
        /// and the value (if fetched) will be treated as the argument to addressPosition.
        /// </summary>
        /// <param name="addressPosition">The center position of the address.</param>
        /// <returns>Denote selection success.</returns>
        [PropertyMethod("addressMap")]
        public bool GetAddress(List<float> addressPosition)
        {
            if (addressPosition == null) return false;
            if (addressPosition.Count < 4) return false;
            float x1 = addressPosition[0], x2 = addressPosition[1], z1 = addressPosition[2], z2 = addressPosition[3];
            var controllerPosition = transform.position;
            return x1 <= controllerPosition.x && controllerPosition.x <= x2 && z1 <= controllerPosition.z &&
                    controllerPosition.z <= z2;
        }

        #endregion

        // User-defined atomic functions for modification.
        #region ModificationControll

        /// <summary>
        /// Modify color of the current object.
        /// </summary>
        /// <param name="color">RGB values of color in range [0-255].</param>
        /// <returns>Denote modification success.</returns>
        public bool ModifyColor(List<int> color)
        {
            if (color == null) return false;
            if (color.Count < 3) return false;
            float r = color[0], g = color[1], b = color[2];
            Color otherColor = new Color(r / 255, g / 255, b / 255);
            foreach (var myRenderer in renderers) myRenderer.material.color = otherColor;
            return true;
        }

        #endregion
    }
}