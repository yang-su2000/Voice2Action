using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.Interaction.Toolkit;

namespace xrc_students_fa2023_sp06_en268_jx288_ys724.Runtime
{
    /// <summary>
    /// Stores all actual implementations of the atomic function and attributes, must ALL be public for reflection. <br/>
    /// Stores all interactable properties of the attached game objects for Voice2Action to manipulate with. <br/>
    /// </summary>
    public class ShapeController : MonoBehaviour
    {
        /// <value>The game object that represents the user.</value>
        public static GameObject m_Player;

        /// <value>Object type of the attached game object, customizable by the user.</value>
        public string m_Shape;

        /// <value>String formatted information of this ShapeController.</value>
        private string [] m_Info;

        /// <value>Is this ShapeController properly initialized, for debugging purpose.</value>
        private bool m_IsInit;

        /// <value>Pointer to a required game component for Expand (Spin In-and-Out).</value>
        public XRGrabInteractable grabInteractable { get; private set; }

        /// <value>Pointer to a required game component for Expand (Make Proxy Objects), see InteractableTarget class for details.</value>
        public InteractableTarget interactableTarget { get; private set; }

        /// <value>Collider of the attached game object.</value>
        public Collider shapeCollider { get; private set; }

        /// <value>All renderers of the attached game objects and its children.</value>
        public List<Renderer> renderers { get; private set; }

        /// <summary>
        /// Initialize all required components, needs to be called right after class initialization.
        /// </summary>
        public void InitShape()
        {
            grabInteractable = GetComponent<XRGrabInteractable>();
            interactableTarget = GetComponent<InteractableTarget>();
            shapeCollider = GetComponent<Collider>();
            renderers = new List<Renderer>(GetComponentsInChildren<Renderer>());
            if (GetComponent<Renderer>() != null) renderers.Add(GetComponent<Renderer>());
            m_IsInit = true;
        }

        /// <summary>
        /// Add Transparency to the game object's material if they exist, used for visualization.
        /// </summary>
        /// <param name="alpha">Alpha value to set to the material.</param>
        public void AddTransparency(float alpha)
        {
            if (!m_IsInit) throw new Exception("ShapeController not initialized");

            // only fade-in fade-out for the real objects
            if (interactableTarget.m_IsVoodoo) return;
            
            foreach (var renderer1 in renderers)
            {
                var material = renderer1.material;
                var color = material.color;
                // Get property IDs
                int modeID = Shader.PropertyToID("_Mode");
                int srcBlendID = Shader.PropertyToID("_SrcBlend");
                int dstBlendID = Shader.PropertyToID("_DstBlend");
                int zWriteID = Shader.PropertyToID("_ZWrite");
                int colorID = Shader.PropertyToID("_Color");
                // Set the material to use the Transparent mode
                material.SetFloat(modeID, 3);
                // Set up source and destination blend factors for transparency
                material.SetInt(srcBlendID, (int) BlendMode.SrcAlpha);
                material.SetInt(dstBlendID, (int) BlendMode.OneMinusSrcAlpha);
                // Disable writing to the Z buffer
                material.SetInt(zWriteID, 0);
                // Adjust the alpha value of the color as needed
                color.a = Mathf.Clamp(color.a + alpha, 0, 1);
                material.SetColor(colorID, color);
                // Update shader keywords for transparency
                material.DisableKeyword("_ALPHATEST_ON");
                material.EnableKeyword("_ALPHABLEND_ON");
                material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                // Set the render queue for transparency
                material.renderQueue = 3000;
            }
        }
        
        /// <returns>Selected properties of current game object for visualization.</returns>
        public string[] GetShapeInfo()
        {
            var myColor = Color.clear;
            // this gets the last renderer (the parent renderer) as the source of the default main color
            if (renderers.Count > 0) myColor = renderers[^1].material.color;
            string myColorName = myColor.ToString();
            var myPosition = transform.position;
            var playerPosition = m_Player.transform.position;
            var myDistance = Mathf.Sqrt(Mathf.Pow(myPosition.x - playerPosition.x, 2) + Mathf.Pow(myPosition.z - playerPosition.z, 2));
            var myDirection = Utils.k_FailureResponse;
            var myScale = transform.localScale;
            var myAddress = Utils.k_FailureResponse;
            m_Info = new []{ name, m_Shape, myColorName, myAddress, myDirection, myDistance.ToString("F"), myPosition.ToString(), myScale.ToString() };
            return m_Info;
        }
        
        /// <summary>
        /// Used for specifying atomic functions that are doing embedding matches. <br/>
        /// i.e. Suppose there is a function that does FindObjectWithProperty(property), where property belongs to a list of discrete candidates (we will call them propertyMappings). <br/>
        /// Then this attribute is used to specify what the propertyMappings are. <br/>
        /// See GetShape(...) below for its usage and their corresponding propertyMappings in Embeddings. <br/>
        /// </summary>
        [AttributeUsage(AttributeTargets.Method)]
        public class PropertyMethodAttribute : Attribute
        {
            /// <value>The name of the propertyMappings field in (My)Embeddings, they will be called with reflection during function execution.</value>
            public readonly string m_Property;
            
            /// <param name="property">The name of the propertyMappings field in (My)Embeddings.</param>
            public PropertyMethodAttribute(string property)
            {
                m_Property = property;
            }
        }
        
        /// <summary>
        /// Used for customizing the behavior of certain parameters in atomic functions.
        /// </summary>
        [AttributeUsage(AttributeTargets.Parameter)]
        public class PropertyParameterAttribute : Attribute
        {
            /// <value>Behavior customization type of parameters.</value>
            /// (TODO: we will implement more customizable behaviors in future package version)
            public readonly string m_Property;
            
