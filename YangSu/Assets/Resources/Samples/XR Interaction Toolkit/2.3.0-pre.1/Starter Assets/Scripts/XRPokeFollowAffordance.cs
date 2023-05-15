using Unity.Mathematics;
using Unity.XR.CoreUtils.Bindings;
using UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State;
using UnityEngine.XR.Interaction.Toolkit.Filtering;
using UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives;

namespace UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets
{
    /// <summary>
    /// Follow animation affordance for <see cref="IPokeStateDataProvider"/>, such as <see cref="XRPokeFilter"/>.
    /// Used to animate a pressed transform, such as a button to follow the poke position.
    /// </summary>
    [AddComponentMenu("XR/XR Poke Follow Affordance", 22)]
    public class XRPokeFollowAffordance : MonoBehaviour
    {
        [SerializeField]
        [Tooltip("Transform that will move in the poke direction when this or a parent GameObject is poked." +
                 "\nNote: Should be a child GameObject.")]
        Transform m_PokeFollowTransform;

        /// <summary>
        /// Transform that will animate along the axis of interaction when this interactable is poked.
        /// Note: Must be a child GameObject as it moves in local space relative to the poke filter's transform.
        /// </summary>
        public Transform pokeFollowTransform
        {
            get => m_PokeFollowTransform;
            set => m_PokeFollowTransform = value;
        }

        [SerializeField]
        [Range(0f, 20f)]
        [Tooltip("Multiplies transform position interpolation as a factor of Time.deltaTime. If 0, no smoothing will be applied.")]
        float m_SmoothingSpeed = 8f;

        /// <summary>
        /// Multiplies transform position interpolation as a factor of <see cref="Time.deltaTime"/>. If <c>0</c>, no smoothing will be applied.
        /// </summary>
        public float smoothingSpeed
        {
            get => m_SmoothingSpeed;
            set => m_SmoothingSpeed = value;
        }

        [SerializeField]
        [Tooltip("When this component is no longer the target of the poke, the Poke Follow Transform returns to the original position.")]
        bool m_ReturnToInitialPosition = true;

        /// <summary>
        /// When this component is no longer the target of the poke, the <see cref="pokeFollowTransform"/> returns to the original position.
        /// </summary>
        public bool returnToInitialPosition
        {
            get => m_ReturnToInitialPosition;
            set => m_ReturnToInitialPosition = value;
        }

        IPokeStateDataProvider m_PokeDataProvider;

        readonly Vector3TweenableVariable m_TransformTweenableVariable = new Vector3TweenableVariable();
        readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
        Vector3 m_InitialPosition;
        bool m_IsFirstFrame;

        /// <summary>
        /// See <see cref="MonoBehaviour"/>.
        /// </summary>
        protected void Awake()
        {
            if (m_PokeFollowTransform == null)
                m_PokeFollowTransform = transform;

            m_InitialPosition = m_PokeFollowTransform.localPosition;
            m_PokeDataProvider = GetComponentInParent<IPokeStateDataProvider>();
        }

        /// <summary>
        /// See <see cref="MonoBehaviour"/>.
        /// </summary>
        protected void Start()
        {
            if (m_PokeFollowTransform != null)
            {
                m_BindingsGroup.AddBinding(m_TransformTweenableVariable.Subscribe(OnTransformTweenableVariableUpdated));
                m_BindingsGroup.AddBinding(m_PokeDataProvider.pokeStateData.SubscribeAndUpdate(OnPokeStateDataUpdated));
            }
            else
            {
                enabled = false;
                Debug.LogWarning($"Poke Follow Affordance: missing Transform on {this}. Disabling component.", this);
            }
        }

        /// <summary>
        /// See <see cref="MonoBehaviour"/>.
        /// </summary>
        protected void OnDestroy()
        {
            m_BindingsGroup.Clear();
            m_TransformTweenableVariable?.Dispose();
        }

        /// <summary>
        /// See <see cref="MonoBehaviour"/>.
        /// </summary>
        protected void LateUpdate()
        {
            if (m_IsFirstFrame)
            {
                m_TransformTweenableVariable.HandleTween(1f);
                m_IsFirstFrame = false;
                return;
            }
            m_TransformTweenableVariable.HandleTween(m_SmoothingSpeed > 0f ? Time.deltaTime * m_SmoothingSpeed : 1f);
        }

        void OnTransformTweenableVariableUpdated(float3 position)
        {
            m_PokeFollowTransform.localPosition = position;
        }

        void OnPokeStateDataUpdated(PokeStateData data)
        {
            if (data.target == transform)
                m_TransformTweenableVariable.target = transform.InverseTransformPoint(data.axisAlignedPokeInteractionPoint);
            else if (m_ReturnToInitialPosition)
                m_TransformTweenableVariable.target = m_InitialPosition;
        }
    }
}