            /// <param name="property">Behavior customization type of parameters.</param>
            public PropertyParameterAttribute(string property)
            {
                m_Property = property;
            }
        }
        
        // atomic functions for selection
        #region SelectionControll
        
        /// <summary>
        /// Select object with matching shapes (object types).
        /// </summary>
        /// <param name="otherShape">The shape to compare to.</param>
        /// <returns>Denote selection success.</returns>
        [PropertyMethod("ShapeMap")]
        public bool GetShape(string otherShape)
        {
            return otherShape == Embeddings.k_DefaultShape || otherShape == m_Shape;
        }

        /// <summary>
        /// Select object of certain distance ranges wrt. the user.
        /// </summary>
        /// <param name="start">Start range.</param>
        /// <param name="end">End range.</param>
        /// <returns>Denote selection success.</returns>
        public bool GetDistance(float start = 0f, float end = 5f)
        {
            start = Mathf.Max(start, 0);
            end = Mathf.Max(end, 0);
            if (start > end) return false;
            var playerPosition = m_Player.transform.position;
            var controllerPosition = transform.position;
            var diff = Mathf.Abs(controllerPosition.x - playerPosition.x) +
                       Mathf.Abs(controllerPosition.y - playerPosition.y) +
                       Mathf.Abs(controllerPosition.z - playerPosition.z);
            return start <= diff && diff <= end;
        }
        
        /// <summary>
        /// Select object of certain direction wrt. the user.
        /// </summary>
        /// <param name="direction">3-DOF direction unit vector.</param>
        /// <returns>Denote selection success.</returns>
        public bool GetDirection(List<float> direction)
        {
            if (direction is null) return false;
            if (direction.Count < 3) return false;
            Vector3 unitDirection = new Vector3(direction[0], direction[1], direction[2]);
            var playerPosition = m_Player.transform.position;
            var controllerPosition = transform.position;
            var diffPosition = controllerPosition - playerPosition;
            return Vector3.Dot(diffPosition, unitDirection) > 0f;
        }

        /// <summary>
        /// Select object of certain superlative properties, i.e. biggest -> size, furthest -> position.
        /// </summary>
        /// <param name="otherController">The other object to compare to, customized attribute is attached so that the function calling behavior would be modified.</param>
        /// <param name="size">
        /// Denote scale superlative comparator, i.e. [1, -1, 0] means x-axis largest, y-axis smallest, and any z-axis. <br/>
        /// User can customize its actual usage by implementing the atomic function differently. <br/>
        /// </param>
        /// <param name="position">Denote position superlative comparator.</param>
        /// <returns>Denote selection success.</returns>
        public bool GetSuperlative([PropertyParameter("compare")] ShapeController otherController, List<int> size = null, List<int> position = null)
        {
            // if null, initialize to zeros
            size ??= new List<int> { 0, 0, 0 };
            position ??= new List<int> { 0, 0, 0 };
            if (size.Count < 3 || position.Count < 3) return false;
            var playerPosition = m_Player.transform.position;

            float GetDiff(ShapeController controller, Vector3 playerPos)
            {
                int sizeX = size[0], sizeY = size[1], sizeZ = size[2];
                int posX = position[0], posY = position[1], posZ = position[2];
                var controllerPosition = controller.transform.position;
                var posDiff = posX * Mathf.Abs(controllerPosition.x - playerPos.x) +
                              posY * Mathf.Abs(controllerPosition.y - playerPos.y) +
                              posZ * Mathf.Abs(controllerPosition.z - playerPos.z);
                var controllerSize = controller.shapeCollider.bounds.size;
                var sizeDiff = sizeX * controllerSize.x + sizeY * controllerSize.y + sizeZ * controllerSize.z;
                var diff = posDiff + sizeDiff;
                return diff;
            }
            var myDiff = GetDiff(this, playerPosition);
            var otherDiff = GetDiff(otherController, playerPosition);
            return myDiff > otherDiff;
        }

        #endregion

        // atomic functions for modification
        #region ModificationControll

        /// <summary>
        /// Modify the scale of current object.
        /// </summary>
        /// <param name="size">3-DOF Magnitude of modification.</param>
        /// <returns>Denote modification success.</returns>
        public bool ModifyScale(List<float> size)
        {
            if (size is null) return false;
            if (size.Count < 3) return false;
            float x = size[0], y = size[1], z = size[2];
            var controllerScale = transform.localScale;
            if (x < 0) controllerScale.x *= 1f / (1f - x);
            else controllerScale.x *= (1 + x);
            if (y < 0) controllerScale.y *= 1f / (1f - y);
            else controllerScale.y *= (1 + y);
            if (z < 0) controllerScale.z *= 1f / (1f - z);
            else controllerScale.z *= (1 + z);
            transform.localScale = controllerScale;
            return true;
        }

        /// <summary>
        /// Modify the position of current object.
        /// </summary>
        /// <param name="value">1-DOF magnitude of modification wrt. to the user.</param>
        /// <returns>Denote modification success.</returns>
        public bool ModifyPosition(float value)
        {
            var playerPosition = m_Player.transform.position;
            var controllerPosition = transform.position;
            if (value < 0)
            {
                controllerPosition.x -= -value / (1 - value) * (controllerPosition.x - playerPosition.x);
                controllerPosition.z -= -value / (1 - value) * (controllerPosition.z - playerPosition.z);
            }
            else
            {
                controllerPosition.x += value / (1 + value) * (controllerPosition.x - playerPosition.x);
                controllerPosition.z += value / (1 + value) * (controllerPosition.z - playerPosition.z);
            }
            transform.position = controllerPosition;
            return true;
        }

        #endregion
    }
}