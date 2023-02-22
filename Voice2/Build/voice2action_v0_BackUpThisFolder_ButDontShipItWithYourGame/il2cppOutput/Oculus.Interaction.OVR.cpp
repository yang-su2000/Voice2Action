#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<OVRCameraRig>
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Texture>
struct Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D;
// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`2<System.Single,System.Single>
struct Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132;
// System.Action`2<System.UInt64,System.Boolean>
struct Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71;
// System.Action`2<System.UInt64,OVRSpatialAnchor/OperationResult>
struct Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9;
// System.Action`4<System.UInt64,System.Boolean,System.Guid,OVRPlugin/SpaceStorageLocation>
struct Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC;
// System.Action`4<System.UInt64,System.Boolean,OVRSpace,System.Guid>
struct Action_4_t540B344FD589096100128D9A1B39946413ED9AAE;
// System.Action`4<System.UInt64,OVRSpace,System.Boolean,System.Guid>
struct Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A;
// System.Action`6<System.UInt64,System.Boolean,OVRSpace,System.Guid,OVRPlugin/SpaceComponentType,System.Boolean>
struct Action_6_tD8B17612932122F2ABF5C8545327C8F527403625;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>
struct DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>
struct DataSource_1_t43863080B32A3078810E52A6590829D07D453583;
// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>
struct IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
struct IEnumerable_1_tED602875C5D5C7BECAD2C641945DF5416536FA7B;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<OVRInput/Controller>
struct List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333;
// System.Collections.Generic.List`1<OVRInput/OVRControllerBase>
struct List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577;
// System.Predicate`1<OVRPlugin/BoneCapsule>
struct Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1;
// System.WeakReference`1<UnityEngine.Camera>
struct WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Oculus.Interaction.Input.HandSkeleton[]
struct HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8;
// Oculus.Interaction.Input.HandSkeletonJoint[]
struct HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// OVROverlay[]
struct OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// Oculus.Interaction.Input.UsageMapping[]
struct UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0;
// OVRInput/Controller[]
struct ControllerU5BU5D_t54C9200ECD1C5326269BCDC005EC2FDD0044899E;
// OVRInput/HapticInfo[]
struct HapticInfoU5BU5D_tD7F089695199232CD57B8C3C73F549036B5BC2CB;
// OVRInput/OpenVRControllerDetails[]
struct OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4;
// OVROverlay/LayerTexture[]
struct LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB;
// OVRPlugin/Bone[]
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784;
// OVRPlugin/BoneCapsule[]
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44;
// OVRPlugin/Fovf[]
struct FovfU5BU5D_tB7B0EFE7E4FD4A33BC0EFA3644D94BF70D75AA7C;
// OVRPlugin/Quatf[]
struct QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF;
// OVRPlugin/Rectf[]
struct RectfU5BU5D_tCBABD552E093C7891710F2D448FACAA8140C1DD0;
// OVRPlugin/TrackingConfidence[]
struct TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37;
// OVRPlugin/Vector3f[]
struct Vector3fU5BU5D_tD8395E99259411E2F0A4F513559CC986FD7AB92E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Oculus.Interaction.Input.AnimatedHandOVR
struct AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// Oculus.Interaction.UnityCanvas.CanvasCylinder
struct CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C;
// Oculus.Interaction.UnityCanvas.CanvasMesh
struct CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9;
// Oculus.Interaction.UnityCanvas.CanvasMeshRenderer
struct CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419;
// Oculus.Interaction.UnityCanvas.CanvasRenderTexture
struct CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Oculus.Interaction.Input.ControllerDataAsset
struct ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36;
// Oculus.Interaction.Input.ControllerDataSourceConfig
struct ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062;
// Oculus.Interaction.Cylinder
struct Cylinder_t177E2D5B849D3255D82F890034C2BC5B24F44BA3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.Input.FromOVRControllerDataSource
struct FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA;
// Oculus.Interaction.Input.FromOVRControllerHandDataSource
struct FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B;
// Oculus.Interaction.Input.FromOVRHandDataSource
struct FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9;
// Oculus.Interaction.Input.FromOVRHmdDataSource
struct FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3;
// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054;
// Oculus.Interaction.Input.HandSkeleton
struct HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A;
// Oculus.Interaction.Input.HandSkeletonOVR
struct HandSkeletonOVR_t996D4212C7D93C00A7A400C055C056FE09CE8BD1;
// Oculus.Interaction.Input.HmdDataAsset
struct HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED;
// Oculus.Interaction.Input.HmdDataSourceConfig
struct HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F;
// Oculus.Interaction.Input.IController
struct IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA;
// Oculus.Interaction.Input.IDataSource
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
// Oculus.Interaction.Input.IHandSkeletonProvider
struct IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56;
// Oculus.Interaction.Input.IOVRCameraRigRef
struct IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8;
// Oculus.Interaction.Input.ITrackingToWorldTransformer
struct ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OVRBoundary
struct OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// Oculus.Interaction.Input.OVRCameraRigRef
struct OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE;
// Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer
struct OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A;
// OVRControllerHelper
struct OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F;
// Oculus.Interaction.Input.Visuals.OVRControllerVisual
struct OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9;
// OVRDisplay
struct OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27;
// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509;
// Oculus.Interaction.Input.OVRInputDeviceActiveState
struct OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559;
// OVRManager
struct OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4;
// OVRMixedRealityCaptureSettings
struct OVRMixedRealityCaptureSettings_tF6078D6B59F16A0EE3DEE4144FCED347444B9198;
// OVROverlay
struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D;
// OVRProfile
struct OVRProfile_tCFDDDA5EE82F0ED94671EB741B8954603D98AFC0;
// OVRRuntimeSettings
struct OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1;
// Oculus.Interaction.Input.OVRSkeletonData
struct OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6;
// OVRTracker
struct OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Oculus.Interaction.Input.SetDisplayRefresh
struct SetDisplayRefresh_t1F83887BC4D7009A3C0A6C7404A6E972B75B5719;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// Oculus.Interaction.Input.TrackingToWorldTransformerOVR
struct TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener
struct TransformChangeListener_tF10B2F6A15281A2A3F7536F587361C070D1B7E9E;
// Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895;
// Oculus.Interaction.Input.OVRCameraRigRef/<>c
struct U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144;
// OVRManager/InstantiateMrcCameraDelegate
struct InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8;
// OVROverlay/ExternalSurfaceObjectCreated
struct ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasRect_t85D9473B53828189878AB304BD347CA46487F1B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRNodeStateProperties_tE41A5F7393D4FB967D6062A0A2DBE4F3A24350BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral130D79FECECD75047FB5E79BCCC0435A9B46A89C;
IL2CPP_EXTERN_C String_t* _stringLiteral17B4432F452C748E18CA9391A423D5A6AF5646B2;
IL2CPP_EXTERN_C String_t* _stringLiteral18154393CDC43483C12FE8673DFE595B12D4F75B;
IL2CPP_EXTERN_C String_t* _stringLiteral2375FCF20CEB44EEDCE888F11FB3D4CC6EAC845B;
IL2CPP_EXTERN_C String_t* _stringLiteral284A12F23CD70EAA3568B75D8BC85DA2DC5144AA;
IL2CPP_EXTERN_C String_t* _stringLiteral761CAF2881EC72215DE6C3BFBC1BEEEC0E195109;
IL2CPP_EXTERN_C String_t* _stringLiteral7C04A407FE215D295E25E3D30FD585ED38C7AA05;
IL2CPP_EXTERN_C String_t* _stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D;
IL2CPP_EXTERN_C String_t* _stringLiteral9907542636F44A093D24644F3AFC324DE07E5E9B;
IL2CPP_EXTERN_C String_t* _stringLiteralB587743571C2F4591C4EB51196F7EB9EC7463213;
IL2CPP_EXTERN_C String_t* _stringLiteralB999F9CF159D7C42FE4C8ACF4FEC9660AAEDB9AF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC09616FC7A1F15CD91C601854596281EF11A6AC;
IL2CPP_EXTERN_C String_t* _stringLiteralBE88DC0B94E060AF383860B05B9112834538AAA3;
IL2CPP_EXTERN_C String_t* _stringLiteralCB7D704F2D432BF197F16D169F08B54287EE8C15;
IL2CPP_EXTERN_C String_t* _stringLiteralE6D620C3AB11D47CA0258AA7C5BD973A8E0734FB;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_mBAD8051B6FE029CE959F47310C0042658F827B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_InjectAllDataSource_m0A129B63BA4AE69ED3B9BA0D77F0F716C0695D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_InjectAllDataSource_mAFF8FA26FBDE6C4ADDB2EE85B9DEDA055CED5AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_OnDisable_m79227AB68310604820BED4AC79E03B1DCCD6299D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_OnDisable_mF1B627104F56C9FF19B3E5576F8A52CB24C8C478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_OnEnable_m04A10BF93483516A1096C59519289DA99173B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_OnEnable_mA19EB4C9B1B8437DC989BD91310F584A88551C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_Start_m09DBE0DB15E616C56C4B990647E00B86C13CB270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_Start_m730F94193926FEFFCE310B56E77FBD5BBDD87B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1__ctor_m1560EBA9AE56AFEA520462114662B2DF46F6EF5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1__ctor_m5E565390E2128CE38FDB1FF8292A6B9DADC9327C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDCD406017C11470C2C72A04C04C579C3C1E7ED87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m49F5AA38898BAC4BD0EF2FA858F3B0AFFB91E9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF6B92BD4CC7F0F206C3B132D8B49927950328FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRControllerDataSource_HandleInputDataDirtied_m5688BA3CD2BDBA21EE650AC64F818B779035D586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRControllerDataSource_U3CStartU3Eb__21_0_m86C26428099B91D9890EE0D34B9DF65B33B55F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRControllerHandDataSource_HandleInputDataDirtied_m6B106A49C0BCC3D2D9C961F903AB83A4EC91A21F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRControllerHandDataSource_U3CStartU3Eb__27_0_m682B7E755B20C9C907BB1888076EA2AA4E5B7265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRHandDataSource_HandleInputDataDirtied_m0B8F135AC0F63793E8E199DD43DCD6954B6634EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRHandDataSource_U3CStartU3Eb__24_0_m4AE416468E841BE53835486BA417E107D006D554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRHmdDataSource_HandleInputDataDirtied_m14AA5466E2B650B6B6AC27E81054A0D309CAB5D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromOVRHmdDataSource_U3CStartU3Eb__15_0_m3B3878DDDF1148FA81E635F9FBBDDBEBB4B7A8CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_m0C68826E4AEEDB7AF4C2684A66A1886B9FD4D26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7674D83AFE0D3BAA2769D4C59414734D279BBEB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRCameraRigRef_HandleInputDataDirtied_m84A927FABA960B4070DB030F97A9888AD589448B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRCanvasMeshRenderer_U3CStartU3Eb__15_0_m021CC5C9942B34248FF7423E5904E94A9675165D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__30_0_m930BEFE90A964D1BE21178A92DF764478A7139C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CApplyToSkeletonU3Eb__0_mFDF5988F401DB10F65B02B9803521EA588CE1B5B_RuntimeMethod_var;
struct BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74;
struct Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Fovf_t7A8312168C57A6CC5AA4FE685369A4618BF686E7;
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A;
struct Rectf_t28AE83DFE92F018AD3956872DED5880FB4F06459;
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8;
struct HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0;
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784;
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44;
struct QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC6ADEBE808100B493B5849896F9D3D9A442858FB 
{
};

// System.Collections.Generic.List`1<OVRInput/Controller>
struct List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ControllerU5BU5D_t54C9200ECD1C5326269BCDC005EC2FDD0044899E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ControllerU5BU5D_t54C9200ECD1C5326269BCDC005EC2FDD0044899E* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Oculus.Interaction.Input.ControllerDataSourceConfig
struct ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.ControllerDataSourceConfig::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_0;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.ControllerDataSourceConfig::<TrackingToWorldTransformer>k__BackingField
	RuntimeObject* ___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
	// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset> Oculus.Interaction.Input.ControllerDataSourceConfig::<HmdData>k__BackingField
	RuntimeObject* ___U3CHmdDataU3Ek__BackingField_2;
};

// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.HandDataSourceConfig::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_0;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::<TrackingToWorldTransformer>k__BackingField
	RuntimeObject* ___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandDataSourceConfig::<HandSkeleton>k__BackingField
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___U3CHandSkeletonU3Ek__BackingField_2;
	// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset> Oculus.Interaction.Input.HandDataSourceConfig::<HmdData>k__BackingField
	RuntimeObject* ___U3CHmdDataU3Ek__BackingField_3;
};

// Oculus.Interaction.Input.HandSkeleton
struct HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandSkeletonJoint[] Oculus.Interaction.Input.HandSkeleton::joints
	HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* ___joints_0;
};

struct HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_StaticFields
{
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandSkeleton::DefaultLeftSkeleton
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___DefaultLeftSkeleton_1;
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandSkeleton::DefaultRightSkeleton
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___DefaultRightSkeleton_2;
};

// Oculus.Interaction.Input.HmdDataSourceConfig
struct HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F  : public RuntimeObject
{
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HmdDataSourceConfig::<TrackingToWorldTransformer>k__BackingField
	RuntimeObject* ___U3CTrackingToWorldTransformerU3Ek__BackingField_0;
};

// OVRInput
struct OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A  : public RuntimeObject
{
};

struct OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_StaticFields
{
	// System.Single OVRInput::AXIS_AS_BUTTON_THRESHOLD
	float ___AXIS_AS_BUTTON_THRESHOLD_0;
	// System.Single OVRInput::AXIS_DEADZONE_THRESHOLD
	float ___AXIS_DEADZONE_THRESHOLD_1;
	// System.Collections.Generic.List`1<OVRInput/OVRControllerBase> OVRInput::controllers
	List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577* ___controllers_2;
	// OVRInput/Controller OVRInput::activeControllerType
	int32_t ___activeControllerType_3;
	// OVRInput/Controller OVRInput::connectedControllerTypes
	int32_t ___connectedControllerTypes_4;
	// OVRPlugin/Step OVRInput::stepType
	int32_t ___stepType_5;
	// System.Int32 OVRInput::fixedUpdateCount
	int32_t ___fixedUpdateCount_6;
	// System.Boolean OVRInput::_pluginSupportsActiveController
	bool ____pluginSupportsActiveController_7;
	// System.Boolean OVRInput::_pluginSupportsActiveControllerCached
	bool ____pluginSupportsActiveControllerCached_8;
	// System.Version OVRInput::_pluginSupportsActiveControllerMinVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____pluginSupportsActiveControllerMinVersion_9;
	// System.Int32 OVRInput::NUM_HAPTIC_CHANNELS
	int32_t ___NUM_HAPTIC_CHANNELS_10;
	// OVRInput/HapticInfo[] OVRInput::hapticInfos
	HapticInfoU5BU5D_tD7F089695199232CD57B8C3C73F549036B5BC2CB* ___hapticInfos_11;
	// System.Single OVRInput::OPENVR_MAX_HAPTIC_AMPLITUDE
	float ___OPENVR_MAX_HAPTIC_AMPLITUDE_12;
	// System.Single OVRInput::HAPTIC_VIBRATION_DURATION_SECONDS
	float ___HAPTIC_VIBRATION_DURATION_SECONDS_13;
	// System.String OVRInput::OPENVR_TOUCH_NAME
	String_t* ___OPENVR_TOUCH_NAME_14;
	// System.String OVRInput::OPENVR_VIVE_CONTROLLER_NAME
	String_t* ___OPENVR_VIVE_CONTROLLER_NAME_15;
	// System.String OVRInput::OPENVR_WINDOWSMR_CONTROLLER_NAME
	String_t* ___OPENVR_WINDOWSMR_CONTROLLER_NAME_16;
	// OVRInput/OpenVRControllerDetails[] OVRInput::openVRControllerDetails
	OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4* ___openVRControllerDetails_17;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass5_0::boneIndex
	int32_t ___boneIndex_0;
};

// Oculus.Interaction.Input.OVRCameraRigRef/<>c
struct U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144  : public RuntimeObject
{
};

struct U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields
{
	// Oculus.Interaction.Input.OVRCameraRigRef/<>c Oculus.Interaction.Input.OVRCameraRigRef/<>c::<>9
	U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144* ___U3CU3E9_0;
	// System.Action`1<System.Boolean> Oculus.Interaction.Input.OVRCameraRigRef/<>c::<>9__30_0
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CU3E9__30_0_1;
};

// Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties
struct Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512  : public RuntimeObject
{
};

struct Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields
{
	// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::CanvasRenderTexture
	String_t* ___CanvasRenderTexture_0;
	// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::CanvasMesh
	String_t* ___CanvasMesh_1;
	// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::EnableSuperSampling
	String_t* ___EnableSuperSampling_2;
	// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::EmulateWhileInEditor
	String_t* ___EmulateWhileInEditor_3;
	// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::DoUnderlayAntiAliasing
	String_t* ___DoUnderlayAntiAliasing_4;
	// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::RuntimeOffset
	String_t* ___RuntimeOffset_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<OVRInput/Controller>
struct Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Oculus.Interaction.Input.UsageMapping
struct UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB 
{
	// Oculus.Interaction.Input.ControllerButtonUsage Oculus.Interaction.Input.UsageMapping::<Usage>k__BackingField
	int32_t ___U3CUsageU3Ek__BackingField_0;
	// OVRInput/Touch Oculus.Interaction.Input.UsageMapping::<Touch>k__BackingField
	int32_t ___U3CTouchU3Ek__BackingField_1;
	// OVRInput/Button Oculus.Interaction.Input.UsageMapping::<Button>k__BackingField
	int32_t ___U3CButtonU3Ek__BackingField_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings
struct MeshGenerationSettings_tC77605CDCCE26EA67D8061EDE0C7DDCD579ECC4B 
{
	// System.Single Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings::VerticesPerDegree
	float ___VerticesPerDegree_0;
	// System.Int32 Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings::MaxHorizontalResolution
	int32_t ___MaxHorizontalResolution_1;
	// System.Int32 Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings::MaxVerticalResolution
	int32_t ___MaxVerticalResolution_2;
};

// OVRPlugin/Quatf
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A 
{
	// System.Single OVRPlugin/Quatf::x
	float ___x_0;
	// System.Single OVRPlugin/Quatf::y
	float ___y_1;
	// System.Single OVRPlugin/Quatf::z
	float ___z_2;
	// System.Single OVRPlugin/Quatf::w
	float ___w_3;
};

struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A_StaticFields
{
	// OVRPlugin/Quatf OVRPlugin/Quatf::identity
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___identity_4;
};

// OVRPlugin/Sizei
struct Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE 
{
	// System.Int32 OVRPlugin/Sizei::w
	int32_t ___w_0;
	// System.Int32 OVRPlugin/Sizei::h
	int32_t ___h_1;
};

struct Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE_StaticFields
{
	// OVRPlugin/Sizei OVRPlugin/Sizei::zero
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___zero_2;
};

// OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F 
{
	// OVRPlugin/SkeletonType OVRPlugin/Skeleton2::Type
	int32_t ___Type_0;
	// System.UInt32 OVRPlugin/Skeleton2::NumBones
	uint32_t ___NumBones_1;
	// System.UInt32 OVRPlugin/Skeleton2::NumBoneCapsules
	uint32_t ___NumBoneCapsules_2;
	// OVRPlugin/Bone[] OVRPlugin/Skeleton2::Bones
	BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* ___Bones_3;
	// OVRPlugin/BoneCapsule[] OVRPlugin/Skeleton2::BoneCapsules
	BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___BoneCapsules_4;
};
// Native definition for P/Invoke marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_pinvoke
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};
// Native definition for COM marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_com
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};

// OVRPlugin/Vector3f
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 
{
	// System.Single OVRPlugin/Vector3f::x
	float ___x_0;
	// System.Single OVRPlugin/Vector3f::y
	float ___y_1;
	// System.Single OVRPlugin/Vector3f::z
	float ___z_2;
};

struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562_StaticFields
{
	// OVRPlugin/Vector3f OVRPlugin/Vector3f::zero
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___zero_3;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Oculus.Interaction.Input.OVRSkeletonData
struct OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6  : public RuntimeObject
{
};

struct OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields
{
	// OVRPlugin/Skeleton2 Oculus.Interaction.Input.OVRSkeletonData::LeftSkeleton
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F ___LeftSkeleton_0;
	// OVRPlugin/Skeleton2 Oculus.Interaction.Input.OVRSkeletonData::RightSkeleton
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F ___RightSkeleton_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// OVRPlugin/BoneCapsule
struct BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 
{
	// System.Int16 OVRPlugin/BoneCapsule::BoneIndex
	int16_t ___BoneIndex_0;
	// OVRPlugin/Vector3f OVRPlugin/BoneCapsule::StartPoint
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___StartPoint_1;
	// OVRPlugin/Vector3f OVRPlugin/BoneCapsule::EndPoint
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___EndPoint_2;
	// System.Single OVRPlugin/BoneCapsule::Radius
	float ___Radius_3;
};

// OVRPlugin/EventDataBuffer
struct EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8 
{
	// OVRPlugin/EventType OVRPlugin/EventDataBuffer::EventType
	int32_t ___EventType_0;
	// System.Byte[] OVRPlugin/EventDataBuffer::EventData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EventData_1;
};
// Native definition for P/Invoke marshalling of OVRPlugin/EventDataBuffer
struct EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshaled_pinvoke
{
	int32_t ___EventType_0;
	uint8_t ___EventData_1[4000];
};
// Native definition for COM marshalling of OVRPlugin/EventDataBuffer
struct EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshaled_com
{
	int32_t ___EventType_0;
	uint8_t ___EventData_1[4000];
};

// OVRPlugin/LayerDesc
struct LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75 
{
	// OVRPlugin/OverlayShape OVRPlugin/LayerDesc::Shape
	int32_t ___Shape_0;
	// OVRPlugin/LayerLayout OVRPlugin/LayerDesc::Layout
	int32_t ___Layout_1;
	// OVRPlugin/Sizei OVRPlugin/LayerDesc::TextureSize
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___TextureSize_2;
	// System.Int32 OVRPlugin/LayerDesc::MipLevels
	int32_t ___MipLevels_3;
	// System.Int32 OVRPlugin/LayerDesc::SampleCount
	int32_t ___SampleCount_4;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::Format
	int32_t ___Format_5;
	// System.Int32 OVRPlugin/LayerDesc::LayerFlags
	int32_t ___LayerFlags_6;
	// OVRPlugin/Fovf[] OVRPlugin/LayerDesc::Fov
	FovfU5BU5D_tB7B0EFE7E4FD4A33BC0EFA3644D94BF70D75AA7C* ___Fov_7;
	// OVRPlugin/Rectf[] OVRPlugin/LayerDesc::VisibleRect
	RectfU5BU5D_tCBABD552E093C7891710F2D448FACAA8140C1DD0* ___VisibleRect_8;
	// OVRPlugin/Sizei OVRPlugin/LayerDesc::MaxViewportSize
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MaxViewportSize_9;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::DepthFormat
	int32_t ___DepthFormat_10;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::MotionVectorFormat
	int32_t ___MotionVectorFormat_11;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::MotionVectorDepthFormat
	int32_t ___MotionVectorDepthFormat_12;
	// OVRPlugin/Sizei OVRPlugin/LayerDesc::MotionVectorTextureSize
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MotionVectorTextureSize_13;
};
// Native definition for P/Invoke marshalling of OVRPlugin/LayerDesc
struct LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75_marshaled_pinvoke
{
	int32_t ___Shape_0;
	int32_t ___Layout_1;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___TextureSize_2;
	int32_t ___MipLevels_3;
	int32_t ___SampleCount_4;
	int32_t ___Format_5;
	int32_t ___LayerFlags_6;
	Fovf_t7A8312168C57A6CC5AA4FE685369A4618BF686E7* ___Fov_7;
	Rectf_t28AE83DFE92F018AD3956872DED5880FB4F06459* ___VisibleRect_8;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MaxViewportSize_9;
	int32_t ___DepthFormat_10;
	int32_t ___MotionVectorFormat_11;
	int32_t ___MotionVectorDepthFormat_12;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MotionVectorTextureSize_13;
};
// Native definition for COM marshalling of OVRPlugin/LayerDesc
struct LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75_marshaled_com
{
	int32_t ___Shape_0;
	int32_t ___Layout_1;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___TextureSize_2;
	int32_t ___MipLevels_3;
	int32_t ___SampleCount_4;
	int32_t ___Format_5;
	int32_t ___LayerFlags_6;
	Fovf_t7A8312168C57A6CC5AA4FE685369A4618BF686E7* ___Fov_7;
	Rectf_t28AE83DFE92F018AD3956872DED5880FB4F06459* ___VisibleRect_8;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MaxViewportSize_9;
	int32_t ___DepthFormat_10;
	int32_t ___MotionVectorFormat_11;
	int32_t ___MotionVectorDepthFormat_12;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MotionVectorTextureSize_13;
};

// OVRPlugin/Posef
struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 
{
	// OVRPlugin/Quatf OVRPlugin/Posef::Orientation
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___Orientation_0;
	// OVRPlugin/Vector3f OVRPlugin/Posef::Position
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___Position_1;
};

struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61_StaticFields
{
	// OVRPlugin/Posef OVRPlugin/Posef::identity
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___identity_2;
};

// OVRPlugin/TextureRectMatrixf
struct TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5 
{
	// UnityEngine.Rect OVRPlugin/TextureRectMatrixf::leftRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect_0;
	// UnityEngine.Rect OVRPlugin/TextureRectMatrixf::rightRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect_1;
	// UnityEngine.Vector4 OVRPlugin/TextureRectMatrixf::leftScaleBias
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___leftScaleBias_2;
	// UnityEngine.Vector4 OVRPlugin/TextureRectMatrixf::rightScaleBias
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rightScaleBias_3;
};

struct TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5_StaticFields
{
	// OVRPlugin/TextureRectMatrixf OVRPlugin/TextureRectMatrixf::zero
	TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5 ___zero_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Input.ControllerDataAsset
struct ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.Input.ControllerDataAsset::IsDataValid
	bool ___IsDataValid_0;
	// System.Boolean Oculus.Interaction.Input.ControllerDataAsset::IsConnected
	bool ___IsConnected_1;
	// System.Boolean Oculus.Interaction.Input.ControllerDataAsset::IsTracked
	bool ___IsTracked_2;
	// Oculus.Interaction.Input.ControllerButtonUsage Oculus.Interaction.Input.ControllerDataAsset::ButtonUsageMask
	int32_t ___ButtonUsageMask_3;
	// UnityEngine.Pose Oculus.Interaction.Input.ControllerDataAsset::RootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___RootPose_4;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.ControllerDataAsset::RootPoseOrigin
	int32_t ___RootPoseOrigin_5;
	// UnityEngine.Pose Oculus.Interaction.Input.ControllerDataAsset::PointerPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PointerPose_6;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.ControllerDataAsset::PointerPoseOrigin
	int32_t ___PointerPoseOrigin_7;
	// Oculus.Interaction.Input.ControllerDataSourceConfig Oculus.Interaction.Input.ControllerDataAsset::Config
	ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* ___Config_8;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDataValid
	bool ___IsDataValid_0;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsConnected
	bool ___IsConnected_1;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsTracked
	bool ___IsTracked_2;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::Root
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___Root_3;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::RootPoseOrigin
	int32_t ___RootPoseOrigin_4;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.HandDataAsset::Joints
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Joints_5;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsHighConfidence
	bool ___IsHighConfidence_6;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerPinching
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerPinching_7;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerHighConfidence
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerHighConfidence_8;
	// System.Single[] Oculus.Interaction.Input.HandDataAsset::FingerPinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___FingerPinchStrength_9;
	// System.Single Oculus.Interaction.Input.HandDataAsset::HandScale
	float ___HandScale_10;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::PointerPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PointerPose_11;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::PointerPoseOrigin
	int32_t ___PointerPoseOrigin_12;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDominantHand
	bool ___IsDominantHand_13;
	// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.HandDataAsset::Config
	HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* ___Config_14;
};

// Oculus.Interaction.Input.HandSkeletonJoint
struct HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 
{
	// System.Int32 Oculus.Interaction.Input.HandSkeletonJoint::parent
	int32_t ___parent_0;
	// UnityEngine.Pose Oculus.Interaction.Input.HandSkeletonJoint::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_1;
	// System.Single Oculus.Interaction.Input.HandSkeletonJoint::radius
	float ___radius_2;
};

// Oculus.Interaction.Input.HmdDataAsset
struct HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED  : public RuntimeObject
{
	// UnityEngine.Pose Oculus.Interaction.Input.HmdDataAsset::Root
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___Root_0;
	// System.Boolean Oculus.Interaction.Input.HmdDataAsset::IsTracked
	bool ___IsTracked_1;
	// System.Int32 Oculus.Interaction.Input.HmdDataAsset::FrameId
	int32_t ___FrameId_2;
	// Oculus.Interaction.Input.HmdDataSourceConfig Oculus.Interaction.Input.HmdDataAsset::Config
	HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* ___Config_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Oculus.Interaction.Input.OVRPointerPoseSelector
struct OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743 
{
	// UnityEngine.Pose Oculus.Interaction.Input.OVRPointerPoseSelector::<LocalPointerPose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CLocalPointerPoseU3Ek__BackingField_2;
};

struct OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields
{
	// UnityEngine.Pose[] Oculus.Interaction.Input.OVRPointerPoseSelector::QUEST1_POINTERS
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___QUEST1_POINTERS_0;
	// UnityEngine.Pose[] Oculus.Interaction.Input.OVRPointerPoseSelector::QUEST2_POINTERS
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___QUEST2_POINTERS_1;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// OVRPlugin/Bone
struct Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D 
{
	// OVRPlugin/BoneId OVRPlugin/Bone::Id
	int32_t ___Id_0;
	// System.Int16 OVRPlugin/Bone::ParentBoneIndex
	int16_t ___ParentBoneIndex_1;
	// OVRPlugin/Posef OVRPlugin/Bone::Pose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___Pose_2;
};

// OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 
{
	// OVRPlugin/HandStatus OVRPlugin/HandState::Status
	int32_t ___Status_0;
	// OVRPlugin/Posef OVRPlugin/HandState::RootPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	// OVRPlugin/Quatf[] OVRPlugin/HandState::BoneRotations
	QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* ___BoneRotations_2;
	// OVRPlugin/HandFingerPinch OVRPlugin/HandState::Pinches
	int32_t ___Pinches_3;
	// System.Single[] OVRPlugin/HandState::PinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___PinchStrength_4;
	// OVRPlugin/Posef OVRPlugin/HandState::PointerPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	// System.Single OVRPlugin/HandState::HandScale
	float ___HandScale_6;
	// OVRPlugin/TrackingConfidence OVRPlugin/HandState::HandConfidence
	int32_t ___HandConfidence_7;
	// OVRPlugin/TrackingConfidence[] OVRPlugin/HandState::FingerConfidences
	TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37* ___FingerConfidences_8;
	// System.Double OVRPlugin/HandState::RequestedTimeStamp
	double ___RequestedTimeStamp_9;
	// System.Double OVRPlugin/HandState::SampleTimeStamp
	double ___SampleTimeStamp_10;
};
// Native definition for P/Invoke marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_pinvoke
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};
// Native definition for COM marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_com
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};

// OVRSkeleton/SkeletonPoseData
struct SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 
{
	// OVRPlugin/Posef OVRSkeleton/SkeletonPoseData::<RootPose>k__BackingField
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___U3CRootPoseU3Ek__BackingField_0;
	// System.Single OVRSkeleton/SkeletonPoseData::<RootScale>k__BackingField
	float ___U3CRootScaleU3Ek__BackingField_1;
	// OVRPlugin/Quatf[] OVRSkeleton/SkeletonPoseData::<BoneRotations>k__BackingField
	QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* ___U3CBoneRotationsU3Ek__BackingField_2;
	// System.Boolean OVRSkeleton/SkeletonPoseData::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_3;
	// System.Boolean OVRSkeleton/SkeletonPoseData::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_4;
	// OVRPlugin/Vector3f[] OVRSkeleton/SkeletonPoseData::<BoneTranslations>k__BackingField
	Vector3fU5BU5D_tD8395E99259411E2F0A4F513559CC986FD7AB92E* ___U3CBoneTranslationsU3Ek__BackingField_5;
	// System.Int32 OVRSkeleton/SkeletonPoseData::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of OVRSkeleton/SkeletonPoseData
struct SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86_marshaled_pinvoke
{
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___U3CRootPoseU3Ek__BackingField_0;
	float ___U3CRootScaleU3Ek__BackingField_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___U3CBoneRotationsU3Ek__BackingField_2;
	int32_t ___U3CIsDataValidU3Ek__BackingField_3;
	int32_t ___U3CIsDataHighConfidenceU3Ek__BackingField_4;
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562* ___U3CBoneTranslationsU3Ek__BackingField_5;
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_6;
};
// Native definition for COM marshalling of OVRSkeleton/SkeletonPoseData
struct SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86_marshaled_com
{
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___U3CRootPoseU3Ek__BackingField_0;
	float ___U3CRootScaleU3Ek__BackingField_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___U3CBoneRotationsU3Ek__BackingField_2;
	int32_t ___U3CIsDataValidU3Ek__BackingField_3;
	int32_t ___U3CIsDataHighConfidenceU3Ek__BackingField_4;
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562* ___U3CBoneTranslationsU3Ek__BackingField_5;
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_6;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<OVRCameraRig>
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F  : public MulticastDelegate_t
{
};

// System.Predicate`1<OVRPlugin/BoneCapsule>
struct Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>
struct DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_5;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_6;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_7;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataSource`1::_updateAfter
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____updateAfter_8;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_9;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_10;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_11;
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_5;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_6;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_7;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataSource`1::_updateAfter
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____updateAfter_8;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_9;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_10;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_11;
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>
struct DataSource_1_t43863080B32A3078810E52A6590829D07D453583  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_5;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_6;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_7;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataSource`1::_updateAfter
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____updateAfter_8;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_9;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_10;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_11;
};

// Oculus.Interaction.Input.AnimatedHandOVR
struct AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller Oculus.Interaction.Input.AnimatedHandOVR::_controller
	int32_t ____controller_9;
	// UnityEngine.Animator Oculus.Interaction.Input.AnimatedHandOVR::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_10;
	// Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp Oculus.Interaction.Input.AnimatedHandOVR::_allowThumbUp
	int32_t ____allowThumbUp_11;
	// System.Int32 Oculus.Interaction.Input.AnimatedHandOVR::_animLayerIndexThumb
	int32_t ____animLayerIndexThumb_12;
	// System.Int32 Oculus.Interaction.Input.AnimatedHandOVR::_animLayerIndexPoint
	int32_t ____animLayerIndexPoint_13;
	// System.Int32 Oculus.Interaction.Input.AnimatedHandOVR::_animParamIndexFlex
	int32_t ____animParamIndexFlex_14;
	// System.Int32 Oculus.Interaction.Input.AnimatedHandOVR::_animParamIndexPinch
	int32_t ____animParamIndexPinch_15;
	// System.Boolean Oculus.Interaction.Input.AnimatedHandOVR::_isPointing
	bool ____isPointing_16;
	// System.Boolean Oculus.Interaction.Input.AnimatedHandOVR::_isGivingThumbsUp
	bool ____isGivingThumbsUp_17;
	// System.Single Oculus.Interaction.Input.AnimatedHandOVR::_pointBlend
	float ____pointBlend_18;
	// System.Single Oculus.Interaction.Input.AnimatedHandOVR::_thumbsUpBlend
	float ____thumbsUpBlend_19;
};

// Oculus.Interaction.UnityCanvas.CanvasMesh
struct CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.UnityCanvas.CanvasRenderTexture Oculus.Interaction.UnityCanvas.CanvasMesh::_canvasRenderTexture
	CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* ____canvasRenderTexture_4;
	// UnityEngine.MeshFilter Oculus.Interaction.UnityCanvas.CanvasMesh::_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____meshFilter_5;
	// UnityEngine.MeshCollider Oculus.Interaction.UnityCanvas.CanvasMesh::_meshCollider
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ____meshCollider_6;
	// System.Boolean Oculus.Interaction.UnityCanvas.CanvasMesh::_started
	bool ____started_7;
};

// Oculus.Interaction.UnityCanvas.CanvasMeshRenderer
struct CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.UnityCanvas.CanvasRenderTexture Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_canvasRenderTexture
	CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* ____canvasRenderTexture_5;
	// UnityEngine.MeshRenderer Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____meshRenderer_6;
	// System.Int32 Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_renderingMode
	int32_t ____renderingMode_7;
	// System.Boolean Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_useAlphaToMask
	bool ____useAlphaToMask_8;
	// System.Single Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_alphaCutoutThreshold
	float ____alphaCutoutThreshold_9;
	// UnityEngine.Material Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_10;
	// System.Boolean Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::_started
	bool ____started_11;
};

struct CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419_StaticFields
{
	// System.Int32 Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::MainTexShaderID
	int32_t ___MainTexShaderID_4;
};

// Oculus.Interaction.UnityCanvas.CanvasRenderTexture
struct CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_6;
	// System.Int32 Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_renderScale
	int32_t ____renderScale_7;
	// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/DriveMode Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_dimensionsDriveMode
	int32_t ____dimensionsDriveMode_8;
	// UnityEngine.Vector2Int Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_resolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ____resolution_9;
	// System.Boolean Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_generateMipMaps
	bool ____generateMipMaps_10;
	// System.Int32 Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_pixelsPerUnit
	int32_t ____pixelsPerUnit_11;
	// UnityEngine.LayerMask Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_renderingLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____renderingLayers_12;
	// System.Action`1<UnityEngine.Texture> Oculus.Interaction.UnityCanvas.CanvasRenderTexture::OnUpdateRenderTexture
	Action_1_t29B51564E49F5100689191ED6A9BFFC2081294EB* ___OnUpdateRenderTexture_13;
	// Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_listener
	TransformChangeListener_tF10B2F6A15281A2A3F7536F587361C070D1B7E9E* ____listener_14;
	// UnityEngine.RenderTexture Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_tex
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____tex_15;
	// UnityEngine.Camera Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_16;
	// System.Boolean Oculus.Interaction.UnityCanvas.CanvasRenderTexture::_started
	bool ____started_17;
};

struct CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D_StaticFields
{
	// UnityEngine.Vector2Int Oculus.Interaction.UnityCanvas.CanvasRenderTexture::DEFAULT_TEXTURE_RES
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___DEFAULT_TEXTURE_RES_5;
};

// Oculus.Interaction.Input.HandSkeletonOVR
struct HandSkeletonOVR_t996D4212C7D93C00A7A400C055C056FE09CE8BD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Input.HandSkeleton[] Oculus.Interaction.Input.HandSkeletonOVR::_skeletons
	HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* ____skeletons_4;
};

// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField_12;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors_13;
	// System.Action`1<UnityEngine.Transform> OVRCameraRig::TrackingSpaceChanged
	Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D* ___TrackingSpaceChanged_14;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_15;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_16;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_17;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_18;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_19;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_20;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_21;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_22;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_23;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_24;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_25;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_26;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_27;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera_28;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera_29;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera_30;
	// UnityEngine.Matrix4x4 OVRCameraRig::_previousTrackingSpaceTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____previousTrackingSpaceTransform_31;
};

// Oculus.Interaction.Input.OVRCameraRigRef
struct OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRCameraRig Oculus.Interaction.Input.OVRCameraRigRef::_ovrCameraRig
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ____ovrCameraRig_4;
	// System.Boolean Oculus.Interaction.Input.OVRCameraRigRef::_requireOvrHands
	bool ____requireOvrHands_5;
	// OVRHand Oculus.Interaction.Input.OVRCameraRigRef::_leftHand
	OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* ____leftHand_6;
	// OVRHand Oculus.Interaction.Input.OVRCameraRigRef::_rightHand
	OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* ____rightHand_7;
	// System.Action`1<System.Boolean> Oculus.Interaction.Input.OVRCameraRigRef::WhenInputDataDirtied
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___WhenInputDataDirtied_8;
	// System.Boolean Oculus.Interaction.Input.OVRCameraRigRef::_started
	bool ____started_9;
	// System.Boolean Oculus.Interaction.Input.OVRCameraRigRef::_isLateUpdate
	bool ____isLateUpdate_10;
};

// OVRControllerHelper
struct OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject OVRControllerHelper::m_modelOculusTouchQuestAndRiftSLeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuestAndRiftSLeftController_4;
	// UnityEngine.GameObject OVRControllerHelper::m_modelOculusTouchQuestAndRiftSRightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuestAndRiftSRightController_5;
	// UnityEngine.GameObject OVRControllerHelper::m_modelOculusTouchRiftLeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchRiftLeftController_6;
	// UnityEngine.GameObject OVRControllerHelper::m_modelOculusTouchRiftRightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchRiftRightController_7;
	// UnityEngine.GameObject OVRControllerHelper::m_modelOculusTouchQuest2LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuest2LeftController_8;
	// UnityEngine.GameObject OVRControllerHelper::m_modelOculusTouchQuest2RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuest2RightController_9;
	// UnityEngine.GameObject OVRControllerHelper::m_modelMetaTouchProLeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelMetaTouchProLeftController_10;
	// UnityEngine.GameObject OVRControllerHelper::m_modelMetaTouchProRightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelMetaTouchProRightController_11;
	// OVRInput/Controller OVRControllerHelper::m_controller
	int32_t ___m_controller_12;
	// UnityEngine.Animator OVRControllerHelper::m_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_13;
	// UnityEngine.GameObject OVRControllerHelper::m_activeController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_activeController_14;
	// System.Boolean OVRControllerHelper::m_controllerModelsInitialized
	bool ___m_controllerModelsInitialized_15;
	// System.Boolean OVRControllerHelper::m_hasInputFocus
	bool ___m_hasInputFocus_16;
	// System.Boolean OVRControllerHelper::m_hasInputFocusPrev
	bool ___m_hasInputFocusPrev_17;
	// OVRControllerHelper/ControllerType OVRControllerHelper::activeControllerType
	int32_t ___activeControllerType_18;
	// System.Boolean OVRControllerHelper::m_prevControllerConnected
	bool ___m_prevControllerConnected_19;
	// System.Boolean OVRControllerHelper::m_prevControllerConnectedCached
	bool ___m_prevControllerConnectedCached_20;
};

// Oculus.Interaction.Input.Visuals.OVRControllerVisual
struct OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.Visuals.OVRControllerVisual::_controller
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____controller_4;
	// Oculus.Interaction.Input.IController Oculus.Interaction.Input.Visuals.OVRControllerVisual::Controller
	RuntimeObject* ___Controller_5;
	// OVRControllerHelper Oculus.Interaction.Input.Visuals.OVRControllerVisual::_ovrControllerHelper
	OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ____ovrControllerHelper_6;
	// System.Boolean Oculus.Interaction.Input.Visuals.OVRControllerVisual::<ForceOffVisibility>k__BackingField
	bool ___U3CForceOffVisibilityU3Ek__BackingField_7;
	// System.Boolean Oculus.Interaction.Input.Visuals.OVRControllerVisual::_started
	bool ____started_8;
};

// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRHand/Hand OVRHand::HandType
	int32_t ___HandType_4;
	// UnityEngine.Transform OVRHand::_pointerPoseRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pointerPoseRoot_5;
	// UnityEngine.GameObject OVRHand::_pointerPoseGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointerPoseGO_6;
	// OVRPlugin/HandState OVRHand::_handState
	HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 ____handState_7;
	// System.Boolean OVRHand::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_8;
	// System.Boolean OVRHand::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_9;
	// System.Boolean OVRHand::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_10;
	// System.Boolean OVRHand::<IsSystemGestureInProgress>k__BackingField
	bool ___U3CIsSystemGestureInProgressU3Ek__BackingField_11;
	// System.Boolean OVRHand::<IsPointerPoseValid>k__BackingField
	bool ___U3CIsPointerPoseValidU3Ek__BackingField_12;
	// UnityEngine.Transform OVRHand::<PointerPose>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CPointerPoseU3Ek__BackingField_13;
	// System.Single OVRHand::<HandScale>k__BackingField
	float ___U3CHandScaleU3Ek__BackingField_14;
	// OVRHand/TrackingConfidence OVRHand::<HandConfidence>k__BackingField
	int32_t ___U3CHandConfidenceU3Ek__BackingField_15;
	// System.Boolean OVRHand::<IsDominantHand>k__BackingField
	bool ___U3CIsDominantHandU3Ek__BackingField_16;
};

// Oculus.Interaction.Input.OVRInputDeviceActiveState
struct OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<OVRInput/Controller> Oculus.Interaction.Input.OVRInputDeviceActiveState::_controllerTypes
	List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* ____controllerTypes_4;
};

// OVRManager
struct OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> OVRManager::disabledCameras
	RuntimeObject* ___disabledCameras_10;
	// System.Single OVRManager::prevTimeScale
	float ___prevTimeScale_11;
	// System.Boolean OVRManager::useRecommendedMSAALevel
	bool ___useRecommendedMSAALevel_42;
	// System.Boolean OVRManager::_monoscopic
	bool ____monoscopic_43;
	// OVRManager/ColorSpace OVRManager::_colorGamut
	int32_t ____colorGamut_44;
	// System.Single OVRManager::minRenderScale
	float ___minRenderScale_45;
	// System.Single OVRManager::maxRenderScale
	float ___maxRenderScale_46;
	// UnityEngine.Vector3 OVRManager::_headPoseRelativeOffsetRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____headPoseRelativeOffsetRotation_47;
	// UnityEngine.Vector3 OVRManager::_headPoseRelativeOffsetTranslation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____headPoseRelativeOffsetTranslation_48;
	// System.Int32 OVRManager::profilerTcpPort
	int32_t ___profilerTcpPort_49;
	// System.Boolean OVRManager::expandMixedRealityCapturePropertySheet
	bool ___expandMixedRealityCapturePropertySheet_50;
	// System.Boolean OVRManager::enableMixedReality
	bool ___enableMixedReality_51;
	// OVRManager/CompositionMethod OVRManager::compositionMethod
	int32_t ___compositionMethod_52;
	// UnityEngine.LayerMask OVRManager::extraHiddenLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___extraHiddenLayers_53;
	// UnityEngine.LayerMask OVRManager::extraVisibleLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___extraVisibleLayers_54;
	// System.Boolean OVRManager::dynamicCullingMask
	bool ___dynamicCullingMask_55;
	// UnityEngine.Color OVRManager::externalCompositionBackdropColorRift
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___externalCompositionBackdropColorRift_56;
	// UnityEngine.Color OVRManager::externalCompositionBackdropColorQuest
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___externalCompositionBackdropColorQuest_57;
	// OVRManager/CameraDevice OVRManager::capturingCameraDevice
	int32_t ___capturingCameraDevice_58;
	// System.Boolean OVRManager::flipCameraFrameHorizontally
	bool ___flipCameraFrameHorizontally_59;
	// System.Boolean OVRManager::flipCameraFrameVertically
	bool ___flipCameraFrameVertically_60;
	// System.Single OVRManager::handPoseStateLatency
	float ___handPoseStateLatency_61;
	// System.Single OVRManager::sandwichCompositionRenderLatency
	float ___sandwichCompositionRenderLatency_62;
	// System.Int32 OVRManager::sandwichCompositionBufferedFrames
	int32_t ___sandwichCompositionBufferedFrames_63;
	// UnityEngine.Color OVRManager::chromaKeyColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___chromaKeyColor_64;
	// System.Single OVRManager::chromaKeySimilarity
	float ___chromaKeySimilarity_65;
	// System.Single OVRManager::chromaKeySmoothRange
	float ___chromaKeySmoothRange_66;
	// System.Single OVRManager::chromaKeySpillRange
	float ___chromaKeySpillRange_67;
	// System.Boolean OVRManager::useDynamicLighting
	bool ___useDynamicLighting_68;
	// OVRManager/DepthQuality OVRManager::depthQuality
	int32_t ___depthQuality_69;
	// System.Single OVRManager::dynamicLightingSmoothFactor
	float ___dynamicLightingSmoothFactor_70;
	// System.Single OVRManager::dynamicLightingDepthVariationClampingValue
	float ___dynamicLightingDepthVariationClampingValue_71;
	// OVRManager/VirtualGreenScreenType OVRManager::virtualGreenScreenType
	int32_t ___virtualGreenScreenType_72;
	// System.Single OVRManager::virtualGreenScreenTopY
	float ___virtualGreenScreenTopY_73;
	// System.Single OVRManager::virtualGreenScreenBottomY
	float ___virtualGreenScreenBottomY_74;
	// System.Boolean OVRManager::virtualGreenScreenApplyDepthCulling
	bool ___virtualGreenScreenApplyDepthCulling_75;
	// System.Single OVRManager::virtualGreenScreenDepthTolerance
	float ___virtualGreenScreenDepthTolerance_76;
	// OVRManager/MrcActivationMode OVRManager::mrcActivationMode
	int32_t ___mrcActivationMode_77;
	// OVRManager/InstantiateMrcCameraDelegate OVRManager::instantiateMixedRealityCameraGameObject
	InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8* ___instantiateMixedRealityCameraGameObject_78;
	// System.Boolean OVRManager::isInsightPassthroughEnabled
	bool ___isInsightPassthroughEnabled_79;
	// System.Boolean OVRManager::requestBodyTrackingPermissionOnStartup
	bool ___requestBodyTrackingPermissionOnStartup_80;
	// System.Boolean OVRManager::requestFaceTrackingPermissionOnStartup
	bool ___requestFaceTrackingPermissionOnStartup_81;
	// System.Boolean OVRManager::requestEyeTrackingPermissionOnStartup
	bool ___requestEyeTrackingPermissionOnStartup_82;
	// System.Boolean OVRManager::_localDimming
	bool ____localDimming_93;
	// OVRManager/TrackingOrigin OVRManager::_trackingOriginType
	int32_t ____trackingOriginType_94;
	// System.Boolean OVRManager::usePositionTracking
	bool ___usePositionTracking_95;
	// System.Boolean OVRManager::useRotationTracking
	bool ___useRotationTracking_96;
	// System.Boolean OVRManager::useIPDInPositionTracking
	bool ___useIPDInPositionTracking_97;
	// System.Boolean OVRManager::resetTrackerOnLoad
	bool ___resetTrackerOnLoad_98;
	// System.Boolean OVRManager::AllowRecenter
	bool ___AllowRecenter_99;
	// System.Boolean OVRManager::LateControllerUpdate
	bool ___LateControllerUpdate_100;
	// System.Boolean OVRManager::LateLatching
	bool ___LateLatching_101;
	// System.Boolean OVRManager::<isSupportedPlatform>k__BackingField
	bool ___U3CisSupportedPlatformU3Ek__BackingField_102;
};

struct OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_StaticFields
{
	// OVRManager OVRManager::<instance>k__BackingField
	OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* ___U3CinstanceU3Ek__BackingField_4;
	// OVRDisplay OVRManager::<display>k__BackingField
	OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27* ___U3CdisplayU3Ek__BackingField_5;
	// OVRTracker OVRManager::<tracker>k__BackingField
	OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154* ___U3CtrackerU3Ek__BackingField_6;
	// OVRBoundary OVRManager::<boundary>k__BackingField
	OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE* ___U3CboundaryU3Ek__BackingField_7;
	// OVRRuntimeSettings OVRManager::<runtimeSettings>k__BackingField
	OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1* ___U3CruntimeSettingsU3Ek__BackingField_8;
	// OVRProfile OVRManager::_profile
	OVRProfile_tCFDDDA5EE82F0ED94671EB741B8954603D98AFC0* ____profile_9;
	// System.Action OVRManager::HMDAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDAcquired_12;
	// System.Action OVRManager::HMDLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDLost_13;
	// System.Action OVRManager::HMDMounted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDMounted_14;
	// System.Action OVRManager::HMDUnmounted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDUnmounted_15;
	// System.Action OVRManager::VrFocusAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___VrFocusAcquired_16;
	// System.Action OVRManager::VrFocusLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___VrFocusLost_17;
	// System.Action OVRManager::InputFocusAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputFocusAcquired_18;
	// System.Action OVRManager::InputFocusLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputFocusLost_19;
	// System.Action OVRManager::AudioOutChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AudioOutChanged_20;
	// System.Action OVRManager::AudioInChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AudioInChanged_21;
	// System.Action OVRManager::TrackingAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TrackingAcquired_22;
	// System.Action OVRManager::TrackingLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TrackingLost_23;
	// System.Action`2<System.Single,System.Single> OVRManager::DisplayRefreshRateChanged
	Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___DisplayRefreshRateChanged_24;
	// System.Action`4<System.UInt64,System.Boolean,OVRSpace,System.Guid> OVRManager::SpatialAnchorCreateComplete
	Action_4_t540B344FD589096100128D9A1B39946413ED9AAE* ___SpatialAnchorCreateComplete_25;
	// System.Action`6<System.UInt64,System.Boolean,OVRSpace,System.Guid,OVRPlugin/SpaceComponentType,System.Boolean> OVRManager::SpaceSetComponentStatusComplete
	Action_6_tD8B17612932122F2ABF5C8545327C8F527403625* ___SpaceSetComponentStatusComplete_26;
	// System.Action`1<System.UInt64> OVRManager::SpaceQueryResults
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___SpaceQueryResults_27;
	// System.Action`2<System.UInt64,System.Boolean> OVRManager::SpaceQueryComplete
	Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71* ___SpaceQueryComplete_28;
	// System.Action`4<System.UInt64,OVRSpace,System.Boolean,System.Guid> OVRManager::SpaceSaveComplete
	Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A* ___SpaceSaveComplete_29;
	// System.Action`4<System.UInt64,System.Boolean,System.Guid,OVRPlugin/SpaceStorageLocation> OVRManager::SpaceEraseComplete
	Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC* ___SpaceEraseComplete_30;
	// System.Action`2<System.UInt64,OVRSpatialAnchor/OperationResult> OVRManager::ShareSpacesComplete
	Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9* ___ShareSpacesComplete_31;
	// System.Action`2<System.UInt64,OVRSpatialAnchor/OperationResult> OVRManager::SpaceListSaveComplete
	Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9* ___SpaceListSaveComplete_32;
	// System.Action`2<System.UInt64,System.Boolean> OVRManager::SceneCaptureComplete
	Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71* ___SceneCaptureComplete_33;
	// System.Action OVRManager::HSWDismissed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HSWDismissed_34;
	// System.Boolean OVRManager::_isHmdPresentCached
	bool ____isHmdPresentCached_35;
	// System.Boolean OVRManager::_isHmdPresent
	bool ____isHmdPresent_36;
	// System.Boolean OVRManager::_wasHmdPresent
	bool ____wasHmdPresent_37;
	// System.Boolean OVRManager::_hasVrFocusCached
	bool ____hasVrFocusCached_38;
	// System.Boolean OVRManager::_hasVrFocus
	bool ____hasVrFocus_39;
	// System.Boolean OVRManager::_hadVrFocus
	bool ____hadVrFocus_40;
	// System.Boolean OVRManager::_hadInputFocus
	bool ____hadInputFocus_41;
	// System.String OVRManager::OCULUS_UNITY_NAME_STR
	String_t* ___OCULUS_UNITY_NAME_STR_83;
	// System.String OVRManager::OPENVR_UNITY_NAME_STR
	String_t* ___OPENVR_UNITY_NAME_STR_84;
	// OVRManager/XRDevice OVRManager::loadedXRDevice
	int32_t ___loadedXRDevice_85;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchRotationOffsetEulerLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchRotationOffsetEulerLeft_86;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchRotationOffsetEulerRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchRotationOffsetEulerRight_87;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchPositionOffsetLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchPositionOffsetLeft_88;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchPositionOffsetRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchPositionOffsetRight_89;
	// System.Boolean OVRManager::m_SpaceWarpEnabled
	bool ___m_SpaceWarpEnabled_90;
	// UnityEngine.Transform OVRManager::m_AppSpaceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AppSpaceTransform_91;
	// UnityEngine.DepthTextureMode OVRManager::m_CachedDepthTextureMode
	int32_t ___m_CachedDepthTextureMode_92;
	// System.Boolean OVRManager::_isUserPresentCached
	bool ____isUserPresentCached_103;
	// System.Boolean OVRManager::_isUserPresent
	bool ____isUserPresent_104;
	// System.Boolean OVRManager::_wasUserPresent
	bool ____wasUserPresent_105;
	// System.Boolean OVRManager::prevAudioOutIdIsCached
	bool ___prevAudioOutIdIsCached_106;
	// System.Boolean OVRManager::prevAudioInIdIsCached
	bool ___prevAudioInIdIsCached_107;
	// System.String OVRManager::prevAudioOutId
	String_t* ___prevAudioOutId_108;
	// System.String OVRManager::prevAudioInId
	String_t* ___prevAudioInId_109;
	// System.Boolean OVRManager::wasPositionTracked
	bool ___wasPositionTracked_110;
	// OVRPlugin/EventDataBuffer OVRManager::eventDataBuffer
	EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8 ___eventDataBuffer_111;
	// System.String OVRManager::UnityAlphaOrBetaVersionWarningMessage
	String_t* ___UnityAlphaOrBetaVersionWarningMessage_112;
	// System.Boolean OVRManager::OVRManagerinitialized
	bool ___OVRManagerinitialized_113;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem> OVRManager::s_displaySubsystems
	List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ___s_displaySubsystems_114;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> OVRManager::s_displaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___s_displaySubsystemDescriptors_115;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> OVRManager::s_inputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_inputSubsystems_116;
	// System.Boolean OVRManager::multipleMainCameraWarningPresented
	bool ___multipleMainCameraWarningPresented_117;
	// System.Boolean OVRManager::suppressUnableToFindMainCameraMessage
	bool ___suppressUnableToFindMainCameraMessage_118;
	// System.WeakReference`1<UnityEngine.Camera> OVRManager::lastFoundMainCamera
	WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93* ___lastFoundMainCamera_119;
	// System.Boolean OVRManager::staticMixedRealityCaptureInitialized
	bool ___staticMixedRealityCaptureInitialized_120;
	// System.Boolean OVRManager::staticPrevEnableMixedRealityCapture
	bool ___staticPrevEnableMixedRealityCapture_121;
	// OVRMixedRealityCaptureSettings OVRManager::staticMrcSettings
	OVRMixedRealityCaptureSettings_tF6078D6B59F16A0EE3DEE4144FCED347444B9198* ___staticMrcSettings_122;
	// System.Boolean OVRManager::suppressDisableMixedRealityBecauseOfNoMainCameraWarning
	bool ___suppressDisableMixedRealityBecauseOfNoMainCameraWarning_123;
	// OVRManager/PassthroughInitializationState OVRManager::_passthroughInitializationState
	int32_t ____passthroughInitializationState_124;
};

// OVROverlay
struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVROverlay/OverlayType OVROverlay::currentOverlayType
	int32_t ___currentOverlayType_4;
	// System.Boolean OVROverlay::isDynamic
	bool ___isDynamic_5;
	// System.Boolean OVROverlay::isProtectedContent
	bool ___isProtectedContent_6;
	// UnityEngine.Rect OVROverlay::srcRectLeft
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___srcRectLeft_7;
	// UnityEngine.Rect OVROverlay::srcRectRight
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___srcRectRight_8;
	// UnityEngine.Rect OVROverlay::destRectLeft
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___destRectLeft_9;
	// UnityEngine.Rect OVROverlay::destRectRight
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___destRectRight_10;
	// System.Boolean OVROverlay::invertTextureRects
	bool ___invertTextureRects_11;
	// OVRPlugin/TextureRectMatrixf OVROverlay::textureRectMatrix
	TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5 ___textureRectMatrix_12;
	// System.Boolean OVROverlay::overrideTextureRectMatrix
	bool ___overrideTextureRectMatrix_13;
	// System.Boolean OVROverlay::overridePerLayerColorScaleAndOffset
	bool ___overridePerLayerColorScaleAndOffset_14;
	// UnityEngine.Vector4 OVROverlay::colorScale
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorScale_15;
	// UnityEngine.Vector4 OVROverlay::colorOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorOffset_16;
	// System.Boolean OVROverlay::useExpensiveSuperSample
	bool ___useExpensiveSuperSample_17;
	// System.Boolean OVROverlay::useExpensiveSharpen
	bool ___useExpensiveSharpen_18;
	// System.Boolean OVROverlay::hidden
	bool ___hidden_19;
	// System.Boolean OVROverlay::isExternalSurface
	bool ___isExternalSurface_20;
	// System.Int32 OVROverlay::externalSurfaceWidth
	int32_t ___externalSurfaceWidth_21;
	// System.Int32 OVROverlay::externalSurfaceHeight
	int32_t ___externalSurfaceHeight_22;
	// System.Int32 OVROverlay::compositionDepth
	int32_t ___compositionDepth_23;
	// System.Int32 OVROverlay::layerCompositionDepth
	int32_t ___layerCompositionDepth_24;
	// System.Boolean OVROverlay::noDepthBufferTesting
	bool ___noDepthBufferTesting_25;
	// OVRPlugin/EyeTextureFormat OVROverlay::layerTextureFormat
	int32_t ___layerTextureFormat_26;
	// OVROverlay/OverlayShape OVROverlay::currentOverlayShape
	int32_t ___currentOverlayShape_27;
	// OVROverlay/OverlayShape OVROverlay::prevOverlayShape
	int32_t ___prevOverlayShape_28;
	// UnityEngine.Texture[] OVROverlay::textures
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___textures_29;
	// System.Boolean OVROverlay::isAlphaPremultiplied
	bool ___isAlphaPremultiplied_30;
	// System.Boolean OVROverlay::useBicubicFiltering
	bool ___useBicubicFiltering_31;
	// System.Boolean OVROverlay::useLegacyCubemapRotation
	bool ___useLegacyCubemapRotation_32;
	// System.Boolean OVROverlay::useEfficientSupersample
	bool ___useEfficientSupersample_33;
	// System.Boolean OVROverlay::useEfficientSharpen
	bool ___useEfficientSharpen_34;
	// System.Boolean OVROverlay::_previewInEditor
	bool ____previewInEditor_35;
	// System.IntPtr[] OVROverlay::texturePtrs
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___texturePtrs_36;
	// System.IntPtr OVROverlay::externalSurfaceObject
	intptr_t ___externalSurfaceObject_37;
	// OVROverlay/ExternalSurfaceObjectCreated OVROverlay::externalSurfaceObjectCreated
	ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A* ___externalSurfaceObjectCreated_38;
	// System.Boolean OVROverlay::isOverridePending
	bool ___isOverridePending_39;
	// System.Int32 OVROverlay::<layerId>k__BackingField
	int32_t ___U3ClayerIdU3Ek__BackingField_42;
	// OVROverlay/LayerTexture[] OVROverlay::layerTextures
	LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB* ___layerTextures_45;
	// OVRPlugin/LayerDesc OVROverlay::layerDesc
	LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75 ___layerDesc_46;
	// System.Int32 OVROverlay::stageCount
	int32_t ___stageCount_47;
	// System.Int32 OVROverlay::layerIndex
	int32_t ___layerIndex_48;
	// System.Runtime.InteropServices.GCHandle OVROverlay::layerIdHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___layerIdHandle_49;
	// System.IntPtr OVROverlay::layerIdPtr
	intptr_t ___layerIdPtr_50;
	// System.Int32 OVROverlay::frameIndex
	int32_t ___frameIndex_51;
	// System.Int32 OVROverlay::prevFrameIndex
	int32_t ___prevFrameIndex_52;
	// UnityEngine.Renderer OVROverlay::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_53;
	// System.UInt64 OVROverlay::OpenVROverlayHandle
	uint64_t ___OpenVROverlayHandle_54;
	// UnityEngine.Vector4 OVROverlay::OpenVRUVOffsetAndScale
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___OpenVRUVOffsetAndScale_55;
	// UnityEngine.Vector2 OVROverlay::OpenVRMouseScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___OpenVRMouseScale_56;
	// OVRManager/XRDevice OVROverlay::constructedOverlayXRDevice
	int32_t ___constructedOverlayXRDevice_57;
	// System.Boolean OVROverlay::xrDeviceConstructed
	bool ___xrDeviceConstructed_58;
};

struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_StaticFields
{
	// OVROverlay[] OVROverlay::instances
	OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D* ___instances_41;
	// UnityEngine.Material OVROverlay::tex2DMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tex2DMaterial_43;
	// UnityEngine.Material OVROverlay::cubeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cubeMaterial_44;
};

// Oculus.Interaction.Input.SetDisplayRefresh
struct SetDisplayRefresh_t1F83887BC4D7009A3C0A6C7404A6E972B75B5719  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Interaction.Input.SetDisplayRefresh::_desiredDisplayFrequency
	float ____desiredDisplayFrequency_4;
};

// Oculus.Interaction.Input.TrackingToWorldTransformerOVR
struct TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.TrackingToWorldTransformerOVR::_cameraRigRef
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____cameraRigRef_4;
	// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.TrackingToWorldTransformerOVR::<CameraRigRef>k__BackingField
	RuntimeObject* ___U3CCameraRigRefU3Ek__BackingField_5;
};

// Oculus.Interaction.UnityCanvas.CanvasCylinder
struct CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C  : public CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9
{
	// Oculus.Interaction.Cylinder Oculus.Interaction.UnityCanvas.CanvasCylinder::_cylinder
	Cylinder_t177E2D5B849D3255D82F890034C2BC5B24F44BA3* ____cylinder_9;
	// Oculus.Interaction.CylinderOrientation Oculus.Interaction.UnityCanvas.CanvasCylinder::_orientation
	int32_t ____orientation_10;
	// Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings Oculus.Interaction.UnityCanvas.CanvasCylinder::_meshGeneration
	MeshGenerationSettings_tC77605CDCCE26EA67D8061EDE0C7DDCD579ECC4B ____meshGeneration_11;
	// System.Single Oculus.Interaction.UnityCanvas.CanvasCylinder::<ArcDegrees>k__BackingField
	float ___U3CArcDegreesU3Ek__BackingField_12;
	// System.Single Oculus.Interaction.UnityCanvas.CanvasCylinder::<Rotation>k__BackingField
	float ___U3CRotationU3Ek__BackingField_13;
	// System.Single Oculus.Interaction.UnityCanvas.CanvasCylinder::<Bottom>k__BackingField
	float ___U3CBottomU3Ek__BackingField_14;
	// System.Single Oculus.Interaction.UnityCanvas.CanvasCylinder::<Top>k__BackingField
	float ___U3CTopU3Ek__BackingField_15;
};

// Oculus.Interaction.UnityCanvas.CanvasRect
struct CanvasRect_t85D9473B53828189878AB304BD347CA46487F1B1  : public CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9
{
};

// Oculus.Interaction.Input.FromOVRControllerDataSource
struct FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA  : public DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRControllerDataSource::_cameraRigRef
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____cameraRigRef_12;
	// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRControllerDataSource::<CameraRigRef>k__BackingField
	RuntimeObject* ___U3CCameraRigRefU3Ek__BackingField_13;
	// System.Boolean Oculus.Interaction.Input.FromOVRControllerDataSource::_processLateUpdates
	bool ____processLateUpdates_14;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.FromOVRControllerDataSource::_handedness
	int32_t ____handedness_15;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRControllerDataSource::_trackingToWorldTransformer
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____trackingToWorldTransformer_16;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.FromOVRControllerDataSource::TrackingToWorldTransformer
	RuntimeObject* ___TrackingToWorldTransformer_17;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRControllerDataSource::_hmdData
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hmdData_18;
	// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset> Oculus.Interaction.Input.FromOVRControllerDataSource::HmdData
	RuntimeObject* ___HmdData_19;
	// Oculus.Interaction.Input.ControllerDataAsset Oculus.Interaction.Input.FromOVRControllerDataSource::_controllerDataAsset
	ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* ____controllerDataAsset_20;
	// OVRInput/Controller Oculus.Interaction.Input.FromOVRControllerDataSource::_ovrController
	int32_t ____ovrController_21;
	// UnityEngine.Transform Oculus.Interaction.Input.FromOVRControllerDataSource::_ovrControllerAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ovrControllerAnchor_22;
	// Oculus.Interaction.Input.ControllerDataSourceConfig Oculus.Interaction.Input.FromOVRControllerDataSource::_config
	ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* ____config_23;
	// Oculus.Interaction.Input.OVRPointerPoseSelector Oculus.Interaction.Input.FromOVRControllerDataSource::_pointerPoseSelector
	OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743 ____pointerPoseSelector_24;
};

struct FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_StaticFields
{
	// Oculus.Interaction.Input.UsageMapping[] Oculus.Interaction.Input.FromOVRControllerDataSource::ControllerUsageMappings
	UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* ___ControllerUsageMappings_25;
};

// Oculus.Interaction.Input.FromOVRControllerHandDataSource
struct FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B  : public DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E
{
	// UnityEngine.Transform[] Oculus.Interaction.Input.FromOVRControllerHandDataSource::_bones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____bones_12;
	// UnityEngine.AnimationCurve Oculus.Interaction.Input.FromOVRControllerHandDataSource::_pinchCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____pinchCurve_13;
	// UnityEngine.Vector3 Oculus.Interaction.Input.FromOVRControllerHandDataSource::_rootOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rootOffset_14;
	// UnityEngine.Vector3 Oculus.Interaction.Input.FromOVRControllerHandDataSource::_rootAngleOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rootAngleOffset_15;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRControllerHandDataSource::_cameraRigRef
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____cameraRigRef_16;
	// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRControllerHandDataSource::CameraRigRef
	RuntimeObject* ___CameraRigRef_17;
	// System.Boolean Oculus.Interaction.Input.FromOVRControllerHandDataSource::_processLateUpdates
	bool ____processLateUpdates_18;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.FromOVRControllerHandDataSource::_handedness
	int32_t ____handedness_19;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRControllerHandDataSource::_trackingToWorldTransformer
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____trackingToWorldTransformer_20;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.FromOVRControllerHandDataSource::TrackingToWorldTransformer
	RuntimeObject* ___TrackingToWorldTransformer_21;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRControllerHandDataSource::_hmdData
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hmdData_22;
	// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset> Oculus.Interaction.Input.FromOVRControllerHandDataSource::HmdData
	RuntimeObject* ___HmdData_23;
	// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.FromOVRControllerHandDataSource::_handDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____handDataAsset_24;
	// OVRInput/Controller Oculus.Interaction.Input.FromOVRControllerHandDataSource::_ovrController
	int32_t ____ovrController_25;
	// UnityEngine.Transform Oculus.Interaction.Input.FromOVRControllerHandDataSource::_ovrControllerAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ovrControllerAnchor_26;
	// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.FromOVRControllerHandDataSource::_config
	HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* ____config_27;
	// UnityEngine.Pose Oculus.Interaction.Input.FromOVRControllerHandDataSource::_poseOffset
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____poseOffset_28;
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.FromOVRControllerHandDataSource::_skeleton
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ____skeleton_30;
};

struct FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_StaticFields
{
	// UnityEngine.Quaternion Oculus.Interaction.Input.FromOVRControllerHandDataSource::<WristFixupRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CWristFixupRotationU3Ek__BackingField_29;
};

// Oculus.Interaction.Input.FromOVRHandDataSource
struct FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9  : public DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRHandDataSource::_cameraRigRef
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____cameraRigRef_12;
	// System.Boolean Oculus.Interaction.Input.FromOVRHandDataSource::_processLateUpdates
	bool ____processLateUpdates_13;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.FromOVRHandDataSource::_handedness
	int32_t ____handedness_14;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRHandDataSource::_trackingToWorldTransformer
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____trackingToWorldTransformer_15;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.FromOVRHandDataSource::TrackingToWorldTransformer
	RuntimeObject* ___TrackingToWorldTransformer_16;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRHandDataSource::_handSkeletonProvider
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____handSkeletonProvider_17;
	// Oculus.Interaction.Input.IHandSkeletonProvider Oculus.Interaction.Input.FromOVRHandDataSource::HandSkeletonProvider
	RuntimeObject* ___HandSkeletonProvider_18;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRHandDataSource::_hmdData
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hmdData_19;
	// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset> Oculus.Interaction.Input.FromOVRHandDataSource::HmdData
	RuntimeObject* ___HmdData_20;
	// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.FromOVRHandDataSource::_handDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____handDataAsset_21;
	// OVRHand Oculus.Interaction.Input.FromOVRHandDataSource::_ovrHand
	OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* ____ovrHand_22;
	// OVRInput/Controller Oculus.Interaction.Input.FromOVRHandDataSource::_ovrController
	int32_t ____ovrController_23;
	// System.Single Oculus.Interaction.Input.FromOVRHandDataSource::_lastHandScale
	float ____lastHandScale_24;
	// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.FromOVRHandDataSource::_config
	HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* ____config_25;
	// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRHandDataSource::CameraRigRef
	RuntimeObject* ___CameraRigRef_26;
};

struct FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_StaticFields
{
	// UnityEngine.Quaternion Oculus.Interaction.Input.FromOVRHandDataSource::<WristFixupRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CWristFixupRotationU3Ek__BackingField_27;
};

// Oculus.Interaction.Input.FromOVRHmdDataSource
struct FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF  : public DataSource_1_t43863080B32A3078810E52A6590829D07D453583
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRHmdDataSource::_cameraRigRef
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____cameraRigRef_12;
	// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRHmdDataSource::<CameraRigRef>k__BackingField
	RuntimeObject* ___U3CCameraRigRefU3Ek__BackingField_13;
	// System.Boolean Oculus.Interaction.Input.FromOVRHmdDataSource::_processLateUpdates
	bool ____processLateUpdates_14;
	// System.Boolean Oculus.Interaction.Input.FromOVRHmdDataSource::_useOvrManagerEmulatedPose
	bool ____useOvrManagerEmulatedPose_15;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.FromOVRHmdDataSource::_trackingToWorldTransformer
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____trackingToWorldTransformer_16;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.FromOVRHmdDataSource::TrackingToWorldTransformer
	RuntimeObject* ___TrackingToWorldTransformer_17;
	// Oculus.Interaction.Input.HmdDataAsset Oculus.Interaction.Input.FromOVRHmdDataSource::_hmdDataAsset
	HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* ____hmdDataAsset_18;
	// Oculus.Interaction.Input.HmdDataSourceConfig Oculus.Interaction.Input.FromOVRHmdDataSource::_config
	HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* ____config_19;
};

// Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer
struct OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A  : public CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419
{
	// Oculus.Interaction.UnityCanvas.CanvasMesh Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::_canvasMesh
	CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* ____canvasMesh_12;
	// UnityEngine.Vector3 Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::_runtimeOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____runtimeOffset_13;
	// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::_enableSuperSampling
	bool ____enableSuperSampling_14;
	// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::_doUnderlayAntiAliasing
	bool ____doUnderlayAntiAliasing_15;
	// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::_emulateWhileInEditor
	bool ____emulateWhileInEditor_16;
	// OVROverlay Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::_overlay
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* ____overlay_17;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* m_Items[1];

	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.UsageMapping[]
struct UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0  : public RuntimeArray
{
	ALIGN_FIELD (8) UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB m_Items[1];

	inline UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.HandSkeletonJoint[]
struct HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6  : public RuntimeArray
{
	ALIGN_FIELD (8) HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 m_Items[1];

	inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// OVRPlugin/Quatf[]
struct QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF  : public RuntimeArray
{
	ALIGN_FIELD (8) Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A m_Items[1];

	inline Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.HandSkeleton[]
struct HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8  : public RuntimeArray
{
	ALIGN_FIELD (8) HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* m_Items[1];

	inline HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVRPlugin/Bone[]
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784  : public RuntimeArray
{
	ALIGN_FIELD (8) Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D m_Items[1];

	inline Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D value)
	{
		m_Items[index] = value;
	}
};
// OVRPlugin/BoneCapsule[]
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 m_Items[1];

	inline BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_OnEnable_m56427A3E8DC9D77EAD887F308E536B49F690ED79_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_OnDisable_m80A9BDFA805214447647B7E25FBBABB3C406B2E2_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::InjectAllDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData>,Oculus.Interaction.Input.IDataSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_InjectAllDataSource_m02EB127D23BBBD6AC51ABF861685EC48084E23C4_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1__ctor_mC4786C08977A8C959DC0956614E3C6C6B15834D7_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_Start_mE8F782064637A81225ED7D709D125EEAFE620A8D_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<OVRPlugin/BoneCapsule>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m23D83BABAD74D8AC55D02DD00E6312E7C26027EC_gshared (Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Array::FindIndex<OVRPlugin/BoneCapsule>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A_gshared (BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___array0, Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1* ___match1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534_gshared (RuntimeObject* ___source0, float ___value1, const RuntimeMethod* method) ;

// Oculus.Interaction.UnityCanvas.OVRRenderingMode Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::get_RenderingMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0_inline (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::UseEditorEmulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRCanvasMeshRenderer_UseEditorEmulation_m4AF28B00E2DC8D6B3EADCF98A0C43B70480346C4 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) ;
// System.String Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::GetShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CanvasMeshRenderer_GetShaderName_mB3FF97C4C446A66BC6DFC8E917CFF83ABA6C0386 (CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::GetAlphaCutoutThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasMeshRenderer_GetAlphaCutoutThreshold_mD8BD2261D8E03A859F9A97D3DA7459A79AE9F3D8 (CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::HandleUpdateRenderTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasMeshRenderer_HandleUpdateRenderTexture_mCD343FC8F6924F87882BCD5E44A6D4431A430038 (CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::UpdateOverlay(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_UpdateOverlay_mBB1E36CA35C916700F72D26CE38920914F414F34 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Oculus.Interaction.UnityCanvas.CanvasRenderTexture::GetBaseResolutionToUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CanvasRenderTexture_GetBaseResolutionToUse_m5D2A5145BFF438976BEBBC3EA816BB90924F9256 (CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.UnityCanvas.CanvasCylinder::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasCylinder_get_Radius_mD3810A15F28EB56F9F0055438F6E606F5BB6E745 (CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.UnityCanvas.CanvasRenderTexture::PixelsToUnits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasRenderTexture_PixelsToUnits_m00B379CBEA243885558AFA5FD3DE3AFCBD8652BA (CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* __this, float ___pixels0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::get_ShouldUseOVROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRCanvasMeshRenderer_get_ShouldUseOVROverlay_mD334E9B89AD0733303E3D9F9F3FC660D7F4E95B2 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::CreateChildObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* OVRCanvasMeshRenderer_CreateChildObject_m5AA047EB88CC6777FF7D29432D578C39784B096F (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<OVROverlay>()
inline OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* GameObject_AddComponent_TisOVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_m0C68826E4AEEDB7AF4C2684A66A1886B9FD4D26A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53 (const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::GetOverlayParameters(OVROverlay/OverlayShape&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRCanvasMeshRenderer_GetOverlayParameters_mF088F433BD89F27664EE0247EB5FCAAFC5B14722 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, int32_t* ___shape0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::InjectAllCanvasMeshRenderer(Oculus.Interaction.UnityCanvas.CanvasRenderTexture,UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasMeshRenderer_InjectAllCanvasMeshRenderer_m8316D32D2F55E737B2E1F0FC35CA0C2920D1E56D (CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419* __this, CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* ___canvasRenderTexture0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::InjectCanvasMesh(Oculus.Interaction.UnityCanvas.CanvasMesh)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectCanvasMesh_m3E468056EA29A9302498CE9BCC951B338134308F_inline (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* ___canvasMesh0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasMeshRenderer__ctor_m82CB644E809FFBF56505F1CCA0283667478FF287 (CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.UnityCanvas.CanvasMeshRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasMeshRenderer_Start_m5F54837469E37CE6AC107A3E8DA7CF8D77BC07A6 (CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::UpdateCapTouchStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_UpdateCapTouchStates_mDB6D805C4C7992E8E83D9F766D112C291DA6158B (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Input.AnimatedHandOVR::InputValueRateChange(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatedHandOVR_InputValueRateChange_mC4016FC1CE58ED34CE6C1EFAC43E8184C64CE26E (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, bool ___isDown0, float ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::UpdateAnimStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_UpdateAnimStates_mD1B5FC1A5D88D4A49284F0C569B7035757F15DBD (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/NearTouch,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_m6B7E9C82EFD00F5004635BB56A987523901340FD (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Single OVRInput::Get(OVRInput/Axis1D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_m5DC55CC9D553D98F95937AB80D77C1120BB56CC6 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::InjectController(OVRInput/Controller)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectController_m7C333EF1092C97A05ACC7620F57E0A877688FE28_inline (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::InjectAnimator(UnityEngine.Animator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectAnimator_mBD7C14F0B699D142D625EF6C8DC502669AB5FE53_inline (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.UsageMapping::.ctor(Oculus.Interaction.Input.ControllerButtonUsage,OVRInput/Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, int32_t ___usage0, int32_t ___touch1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.UsageMapping::.ctor(Oculus.Interaction.Input.ControllerButtonUsage,OVRInput/Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770 (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, int32_t ___usage0, int32_t ___button1, const RuntimeMethod* method) ;
// OVRInput/Touch Oculus.Interaction.Input.UsageMapping::get_Touch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057_inline (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.UsageMapping::get_IsTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UsageMapping_get_IsTouch_mEE7F6ECA5BB0CD972FCC083D9507936FC532AE24 (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) ;
// OVRInput/Button Oculus.Interaction.Input.UsageMapping::get_Button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4_inline (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.UsageMapping::get_IsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UsageMapping_get_IsButton_mD00876300EB0BDD9FC1312BB78518B9ADA31F76A (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.ControllerButtonUsage Oculus.Interaction.Input.UsageMapping::get_Usage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Usage_mB0FF90119D5BDF02FB1E9D357F1FB9C0D03B674E_inline (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Input.OVRPointerPoseSelector::get_LocalPointerPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6_inline (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.OVRPointerPoseSelector::set_LocalPointerPose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE_inline (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) ;
// OVRPlugin/SystemHeadset OVRPlugin::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPlugin_GetSystemHeadsetType_mB67CC4842F39C514F6DFEE62B6FD88EA3014E3B0 (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.OVRPointerPoseSelector::.ctor(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerPoseSelector__ctor_m286C17CA0B0637D8D9A841D3E1B7DE1225128617 (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::set_CameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_set_CameraRigRef_m77081F15C21BCF15B5CFCD3F432EA0709A5BF69D_inline (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::UpdateConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_UpdateConfig_mD0BEC70F807E2AE4B8046A6BF4E51A022E39C34A (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRControllerDataSource::get_CameraRigRef()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>::OnEnable()
inline void DataSource_1_OnEnable_m04A10BF93483516A1096C59519289DA99173B3F5 (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*, const RuntimeMethod*))DataSource_1_OnEnable_m56427A3E8DC9D77EAD887F308E536B49F690ED79_gshared)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>::OnDisable()
inline void DataSource_1_OnDisable_m79227AB68310604820BED4AC79E03B1DCCD6299D (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*, const RuntimeMethod*))DataSource_1_OnDisable_m80A9BDFA805214447647B7E25FBBABB3C406B2E2_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.ControllerDataSourceConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerDataSourceConfig__ctor_m46C6374C1D83096E8646C66609F7E84DF0914B17 (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.ControllerDataSourceConfig::set_Handedness(Oculus.Interaction.Input.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerDataSourceConfig_set_Handedness_mB4FAE612E5494F06F211F9FE3E0C459273EA2AE5_inline (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.ControllerDataSourceConfig Oculus.Interaction.Input.FromOVRControllerDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* FromOVRControllerDataSource_get_Config_mC8A01DA08D0A732995C7E503D79533C693B38E7E (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.ControllerDataSourceConfig::set_TrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerDataSourceConfig_set_TrackingToWorldTransformer_m3FEFC92EA64E81A433997AFA752FE3CB725A46E6_inline (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.ControllerDataSourceConfig::set_HmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerDataSourceConfig_set_HmdData_mD4ED53FF6FAB6AA6BDB1173951802BF2FB2D9283_inline (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// OVRInput/Controller OVRInput::GetConnectedControllers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRInput_GetConnectedControllers_m4EF5F5C48A11AA32286CB818986AC1BA36F0DE65_inline (const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/Touch,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_mB693E89754D1B7E5B10630B1ED4886716EC813ED (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Matrix4x4::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>::InjectAllDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData>,Oculus.Interaction.Input.IDataSource)
inline void DataSource_1_InjectAllDataSource_mAFF8FA26FBDE6C4ADDB2EE85B9DEDA055CED5AD8 (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*, int32_t, RuntimeObject*, const RuntimeMethod*))DataSource_1_InjectAllDataSource_m02EB127D23BBBD6AC51ABF861685EC48084E23C4_gshared)(__this, ___updateMode0, ___updateAfter1, method);
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectHandedness(Oculus.Interaction.Input.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectHandedness_m81961E1B46DFC1189822BFBD49AD90C1AEE92F54_inline (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectTrackingToWorldTransformer_mDA0DB4BE3729D34D67141C72D0BC0143630176E3 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectHmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectHmdData_m17E3018803708A6ED408E11CC8F54AFA8A26EE91 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___hmdData0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.ControllerDataAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerDataAsset__ctor_mD64E460AACE10CEE77506FB45A55B081C908BD4A (ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>::.ctor()
inline void DataSource_1__ctor_m5E565390E2128CE38FDB1FF8292A6B9DADC9327C (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*, const RuntimeMethod*))DataSource_1__ctor_mC4786C08977A8C959DC0956614E3C6C6B15834D7_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>::Start()
inline void DataSource_1_Start_m730F94193926FEFFCE310B56E77FBD5BBDD87B06 (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*, const RuntimeMethod*))DataSource_1_Start_mE8F782064637A81225ED7D709D125EEAFE620A8D_gshared)(__this, method);
}
// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandSkeletonOVR::CreateSkeletonData(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* HandSkeletonOVR_CreateSkeletonData_m594DC5C390907A0C64E645E22B5246869DC72248 (int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::UpdateConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_UpdateConfig_m3C6CE3ED0F4786B8D691E14448F120299B31F0E0 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::UpdateSkeleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_UpdateSkeleton_mCC758953E19A37516E620F507481F03768583054 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::OnEnable()
inline void DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1_OnEnable_m56427A3E8DC9D77EAD887F308E536B49F690ED79_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::OnDisable()
inline void DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36 (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1_OnDisable_m80A9BDFA805214447647B7E25FBBABB3C406B2E2_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandDataSourceConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandDataSourceConfig__ctor_mA41828ACB676B6FB3BD15F8F36853D55C7565EB0 (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandDataSourceConfig::set_Handedness(Oculus.Interaction.Input.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_Handedness_m6D4D243AC1A402A05F9674A5115E901EA2C0E85C_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.FromOVRControllerHandDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandDataSourceConfig::set_TrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_TrackingToWorldTransformer_m32D9167DF390D900C1C75D774F143CEC05D3326E_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandDataSourceConfig::set_HandSkeleton(Oculus.Interaction.Input.HandSkeleton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_HandSkeleton_m4BF7D11ABA852539E4AA81534AFCAB2E6A1F2F56_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandDataSourceConfig::set_HmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_HmdData_m0A05997DA96A459644871953EDE2C9AFA77096F6_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// OVRInput/Handedness OVRInput::GetDominantHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRInput_GetDominantHand_m49F7B8237D73BA6040C3AE9BE7728E7164F4FD49 (const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 OVRInput::GetLocalControllerPosition(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69 (int32_t ___controllerType0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion OVRInput::GetLocalControllerRotation(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A (int32_t ___controllerType0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Input.FromOVRControllerHandDataSource::get_WristFixupRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FromOVRControllerHandDataSource_get_WristFixupRotation_m55A8CE77CB2CFDEB69E8BCCE82A7812660D0E31D_inline (const RuntimeMethod* method) ;
// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::get_TrackingToWorldTransformer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Multiply(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Multiply_m77B1C96978D7280D7ECF65A7EE77E98532AB8B8E (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___result2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::InjectAllDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData>,Oculus.Interaction.Input.IDataSource)
inline void DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253 (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, int32_t, RuntimeObject*, const RuntimeMethod*))DataSource_1_InjectAllDataSource_m02EB127D23BBBD6AC51ABF861685EC48084E23C4_gshared)(__this, ___updateMode0, ___updateAfter1, method);
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectHandedness(Oculus.Interaction.Input.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectHandedness_m49BF2D8D79B9352448C8EACFB0B7C023AFE53176_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectTrackingToWorldTransformer_mE0EE309DF883591B827E0CA89F2A36D0A6EEB990 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectHmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectHmdData_m321D5759C74AED0FD927E673B5C6EAE541075892 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, RuntimeObject* ___hmdData0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectBones(UnityEngine.Transform[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectBones_m3CF7465457AC661EB4F140BEED7E2C10925BFB83_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___bones0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectPinchCurve(UnityEngine.AnimationCurve)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectPinchCurve_mFF0B2A824EC5859E940160B6F8B88312994E3BF4_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___pinchCurve0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectRootOffset(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectRootOffset_m0F2279ABC8294E0C8D134D7F894F3D3B69CCD6E5_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootOffset0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectRootAngleOffset(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectRootAngleOffset_m2A87ACA5AA1A6D791D9DCBC5B7FCA51848BC10EA_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootAngleOffset0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandDataAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandDataAsset__ctor_m4B295E8EC3BA9AC265706984717743500B2E17E9 (HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::.ctor()
inline void DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1__ctor_mC4786C08977A8C959DC0956614E3C6C6B15834D7_gshared)(__this, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::Start()
inline void DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1_Start_mE8F782064637A81225ED7D709D125EEAFE620A8D_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::UpdateConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_UpdateConfig_mC2BE466B3760F42F534055E6510DE9DBA7097926 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.FromOVRHandDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean OVRSkeleton/SkeletonPoseData::get_IsDataValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonPoseData_get_IsDataValid_m7C3D29FE3C5F765C05C11DF50F7CCB6F7A5D35DD_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) ;
// System.Single OVRSkeleton/SkeletonPoseData::get_RootScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SkeletonPoseData_get_RootScale_mFCF463E498E2652EE2F3B71C4D54B7801EC0D4F1_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) ;
// System.Void OVRSkeleton/SkeletonPoseData::set_IsDataValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkeletonPoseData_set_IsDataValid_m3EB469D44C3697FC541F1EB3AADEFAC3EB57AE20_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void OVRSkeleton/SkeletonPoseData::set_RootScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkeletonPoseData_set_RootScale_m418868BB1AA7A8080B53BEA4E4E72CEA9074D7A7_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::UpdateDataPoses(OVRSkeleton/SkeletonPoseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_UpdateDataPoses_m0A1E20B1FD4485048D3B4313B23408ED2331025A (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 ___poseData0, const RuntimeMethod* method) ;
// System.Boolean OVRHand::get_IsTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsTracked_m869AA41C7CC8F224F1CD5A10FF6CD62E6F6BDFDA_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// System.Boolean OVRSkeleton/SkeletonPoseData::get_IsDataHighConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonPoseData_get_IsDataHighConfidence_mA41FF6B1B22AC004AC0502A6EEED5F0E5DD46BDC_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) ;
// System.Boolean OVRHand::get_IsDominantHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsDominantHand_m27F6ABFDF2E9F717E7EED827AF1867D11CBA415A_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// System.Boolean OVRHand::GetFingerIsPinching(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// OVRHand/TrackingConfidence OVRHand::GetFingerConfidence(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRHand_GetFingerConfidence_m4A21F2F93A484AA72F34BDDDECA350D69401A3D1 (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// System.Single OVRHand::GetFingerPinchStrength(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRHand_GetFingerPinchStrength_mF6517B5CA9FF87146ECDAED8914DE2EFA29BE4E6 (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// OVRPlugin/Posef OVRSkeleton/SkeletonPoseData::get_RootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 SkeletonPoseData_get_RootPose_m80C1C69254FA42D1065FBA827681D934E1B334A1_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 OVRExtensions::FromFlippedZVector3f(OVRPlugin/Vector3f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRExtensions_FromFlippedZVector3f_mBAB3D7B7B97387C15727F15A77BD2B6DE1B5C9A1 (Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion OVRExtensions::FromFlippedZQuatf(OVRPlugin/Quatf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OVRExtensions_FromFlippedZQuatf_mFCBE64BC455CB946CC4FDBF91959F0E51468E111 (Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___q0, const RuntimeMethod* method) ;
// System.Boolean OVRHand::get_IsPointerPoseValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsPointerPoseValid_m675548AD3E51E67A3F5EF6C47345775E5B1C8B5F_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRHand::get_PointerPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// OVRPlugin/Quatf[] OVRSkeleton/SkeletonPoseData::get_BoneRotations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* SkeletonPoseData_get_BoneRotations_mACE351DC74E169E3806489E476047373DA10C25E_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion OVRExtensions::FromFlippedXQuatf(OVRPlugin/Quatf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OVRExtensions_FromFlippedXQuatf_m22AB997CA79C83AB049758C60BD36D7118C9BB05 (Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___q0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandDataSourceConfig::get_HandSkeleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* HandDataSourceConfig_get_HandSkeleton_m749A8C9530B31B6449F64598D281C6D53A8B2488_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Input.FromOVRHandDataSource::get_WristFixupRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FromOVRHandDataSource_get_WristFixupRotation_m0CDC8374A1659B878A37E03802B4F55F7683DB92_inline (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectHandedness(Oculus.Interaction.Input.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHandedness_m0A2CFFFD12F32F429E472E7CCFCF43B01FC6D373_inline (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, int32_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectTrackingToWorldTransformer_m4C812B31C6F4FB73A18A177588308AF55E32E9EB (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectHandSkeletonProvider(Oculus.Interaction.Input.IHandSkeletonProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHandSkeletonProvider_m98B9B404DF74A3773C81A884A8F4880E97C8B73E (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, RuntimeObject* ___handSkeletonProvider0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectHmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHmdData_m7B4783242EBA82B7650A64B9FA9FB91EAB910D64 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, RuntimeObject* ___hmdData0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::set_CameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_set_CameraRigRef_mF7F1292CCD53BFD490169C7292E43482B0439CDD_inline (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>::OnEnable()
inline void DataSource_1_OnEnable_mA19EB4C9B1B8437DC989BD91310F584A88551C90 (DataSource_1_t43863080B32A3078810E52A6590829D07D453583* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t43863080B32A3078810E52A6590829D07D453583*, const RuntimeMethod*))DataSource_1_OnEnable_m56427A3E8DC9D77EAD887F308E536B49F690ED79_gshared)(__this, method);
}
// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRHmdDataSource::get_CameraRigRef()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FromOVRHmdDataSource_get_CameraRigRef_m9701F8D26583D60BF41D866E77293BAD713FA800_inline (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>::OnDisable()
inline void DataSource_1_OnDisable_mF1B627104F56C9FF19B3E5576F8A52CB24C8C478 (DataSource_1_t43863080B32A3078810E52A6590829D07D453583* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t43863080B32A3078810E52A6590829D07D453583*, const RuntimeMethod*))DataSource_1_OnDisable_m80A9BDFA805214447647B7E25FBBABB3C406B2E2_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.HmdDataSourceConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HmdDataSourceConfig__ctor_mD83D5EA81D238BBFDE57C635A044401E8F735C43 (HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HmdDataSourceConfig::set_TrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HmdDataSourceConfig_set_TrackingToWorldTransformer_m16678A152AEFFFE83CF6FB6222C49A30EC6FAB75_inline (HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HmdDataSourceConfig Oculus.Interaction.Input.FromOVRHmdDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* FromOVRHmdDataSource_get_Config_m07BC652804E928436AF209955AC55FCD4FDDA645 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) ;
// System.Boolean OVRNodeStateProperties::IsHmdPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRNodeStateProperties_IsHmdPresent_m7ACB316D37EDFFCEF6AB24503AD8F4C7FA5E1A5B (const RuntimeMethod* method) ;
// OVRManager OVRManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* OVRManager_get_instance_mD4D2BEB818DA7BFC5DA79F80E6768804A896EE10_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 OVRManager::get_headPoseRelativeOffsetRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 OVRManager::get_headPoseRelativeOffsetTranslation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// System.Boolean OVRNodeStateProperties::GetNodeStatePropertyVector3(UnityEngine.XR.XRNode,NodeStatePropertyType,OVRPlugin/Node,OVRPlugin/Step,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRNodeStateProperties_GetNodeStatePropertyVector3_m40CA506AC8F2D5F402FBA3AAE2059110B8656940 (int32_t ___nodeType0, int32_t ___propertyType1, int32_t ___ovrpNodeType2, int32_t ___stepType3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___retVec4, const RuntimeMethod* method) ;
// System.Boolean OVRNodeStateProperties::GetNodeStatePropertyQuaternion(UnityEngine.XR.XRNode,NodeStatePropertyType,OVRPlugin/Node,OVRPlugin/Step,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m1FFBED819E7AA22BDB65F27FE466C2807DE2768A (int32_t ___nodeType0, int32_t ___propertyType1, int32_t ___ovrpNodeType2, int32_t ___stepType3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___retQuat4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>::InjectAllDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData>,Oculus.Interaction.Input.IDataSource)
inline void DataSource_1_InjectAllDataSource_m0A129B63BA4AE69ED3B9BA0D77F0F716C0695D86 (DataSource_1_t43863080B32A3078810E52A6590829D07D453583* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t43863080B32A3078810E52A6590829D07D453583*, int32_t, RuntimeObject*, const RuntimeMethod*))DataSource_1_InjectAllDataSource_m02EB127D23BBBD6AC51ABF861685EC48084E23C4_gshared)(__this, ___updateMode0, ___updateAfter1, method);
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::InjectUseOvrManagerEmulatedPose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_InjectUseOvrManagerEmulatedPose_m09200B01D452610D27E55B79E05CBCD86C53B1DD_inline (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, bool ___useOvrManagerEmulatedPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_InjectTrackingToWorldTransformer_m5BD5A0AA3199E19046AF96B45246C8BD68BCAFF9 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HmdDataAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HmdDataAsset__ctor_m118A2075F8D66D12D12C6ED6C8B335C604CBFF27 (HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>::.ctor()
inline void DataSource_1__ctor_m1560EBA9AE56AFEA520462114662B2DF46F6EF5C (DataSource_1_t43863080B32A3078810E52A6590829D07D453583* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t43863080B32A3078810E52A6590829D07D453583*, const RuntimeMethod*))DataSource_1__ctor_mC4786C08977A8C959DC0956614E3C6C6B15834D7_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>::Start()
inline void DataSource_1_Start_m09DBE0DB15E616C56C4B990647E00B86C13CB270 (DataSource_1_t43863080B32A3078810E52A6590829D07D453583* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_t43863080B32A3078810E52A6590829D07D453583*, const RuntimeMethod*))DataSource_1_Start_mE8F782064637A81225ED7D709D125EEAFE620A8D_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.HandSkeletonOVR::ApplyToSkeleton(OVRPlugin/Skeleton2&,Oculus.Interaction.Input.HandSkeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandSkeletonOVR_ApplyToSkeleton_mCA0A0B26DFA7E53626DCAED6FF0016D9E9C3B61E (Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F* ___ovrSkeleton0, HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___handSkeleton1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandSkeleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandSkeleton__ctor_mD8F0C35BB9A78E5048BDC992C7F017BE9BFD0CA7 (HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m42554D359DA9FB4659D09B2E4D6F3E52C3B19F67 (U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<OVRPlugin/BoneCapsule>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m23D83BABAD74D8AC55D02DD00E6312E7C26027EC (Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m23D83BABAD74D8AC55D02DD00E6312E7C26027EC_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Array::FindIndex<OVRPlugin/BoneCapsule>(T[],System.Predicate`1<T>)
inline int32_t Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A (BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___array0, Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1* ___match1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44*, Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1*, const RuntimeMethod*))Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A_gshared)(___array0, ___match1, method);
}
// UnityEngine.Vector3 OVRExtensions::FromFlippedXVector3f(OVRPlugin/Vector3f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRExtensions_FromFlippedXVector3f_mCF64073D3FC08B769D9069DA074A652DC3F71175 (Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___v0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRCameraRig::get_leftHandAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// OVRHand Oculus.Interaction.Input.OVRCameraRigRef::GetHandCached(OVRHand&,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* OVRCameraRigRef_GetHandCached_mBE75C8E398359CFE0150C12767F56172853658E5 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** ___cachedValue0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handAnchor1, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRCameraRig::get_rightHandAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_rightHandAnchor_mF2D328A04338A8119F3BE6EE09FE66965258A26D_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRCameraRig::get_leftControllerAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_leftControllerAnchor_m0757202E2FCE3F39E1E8E8A1CFABFB1645596538_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRCameraRig::get_rightControllerAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// OVRCameraRig Oculus.Interaction.Input.OVRCameraRigRef::get_CameraRig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* OVRCameraRigRef_get_CameraRig_mBA6A96863C9DA3F9056645D33E18145A12962CD9_inline (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<OVRCameraRig>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m992ECB87E90C3F7EC7889339CEA48B40EDEC5160 (Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void OVRCameraRig::add_UpdatedAnchors(System.Action`1<OVRCameraRig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRig_add_UpdatedAnchors_m7F37F5EAA0B3AF5C4D14BAB445F7249AC5886FC7 (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___value0, const RuntimeMethod* method) ;
// System.Void OVRCameraRig::remove_UpdatedAnchors(System.Action`1<OVRCameraRig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRig_remove_UpdatedAnchors_m362CA0EC6662BBE7563DD98E5BE05CD6C22B2E26 (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<OVRHand>(System.Boolean)
inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* Component_GetComponentInChildren_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_mBAD8051B6FE029CE959F47310C0042658F827B20 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___includeInactive0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::InjectInteractionOVRCameraRig(OVRCameraRig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_InjectInteractionOVRCameraRig_m8272E5BFDA1F4BC724CF98BF094A599BA3A3C739 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___ovrCameraRig0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::InjectRequireHands(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRCameraRigRef_InjectRequireHands_mF8D0893140652474BFB8478DA5B4F3A57E184A83_inline (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, bool ___requireHands0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mECDB5846FC37B6FC0D23E41452DDC1C4B673564E (U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<OVRInput/Controller>::GetEnumerator()
inline Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB List_1_GetEnumerator_m7674D83AFE0D3BAA2769D4C59414734D279BBEB6 (List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB (*) (List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<OVRInput/Controller>::Dispose()
inline void Enumerator_Dispose_mDCD406017C11470C2C72A04C04C579C3C1E7ED87 (Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB*, const RuntimeMethod*))Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<OVRInput/Controller>::get_Current()
inline int32_t Enumerator_get_Current_mF6B92BD4CC7F0F206C3B132D8B49927950328FD4_inline (Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<OVRInput/Controller>::MoveNext()
inline bool Enumerator_MoveNext_m49F5AA38898BAC4BD0EF2FA858F3B0AFFB91E9C5 (Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Input.OVRInputDeviceActiveState::InjectControllerTypes(System.Collections.Generic.List`1<OVRInput/Controller>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRInputDeviceActiveState_InjectControllerTypes_m0CDBF4767F3C14AD09296F5D0FB5DC53FE8D825F_inline (OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559* __this, List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* ___controllerTypes0, const RuntimeMethod* method) ;
// System.Single[] OVRPlugin::get_systemDisplayFrequenciesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* OVRPlugin_get_systemDisplayFrequenciesAvailable_m11215058F2FA1DCB9DC3AF176BAC424D567BEF9B (const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534 (RuntimeObject* ___source0, float ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, float, const RuntimeMethod*))Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534_gshared)(___source0, ___value1, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void OVRPlugin::set_systemDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPlugin_set_systemDisplayFrequency_m228B8C0548F88E6EB7EBD7A66E42B273F3D155EB (float ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SetDisplayRefresh::SetDesiredDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDisplayRefresh_SetDesiredDisplayFrequency_mD8D02EE88963C2FE24CBC40A58E07576BA3086F8 (SetDisplayRefresh_t1F83887BC4D7009A3C0A6C7404A6E972B75B5719* __this, float ___desiredDisplayFrequency0, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.TrackingToWorldTransformerOVR::get_CameraRigRef()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TrackingToWorldTransformerOVR_get_CameraRigRef_mE27D2627F557B2C82BFB456A0E4109E70B34BDC3_inline (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.Input.TrackingToWorldTransformerOVR::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TrackingToWorldTransformerOVR_get_Transform_mE918FAAE6A2FD32CA5FA5CAC8F604588C5EFC653 (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::set_CameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_set_CameraRigRef_m49E4398C42EDBC38F8F2B72FFFFBAD818556EF0B_inline (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::InjectCameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_InjectCameraRigRef_m57BF77341D801D3237EF26C5931CD63A2F6DC32F (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, RuntimeObject* ___cameraRigRef0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Input.TrackingToWorldTransformerOVR::ToTrackingPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackingToWorldTransformerOVR_ToTrackingPose_m9AF62ABF51AAE4CCD93E93673F100136FBB318BC (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPose0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.Visuals.OVRControllerVisual::get_ForceOffVisibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6_inline (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::InjectController(Oculus.Interaction.Input.IController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectController_m88C4432F0B0CA047F62BC9D0DF5DC3302B5F05BB (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, RuntimeObject* ___controller0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::InjectAllOVRControllerHelper(OVRControllerHelper)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222_inline (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.UnityCanvas.OVRRenderingMode Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::get_RenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	{
		// private OVRRenderingMode RenderingMode => (OVRRenderingMode)_renderingMode;
		int32_t L_0 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____renderingMode_7;
		return (int32_t)(L_0);
	}
}
// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::get_ShouldUseOVROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRCanvasMeshRenderer_get_ShouldUseOVROverlay_mD334E9B89AD0733303E3D9F9F3FC660D7F4E95B2 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (RenderingMode)
		int32_t L_0;
		L_0 = OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)100)))) <= ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// return !UseEditorEmulation();
		bool L_2;
		L_2 = OVRCanvasMeshRenderer_UseEditorEmulation_m4AF28B00E2DC8D6B3EADCF98A0C43B70480346C4(__this, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.String Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::GetShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRCanvasMeshRenderer_GetShaderName_m498438A23E724B2E4CA93BB3DC9B771276FFFC6B (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral284A12F23CD70EAA3568B75D8BC85DA2DC5144AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE88DC0B94E060AF383860B05B9112834538AAA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB7D704F2D432BF197F16D169F08B54287EE8C15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (RenderingMode)
		int32_t L_0;
		L_0 = OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)100))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101))))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_003b;
	}

IL_0013:
	{
		// return "Hidden/Imposter_AlphaCutout";
		return _stringLiteralCB7D704F2D432BF197F16D169F08B54287EE8C15;
	}

IL_0019:
	{
		// if (UseEditorEmulation())
		bool L_3;
		L_3 = OVRCanvasMeshRenderer_UseEditorEmulation_m4AF28B00E2DC8D6B3EADCF98A0C43B70480346C4(__this, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return "Hidden/Imposter_AlphaCutout";
		return _stringLiteralCB7D704F2D432BF197F16D169F08B54287EE8C15;
	}

IL_0027:
	{
		// else if (_doUnderlayAntiAliasing)
		bool L_4 = __this->____doUnderlayAntiAliasing_15;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// return "Hidden/Imposter_Underlay_AA";
		return _stringLiteral284A12F23CD70EAA3568B75D8BC85DA2DC5144AA;
	}

IL_0035:
	{
		// return "Hidden/Imposter_Underlay";
		return _stringLiteralBE88DC0B94E060AF383860B05B9112834538AAA3;
	}

IL_003b:
	{
		// return base.GetShaderName();
		String_t* L_5;
		L_5 = CanvasMeshRenderer_GetShaderName_mB3FF97C4C446A66BC6DFC8E917CFF83ABA6C0386(__this, NULL);
		return L_5;
	}
}
// System.Single Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::GetAlphaCutoutThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRCanvasMeshRenderer_GetAlphaCutoutThreshold_m44A3335E40B526BCB5B574571A5683D396C047C0 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (RenderingMode)
		int32_t L_0;
		L_0 = OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)100))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101))))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_002d;
	}

IL_0013:
	{
		// return 1f;
		return (1.0f);
	}

IL_0019:
	{
		// return UseEditorEmulation() ? 0.5f : 1f;
		bool L_3;
		L_3 = OVRCanvasMeshRenderer_UseEditorEmulation_m4AF28B00E2DC8D6B3EADCF98A0C43B70480346C4(__this, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		return (1.0f);
	}

IL_0027:
	{
		return (0.5f);
	}

IL_002d:
	{
		// return base.GetAlphaCutoutThreshold();
		float L_4;
		L_4 = CanvasMeshRenderer_GetAlphaCutoutThreshold_mD8BD2261D8E03A859F9A97D3DA7459A79AE9F3D8(__this, NULL);
		return L_4;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::HandleUpdateRenderTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_HandleUpdateRenderTexture_mE8B459BCED549663F0642CA5DC947D6C619BF508 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	{
		// base.HandleUpdateRenderTexture(texture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		CanvasMeshRenderer_HandleUpdateRenderTexture_mCD343FC8F6924F87882BCD5E44A6D4431A430038(__this, L_0, NULL);
		// UpdateOverlay(texture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___texture0;
		OVRCanvasMeshRenderer_UpdateOverlay_mBB1E36CA35C916700F72D26CE38920914F414F34(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::UseEditorEmulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRCanvasMeshRenderer_UseEditorEmulation_m4AF28B00E2DC8D6B3EADCF98A0C43B70480346C4 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	{
		// return Application.isEditor ? _emulateWhileInEditor : false;
		bool L_0;
		L_0 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		bool L_1 = __this->____emulateWhileInEditor_16;
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::GetOverlayParameters(OVROverlay/OverlayShape&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRCanvasMeshRenderer_GetOverlayParameters_mF088F433BD89F27664EE0247EB5FCAAFC5B14722 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, int32_t* ___shape0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasRect_t85D9473B53828189878AB304BD347CA46487F1B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* V_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_canvasMesh is CanvasCylinder canvasCylinder)
		CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* L_0 = __this->____canvasMesh_12;
		V_0 = ((CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C*)IsInstClass((RuntimeObject*)L_0, CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C_il2cpp_TypeInfo_var));
		CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// shape = OverlayShape.Cylinder;
		int32_t* L_2 = ___shape0;
		*((int32_t*)L_2) = (int32_t)1;
		// Vector2Int resolution = _canvasRenderTexture.GetBaseResolutionToUse();
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_3 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____canvasRenderTexture_5;
		NullCheck(L_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		L_4 = CanvasRenderTexture_GetBaseResolutionToUse_m5D2A5145BFF438976BEBBC3EA816BB90924F9256(L_3, NULL);
		V_1 = L_4;
		// position = new Vector3(0, 0, -canvasCylinder.Radius) - _runtimeOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___position1;
		CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* L_6 = V_0;
		NullCheck(L_6);
		float L_7;
		L_7 = CanvasCylinder_get_Radius_mD3810A15F28EB56F9F0055438F6E606F5BB6E745(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), ((-L_7)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->____runtimeOffset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_9, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_5 = L_10;
		// scale = new Vector3(_canvasRenderTexture.PixelsToUnits(resolution.x)
		//                         canvasCylinder.transform.lossyScale.x,
		//                     _canvasRenderTexture.PixelsToUnits(resolution.y)
		//                         canvasCylinder.transform.lossyScale.y,
		//                     canvasCylinder.Radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___scale2;
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_12 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____canvasRenderTexture_5;
		int32_t L_13;
		L_13 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		NullCheck(L_12);
		float L_14;
		L_14 = CanvasRenderTexture_PixelsToUnits_m00B379CBEA243885558AFA5FD3DE3AFCBD8652BA(L_12, ((float)L_13), NULL);
		CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_16, NULL);
		float L_18 = L_17.___x_2;
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_19 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____canvasRenderTexture_5;
		int32_t L_20;
		L_20 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		NullCheck(L_19);
		float L_21;
		L_21 = CanvasRenderTexture_PixelsToUnits_m00B379CBEA243885558AFA5FD3DE3AFCBD8652BA(L_19, ((float)L_20), NULL);
		CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* L_22 = V_0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_23, NULL);
		float L_25 = L_24.___y_3;
		CanvasCylinder_t3D78E2A0FF07F2F92952FC4AC39C940D5A720C5C* L_26 = V_0;
		NullCheck(L_26);
		float L_27;
		L_27 = CanvasCylinder_get_Radius_mD3810A15F28EB56F9F0055438F6E606F5BB6E745(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)(L_14/L_18)), ((float)(L_21/L_25)), L_27, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11 = L_28;
		// return true;
		return (bool)1;
	}

IL_00a3:
	{
		// else if (_canvasMesh is CanvasRect canvasRect)
		CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* L_29 = __this->____canvasMesh_12;
		if (!((CanvasRect_t85D9473B53828189878AB304BD347CA46487F1B1*)IsInstClass((RuntimeObject*)L_29, CanvasRect_t85D9473B53828189878AB304BD347CA46487F1B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0108;
		}
	}
	{
		// shape = OverlayShape.Quad;
		int32_t* L_30 = ___shape0;
		*((int32_t*)L_30) = (int32_t)0;
		// Vector2Int resolution = _canvasRenderTexture.GetBaseResolutionToUse();
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_31 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____canvasRenderTexture_5;
		NullCheck(L_31);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_32;
		L_32 = CanvasRenderTexture_GetBaseResolutionToUse_m5D2A5145BFF438976BEBBC3EA816BB90924F9256(L_31, NULL);
		V_2 = L_32;
		// position = -_runtimeOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->____runtimeOffset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_34, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_33 = L_35;
		// scale = new Vector3(_canvasRenderTexture.PixelsToUnits(resolution.x),
		//                     _canvasRenderTexture.PixelsToUnits(resolution.y),
		//                     1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = ___scale2;
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_37 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____canvasRenderTexture_5;
		int32_t L_38;
		L_38 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_2), NULL);
		NullCheck(L_37);
		float L_39;
		L_39 = CanvasRenderTexture_PixelsToUnits_m00B379CBEA243885558AFA5FD3DE3AFCBD8652BA(L_37, ((float)L_38), NULL);
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_40 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____canvasRenderTexture_5;
		int32_t L_41;
		L_41 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_2), NULL);
		NullCheck(L_40);
		float L_42;
		L_42 = CanvasRenderTexture_PixelsToUnits_m00B379CBEA243885558AFA5FD3DE3AFCBD8652BA(L_40, ((float)L_41), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_39, L_42, (1.0f), /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_36 = L_43;
		// return true;
		return (bool)1;
	}

IL_0108:
	{
		// shape = OverlayShape.Quad;
		int32_t* L_44 = ___shape0;
		*((int32_t*)L_44) = (int32_t)0;
		// position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_45 = L_46;
		// scale = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_47 = L_48;
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_Start_mD865A754CB41177824F4B63D1CF1C2F0B2B46445 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRCanvasMeshRenderer_U3CStartU3Eb__15_0_m021CC5C9942B34248FF7423E5904E94A9675165D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____started_11);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)OVRCanvasMeshRenderer_U3CStartU3Eb__15_0_m021CC5C9942B34248FF7423E5904E94A9675165D_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, L_1, NULL);
		// this.EndStart(ref _started);
		bool* L_2 = (&((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____started_11);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::UpdateOverlay(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_UpdateOverlay_mBB1E36CA35C916700F72D26CE38920914F414F34 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_m0C68826E4AEEDB7AF4C2684A66A1886B9FD4D26A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18154393CDC43483C12FE8673DFE595B12D4F75B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* G_B3_0 = NULL;
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* G_B13_0 = NULL;
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* G_B14_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0121:
			{// begin finally (depth: 1)
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!ShouldUseOVROverlay)
				bool L_0;
				L_0 = OVRCanvasMeshRenderer_get_ShouldUseOVROverlay_mD334E9B89AD0733303E3D9F9F3FC660D7F4E95B2(__this, NULL);
				if (L_0)
				{
					goto IL_0030_1;
				}
			}
			{
				// _overlay?.gameObject?.SetActive(false);
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_1 = __this->____overlay_17;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_2 = L_1;
				G_B2_0 = L_2;
				if (L_2)
				{
					G_B3_0 = L_2;
					goto IL_0017_1;
				}
			}
			{
				goto IL_0122;
			}

IL_0017_1:
			{
				NullCheck(G_B3_0);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(G_B3_0, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
				G_B4_0 = L_4;
				if (L_4)
				{
					G_B5_0 = L_4;
					goto IL_0025_1;
				}
			}
			{
				goto IL_0122;
			}

IL_0025_1:
			{
				NullCheck(G_B5_0);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B5_0, (bool)0, NULL);
				// return;
				goto IL_0122;
			}

IL_0030_1:
			{
				// if (_overlay == null)
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_5 = __this->____overlay_17;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_6)
				{
					goto IL_006d_1;
				}
			}
			{
				// GameObject overlayObj = CreateChildObject("__Overlay");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = OVRCanvasMeshRenderer_CreateChildObject_m5AA047EB88CC6777FF7D29432D578C39784B096F(__this, _stringLiteral18154393CDC43483C12FE8673DFE595B12D4F75B, NULL);
				V_4 = L_7;
				// _overlay = overlayObj.AddComponent<OVROverlay>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
				NullCheck(L_8);
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_9;
				L_9 = GameObject_AddComponent_TisOVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_m0C68826E4AEEDB7AF4C2684A66A1886B9FD4D26A(L_8, GameObject_AddComponent_TisOVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_m0C68826E4AEEDB7AF4C2684A66A1886B9FD4D26A_RuntimeMethod_var);
				__this->____overlay_17 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____overlay_17), (void*)L_9);
				// _overlay.isAlphaPremultiplied = !Application.isMobilePlatform;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_10 = __this->____overlay_17;
				bool L_11;
				L_11 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
				NullCheck(L_10);
				L_10->___isAlphaPremultiplied_30 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
				goto IL_007e_1;
			}

IL_006d_1:
			{
				// _overlay.gameObject.SetActive(true);
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_12 = __this->____overlay_17;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_007e_1:
			{
				// if (!GetOverlayParameters(out OverlayShape shape,
				//                           out Vector3 pos,
				//                           out Vector3 scale))
				bool L_14;
				L_14 = OVRCanvasMeshRenderer_GetOverlayParameters_mF088F433BD89F27664EE0247EB5FCAAFC5B14722(__this, (&V_0), (&V_1), (&V_2), NULL);
				if (L_14)
				{
					goto IL_00a2_1;
				}
			}
			{
				// _overlay.gameObject.SetActive(false);
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_15 = __this->____overlay_17;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
				// return;
				goto IL_0122;
			}

IL_00a2_1:
			{
				// bool useUnderlayRendering = RenderingMode == OVRRenderingMode.Underlay;
				int32_t L_17;
				L_17 = OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0_inline(__this, NULL);
				V_3 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)101)))? 1 : 0);
				// _overlay.textures = new Texture[1] { texture };
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_18 = __this->____overlay_17;
				TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_19 = (TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46*)(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46*)SZArrayNew(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46_il2cpp_TypeInfo_var, (uint32_t)1);
				TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_20 = L_19;
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_21 = ___texture0;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_21);
				NullCheck(L_18);
				L_18->___textures_29 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_18->___textures_29), (void*)L_20);
				// _overlay.noDepthBufferTesting = useUnderlayRendering;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_22 = __this->____overlay_17;
				bool L_23 = V_3;
				NullCheck(L_22);
				L_22->___noDepthBufferTesting_25 = L_23;
				// _overlay.currentOverlayType = useUnderlayRendering ? OverlayType.Underlay : OverlayType.Overlay;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_24 = __this->____overlay_17;
				bool L_25 = V_3;
				G_B12_0 = L_24;
				if (L_25)
				{
					G_B13_0 = L_24;
					goto IL_00da_1;
				}
			}
			{
				G_B14_0 = 2;
				G_B14_1 = G_B12_0;
				goto IL_00db_1;
			}

IL_00da_1:
			{
				G_B14_0 = 1;
				G_B14_1 = G_B13_0;
			}

IL_00db_1:
			{
				NullCheck(G_B14_1);
				G_B14_1->___currentOverlayType_4 = G_B14_0;
				// _overlay.currentOverlayShape = shape;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_26 = __this->____overlay_17;
				int32_t L_27 = V_0;
				NullCheck(L_26);
				L_26->___currentOverlayShape_27 = L_27;
				// _overlay.useExpensiveSuperSample = _enableSuperSampling;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_28 = __this->____overlay_17;
				bool L_29 = __this->____enableSuperSampling_14;
				NullCheck(L_28);
				L_28->___useExpensiveSuperSample_17 = L_29;
				// _overlay.transform.localPosition = pos;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_30 = __this->____overlay_17;
				NullCheck(L_30);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
				L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
				NullCheck(L_31);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_31, L_32, NULL);
				// _overlay.transform.localScale = scale;
				OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_33 = __this->____overlay_17;
				NullCheck(L_33);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
				L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
				NullCheck(L_34);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_35, NULL);
				// }
				goto IL_0122;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::CreateChildObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* OVRCanvasMeshRenderer_CreateChildObject_m5AA047EB88CC6777FF7D29432D578C39784B096F (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// obj.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// obj.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// obj.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_9);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_10, NULL);
		// obj.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_8;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// return obj;
		return L_11;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::InjectAllOVRCanvasMeshRenderer(Oculus.Interaction.UnityCanvas.CanvasRenderTexture,UnityEngine.MeshRenderer,Oculus.Interaction.UnityCanvas.CanvasMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectAllOVRCanvasMeshRenderer_m4F089E5F996F7C0779E0AA08D1EC0203D40DA2E4 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* ___canvasRenderTexture0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer1, CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* ___canvasMesh2, const RuntimeMethod* method) 
{
	{
		// InjectAllCanvasMeshRenderer(canvasRenderTexture, meshRenderer);
		CanvasRenderTexture_t36344A51D0D2C0066A74709BF171880EF9671F1D* L_0 = ___canvasRenderTexture0;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = ___meshRenderer1;
		CanvasMeshRenderer_InjectAllCanvasMeshRenderer_m8316D32D2F55E737B2E1F0FC35CA0C2920D1E56D(__this, L_0, L_1, NULL);
		// InjectCanvasMesh(canvasMesh);
		CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* L_2 = ___canvasMesh2;
		OVRCanvasMeshRenderer_InjectCanvasMesh_m3E468056EA29A9302498CE9BCC951B338134308F_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::InjectCanvasMesh(Oculus.Interaction.UnityCanvas.CanvasMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectCanvasMesh_m3E468056EA29A9302498CE9BCC951B338134308F (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* ___canvasMesh0, const RuntimeMethod* method) 
{
	{
		// _canvasMesh = canvasMesh;
		CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* L_0 = ___canvasMesh0;
		__this->____canvasMesh_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasMesh_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::InjectOptionalRenderingMode(Oculus.Interaction.UnityCanvas.OVRRenderingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectOptionalRenderingMode_m85A5AEC6C99D910B57AB56F1204332050F83F61D (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, int32_t ___ovrRenderingMode0, const RuntimeMethod* method) 
{
	{
		// _renderingMode = (int)ovrRenderingMode;
		int32_t L_0 = ___ovrRenderingMode0;
		((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____renderingMode_7 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::InjectOptionalDoUnderlayAntiAliasing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectOptionalDoUnderlayAntiAliasing_mBA372E5F51D828BB8D903F4AB2499714A9D2885A (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, bool ___doUnderlayAntiAliasing0, const RuntimeMethod* method) 
{
	{
		// _doUnderlayAntiAliasing = doUnderlayAntiAliasing;
		bool L_0 = ___doUnderlayAntiAliasing0;
		__this->____doUnderlayAntiAliasing_15 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::InjectOptionalEnableSuperSampling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectOptionalEnableSuperSampling_mBA8F2B3C49CC27F21F25E33836E086D9BE1FDE2C (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, bool ___enableSuperSampling0, const RuntimeMethod* method) 
{
	{
		// _enableSuperSampling = enableSuperSampling;
		bool L_0 = ___enableSuperSampling0;
		__this->____enableSuperSampling_14 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer__ctor_mC99408C56BD877A850EC09A903770A8FF35003D0 (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Vector3 _runtimeOffset = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____runtimeOffset_13 = L_0;
		// protected bool _enableSuperSampling = true;
		__this->____enableSuperSampling_14 = (bool)1;
		// private bool _emulateWhileInEditor = true;
		__this->____emulateWhileInEditor_16 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419_il2cpp_TypeInfo_var);
		CanvasMeshRenderer__ctor_m82CB644E809FFBF56505F1CCA0283667478FF287(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer::<Start>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_U3CStartU3Eb__15_0_m021CC5C9942B34248FF7423E5904E94A9675165D (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started, () => base.Start());
		CanvasMeshRenderer_Start_m5F54837469E37CE6AC107A3E8DA7CF8D77BC07A6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Properties__cctor_m44084BE4DFE9865A0D095A536DB166C85FA09989 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130D79FECECD75047FB5E79BCCC0435A9B46A89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375FCF20CEB44EEDCE888F11FB3D4CC6EAC845B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9907542636F44A093D24644F3AFC324DE07E5E9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB587743571C2F4591C4EB51196F7EB9EC7463213);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB999F9CF159D7C42FE4C8ACF4FEC9660AAEDB9AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6D620C3AB11D47CA0258AA7C5BD973A8E0734FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string CanvasRenderTexture = nameof(_canvasRenderTexture);
		((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___CanvasRenderTexture_0 = _stringLiteralB587743571C2F4591C4EB51196F7EB9EC7463213;
		Il2CppCodeGenWriteBarrier((void**)(&((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___CanvasRenderTexture_0), (void*)_stringLiteralB587743571C2F4591C4EB51196F7EB9EC7463213);
		// public static readonly string CanvasMesh = nameof(_canvasMesh);
		((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___CanvasMesh_1 = _stringLiteral2375FCF20CEB44EEDCE888F11FB3D4CC6EAC845B;
		Il2CppCodeGenWriteBarrier((void**)(&((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___CanvasMesh_1), (void*)_stringLiteral2375FCF20CEB44EEDCE888F11FB3D4CC6EAC845B);
		// public static readonly string EnableSuperSampling = nameof(_enableSuperSampling);
		((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___EnableSuperSampling_2 = _stringLiteralB999F9CF159D7C42FE4C8ACF4FEC9660AAEDB9AF;
		Il2CppCodeGenWriteBarrier((void**)(&((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___EnableSuperSampling_2), (void*)_stringLiteralB999F9CF159D7C42FE4C8ACF4FEC9660AAEDB9AF);
		// public static readonly string EmulateWhileInEditor = nameof(_emulateWhileInEditor);
		((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___EmulateWhileInEditor_3 = _stringLiteralE6D620C3AB11D47CA0258AA7C5BD973A8E0734FB;
		Il2CppCodeGenWriteBarrier((void**)(&((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___EmulateWhileInEditor_3), (void*)_stringLiteralE6D620C3AB11D47CA0258AA7C5BD973A8E0734FB);
		// public static readonly string DoUnderlayAntiAliasing = nameof(_doUnderlayAntiAliasing);
		((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___DoUnderlayAntiAliasing_4 = _stringLiteral130D79FECECD75047FB5E79BCCC0435A9B46A89C;
		Il2CppCodeGenWriteBarrier((void**)(&((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___DoUnderlayAntiAliasing_4), (void*)_stringLiteral130D79FECECD75047FB5E79BCCC0435A9B46A89C);
		// public static readonly string RuntimeOffset = nameof(_runtimeOffset);
		((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___RuntimeOffset_5 = _stringLiteral9907542636F44A093D24644F3AFC324DE07E5E9B;
		Il2CppCodeGenWriteBarrier((void**)(&((Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_StaticFields*)il2cpp_codegen_static_fields_for(Properties_tD3EBA450E7A78B87BAAEDD2E29ACDFB9E04F5512_il2cpp_TypeInfo_var))->___RuntimeOffset_5), (void*)_stringLiteral9907542636F44A093D24644F3AFC324DE07E5E9B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_Start_m24194B359440EC41CB843BC53BF14BCB24B486DE (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761CAF2881EC72215DE6C3BFBC1BEEEC0E195109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C04A407FE215D295E25E3D30FD585ED38C7AA05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC09616FC7A1F15CD91C601854596281EF11A6AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animLayerIndexPoint = _animator.GetLayerIndex(ANIM_LAYER_NAME_POINT);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B(L_0, _stringLiteralBC09616FC7A1F15CD91C601854596281EF11A6AC, NULL);
		__this->____animLayerIndexPoint_13 = L_1;
		// _animLayerIndexThumb = _animator.GetLayerIndex(ANIM_LAYER_NAME_THUMB);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B(L_2, _stringLiteral7C04A407FE215D295E25E3D30FD585ED38C7AA05, NULL);
		__this->____animLayerIndexThumb_12 = L_3;
		// _animParamIndexFlex = Animator.StringToHash(ANIM_PARAM_NAME_FLEX);
		int32_t L_4;
		L_4 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral761CAF2881EC72215DE6C3BFBC1BEEEC0E195109, NULL);
		__this->____animParamIndexFlex_14 = L_4;
		// _animParamIndexPinch = Animator.StringToHash(ANIM_PARAM_NAME_PINCH);
		int32_t L_5;
		L_5 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D, NULL);
		__this->____animParamIndexPinch_15 = L_5;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_Update_mADC40DDFEFA43DFBA4B804FC9F714C0E273107FB (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) 
{
	{
		// UpdateCapTouchStates();
		AnimatedHandOVR_UpdateCapTouchStates_mDB6D805C4C7992E8E83D9F766D112C291DA6158B(__this, NULL);
		// _pointBlend = InputValueRateChange(_isPointing, _pointBlend);
		bool L_0 = __this->____isPointing_16;
		float L_1 = __this->____pointBlend_18;
		float L_2;
		L_2 = AnimatedHandOVR_InputValueRateChange_mC4016FC1CE58ED34CE6C1EFAC43E8184C64CE26E(__this, L_0, L_1, NULL);
		__this->____pointBlend_18 = L_2;
		// _thumbsUpBlend = InputValueRateChange(_isGivingThumbsUp, _thumbsUpBlend);
		bool L_3 = __this->____isGivingThumbsUp_17;
		float L_4 = __this->____thumbsUpBlend_19;
		float L_5;
		L_5 = AnimatedHandOVR_InputValueRateChange_mC4016FC1CE58ED34CE6C1EFAC43E8184C64CE26E(__this, L_3, L_4, NULL);
		__this->____thumbsUpBlend_19 = L_5;
		// UpdateAnimStates();
		AnimatedHandOVR_UpdateAnimStates_mD1B5FC1A5D88D4A49284F0C569B7035757F15DBD(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::UpdateCapTouchStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_UpdateCapTouchStates_mDB6D805C4C7992E8E83D9F766D112C291DA6158B (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B2_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B3_1 = NULL;
	int32_t G_B11_0 = 0;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B18_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B12_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B13_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B14_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B15_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B16_0 = NULL;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* G_B19_1 = NULL;
	{
		// _isPointing = !OVRInput.Get(OVRInput.NearTouch.PrimaryIndexTrigger, _controller)
		//    && OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, _controller) == 0f;
		int32_t L_0 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OVRInput_Get_m6B7E9C82EFD00F5004635BB56A987523901340FD(1, L_0, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(1, L_2, NULL);
		G_B3_0 = ((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->____isPointing_16 = (bool)G_B3_0;
		// bool triggerThumbsUp = _allowThumbUp == AllowThumbUp.Always ||
		//     (_allowThumbUp == AllowThumbUp.GripRequired
		//         && OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, _controller) >= TRIGGER_MAX) ||
		//     (_allowThumbUp == AllowThumbUp.TriggerAndGripRequired
		//         && OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, _controller) >= TRIGGER_MAX
		//         && OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, _controller) >= TRIGGER_MAX);
		int32_t L_4 = __this->____allowThumbUp_11;
		if (!L_4)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_5 = __this->____allowThumbUp_11;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_6 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(4, L_6, NULL);
		if ((((float)L_7) >= ((float)(0.949999988f))))
		{
			goto IL_0085;
		}
	}

IL_004e:
	{
		int32_t L_8 = __this->____allowThumbUp_11;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_9 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(4, L_9, NULL);
		if ((!(((float)L_10) >= ((float)(0.949999988f)))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_11 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(1, L_11, NULL);
		G_B11_0 = ((((int32_t)((!(((float)L_12) >= ((float)(0.949999988f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0086;
	}

IL_0082:
	{
		G_B11_0 = 0;
		goto IL_0086;
	}

IL_0085:
	{
		G_B11_0 = 1;
	}

IL_0086:
	{
		V_0 = (bool)G_B11_0;
		// _isGivingThumbsUp = !OVRInput.Get(OVRInput.NearTouch.PrimaryThumbButtons, _controller)
		//     && !OVRInput.Get(OVRInput.Button.One, _controller)
		//     && !OVRInput.Get(OVRInput.Button.Two, _controller)
		//     && !OVRInput.Get(OVRInput.Button.Three, _controller)
		//     && !OVRInput.Get(OVRInput.Button.Four, _controller)
		//     && !OVRInput.Get(OVRInput.Button.PrimaryThumbstick, _controller)
		//     && OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, _controller).magnitude == 0
		//     && triggerThumbsUp;
		int32_t L_13 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = OVRInput_Get_m6B7E9C82EFD00F5004635BB56A987523901340FD(2, L_13, NULL);
		G_B12_0 = __this;
		if (L_14)
		{
			G_B18_0 = __this;
			goto IL_00fd;
		}
	}
	{
		int32_t L_15 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(1, L_15, NULL);
		G_B13_0 = G_B12_0;
		if (L_16)
		{
			G_B18_0 = G_B12_0;
			goto IL_00fd;
		}
	}
	{
		int32_t L_17 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(2, L_17, NULL);
		G_B14_0 = G_B13_0;
		if (L_18)
		{
			G_B18_0 = G_B13_0;
			goto IL_00fd;
		}
	}
	{
		int32_t L_19 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(4, L_19, NULL);
		G_B15_0 = G_B14_0;
		if (L_20)
		{
			G_B18_0 = G_B14_0;
			goto IL_00fd;
		}
	}
	{
		int32_t L_21 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(8, L_21, NULL);
		G_B16_0 = G_B15_0;
		if (L_22)
		{
			G_B18_0 = G_B15_0;
			goto IL_00fd;
		}
	}
	{
		int32_t L_23 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(((int32_t)32768), L_23, NULL);
		G_B17_0 = G_B16_0;
		if (L_24)
		{
			G_B18_0 = G_B16_0;
			goto IL_00fd;
		}
	}
	{
		int32_t L_25 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = OVRInput_Get_m5DC55CC9D553D98F95937AB80D77C1120BB56CC6(1, L_25, NULL);
		V_1 = L_26;
		float L_27;
		L_27 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		G_B19_0 = ((((float)L_27) == ((float)(0.0f)))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00fe:
	{
		bool L_28 = V_0;
		NullCheck(G_B19_1);
		G_B19_1->____isGivingThumbsUp_17 = (bool)((int32_t)(G_B19_0&(int32_t)L_28));
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Input.AnimatedHandOVR::InputValueRateChange(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatedHandOVR_InputValueRateChange_mC4016FC1CE58ED34CE6C1EFAC43E8184C64CE26E (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, bool ___isDown0, float ___value1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float rateDelta = Time.deltaTime * INPUT_RATE_CHANGE;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (20.0f)));
		// float sign = isDown ? 1.0f : -1.0f;
		bool L_1 = ___isDown0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
	}

IL_001b:
	{
		V_1 = G_B3_0;
		// return Mathf.Clamp01(value + rateDelta * sign);
		float L_2 = ___value1;
		float L_3 = V_0;
		float L_4 = V_1;
		float L_5;
		L_5 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4)))), NULL);
		return L_5;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::UpdateAnimStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_UpdateAnimStates_mD1B5FC1A5D88D4A49284F0C569B7035757F15DBD (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float flex = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, _controller);
		int32_t L_0 = __this->____controller_9;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(4, L_0, NULL);
		V_0 = L_1;
		// _animator.SetFloat(_animParamIndexFlex, flex);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->____animator_10;
		int32_t L_3 = __this->____animParamIndexFlex_14;
		float L_4 = V_0;
		NullCheck(L_2);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_2, L_3, L_4, NULL);
		// _animator.SetLayerWeight(_animLayerIndexPoint, _pointBlend);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_10;
		int32_t L_6 = __this->____animLayerIndexPoint_13;
		float L_7 = __this->____pointBlend_18;
		NullCheck(L_5);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_5, L_6, L_7, NULL);
		// _animator.SetLayerWeight(_animLayerIndexThumb, _thumbsUpBlend);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->____animator_10;
		int32_t L_9 = __this->____animLayerIndexThumb_12;
		float L_10 = __this->____thumbsUpBlend_19;
		NullCheck(L_8);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_8, L_9, L_10, NULL);
		// float pinch = OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, _controller);
		int32_t L_11 = __this->____controller_9;
		float L_12;
		L_12 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(1, L_11, NULL);
		V_1 = L_12;
		// _animator.SetFloat(_animParamIndexPinch, pinch);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->____animator_10;
		int32_t L_14 = __this->____animParamIndexPinch_15;
		float L_15 = V_1;
		NullCheck(L_13);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_13, L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::InjectAllAnimatedHandOVR(OVRInput/Controller,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectAllAnimatedHandOVR_m2011EFCC984034152F7BBF08D37E6B57E8AFD811 (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, int32_t ___controller0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) 
{
	{
		// InjectController(controller);
		int32_t L_0 = ___controller0;
		AnimatedHandOVR_InjectController_m7C333EF1092C97A05ACC7620F57E0A877688FE28_inline(__this, L_0, NULL);
		// InjectAnimator(animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = ___animator1;
		AnimatedHandOVR_InjectAnimator_mBD7C14F0B699D142D625EF6C8DC502669AB5FE53_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::InjectController(OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectController_m7C333EF1092C97A05ACC7620F57E0A877688FE28 (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// _controller = controller;
		int32_t L_0 = ___controller0;
		__this->____controller_9 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::InjectAnimator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectAnimator_mBD7C14F0B699D142D625EF6C8DC502669AB5FE53 (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) 
{
	{
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		__this->____animator_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.AnimatedHandOVR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedHandOVR__ctor_mDAA2F90CEC34F80EC18BDC5DE10995FB32CCD577 (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, const RuntimeMethod* method) 
{
	{
		// private AllowThumbUp _allowThumbUp = AllowThumbUp.TriggerAndGripRequired;
		__this->____allowThumbUp_11 = 2;
		// private int _animLayerIndexThumb = -1;
		__this->____animLayerIndexThumb_12 = (-1);
		// private int _animLayerIndexPoint = -1;
		__this->____animLayerIndexPoint_13 = (-1);
		// private int _animParamIndexFlex = -1;
		__this->____animParamIndexFlex_14 = (-1);
		// private int _animParamIndexPinch = -1;
		__this->____animParamIndexPinch_15 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.UsageMapping::.ctor(Oculus.Interaction.Input.ControllerButtonUsage,OVRInput/Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, int32_t ___usage0, int32_t ___touch1, const RuntimeMethod* method) 
{
	{
		// Usage = usage;
		int32_t L_0 = ___usage0;
		__this->___U3CUsageU3Ek__BackingField_0 = L_0;
		// Touch = touch;
		int32_t L_1 = ___touch1;
		__this->___U3CTouchU3Ek__BackingField_1 = L_1;
		// Button = OVRInput.Button.None;
		__this->___U3CButtonU3Ek__BackingField_2 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F_AdjustorThunk (RuntimeObject* __this, int32_t ___usage0, int32_t ___touch1, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F(_thisAdjusted, ___usage0, ___touch1, method);
}
// System.Void Oculus.Interaction.Input.UsageMapping::.ctor(Oculus.Interaction.Input.ControllerButtonUsage,OVRInput/Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770 (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, int32_t ___usage0, int32_t ___button1, const RuntimeMethod* method) 
{
	{
		// Usage = usage;
		int32_t L_0 = ___usage0;
		__this->___U3CUsageU3Ek__BackingField_0 = L_0;
		// Touch = OVRInput.Touch.None;
		__this->___U3CTouchU3Ek__BackingField_1 = 0;
		// Button = button;
		int32_t L_1 = ___button1;
		__this->___U3CButtonU3Ek__BackingField_2 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770_AdjustorThunk (RuntimeObject* __this, int32_t ___usage0, int32_t ___button1, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770(_thisAdjusted, ___usage0, ___button1, method);
}
// System.Boolean Oculus.Interaction.Input.UsageMapping::get_IsTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UsageMapping_get_IsTouch_mEE7F6ECA5BB0CD972FCC083D9507936FC532AE24 (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsTouch => Touch != OVRInput.Touch.None;
		int32_t L_0;
		L_0 = UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057_inline(__this, NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UsageMapping_get_IsTouch_mEE7F6ECA5BB0CD972FCC083D9507936FC532AE24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	bool _returnValue;
	_returnValue = UsageMapping_get_IsTouch_mEE7F6ECA5BB0CD972FCC083D9507936FC532AE24(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Oculus.Interaction.Input.UsageMapping::get_IsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UsageMapping_get_IsButton_mD00876300EB0BDD9FC1312BB78518B9ADA31F76A (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsButton => Button != OVRInput.Button.None;
		int32_t L_0;
		L_0 = UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4_inline(__this, NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UsageMapping_get_IsButton_mD00876300EB0BDD9FC1312BB78518B9ADA31F76A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	bool _returnValue;
	_returnValue = UsageMapping_get_IsButton_mD00876300EB0BDD9FC1312BB78518B9ADA31F76A(_thisAdjusted, method);
	return _returnValue;
}
// Oculus.Interaction.Input.ControllerButtonUsage Oculus.Interaction.Input.UsageMapping::get_Usage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Usage_mB0FF90119D5BDF02FB1E9D357F1FB9C0D03B674E (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public ControllerButtonUsage Usage { get; }
		int32_t L_0 = __this->___U3CUsageU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t UsageMapping_get_Usage_mB0FF90119D5BDF02FB1E9D357F1FB9C0D03B674E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UsageMapping_get_Usage_mB0FF90119D5BDF02FB1E9D357F1FB9C0D03B674E_inline(_thisAdjusted, method);
	return _returnValue;
}
// OVRInput/Touch Oculus.Interaction.Input.UsageMapping::get_Touch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057 (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public OVRInput.Touch Touch { get; }
		int32_t L_0 = __this->___U3CTouchU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057_inline(_thisAdjusted, method);
	return _returnValue;
}
// OVRInput/Button Oculus.Interaction.Input.UsageMapping::get_Button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4 (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public OVRInput.Button Button { get; }
		int32_t L_0 = __this->___U3CButtonU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Pose Oculus.Interaction.Input.OVRPointerPoseSelector::get_LocalPointerPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6 (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, const RuntimeMethod* method) 
{
	{
		// public Pose LocalPointerPose { get; private set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CLocalPointerPoseU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Oculus.Interaction.Input.OVRPointerPoseSelector::set_LocalPointerPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose LocalPointerPose { get; private set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CLocalPointerPoseU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method)
{
	OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743*>(__this + _offset);
	OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE_inline(_thisAdjusted, ___value0, method);
}
// System.Void Oculus.Interaction.Input.OVRPointerPoseSelector::.ctor(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerPoseSelector__ctor_m286C17CA0B0637D8D9A841D3E1B7DE1225128617 (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// OVRPlugin.SystemHeadset headset = OVRPlugin.GetSystemHeadsetType();
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OVRPlugin_GetSystemHeadsetType_mB67CC4842F39C514F6DFEE62B6FD88EA3014E3B0(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)4102)))))
		{
			goto IL_0025;
		}
	}

IL_0013:
	{
		// LocalPointerPose = QUEST2_POINTERS[(int)handedness];
		il2cpp_codegen_runtime_class_init_inline(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = ((OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields*)il2cpp_codegen_static_fields_for(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var))->___QUEST2_POINTERS_1;
		int32_t L_4 = ___handedness0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE_inline(__this, L_6, NULL);
		// break;
		return;
	}

IL_0025:
	{
		// LocalPointerPose = QUEST1_POINTERS[(int)handedness];
		il2cpp_codegen_runtime_class_init_inline(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = ((OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields*)il2cpp_codegen_static_fields_for(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var))->___QUEST1_POINTERS_0;
		int32_t L_8 = ___handedness0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE_inline(__this, L_10, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OVRPointerPoseSelector__ctor_m286C17CA0B0637D8D9A841D3E1B7DE1225128617_AdjustorThunk (RuntimeObject* __this, int32_t ___handedness0, const RuntimeMethod* method)
{
	OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743*>(__this + _offset);
	OVRPointerPoseSelector__ctor_m286C17CA0B0637D8D9A841D3E1B7DE1225128617(_thisAdjusted, ___handedness0, method);
}
// System.Void Oculus.Interaction.Input.OVRPointerPoseSelector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerPoseSelector__cctor_m74EDEF2E64803050788E4FE73E75BB0E27A5DF4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Pose[] QUEST1_POINTERS = new Pose[2]
		// {
		//     new Pose(new Vector3(-0.00779999979f,-0.00410000002f,0.0375000015f),
		//         Quaternion.Euler(359.209534f, 6.45196056f, 6.95544577f)),
		//     new Pose(new Vector3(0.00779999979f,-0.00410000002f,0.0375000015f),
		//         Quaternion.Euler(359.209534f, 353.548035f, 353.044556f))
		// };
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)2);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-0.00779999979f), (-0.00410000002f), (0.0375000015f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((359.209534f), (6.45196056f), (6.95544577f), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_4), L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_4);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_5 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.00779999979f), (-0.00410000002f), (0.0375000015f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((359.209534f), (353.548035f), (353.044556f), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_8), L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_8);
		((OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields*)il2cpp_codegen_static_fields_for(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var))->___QUEST1_POINTERS_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields*)il2cpp_codegen_static_fields_for(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var))->___QUEST1_POINTERS_0), (void*)L_5);
		// private static readonly Pose[] QUEST2_POINTERS = new Pose[2]
		// {
		//     new Pose(new Vector3(0.00899999961f, -0.00321028521f, 0.030869998f),
		//         Quaternion.Euler(359.209534f, 6.45196056f, 6.95544577f)),
		//     new Pose(new Vector3(-0.00899999961f, -0.00321028521f, 0.030869998f),
		//         Quaternion.Euler(359.209534f, 353.548035f, 353.044556f))
		// };
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)2);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_10 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.00899999961f), (-0.00321028521f), (0.030869998f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((359.209534f), (6.45196056f), (6.95544577f), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_13), L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_13);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_14 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (-0.00899999961f), (-0.00321028521f), (0.030869998f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((359.209534f), (353.548035f), (353.044556f), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_17), L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_17);
		((OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields*)il2cpp_codegen_static_fields_for(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var))->___QUEST2_POINTERS_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_StaticFields*)il2cpp_codegen_static_fields_for(OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743_il2cpp_TypeInfo_var))->___QUEST2_POINTERS_1), (void*)L_14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRControllerDataSource::get_CameraRigRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCameraRigRefU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::set_CameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_set_CameraRigRef_m77081F15C21BCF15B5CFCD3F432EA0709A5BF69D (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCameraRigRefU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraRigRefU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.Input.FromOVRControllerDataSource::get_ProcessLateUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FromOVRControllerDataSource_get_ProcessLateUpdates_mA621B7EE0977D5795383C9CC1BB9F91A3B5CB9AC (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	{
		// return _processLateUpdates;
		bool L_0 = __this->____processLateUpdates_14;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::set_ProcessLateUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_set_ProcessLateUpdates_m9C36294FFADDA1C821E4153317DC4E81844E9661 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _processLateUpdates = value;
		bool L_0 = ___value0;
		__this->____processLateUpdates_14 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_Awake_mC473FA1F07D8653BEF3C6D24426A595AC8EA7FB4 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TrackingToWorldTransformer = _trackingToWorldTransformer as ITrackingToWorldTransformer;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____trackingToWorldTransformer_16;
		__this->___TrackingToWorldTransformer_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_17), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var)));
		// HmdData = _hmdData as IDataSource<HmdDataAsset>;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____hmdData_18;
		__this->___HmdData_19 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HmdData_19), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var)));
		// CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____cameraRigRef_12;
		FromOVRControllerDataSource_set_CameraRigRef_m77081F15C21BCF15B5CFCD3F432EA0709A5BF69D_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var)), NULL);
		// UpdateConfig();
		FromOVRControllerDataSource_UpdateConfig_mD0BEC70F807E2AE4B8046A6BF4E51A022E39C34A(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_Start_m6E1FD4AD70C274EAD4D7024D62904CBB2A345DC3 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerDataSource_U3CStartU3Eb__21_0_m86C26428099B91D9890EE0D34B9DF65B33B55F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)FromOVRControllerDataSource_U3CStartU3Eb__21_0_m86C26428099B91D9890EE0D34B9DF65B33B55F56_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, L_1, NULL);
		// if (_handedness == Handedness.Left)
		int32_t L_2 = __this->____handedness_15;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		// _ovrControllerAnchor = CameraRigRef.LeftController;
		RuntimeObject* L_3;
		L_3 = FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(3 /* UnityEngine.Transform Oculus.Interaction.Input.IOVRCameraRigRef::get_LeftController() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_3);
		__this->____ovrControllerAnchor_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerAnchor_22), (void*)L_4);
		// _ovrController = OVRInput.Controller.LTouch;
		__this->____ovrController_21 = 1;
		goto IL_0052;
	}

IL_003a:
	{
		// _ovrControllerAnchor = CameraRigRef.RightController;
		RuntimeObject* L_5;
		L_5 = FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(4 /* UnityEngine.Transform Oculus.Interaction.Input.IOVRCameraRigRef::get_RightController() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_5);
		__this->____ovrControllerAnchor_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerAnchor_22), (void*)L_6);
		// _ovrController = OVRInput.Controller.RTouch;
		__this->____ovrController_21 = 2;
	}

IL_0052:
	{
		// _pointerPoseSelector = new OVRPointerPoseSelector(_handedness);
		int32_t L_7 = __this->____handedness_15;
		OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743 L_8;
		memset((&L_8), 0, sizeof(L_8));
		OVRPointerPoseSelector__ctor_m286C17CA0B0637D8D9A841D3E1B7DE1225128617((&L_8), L_7, /*hidden argument*/NULL);
		__this->____pointerPoseSelector_24 = L_8;
		// UpdateConfig();
		FromOVRControllerDataSource_UpdateConfig_mD0BEC70F807E2AE4B8046A6BF4E51A022E39C34A(__this, NULL);
		// this.EndStart(ref _started);
		bool* L_9 = (&((DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_OnEnable_mD3DA66C69F2684557361CA64A045323436D34E1C (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnEnable_m04A10BF93483516A1096C59519289DA99173B3F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerDataSource_HandleInputDataDirtied_m5688BA3CD2BDBA21EE650AC64F818B779035D586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		DataSource_1_OnEnable_m04A10BF93483516A1096C59519289DA99173B3F5(__this, DataSource_1_OnEnable_m04A10BF93483516A1096C59519289DA99173B3F5_RuntimeMethod_var);
		// if (_started)
		bool L_0 = ((DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied += HandleInputDataDirtied;
		RuntimeObject* L_1;
		L_1 = FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline(__this, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRControllerDataSource_HandleInputDataDirtied_m5688BA3CD2BDBA21EE650AC64F818B779035D586_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(5 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::add_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_OnDisable_mE4FA1DF1AA682287F490C872DAC11AA617F51122 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnDisable_m79227AB68310604820BED4AC79E03B1DCCD6299D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerDataSource_HandleInputDataDirtied_m5688BA3CD2BDBA21EE650AC64F818B779035D586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = ((DataSource_1_tE8EA827479FBF471B9F17E4E32325A6263E48E21*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied -= HandleInputDataDirtied;
		RuntimeObject* L_1;
		L_1 = FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline(__this, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRControllerDataSource_HandleInputDataDirtied_m5688BA3CD2BDBA21EE650AC64F818B779035D586_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(6 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::remove_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// base.OnDisable();
		DataSource_1_OnDisable_m79227AB68310604820BED4AC79E03B1DCCD6299D(__this, DataSource_1_OnDisable_m79227AB68310604820BED4AC79E03B1DCCD6299D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::HandleInputDataDirtied(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_HandleInputDataDirtied_m5688BA3CD2BDBA21EE650AC64F818B779035D586 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, bool ___isLateUpdate0, const RuntimeMethod* method) 
{
	{
		// if (isLateUpdate && !_processLateUpdates)
		bool L_0 = ___isLateUpdate0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = __this->____processLateUpdates_14;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// MarkInputDataRequiresUpdate();
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.ControllerDataAsset>::MarkInputDataRequiresUpdate() */, __this);
		// }
		return;
	}
}
// Oculus.Interaction.Input.ControllerDataSourceConfig Oculus.Interaction.Input.FromOVRControllerDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* FromOVRControllerDataSource_get_Config_mC8A01DA08D0A732995C7E503D79533C693B38E7E (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_config != null)
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_0 = __this->____config_23;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _config;
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_1 = __this->____config_23;
		return L_1;
	}

IL_000f:
	{
		// _config = new ControllerDataSourceConfig()
		// {
		//     Handedness = _handedness
		// };
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_2 = (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062*)il2cpp_codegen_object_new(ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ControllerDataSourceConfig__ctor_m46C6374C1D83096E8646C66609F7E84DF0914B17(L_2, NULL);
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_3 = L_2;
		int32_t L_4 = __this->____handedness_15;
		NullCheck(L_3);
		ControllerDataSourceConfig_set_Handedness_mB4FAE612E5494F06F211F9FE3E0C459273EA2AE5_inline(L_3, L_4, NULL);
		__this->____config_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____config_23), (void*)L_3);
		// return _config;
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_5 = __this->____config_23;
		return L_5;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::UpdateConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_UpdateConfig_mD0BEC70F807E2AE4B8046A6BF4E51A022E39C34A (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	{
		// Config.Handedness = _handedness;
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_0;
		L_0 = FromOVRControllerDataSource_get_Config_mC8A01DA08D0A732995C7E503D79533C693B38E7E(__this, NULL);
		int32_t L_1 = __this->____handedness_15;
		NullCheck(L_0);
		ControllerDataSourceConfig_set_Handedness_mB4FAE612E5494F06F211F9FE3E0C459273EA2AE5_inline(L_0, L_1, NULL);
		// Config.TrackingToWorldTransformer = TrackingToWorldTransformer;
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_2;
		L_2 = FromOVRControllerDataSource_get_Config_mC8A01DA08D0A732995C7E503D79533C693B38E7E(__this, NULL);
		RuntimeObject* L_3 = __this->___TrackingToWorldTransformer_17;
		NullCheck(L_2);
		ControllerDataSourceConfig_set_TrackingToWorldTransformer_m3FEFC92EA64E81A433997AFA752FE3CB725A46E6_inline(L_2, L_3, NULL);
		// Config.HmdData = HmdData;
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_4;
		L_4 = FromOVRControllerDataSource_get_Config_mC8A01DA08D0A732995C7E503D79533C693B38E7E(__this, NULL);
		RuntimeObject* L_5 = __this->___HmdData_19;
		NullCheck(L_4);
		ControllerDataSourceConfig_set_HmdData_mD4ED53FF6FAB6AA6BDB1173951802BF2FB2D9283_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_UpdateData_m9498910927B8D16F65AB8D0A919541DBE3FE38D6 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* V_5 = NULL;
	int32_t V_6 = 0;
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	{
		// _controllerDataAsset.Config = Config;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_0 = __this->____controllerDataAsset_20;
		ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* L_1;
		L_1 = FromOVRControllerDataSource_get_Config_mC8A01DA08D0A732995C7E503D79533C693B38E7E(__this, NULL);
		NullCheck(L_0);
		L_0->___Config_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Config_8), (void*)L_1);
		// var worldToTrackingSpace = CameraRigRef.CameraRig.transform.worldToLocalMatrix;
		RuntimeObject* L_2;
		L_2 = FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline(__this, NULL);
		NullCheck(L_2);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_3;
		L_3 = InterfaceFuncInvoker0< OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* >::Invoke(0 /* OVRCameraRig Oculus.Interaction.Input.IOVRCameraRigRef::get_CameraRig() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_4, NULL);
		V_0 = L_5;
		// Transform ovrController = _ovrControllerAnchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____ovrControllerAnchor_22;
		V_1 = L_6;
		// _controllerDataAsset.IsDataValid = true;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_7 = __this->____controllerDataAsset_20;
		NullCheck(L_7);
		L_7->___IsDataValid_0 = (bool)1;
		// _controllerDataAsset.IsConnected =
		//     (OVRInput.GetConnectedControllers() & _ovrController) > 0;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_8 = __this->____controllerDataAsset_20;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = OVRInput_GetConnectedControllers_m4EF5F5C48A11AA32286CB818986AC1BA36F0DE65_inline(NULL);
		int32_t L_10 = __this->____ovrController_21;
		NullCheck(L_8);
		L_8->___IsConnected_1 = (bool)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)L_10))) > ((int32_t)0))? 1 : 0);
		// if (!_controllerDataAsset.IsConnected)
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_11 = __this->____controllerDataAsset_20;
		NullCheck(L_11);
		bool L_12 = L_11->___IsConnected_1;
		if (L_12)
		{
			goto IL_0086;
		}
	}
	{
		// _controllerDataAsset.IsTracked = default;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_13 = __this->____controllerDataAsset_20;
		NullCheck(L_13);
		L_13->___IsTracked_2 = (bool)0;
		// _controllerDataAsset.ButtonUsageMask = default;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_14 = __this->____controllerDataAsset_20;
		NullCheck(L_14);
		L_14->___ButtonUsageMask_3 = 0;
		// _controllerDataAsset.RootPoseOrigin = default;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_15 = __this->____controllerDataAsset_20;
		NullCheck(L_15);
		L_15->___RootPoseOrigin_5 = 0;
		// return;
		return;
	}

IL_0086:
	{
		// _controllerDataAsset.IsTracked = true;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_16 = __this->____controllerDataAsset_20;
		NullCheck(L_16);
		L_16->___IsTracked_2 = (bool)1;
		// _controllerDataAsset.ButtonUsageMask = ControllerButtonUsage.None;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_17 = __this->____controllerDataAsset_20;
		NullCheck(L_17);
		L_17->___ButtonUsageMask_3 = 0;
		// OVRInput.Controller controllerMask = _ovrController;
		int32_t L_18 = __this->____ovrController_21;
		V_2 = L_18;
		// foreach (UsageMapping mapping in ControllerUsageMappings)
		il2cpp_codegen_runtime_class_init_inline(FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_19 = ((FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var))->___ControllerUsageMappings_25;
		V_5 = L_19;
		V_6 = 0;
		goto IL_0108;
	}

IL_00b1:
	{
		// foreach (UsageMapping mapping in ControllerUsageMappings)
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_20 = V_5;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		// if (mapping.IsTouch)
		bool L_24;
		L_24 = UsageMapping_get_IsTouch_mEE7F6ECA5BB0CD972FCC083D9507936FC532AE24((&V_7), NULL);
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		// usageActive = OVRInput.Get(mapping.Touch, controllerMask);
		int32_t L_25;
		L_25 = UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057_inline((&V_7), NULL);
		int32_t L_26 = V_2;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = OVRInput_Get_mB693E89754D1B7E5B10630B1ED4886716EC813ED(L_25, L_26, NULL);
		V_8 = L_27;
		goto IL_00e5;
	}

IL_00d6:
	{
		// usageActive = OVRInput.Get(mapping.Button, controllerMask);
		int32_t L_28;
		L_28 = UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4_inline((&V_7), NULL);
		int32_t L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = OVRInput_Get_m32EEE63D73D2D4B6F5E98495B8E1F2FA8583CB41(L_28, L_29, NULL);
		V_8 = L_30;
	}

IL_00e5:
	{
		// if (usageActive)
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_0102;
		}
	}
	{
		// _controllerDataAsset.ButtonUsageMask |= mapping.Usage;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_32 = __this->____controllerDataAsset_20;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->___ButtonUsageMask_3;
		int32_t L_35;
		L_35 = UsageMapping_get_Usage_mB0FF90119D5BDF02FB1E9D357F1FB9C0D03B674E_inline((&V_7), NULL);
		NullCheck(L_33);
		L_33->___ButtonUsageMask_3 = ((int32_t)((int32_t)L_34|(int32_t)L_35));
	}

IL_0102:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0108:
	{
		// foreach (UsageMapping mapping in ControllerUsageMappings)
		int32_t L_37 = V_6;
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_38 = V_5;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_00b1;
		}
	}
	{
		// Pose worldRoot = new Pose(ovrController.position, ovrController.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_1;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = V_1;
		NullCheck(L_41);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_41, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_3), L_40, L_42, NULL);
		// _controllerDataAsset.RootPose.position = worldToTrackingSpace.MultiplyPoint3x4(worldRoot.position);
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_43 = __this->____controllerDataAsset_20;
		NullCheck(L_43);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_44 = (&L_43->___RootPose_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_45 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_0), L_46, NULL);
		L_44->___position_0 = L_47;
		// _controllerDataAsset.RootPose.rotation = worldToTrackingSpace.rotation * worldRoot.rotation;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_48 = __this->____controllerDataAsset_20;
		NullCheck(L_48);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_49 = (&L_48->___RootPose_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB((&V_0), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = L_51.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_50, L_52, NULL);
		L_49->___rotation_1 = L_53;
		// _controllerDataAsset.RootPoseOrigin = PoseOrigin.RawTrackedPose;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_54 = __this->____controllerDataAsset_20;
		NullCheck(L_54);
		L_54->___RootPoseOrigin_5 = 1;
		// Pose pointerPose =
		//     new Pose(ovrController.transform.TransformPoint(_pointerPoseSelector.LocalPointerPose.position),
		//         worldRoot.rotation * _pointerPoseSelector.LocalPointerPose.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = V_1;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* L_57 = (&__this->____pointerPoseSelector_24);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_58;
		L_58 = OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6_inline(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = L_58.___position_0;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_56, L_59, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_61 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = L_61.___rotation_1;
		OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* L_63 = (&__this->____pointerPoseSelector_24);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_64;
		L_64 = OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6_inline(L_63, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = L_64.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_62, L_65, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_4), L_60, L_66, NULL);
		// _controllerDataAsset.PointerPose.position = worldToTrackingSpace.MultiplyPoint3x4(pointerPose.position);
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_67 = __this->____controllerDataAsset_20;
		NullCheck(L_67);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_68 = (&L_67->___PointerPose_6);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_69 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = L_69.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_0), L_70, NULL);
		L_68->___position_0 = L_71;
		// _controllerDataAsset.PointerPose.rotation = worldToTrackingSpace.rotation * pointerPose.rotation;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_72 = __this->____controllerDataAsset_20;
		NullCheck(L_72);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_73 = (&L_72->___PointerPose_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB((&V_0), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_75 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76 = L_75.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		L_77 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_74, L_76, NULL);
		L_73->___rotation_1 = L_77;
		// _controllerDataAsset.PointerPoseOrigin = PoseOrigin.RawTrackedPose;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_78 = __this->____controllerDataAsset_20;
		NullCheck(L_78);
		L_78->___PointerPoseOrigin_7 = 1;
		// }
		return;
	}
}
// Oculus.Interaction.Input.ControllerDataAsset Oculus.Interaction.Input.FromOVRControllerDataSource::get_DataAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* FromOVRControllerDataSource_get_DataAsset_m53091D8E4D4992445548AC964FBF373283A15B8F (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	{
		// protected override ControllerDataAsset DataAsset => _controllerDataAsset;
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_0 = __this->____controllerDataAsset_20;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectAllFromOVRControllerDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<Oculus.Interaction.Input.ControllerDataAsset>,Oculus.Interaction.Input.IDataSource,Oculus.Interaction.Input.Handedness,Oculus.Interaction.Input.ITrackingToWorldTransformer,Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectAllFromOVRControllerDataSource_mF12A6BB5C6FF08E747A521A1CBE0F20F31E2ACBD (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, int32_t ___handedness2, RuntimeObject* ___trackingToWorldTransformer3, RuntimeObject* ___hmdData4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_InjectAllDataSource_mAFF8FA26FBDE6C4ADDB2EE85B9DEDA055CED5AD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InjectAllDataSource(updateMode, updateAfter);
		int32_t L_0 = ___updateMode0;
		RuntimeObject* L_1 = ___updateAfter1;
		DataSource_1_InjectAllDataSource_mAFF8FA26FBDE6C4ADDB2EE85B9DEDA055CED5AD8(__this, L_0, L_1, DataSource_1_InjectAllDataSource_mAFF8FA26FBDE6C4ADDB2EE85B9DEDA055CED5AD8_RuntimeMethod_var);
		// InjectHandedness(handedness);
		int32_t L_2 = ___handedness2;
		FromOVRControllerDataSource_InjectHandedness_m81961E1B46DFC1189822BFBD49AD90C1AEE92F54_inline(__this, L_2, NULL);
		// InjectTrackingToWorldTransformer(trackingToWorldTransformer);
		RuntimeObject* L_3 = ___trackingToWorldTransformer3;
		FromOVRControllerDataSource_InjectTrackingToWorldTransformer_mDA0DB4BE3729D34D67141C72D0BC0143630176E3(__this, L_3, NULL);
		// InjectHmdData(hmdData);
		RuntimeObject* L_4 = ___hmdData4;
		FromOVRControllerDataSource_InjectHmdData_m17E3018803708A6ED408E11CC8F54AFA8A26EE91(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectHandedness(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectHandedness_m81961E1B46DFC1189822BFBD49AD90C1AEE92F54 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// _handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->____handedness_15 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectTrackingToWorldTransformer_mDA0DB4BE3729D34D67141C72D0BC0143630176E3 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackingToWorldTransformer = trackingToWorldTransformer as MonoBehaviour;
		RuntimeObject* L_0 = ___trackingToWorldTransformer0;
		__this->____trackingToWorldTransformer_16 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackingToWorldTransformer_16), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// TrackingToWorldTransformer = trackingToWorldTransformer;
		RuntimeObject* L_1 = ___trackingToWorldTransformer0;
		__this->___TrackingToWorldTransformer_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_17), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::InjectHmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectHmdData_m17E3018803708A6ED408E11CC8F54AFA8A26EE91 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___hmdData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hmdData = hmdData as MonoBehaviour;
		RuntimeObject* L_0 = ___hmdData0;
		__this->____hmdData_18 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmdData_18), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HmdData = hmdData;
		RuntimeObject* L_1 = ___hmdData0;
		__this->___HmdData_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HmdData_19), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource__ctor_mDB3A3E6D430A36AA6E57A3FDEBF3792C2917C265 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1__ctor_m5E565390E2128CE38FDB1FF8292A6B9DADC9327C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ControllerDataAsset _controllerDataAsset = new ControllerDataAsset();
		ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36* L_0 = (ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36*)il2cpp_codegen_object_new(ControllerDataAsset_t78DE4BF9CFD14EC955A27BBBF6DF4B981916EB36_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ControllerDataAsset__ctor_mD64E460AACE10CEE77506FB45A55B081C908BD4A(L_0, NULL);
		__this->____controllerDataAsset_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controllerDataAsset_20), (void*)L_0);
		DataSource_1__ctor_m5E565390E2128CE38FDB1FF8292A6B9DADC9327C(__this, DataSource_1__ctor_m5E565390E2128CE38FDB1FF8292A6B9DADC9327C_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource__cctor_mE81168A4BF957C9D042AD90A887CD46DEE7991DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly UsageMapping[] ControllerUsageMappings =
		// {
		//     new UsageMapping(ControllerButtonUsage.PrimaryButton, OVRInput.Button.One),
		//     new UsageMapping(ControllerButtonUsage.PrimaryTouch, OVRInput.Touch.One),
		//     new UsageMapping(ControllerButtonUsage.SecondaryButton, OVRInput.Button.Two),
		//     new UsageMapping(ControllerButtonUsage.SecondaryTouch, OVRInput.Touch.Two),
		//     new UsageMapping(ControllerButtonUsage.GripButton,
		//         OVRInput.Button.PrimaryHandTrigger),
		//     new UsageMapping(ControllerButtonUsage.TriggerButton,
		//         OVRInput.Button.PrimaryIndexTrigger),
		//     new UsageMapping(ControllerButtonUsage.MenuButton, OVRInput.Button.Start),
		//     new UsageMapping(ControllerButtonUsage.Primary2DAxisClick,
		//         OVRInput.Button.PrimaryThumbstick),
		//     new UsageMapping(ControllerButtonUsage.Primary2DAxisTouch,
		//         OVRInput.Touch.PrimaryThumbstick),
		//     new UsageMapping(ControllerButtonUsage.Thumbrest, OVRInput.Touch.PrimaryThumbRest)
		// };
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_0 = (UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0*)(UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0*)SZArrayNew(UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_1 = L_0;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_2;
		memset((&L_2), 0, sizeof(L_2));
		UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770((&L_2), 1, 1, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_2);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_3 = L_1;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_4;
		memset((&L_4), 0, sizeof(L_4));
		UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F((&L_4), 2, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_4);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_5 = L_3;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_6;
		memset((&L_6), 0, sizeof(L_6));
		UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770((&L_6), 4, 2, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_6);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_7 = L_5;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_8;
		memset((&L_8), 0, sizeof(L_8));
		UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F((&L_8), 8, 2, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_8);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_9 = L_7;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_10;
		memset((&L_10), 0, sizeof(L_10));
		UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770((&L_10), ((int32_t)16), ((int32_t)16384), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_10);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_11 = L_9;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_12;
		memset((&L_12), 0, sizeof(L_12));
		UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770((&L_12), ((int32_t)32), ((int32_t)8192), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_12);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_13 = L_11;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_14;
		memset((&L_14), 0, sizeof(L_14));
		UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770((&L_14), ((int32_t)64), ((int32_t)256), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_14);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_15 = L_13;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_16;
		memset((&L_16), 0, sizeof(L_16));
		UsageMapping__ctor_mB2CE4DE6C73AFA872CFB6123DE7CB98D18257770((&L_16), ((int32_t)128), ((int32_t)32768), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_16);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_17 = L_15;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_18;
		memset((&L_18), 0, sizeof(L_18));
		UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F((&L_18), ((int32_t)256), ((int32_t)32768), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_18);
		UsageMappingU5BU5D_t436B76F554AFCDBC5EC38734450969FC564169C0* L_19 = L_17;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_20;
		memset((&L_20), 0, sizeof(L_20));
		UsageMapping__ctor_m45E85AD69A50F89CF2A22C622FA57AC8D978979F((&L_20), ((int32_t)512), ((int32_t)4096), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB)L_20);
		((FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var))->___ControllerUsageMappings_25 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA_il2cpp_TypeInfo_var))->___ControllerUsageMappings_25), (void*)L_19);
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerDataSource::<Start>b__21_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_U3CStartU3Eb__21_0_m86C26428099B91D9890EE0D34B9DF65B33B55F56 (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_Start_m730F94193926FEFFCE310B56E77FBD5BBDD87B06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		DataSource_1_Start_m730F94193926FEFFCE310B56E77FBD5BBDD87B06(__this, DataSource_1_Start_m730F94193926FEFFCE310B56E77FBD5BBDD87B06_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.Input.FromOVRControllerHandDataSource::get_ProcessLateUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FromOVRControllerHandDataSource_get_ProcessLateUpdates_m6A8B062554B6ED62A61F06D2FA66C788ACDA607F (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	{
		// return _processLateUpdates;
		bool L_0 = __this->____processLateUpdates_18;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::set_ProcessLateUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_set_ProcessLateUpdates_mC13686F5D239E4B6629ABA00093DC0ECE5C5EF31 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _processLateUpdates = value;
		bool L_0 = ___value0;
		__this->____processLateUpdates_18 = L_0;
		// }
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Input.FromOVRControllerHandDataSource::get_WristFixupRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FromOVRControllerHandDataSource_get_WristFixupRotation_m55A8CE77CB2CFDEB69E8BCCE82A7812660D0E31D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Quaternion WristFixupRotation { get; } =
		il2cpp_codegen_runtime_class_init_inline(FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var))->___U3CWristFixupRotationU3Ek__BackingField_29;
		return L_0;
	}
}
// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.FromOVRControllerHandDataSource::get_DataAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* FromOVRControllerHandDataSource_get_DataAsset_m1DBAF42EF0706B8F76CB7FCD449B6AFCC7481A9A (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	{
		// protected override HandDataAsset DataAsset => _handDataAsset;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_0 = __this->____handDataAsset_24;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_Awake_mA34D3866840B44113B254EEADED1E180F6AA34E3 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _skeleton = HandSkeletonOVR.CreateSkeletonData(_handedness);
		int32_t L_0 = __this->____handedness_19;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_1;
		L_1 = HandSkeletonOVR_CreateSkeletonData_m594DC5C390907A0C64E645E22B5246869DC72248(L_0, NULL);
		__this->____skeleton_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____skeleton_30), (void*)L_1);
		// TrackingToWorldTransformer = _trackingToWorldTransformer as ITrackingToWorldTransformer;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____trackingToWorldTransformer_20;
		__this->___TrackingToWorldTransformer_21 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_21), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var)));
		// HmdData = _hmdData as IDataSource<HmdDataAsset>;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_3 = __this->____hmdData_22;
		__this->___HmdData_23 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HmdData_23), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var)));
		// CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_4 = __this->____cameraRigRef_16;
		__this->___CameraRigRef_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CameraRigRef_17), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var)));
		// UpdateConfig();
		FromOVRControllerHandDataSource_UpdateConfig_m3C6CE3ED0F4786B8D691E14448F120299B31F0E0(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_Start_m405742018151F15142810E5A3044B5AB52324AA5 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_U3CStartU3Eb__27_0_m682B7E755B20C9C907BB1888076EA2AA4E5B7265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)FromOVRControllerHandDataSource_U3CStartU3Eb__27_0_m682B7E755B20C9C907BB1888076EA2AA4E5B7265_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, L_1, NULL);
		// if (_handedness == Handedness.Left)
		int32_t L_2 = __this->____handedness_19;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		// _ovrControllerAnchor = CameraRigRef.LeftController;
		RuntimeObject* L_3 = __this->___CameraRigRef_17;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(3 /* UnityEngine.Transform Oculus.Interaction.Input.IOVRCameraRigRef::get_LeftController() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_3);
		__this->____ovrControllerAnchor_26 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerAnchor_26), (void*)L_4);
		// _ovrController = OVRInput.Controller.LTouch;
		__this->____ovrController_25 = 1;
		goto IL_0052;
	}

IL_003a:
	{
		// _ovrControllerAnchor = CameraRigRef.RightController;
		RuntimeObject* L_5 = __this->___CameraRigRef_17;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(4 /* UnityEngine.Transform Oculus.Interaction.Input.IOVRCameraRigRef::get_RightController() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_5);
		__this->____ovrControllerAnchor_26 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerAnchor_26), (void*)L_6);
		// _ovrController = OVRInput.Controller.RTouch;
		__this->____ovrController_25 = 2;
	}

IL_0052:
	{
		// Pose offset = new Pose(_rootOffset, Quaternion.Euler(_rootAngleOffset));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->____rootOffset_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____rootAngleOffset_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_8, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_0), L_7, L_9, NULL);
		// if (_handedness == Handedness.Left)
		int32_t L_10 = __this->____handedness_19;
		if (L_10)
		{
			goto IL_00b0;
		}
	}
	{
		// offset.position.x = -offset.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&(&V_0)->___position_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___position_0;
		float L_14 = L_13.___x_2;
		L_11->___x_2 = ((-L_14));
		// offset.rotation = Quaternion.Euler(180f, 0f, 0f) * offset.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((180.0f), (0.0f), (0.0f), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_15, L_17, NULL);
		(&V_0)->___rotation_1 = L_18;
	}

IL_00b0:
	{
		// _poseOffset = offset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_0;
		__this->____poseOffset_28 = L_19;
		// UpdateSkeleton();
		FromOVRControllerHandDataSource_UpdateSkeleton_mCC758953E19A37516E620F507481F03768583054(__this, NULL);
		// UpdateConfig();
		FromOVRControllerHandDataSource_UpdateConfig_m3C6CE3ED0F4786B8D691E14448F120299B31F0E0(__this, NULL);
		// this.EndStart(ref _started);
		bool* L_20 = (&((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_OnEnable_m4981578D83C0786566261C75B5DC8B81875A1F2C (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_HandleInputDataDirtied_m6B106A49C0BCC3D2D9C961F903AB83A4EC91A21F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B(__this, DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B_RuntimeMethod_var);
		// if (_started)
		bool L_0 = ((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied += HandleInputDataDirtied;
		RuntimeObject* L_1 = __this->___CameraRigRef_17;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRControllerHandDataSource_HandleInputDataDirtied_m6B106A49C0BCC3D2D9C961F903AB83A4EC91A21F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(5 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::add_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_OnDisable_mFEE360FB6FA2ED4B3DCF14D1395E85D66E0C670D (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_HandleInputDataDirtied_m6B106A49C0BCC3D2D9C961F903AB83A4EC91A21F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = ((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied -= HandleInputDataDirtied;
		RuntimeObject* L_1 = __this->___CameraRigRef_17;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRControllerHandDataSource_HandleInputDataDirtied_m6B106A49C0BCC3D2D9C961F903AB83A4EC91A21F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(6 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::remove_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// base.OnDisable();
		DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36(__this, DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::HandleInputDataDirtied(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_HandleInputDataDirtied_m6B106A49C0BCC3D2D9C961F903AB83A4EC91A21F (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, bool ___isLateUpdate0, const RuntimeMethod* method) 
{
	{
		// if (isLateUpdate && !_processLateUpdates)
		bool L_0 = ___isLateUpdate0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = __this->____processLateUpdates_18;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// MarkInputDataRequiresUpdate();
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::MarkInputDataRequiresUpdate() */, __this);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::UpdateSkeleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_UpdateSkeleton_mCC758953E19A37516E620F507481F03768583054 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (_started)
		bool L_0 = ((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// for (int i = 0; i < _skeleton.joints.Length; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_000c:
	{
		// _skeleton.joints[i].pose.position = _bones[i].localPosition;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_1 = __this->____skeleton_30;
		NullCheck(L_1);
		HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* L_2 = L_1->___joints_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___pose_1);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->____bones_12;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		L_4->___position_0 = L_9;
		// _skeleton.joints[i].pose.rotation = _bones[i].localRotation;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_10 = __this->____skeleton_30;
		NullCheck(L_10);
		HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* L_11 = L_10->___joints_0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (&((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___pose_1);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = __this->____bones_12;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		L_13->___rotation_1 = L_18;
		// for (int i = 0; i < _skeleton.joints.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < _skeleton.joints.Length; i++)
		int32_t L_20 = V_0;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_21 = __this->____skeleton_30;
		NullCheck(L_21);
		HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* L_22 = L_21->___joints_0;
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_000c;
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.FromOVRControllerHandDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_config != null)
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_0 = __this->____config_27;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _config;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_1 = __this->____config_27;
		return L_1;
	}

IL_000f:
	{
		// _config = new HandDataSourceConfig()
		// {
		//     Handedness = _handedness
		// };
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_2 = (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054*)il2cpp_codegen_object_new(HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandDataSourceConfig__ctor_mA41828ACB676B6FB3BD15F8F36853D55C7565EB0(L_2, NULL);
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_3 = L_2;
		int32_t L_4 = __this->____handedness_19;
		NullCheck(L_3);
		HandDataSourceConfig_set_Handedness_m6D4D243AC1A402A05F9674A5115E901EA2C0E85C_inline(L_3, L_4, NULL);
		__this->____config_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____config_27), (void*)L_3);
		// return _config;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_5 = __this->____config_27;
		return L_5;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::UpdateConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_UpdateConfig_m3C6CE3ED0F4786B8D691E14448F120299B31F0E0 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	{
		// Config.Handedness = _handedness;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_0;
		L_0 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		int32_t L_1 = __this->____handedness_19;
		NullCheck(L_0);
		HandDataSourceConfig_set_Handedness_m6D4D243AC1A402A05F9674A5115E901EA2C0E85C_inline(L_0, L_1, NULL);
		// Config.TrackingToWorldTransformer = TrackingToWorldTransformer;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_2;
		L_2 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		RuntimeObject* L_3 = __this->___TrackingToWorldTransformer_21;
		NullCheck(L_2);
		HandDataSourceConfig_set_TrackingToWorldTransformer_m32D9167DF390D900C1C75D774F143CEC05D3326E_inline(L_2, L_3, NULL);
		// Config.HandSkeleton = _skeleton;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_4;
		L_4 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_5 = __this->____skeleton_30;
		NullCheck(L_4);
		HandDataSourceConfig_set_HandSkeleton_m4BF7D11ABA852539E4AA81534AFCAB2E6A1F2F56_inline(L_4, L_5, NULL);
		// Config.HmdData = HmdData;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_6;
		L_6 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		RuntimeObject* L_7 = __this->___HmdData_23;
		NullCheck(L_6);
		HandDataSourceConfig_set_HmdData_m0A05997DA96A459644871953EDE2C9AFA77096F6_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_UpdateData_mA8DF168EF71E61932E148686256CF42FBA3AA5E8 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B7_0 = NULL;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B6_0 = NULL;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B10_0 = NULL;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B9_0 = NULL;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B8_0 = NULL;
	int32_t G_B11_0 = 0;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B14_2 = NULL;
	{
		// _handDataAsset.Config = Config;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_0 = __this->____handDataAsset_24;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_1;
		L_1 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		NullCheck(L_0);
		L_0->___Config_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Config_14), (void*)L_1);
		// _handDataAsset.IsDataValid = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_2 = __this->____handDataAsset_24;
		NullCheck(L_2);
		L_2->___IsDataValid_0 = (bool)1;
		// _handDataAsset.IsConnected = (OVRInput.GetConnectedControllers() & _ovrController) > 0;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_3 = __this->____handDataAsset_24;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = OVRInput_GetConnectedControllers_m4EF5F5C48A11AA32286CB818986AC1BA36F0DE65_inline(NULL);
		int32_t L_5 = __this->____ovrController_25;
		NullCheck(L_3);
		L_3->___IsConnected_1 = (bool)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) > ((int32_t)0))? 1 : 0);
		// if (!_handDataAsset.IsConnected)
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_6 = __this->____handDataAsset_24;
		NullCheck(L_6);
		bool L_7 = L_6->___IsConnected_1;
		if (L_7)
		{
			goto IL_009d;
		}
	}
	{
		// _handDataAsset.IsTracked = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_8 = __this->____handDataAsset_24;
		NullCheck(L_8);
		L_8->___IsTracked_2 = (bool)0;
		// _handDataAsset.RootPoseOrigin = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_9 = __this->____handDataAsset_24;
		NullCheck(L_9);
		L_9->___RootPoseOrigin_4 = 0;
		// _handDataAsset.PointerPoseOrigin = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_10 = __this->____handDataAsset_24;
		NullCheck(L_10);
		L_10->___PointerPoseOrigin_12 = 0;
		// _handDataAsset.IsHighConfidence = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_11 = __this->____handDataAsset_24;
		NullCheck(L_11);
		L_11->___IsHighConfidence_6 = (bool)0;
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		V_3 = 0;
		goto IL_0098;
	}

IL_0078:
	{
		// _handDataAsset.IsFingerPinching[fingerIdx] = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_12 = __this->____handDataAsset_24;
		NullCheck(L_12);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = L_12->___IsFingerPinching_7;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (bool)0);
		// _handDataAsset.IsFingerHighConfidence[fingerIdx] = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_15 = __this->____handDataAsset_24;
		NullCheck(L_15);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = L_15->___IsFingerHighConfidence_8;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (bool)0);
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0098:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)5)))
		{
			goto IL_0078;
		}
	}
	{
		// return;
		return;
	}

IL_009d:
	{
		// _handDataAsset.IsTracked = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_20 = __this->____handDataAsset_24;
		NullCheck(L_20);
		L_20->___IsTracked_2 = (bool)1;
		// _handDataAsset.IsHighConfidence = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_21 = __this->____handDataAsset_24;
		NullCheck(L_21);
		L_21->___IsHighConfidence_6 = (bool)1;
		// _handDataAsset.HandScale = 1f;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_22 = __this->____handDataAsset_24;
		NullCheck(L_22);
		L_22->___HandScale_10 = (1.0f);
		// _handDataAsset.IsDominantHand =
		//     OVRInput.GetDominantHand() == OVRInput.Handedness.LeftHanded
		//     && _handedness == Handedness.Left
		//     || (OVRInput.GetDominantHand() == OVRInput.Handedness.RightHanded
		//         && _handedness == Handedness.Right);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_23 = __this->____handDataAsset_24;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = OVRInput_GetDominantHand_m49F7B8237D73BA6040C3AE9BE7728E7164F4FD49(NULL);
		G_B6_0 = L_23;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			G_B7_0 = L_23;
			goto IL_00db;
		}
	}
	{
		int32_t L_25 = __this->____handedness_19;
		G_B7_0 = G_B6_0;
		if (!L_25)
		{
			G_B10_0 = G_B6_0;
			goto IL_00f1;
		}
	}

IL_00db:
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = OVRInput_GetDominantHand_m49F7B8237D73BA6040C3AE9BE7728E7164F4FD49(NULL);
		G_B8_0 = G_B7_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			G_B9_0 = G_B7_0;
			goto IL_00ee;
		}
	}
	{
		int32_t L_27 = __this->____handedness_19;
		G_B11_0 = ((((int32_t)L_27) == ((int32_t)1))? 1 : 0);
		G_B11_1 = G_B8_0;
		goto IL_00f2;
	}

IL_00ee:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_00f2:
	{
		NullCheck(G_B11_1);
		G_B11_1->___IsDominantHand_13 = (bool)G_B11_0;
		// float indexStrength = _pinchCurve.Evaluate(OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, _ovrController));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = __this->____pinchCurve_13;
		int32_t L_29 = __this->____ovrController_25;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_30;
		L_30 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(1, L_29, NULL);
		NullCheck(L_28);
		float L_31;
		L_31 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_28, L_30, NULL);
		V_0 = L_31;
		// float gripStrength = _pinchCurve.Evaluate(OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, _ovrController));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_32 = __this->____pinchCurve_13;
		int32_t L_33 = __this->____ovrController_25;
		float L_34;
		L_34 = OVRInput_Get_mA7B4373DD73AC43517A18BC88CA2CA812E5D2EAA(4, L_33, NULL);
		NullCheck(L_32);
		float L_35;
		L_35 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_32, L_34, NULL);
		V_1 = L_35;
		// _handDataAsset.IsFingerHighConfidence[(int)HandFinger.Thumb] = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_36 = __this->____handDataAsset_24;
		NullCheck(L_36);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_37 = L_36->___IsFingerHighConfidence_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		// _handDataAsset.IsFingerPinching[(int)HandFinger.Thumb] = indexStrength >= 1f || gripStrength >= 1f;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_38 = __this->____handDataAsset_24;
		NullCheck(L_38);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_39 = L_38->___IsFingerPinching_7;
		float L_40 = V_0;
		G_B12_0 = 0;
		G_B12_1 = L_39;
		if ((((float)L_40) >= ((float)(1.0f))))
		{
			G_B13_0 = 0;
			G_B13_1 = L_39;
			goto IL_0156;
		}
	}
	{
		float L_41 = V_1;
		G_B14_0 = ((((int32_t)((!(((float)L_41) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_0157;
	}

IL_0156:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_0157:
	{
		NullCheck(G_B14_2);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (bool)G_B14_0);
		// _handDataAsset.FingerPinchStrength[(int)HandFinger.Thumb] = Mathf.Max(indexStrength, gripStrength);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_42 = __this->____handDataAsset_24;
		NullCheck(L_42);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = L_42->___FingerPinchStrength_9;
		float L_44 = V_0;
		float L_45 = V_1;
		float L_46;
		L_46 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_44, L_45, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_46);
		// _handDataAsset.IsFingerHighConfidence[(int)HandFinger.Index] = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_47 = __this->____handDataAsset_24;
		NullCheck(L_47);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_48 = L_47->___IsFingerHighConfidence_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (bool)1);
		// _handDataAsset.IsFingerPinching[(int)HandFinger.Index] = indexStrength >= 1f;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_49 = __this->____handDataAsset_24;
		NullCheck(L_49);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_50 = L_49->___IsFingerPinching_7;
		float L_51 = V_0;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (bool)((((int32_t)((!(((float)L_51) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// _handDataAsset.FingerPinchStrength[(int)HandFinger.Index] = indexStrength;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_52 = __this->____handDataAsset_24;
		NullCheck(L_52);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = L_52->___FingerPinchStrength_9;
		float L_54 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_54);
		// _handDataAsset.IsFingerHighConfidence[(int)HandFinger.Middle] = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_55 = __this->____handDataAsset_24;
		NullCheck(L_55);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_56 = L_55->___IsFingerHighConfidence_8;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (bool)1);
		// _handDataAsset.IsFingerPinching[(int)HandFinger.Middle] = gripStrength >= 1f;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_57 = __this->____handDataAsset_24;
		NullCheck(L_57);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_58 = L_57->___IsFingerPinching_7;
		float L_59 = V_1;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (bool)((((int32_t)((!(((float)L_59) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// _handDataAsset.FingerPinchStrength[(int)HandFinger.Middle] = gripStrength;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_60 = __this->____handDataAsset_24;
		NullCheck(L_60);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = L_60->___FingerPinchStrength_9;
		float L_62 = V_1;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_62);
		// _handDataAsset.IsFingerHighConfidence[(int)HandFinger.Ring] = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_63 = __this->____handDataAsset_24;
		NullCheck(L_63);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_64 = L_63->___IsFingerHighConfidence_8;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (bool)1);
		// _handDataAsset.IsFingerPinching[(int)HandFinger.Ring] = gripStrength >= 1f;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_65 = __this->____handDataAsset_24;
		NullCheck(L_65);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_66 = L_65->___IsFingerPinching_7;
		float L_67 = V_1;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(3), (bool)((((int32_t)((!(((float)L_67) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// _handDataAsset.FingerPinchStrength[(int)HandFinger.Ring] = gripStrength;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_68 = __this->____handDataAsset_24;
		NullCheck(L_68);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = L_68->___FingerPinchStrength_9;
		float L_70 = V_1;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_70);
		// _handDataAsset.IsFingerHighConfidence[(int)HandFinger.Pinky] = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_71 = __this->____handDataAsset_24;
		NullCheck(L_71);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_72 = L_71->___IsFingerHighConfidence_8;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (bool)1);
		// _handDataAsset.IsFingerPinching[(int)HandFinger.Pinky] = gripStrength >= 1f;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_73 = __this->____handDataAsset_24;
		NullCheck(L_73);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_74 = L_73->___IsFingerPinching_7;
		float L_75 = V_1;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (bool)((((int32_t)((!(((float)L_75) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// _handDataAsset.FingerPinchStrength[(int)HandFinger.Pinky] = gripStrength;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_76 = __this->____handDataAsset_24;
		NullCheck(L_76);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = L_76->___FingerPinchStrength_9;
		float L_78 = V_1;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(4), (float)L_78);
		// _handDataAsset.PointerPoseOrigin = PoseOrigin.RawTrackedPose;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_79 = __this->____handDataAsset_24;
		NullCheck(L_79);
		L_79->___PointerPoseOrigin_12 = 1;
		// _handDataAsset.PointerPose = new Pose(
		//     OVRInput.GetLocalControllerPosition(_ovrController),
		//     OVRInput.GetLocalControllerRotation(_ovrController));
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_80 = __this->____handDataAsset_24;
		int32_t L_81 = __this->____ovrController_25;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = OVRInput_GetLocalControllerPosition_m5630E056EBDF6BD0A317D19DE90AFC0C80233B69(L_81, NULL);
		int32_t L_83 = __this->____ovrController_25;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		L_84 = OVRInput_GetLocalControllerRotation_mD0D287501357996403558E697CC65161E0B5D51A(L_83, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_85), L_82, L_84, /*hidden argument*/NULL);
		NullCheck(L_80);
		L_80->___PointerPose_11 = L_85;
		// for (int i = 0; i < _bones.Length; i++)
		V_4 = 0;
		goto IL_0299;
	}

IL_0273:
	{
		// _handDataAsset.Joints[i] = _bones[i].localRotation;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_86 = __this->____handDataAsset_24;
		NullCheck(L_86);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_87 = L_86->___Joints_5;
		int32_t L_88 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_89 = __this->____bones_12;
		int32_t L_90 = V_4;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_92, NULL);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_93);
		// for (int i = 0; i < _bones.Length; i++)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0299:
	{
		// for (int i = 0; i < _bones.Length; i++)
		int32_t L_95 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_96 = __this->____bones_12;
		NullCheck(L_96);
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)))))
		{
			goto IL_0273;
		}
	}
	{
		// _handDataAsset.Joints[0] = WristFixupRotation;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_97 = __this->____handDataAsset_24;
		NullCheck(L_97);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_98 = L_97->___Joints_5;
		il2cpp_codegen_runtime_class_init_inline(FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = FromOVRControllerHandDataSource_get_WristFixupRotation_m55A8CE77CB2CFDEB69E8BCCE82A7812660D0E31D_inline(NULL);
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(0), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_99);
		// Pose pose = new Pose(_ovrControllerAnchor.position, _ovrControllerAnchor.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = __this->____ovrControllerAnchor_26;
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_100, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = __this->____ovrControllerAnchor_26;
		NullCheck(L_102);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_103;
		L_103 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_102, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_2), L_101, L_103, NULL);
		// if (Config.TrackingToWorldTransformer != null)
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_104;
		L_104 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline(L_104, NULL);
		if (!L_105)
		{
			goto IL_02f8;
		}
	}
	{
		// pose = Config.TrackingToWorldTransformer.ToTrackingPose(pose);
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_106;
		L_106 = FromOVRControllerHandDataSource_get_Config_mCE4A0965D7B4B3B427B5489A62EDCD907A0AE9D4(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline(L_106, NULL);
		NullCheck(L_107);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_108;
		L_108 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(2 /* UnityEngine.Pose Oculus.Interaction.Input.ITrackingToWorldTransformer::ToTrackingPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute)) */, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var, L_107, (&V_2));
		V_2 = L_108;
	}

IL_02f8:
	{
		// PoseUtils.Multiply(pose, _poseOffset, ref _handDataAsset.Root);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_109 = (&__this->____poseOffset_28);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_110 = __this->____handDataAsset_24;
		NullCheck(L_110);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_111 = (&L_110->___Root_3);
		PoseUtils_Multiply_m77B1C96978D7280D7ECF65A7EE77E98532AB8B8E((&V_2), L_109, L_111, NULL);
		// _handDataAsset.RootPoseOrigin = PoseOrigin.RawTrackedPose;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_112 = __this->____handDataAsset_24;
		NullCheck(L_112);
		L_112->___RootPoseOrigin_4 = 1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectAllFromOVRControllerHandDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<Oculus.Interaction.Input.HandDataAsset>,Oculus.Interaction.Input.IDataSource,Oculus.Interaction.Input.Handedness,Oculus.Interaction.Input.ITrackingToWorldTransformer,Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>,UnityEngine.Transform[],UnityEngine.AnimationCurve,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectAllFromOVRControllerHandDataSource_m071B43354607BB8BA8C5364E47E1233FCD6AABF9 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, int32_t ___handedness2, RuntimeObject* ___trackingToWorldTransformer3, RuntimeObject* ___hmdData4, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___bones5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___pinchCurve6, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootOffset7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootAngleOffset8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InjectAllDataSource(updateMode, updateAfter);
		int32_t L_0 = ___updateMode0;
		RuntimeObject* L_1 = ___updateAfter1;
		DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253(__this, L_0, L_1, DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253_RuntimeMethod_var);
		// InjectHandedness(handedness);
		int32_t L_2 = ___handedness2;
		FromOVRControllerHandDataSource_InjectHandedness_m49BF2D8D79B9352448C8EACFB0B7C023AFE53176_inline(__this, L_2, NULL);
		// InjectTrackingToWorldTransformer(trackingToWorldTransformer);
		RuntimeObject* L_3 = ___trackingToWorldTransformer3;
		FromOVRControllerHandDataSource_InjectTrackingToWorldTransformer_mE0EE309DF883591B827E0CA89F2A36D0A6EEB990(__this, L_3, NULL);
		// InjectHmdData(hmdData);
		RuntimeObject* L_4 = ___hmdData4;
		FromOVRControllerHandDataSource_InjectHmdData_m321D5759C74AED0FD927E673B5C6EAE541075892(__this, L_4, NULL);
		// InjectBones(bones);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = ___bones5;
		FromOVRControllerHandDataSource_InjectBones_m3CF7465457AC661EB4F140BEED7E2C10925BFB83_inline(__this, L_5, NULL);
		// InjectPinchCurve(pinchCurve);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = ___pinchCurve6;
		FromOVRControllerHandDataSource_InjectPinchCurve_mFF0B2A824EC5859E940160B6F8B88312994E3BF4_inline(__this, L_6, NULL);
		// InjectRootOffset(rootOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___rootOffset7;
		FromOVRControllerHandDataSource_InjectRootOffset_m0F2279ABC8294E0C8D134D7F894F3D3B69CCD6E5_inline(__this, L_7, NULL);
		// InjectRootAngleOffset(rootAngleOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___rootAngleOffset8;
		FromOVRControllerHandDataSource_InjectRootAngleOffset_m2A87ACA5AA1A6D791D9DCBC5B7FCA51848BC10EA_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectHandedness(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectHandedness_m49BF2D8D79B9352448C8EACFB0B7C023AFE53176 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// _handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->____handedness_19 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectTrackingToWorldTransformer_mE0EE309DF883591B827E0CA89F2A36D0A6EEB990 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackingToWorldTransformer = trackingToWorldTransformer as MonoBehaviour;
		RuntimeObject* L_0 = ___trackingToWorldTransformer0;
		__this->____trackingToWorldTransformer_20 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackingToWorldTransformer_20), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// TrackingToWorldTransformer = trackingToWorldTransformer;
		RuntimeObject* L_1 = ___trackingToWorldTransformer0;
		__this->___TrackingToWorldTransformer_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_21), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectHmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectHmdData_m321D5759C74AED0FD927E673B5C6EAE541075892 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, RuntimeObject* ___hmdData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hmdData = hmdData as MonoBehaviour;
		RuntimeObject* L_0 = ___hmdData0;
		__this->____hmdData_22 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmdData_22), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HmdData = hmdData;
		RuntimeObject* L_1 = ___hmdData0;
		__this->___HmdData_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HmdData_23), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectBones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectBones_m3CF7465457AC661EB4F140BEED7E2C10925BFB83 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___bones0, const RuntimeMethod* method) 
{
	{
		// _bones = bones;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ___bones0;
		__this->____bones_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bones_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectPinchCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectPinchCurve_mFF0B2A824EC5859E940160B6F8B88312994E3BF4 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___pinchCurve0, const RuntimeMethod* method) 
{
	{
		// _pinchCurve = pinchCurve;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___pinchCurve0;
		__this->____pinchCurve_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinchCurve_13), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectRootOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectRootOffset_m0F2279ABC8294E0C8D134D7F894F3D3B69CCD6E5 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootOffset0, const RuntimeMethod* method) 
{
	{
		// _rootOffset = rootOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___rootOffset0;
		__this->____rootOffset_14 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::InjectRootAngleOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectRootAngleOffset_m2A87ACA5AA1A6D791D9DCBC5B7FCA51848BC10EA (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootAngleOffset0, const RuntimeMethod* method) 
{
	{
		// _rootAngleOffset = rootAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___rootAngleOffset0;
		__this->____rootAngleOffset_15 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource__ctor_mFF93D17FD76BB0D4041BC27AB6B960FE9BCBEF0A (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AnimationCurve _pinchCurve = AnimationCurve.EaseInOut(0.1f, 0f, 0.9f, 1f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15((0.100000001f), (0.0f), (0.899999976f), (1.0f), NULL);
		__this->____pinchCurve_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinchCurve_13), (void*)L_0);
		// private readonly HandDataAsset _handDataAsset = new HandDataAsset();
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_1 = (HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3*)il2cpp_codegen_object_new(HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandDataAsset__ctor_m4B295E8EC3BA9AC265706984717743500B2E17E9(L_1, NULL);
		__this->____handDataAsset_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handDataAsset_24), (void*)L_1);
		DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B(__this, DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource__cctor_m0E8AB6102ED737B24F259682E3EF28EEF3D51887 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new Quaternion(0.0f, 1.0f, 0.0f, 0.0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_0), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var))->___U3CWristFixupRotationU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRControllerHandDataSource::<Start>b__27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_U3CStartU3Eb__27_0_m682B7E755B20C9C907BB1888076EA2AA4E5B7265 (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE(__this, DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.Input.FromOVRHandDataSource::get_ProcessLateUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FromOVRHandDataSource_get_ProcessLateUpdates_m851639EB0AB851A5B25C657B02357D63F9F2F12E (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	{
		// return _processLateUpdates;
		bool L_0 = __this->____processLateUpdates_13;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::set_ProcessLateUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_set_ProcessLateUpdates_m45737D02B9263D7B332A4F05FB1A15B0041684F4 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _processLateUpdates = value;
		bool L_0 = ___value0;
		__this->____processLateUpdates_13 = L_0;
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.FromOVRHandDataSource::get_DataAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* FromOVRHandDataSource_get_DataAsset_m7195406695FFE1DB1118D1CEAA676CD16987C498 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	{
		// protected override HandDataAsset DataAsset => _handDataAsset;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_0 = __this->____handDataAsset_21;
		return L_0;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Input.FromOVRHandDataSource::get_WristFixupRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FromOVRHandDataSource_get_WristFixupRotation_m0CDC8374A1659B878A37E03802B4F55F7683DB92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Quaternion WristFixupRotation { get; } =
		il2cpp_codegen_runtime_class_init_inline(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var))->___U3CWristFixupRotationU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_Awake_m2693984F2C7B8BD938EF23E1C625C628D0C5B2C8 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TrackingToWorldTransformer = _trackingToWorldTransformer as ITrackingToWorldTransformer;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____trackingToWorldTransformer_15;
		__this->___TrackingToWorldTransformer_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_16), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var)));
		// HmdData = _hmdData as IDataSource<HmdDataAsset>;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____hmdData_19;
		__this->___HmdData_20 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HmdData_20), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDataSource_1_tF480A42B5EAEB7D784BC8544380614A779E7BE3A_il2cpp_TypeInfo_var)));
		// CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____cameraRigRef_12;
		__this->___CameraRigRef_26 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CameraRigRef_26), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var)));
		// HandSkeletonProvider = _handSkeletonProvider as IHandSkeletonProvider;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_3 = __this->____handSkeletonProvider_17;
		__this->___HandSkeletonProvider_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandSkeletonProvider_18), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56_il2cpp_TypeInfo_var)));
		// UpdateConfig();
		FromOVRHandDataSource_UpdateConfig_mC2BE466B3760F42F534055E6510DE9DBA7097926(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_Start_m402C9D30C994124BC53F75B35D7BC6DC79B92B8A (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_U3CStartU3Eb__24_0_m4AE416468E841BE53835486BA417E107D006D554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)FromOVRHandDataSource_U3CStartU3Eb__24_0_m4AE416468E841BE53835486BA417E107D006D554_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, L_1, NULL);
		// if (_handedness == Handedness.Left)
		int32_t L_2 = __this->____handedness_14;
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// _ovrHand = CameraRigRef.LeftHand;
		RuntimeObject* L_3 = __this->___CameraRigRef_26;
		NullCheck(L_3);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_4;
		L_4 = InterfaceFuncInvoker0< OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* >::Invoke(1 /* OVRHand Oculus.Interaction.Input.IOVRCameraRigRef::get_LeftHand() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_3);
		__this->____ovrHand_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrHand_22), (void*)L_4);
		// _ovrController = OVRInput.Controller.LHand;
		__this->____ovrController_23 = ((int32_t)32);
		goto IL_0054;
	}

IL_003b:
	{
		// _ovrHand = CameraRigRef.RightHand;
		RuntimeObject* L_5 = __this->___CameraRigRef_26;
		NullCheck(L_5);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_6;
		L_6 = InterfaceFuncInvoker0< OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* >::Invoke(2 /* OVRHand Oculus.Interaction.Input.IOVRCameraRigRef::get_RightHand() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_5);
		__this->____ovrHand_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrHand_22), (void*)L_6);
		// _ovrController = OVRInput.Controller.RHand;
		__this->____ovrController_23 = ((int32_t)64);
	}

IL_0054:
	{
		// UpdateConfig();
		FromOVRHandDataSource_UpdateConfig_mC2BE466B3760F42F534055E6510DE9DBA7097926(__this, NULL);
		// this.EndStart(ref _started);
		bool* L_7 = (&((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_OnEnable_mF2E2F5014D3823A7392354FAB0AAEC1583CBD360 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_HandleInputDataDirtied_m0B8F135AC0F63793E8E199DD43DCD6954B6634EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B(__this, DataSource_1_OnEnable_m695C41F567B556EC72BCD0A53EE95AF2FB17E21B_RuntimeMethod_var);
		// if (_started)
		bool L_0 = ((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied += HandleInputDataDirtied;
		RuntimeObject* L_1 = __this->___CameraRigRef_26;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRHandDataSource_HandleInputDataDirtied_m0B8F135AC0F63793E8E199DD43DCD6954B6634EF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(5 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::add_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_OnDisable_mA77B6DABAA63A3EED003BDF645A7C8A33EBA8596 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_HandleInputDataDirtied_m0B8F135AC0F63793E8E199DD43DCD6954B6634EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = ((DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied -= HandleInputDataDirtied;
		RuntimeObject* L_1 = __this->___CameraRigRef_26;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRHandDataSource_HandleInputDataDirtied_m0B8F135AC0F63793E8E199DD43DCD6954B6634EF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(6 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::remove_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// base.OnDisable();
		DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36(__this, DataSource_1_OnDisable_m000B099FCED809A70D03B0651B144708C6BDFF36_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::HandleInputDataDirtied(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_HandleInputDataDirtied_m0B8F135AC0F63793E8E199DD43DCD6954B6634EF (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, bool ___isLateUpdate0, const RuntimeMethod* method) 
{
	{
		// if (isLateUpdate && !_processLateUpdates)
		bool L_0 = ___isLateUpdate0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = __this->____processLateUpdates_13;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// MarkInputDataRequiresUpdate();
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::MarkInputDataRequiresUpdate() */, __this);
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.FromOVRHandDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_config != null)
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_0 = __this->____config_25;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _config;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_1 = __this->____config_25;
		return L_1;
	}

IL_000f:
	{
		// _config = new HandDataSourceConfig()
		// {
		//     Handedness = _handedness
		// };
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_2 = (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054*)il2cpp_codegen_object_new(HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandDataSourceConfig__ctor_mA41828ACB676B6FB3BD15F8F36853D55C7565EB0(L_2, NULL);
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_3 = L_2;
		int32_t L_4 = __this->____handedness_14;
		NullCheck(L_3);
		HandDataSourceConfig_set_Handedness_m6D4D243AC1A402A05F9674A5115E901EA2C0E85C_inline(L_3, L_4, NULL);
		__this->____config_25 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____config_25), (void*)L_3);
		// return _config;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_5 = __this->____config_25;
		return L_5;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::UpdateConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_UpdateConfig_mC2BE466B3760F42F534055E6510DE9DBA7097926 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Config.Handedness = _handedness;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_0;
		L_0 = FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF(__this, NULL);
		int32_t L_1 = __this->____handedness_14;
		NullCheck(L_0);
		HandDataSourceConfig_set_Handedness_m6D4D243AC1A402A05F9674A5115E901EA2C0E85C_inline(L_0, L_1, NULL);
		// Config.TrackingToWorldTransformer = TrackingToWorldTransformer;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_2;
		L_2 = FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF(__this, NULL);
		RuntimeObject* L_3 = __this->___TrackingToWorldTransformer_16;
		NullCheck(L_2);
		HandDataSourceConfig_set_TrackingToWorldTransformer_m32D9167DF390D900C1C75D774F143CEC05D3326E_inline(L_2, L_3, NULL);
		// Config.HandSkeleton = HandSkeletonProvider[_handedness];
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_4;
		L_4 = FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF(__this, NULL);
		RuntimeObject* L_5 = __this->___HandSkeletonProvider_18;
		int32_t L_6 = __this->____handedness_14;
		NullCheck(L_5);
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_7;
		L_7 = InterfaceFuncInvoker1< HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A*, int32_t >::Invoke(0 /* Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.IHandSkeletonProvider::get_Item(Oculus.Interaction.Input.Handedness) */, IHandSkeletonProvider_tB793450B93BBC4F4324DCEFC159C1F5CEC00FA56_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(L_4);
		HandDataSourceConfig_set_HandSkeleton_m4BF7D11ABA852539E4AA81534AFCAB2E6A1F2F56_inline(L_4, L_7, NULL);
		// Config.HmdData = HmdData;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_8;
		L_8 = FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF(__this, NULL);
		RuntimeObject* L_9 = __this->___HmdData_20;
		NullCheck(L_8);
		HandDataSourceConfig_set_HmdData_m0A05997DA96A459644871953EDE2C9AFA77096F6_inline(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_UpdateData_m490553D07163089BC3A525621CB2CFFC6B087678 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// _handDataAsset.Config = Config;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_0 = __this->____handDataAsset_21;
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_1;
		L_1 = FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF(__this, NULL);
		NullCheck(L_0);
		L_0->___Config_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Config_14), (void*)L_1);
		// _handDataAsset.IsDataValid = true;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_2 = __this->____handDataAsset_21;
		NullCheck(L_2);
		L_2->___IsDataValid_0 = (bool)1;
		// _handDataAsset.IsConnected =
		//     (OVRInput.GetConnectedControllers() & _ovrController) > 0;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_3 = __this->____handDataAsset_21;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = OVRInput_GetConnectedControllers_m4EF5F5C48A11AA32286CB818986AC1BA36F0DE65_inline(NULL);
		int32_t L_5 = __this->____ovrController_23;
		NullCheck(L_3);
		L_3->___IsConnected_1 = (bool)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) > ((int32_t)0))? 1 : 0);
		// if (_ovrHand != null)
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_6 = __this->____ovrHand_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_00b9;
		}
	}
	{
		// IOVRSkeletonDataProvider skeletonProvider = _ovrHand;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_8 = __this->____ovrHand_22;
		// SkeletonPoseData poseData = skeletonProvider.GetSkeletonPoseData();
		NullCheck(L_8);
		SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 L_9;
		L_9 = InterfaceFuncInvoker0< SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 >::Invoke(1 /* OVRSkeleton/SkeletonPoseData OVRSkeleton/IOVRSkeletonDataProvider::GetSkeletonPoseData() */, IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
		// if (poseData.IsDataValid && poseData.RootScale <= 0.0f)
		bool L_10;
		L_10 = SkeletonPoseData_get_IsDataValid_m7C3D29FE3C5F765C05C11DF50F7CCB6F7A5D35DD_inline((&V_0), NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		float L_11;
		L_11 = SkeletonPoseData_get_RootScale_mFCF463E498E2652EE2F3B71C4D54B7801EC0D4F1_inline((&V_0), NULL);
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// if (_lastHandScale <= 0.0f)
		float L_12 = __this->____lastHandScale_24;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// poseData.IsDataValid = false;
		SkeletonPoseData_set_IsDataValid_m3EB469D44C3697FC541F1EB3AADEFAC3EB57AE20_inline((&V_0), (bool)0, NULL);
		goto IL_009b;
	}

IL_007f:
	{
		// poseData.RootScale = _lastHandScale;
		float L_13 = __this->____lastHandScale_24;
		SkeletonPoseData_set_RootScale_m418868BB1AA7A8080B53BEA4E4E72CEA9074D7A7_inline((&V_0), L_13, NULL);
		goto IL_009b;
	}

IL_008e:
	{
		// _lastHandScale = poseData.RootScale;
		float L_14;
		L_14 = SkeletonPoseData_get_RootScale_mFCF463E498E2652EE2F3B71C4D54B7801EC0D4F1_inline((&V_0), NULL);
		__this->____lastHandScale_24 = L_14;
	}

IL_009b:
	{
		// if (poseData.IsDataValid && _handDataAsset.IsConnected)
		bool L_15;
		L_15 = SkeletonPoseData_get_IsDataValid_m7C3D29FE3C5F765C05C11DF50F7CCB6F7A5D35DD_inline((&V_0), NULL);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}
	{
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_16 = __this->____handDataAsset_21;
		NullCheck(L_16);
		bool L_17 = L_16->___IsConnected_1;
		if (!L_17)
		{
			goto IL_00b9;
		}
	}
	{
		// UpdateDataPoses(poseData);
		SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 L_18 = V_0;
		FromOVRHandDataSource_UpdateDataPoses_m0A1E20B1FD4485048D3B4313B23408ED2331025A(__this, L_18, NULL);
		// return;
		return;
	}

IL_00b9:
	{
		// _handDataAsset.IsConnected = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_19 = __this->____handDataAsset_21;
		NullCheck(L_19);
		L_19->___IsConnected_1 = (bool)0;
		// _handDataAsset.IsTracked = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_20 = __this->____handDataAsset_21;
		NullCheck(L_20);
		L_20->___IsTracked_2 = (bool)0;
		// _handDataAsset.RootPoseOrigin = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_21 = __this->____handDataAsset_21;
		NullCheck(L_21);
		L_21->___RootPoseOrigin_4 = 0;
		// _handDataAsset.PointerPoseOrigin = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_22 = __this->____handDataAsset_21;
		NullCheck(L_22);
		L_22->___PointerPoseOrigin_12 = 0;
		// _handDataAsset.IsHighConfidence = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_23 = __this->____handDataAsset_21;
		NullCheck(L_23);
		L_23->___IsHighConfidence_6 = (bool)0;
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		V_1 = 0;
		goto IL_0119;
	}

IL_00f9:
	{
		// _handDataAsset.IsFingerPinching[fingerIdx] = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_24 = __this->____handDataAsset_21;
		NullCheck(L_24);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = L_24->___IsFingerPinching_7;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (bool)0);
		// _handDataAsset.IsFingerHighConfidence[fingerIdx] = default;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_27 = __this->____handDataAsset_21;
		NullCheck(L_27);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = L_27->___IsFingerHighConfidence_8;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (bool)0);
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0119:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) < ((int32_t)5)))
		{
			goto IL_00f9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::UpdateDataPoses(OVRSkeleton/SkeletonPoseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_UpdateDataPoses_m0A1E20B1FD4485048D3B4313B23408ED2331025A (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86 ___poseData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B2_0 = NULL;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* G_B3_1 = NULL;
	int32_t G_B12_0 = 0;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* G_B11_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	int32_t G_B13_1 = 0;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* G_B13_2 = NULL;
	{
		// _handDataAsset.HandScale = poseData.RootScale;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_0 = __this->____handDataAsset_21;
		float L_1;
		L_1 = SkeletonPoseData_get_RootScale_mFCF463E498E2652EE2F3B71C4D54B7801EC0D4F1_inline((&___poseData0), NULL);
		NullCheck(L_0);
		L_0->___HandScale_10 = L_1;
		// _handDataAsset.IsTracked = _ovrHand.IsTracked;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_2 = __this->____handDataAsset_21;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_3 = __this->____ovrHand_22;
		NullCheck(L_3);
		bool L_4;
		L_4 = OVRHand_get_IsTracked_m869AA41C7CC8F224F1CD5A10FF6CD62E6F6BDFDA_inline(L_3, NULL);
		NullCheck(L_2);
		L_2->___IsTracked_2 = L_4;
		// _handDataAsset.IsHighConfidence = poseData.IsDataHighConfidence;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_5 = __this->____handDataAsset_21;
		bool L_6;
		L_6 = SkeletonPoseData_get_IsDataHighConfidence_mA41FF6B1B22AC004AC0502A6EEED5F0E5DD46BDC_inline((&___poseData0), NULL);
		NullCheck(L_5);
		L_5->___IsHighConfidence_6 = L_6;
		// _handDataAsset.IsDominantHand = _ovrHand.IsDominantHand;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_7 = __this->____handDataAsset_21;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_8 = __this->____ovrHand_22;
		NullCheck(L_8);
		bool L_9;
		L_9 = OVRHand_get_IsDominantHand_m27F6ABFDF2E9F717E7EED827AF1867D11CBA415A_inline(L_8, NULL);
		NullCheck(L_7);
		L_7->___IsDominantHand_13 = L_9;
		// _handDataAsset.RootPoseOrigin = _handDataAsset.IsTracked
		//     ? PoseOrigin.RawTrackedPose
		//     : PoseOrigin.None;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_10 = __this->____handDataAsset_21;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_11 = __this->____handDataAsset_21;
		NullCheck(L_11);
		bool L_12 = L_11->___IsTracked_2;
		G_B1_0 = L_10;
		if (L_12)
		{
			G_B2_0 = L_10;
			goto IL_0066;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0067;
	}

IL_0066:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0067:
	{
		NullCheck(G_B3_1);
		G_B3_1->___RootPoseOrigin_4 = G_B3_0;
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		V_1 = 0;
		goto IL_00d2;
	}

IL_0070:
	{
		// var ovrFingerIdx = (OVRHand.HandFinger)fingerIdx;
		int32_t L_13 = V_1;
		V_2 = L_13;
		// bool isPinching = _ovrHand.GetFingerIsPinching(ovrFingerIdx);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_14 = __this->____ovrHand_22;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		bool L_16;
		L_16 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_14, L_15, NULL);
		V_3 = L_16;
		// _handDataAsset.IsFingerPinching[fingerIdx] = isPinching;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_17 = __this->____handDataAsset_21;
		NullCheck(L_17);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18 = L_17->___IsFingerPinching_7;
		int32_t L_19 = V_1;
		bool L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (bool)L_20);
		// bool isHighConfidence =
		//     _ovrHand.GetFingerConfidence(ovrFingerIdx) == OVRHand.TrackingConfidence.High;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_21 = __this->____ovrHand_22;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = OVRHand_GetFingerConfidence_m4A21F2F93A484AA72F34BDDDECA350D69401A3D1(L_21, L_22, NULL);
		V_4 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)1065353216)))? 1 : 0);
		// _handDataAsset.IsFingerHighConfidence[fingerIdx] = isHighConfidence;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_24 = __this->____handDataAsset_21;
		NullCheck(L_24);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = L_24->___IsFingerHighConfidence_8;
		int32_t L_26 = V_1;
		bool L_27 = V_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (bool)L_27);
		// float fingerPinchStrength = _ovrHand.GetFingerPinchStrength(ovrFingerIdx);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_28 = __this->____ovrHand_22;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		float L_30;
		L_30 = OVRHand_GetFingerPinchStrength_mF6517B5CA9FF87146ECDAED8914DE2EFA29BE4E6(L_28, L_29, NULL);
		V_5 = L_30;
		// _handDataAsset.FingerPinchStrength[fingerIdx] = fingerPinchStrength;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_31 = __this->____handDataAsset_21;
		NullCheck(L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31->___FingerPinchStrength_9;
		int32_t L_33 = V_1;
		float L_34 = V_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (float)L_34);
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00d2:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)5)))
		{
			goto IL_0070;
		}
	}
	{
		// _handDataAsset.Root = new Pose()
		// {
		//     position = poseData.RootPose.Position.FromFlippedZVector3f(),
		//     rotation = poseData.RootPose.Orientation.FromFlippedZQuatf()
		// };
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_37 = __this->____handDataAsset_21;
		il2cpp_codegen_initobj((&V_6), sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_38;
		L_38 = SkeletonPoseData_get_RootPose_m80C1C69254FA42D1065FBA827681D934E1B334A1_inline((&___poseData0), NULL);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_39 = L_38.___Position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = OVRExtensions_FromFlippedZVector3f_mBAB3D7B7B97387C15727F15A77BD2B6DE1B5C9A1(L_39, NULL);
		(&V_6)->___position_0 = L_40;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_41;
		L_41 = SkeletonPoseData_get_RootPose_m80C1C69254FA42D1065FBA827681D934E1B334A1_inline((&___poseData0), NULL);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_42 = L_41.___Orientation_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = OVRExtensions_FromFlippedZQuatf_mFCBE64BC455CB946CC4FDBF91959F0E51468E111(L_42, NULL);
		(&V_6)->___rotation_1 = L_43;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44 = V_6;
		NullCheck(L_37);
		L_37->___Root_3 = L_44;
		// if (_ovrHand.IsPointerPoseValid)
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_45 = __this->____ovrHand_22;
		NullCheck(L_45);
		bool L_46;
		L_46 = OVRHand_get_IsPointerPoseValid_m675548AD3E51E67A3F5EF6C47345775E5B1C8B5F_inline(L_45, NULL);
		if (!L_46)
		{
			goto IL_0166;
		}
	}
	{
		// _handDataAsset.PointerPoseOrigin = PoseOrigin.RawTrackedPose;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_47 = __this->____handDataAsset_21;
		NullCheck(L_47);
		L_47->___PointerPoseOrigin_12 = 1;
		// _handDataAsset.PointerPose = new Pose(_ovrHand.PointerPose.localPosition,
		//         _ovrHand.PointerPose.localRotation);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_48 = __this->____handDataAsset_21;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_49 = __this->____ovrHand_22;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline(L_49, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_50, NULL);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_52 = __this->____ovrHand_22;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline(L_52, NULL);
		NullCheck(L_53);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_53, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_55), L_51, L_54, /*hidden argument*/NULL);
		NullCheck(L_48);
		L_48->___PointerPose_11 = L_55;
		goto IL_0172;
	}

IL_0166:
	{
		// _handDataAsset.PointerPoseOrigin = PoseOrigin.None;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_56 = __this->____handDataAsset_21;
		NullCheck(L_56);
		L_56->___PointerPoseOrigin_12 = 0;
	}

IL_0172:
	{
		// var bones = poseData.BoneRotations;
		QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* L_57;
		L_57 = SkeletonPoseData_get_BoneRotations_mACE351DC74E169E3806489E476047373DA10C25E_inline((&___poseData0), NULL);
		V_0 = L_57;
		// for (int i = 0; i < bones.Length; i++)
		V_7 = 0;
		goto IL_01db;
	}

IL_017f:
	{
		// _handDataAsset.Joints[i] = float.IsNaN(bones[i].w)
		//     ? Config.HandSkeleton.joints[i].pose.rotation
		//     : bones[i].FromFlippedXQuatf();
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_58 = __this->____handDataAsset_21;
		NullCheck(L_58);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_59 = L_58->___Joints_5;
		int32_t L_60 = V_7;
		QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* L_61 = V_0;
		int32_t L_62 = V_7;
		NullCheck(L_61);
		float L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___w_3;
		bool L_64;
		L_64 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_63, NULL);
		G_B11_0 = L_60;
		G_B11_1 = L_59;
		if (L_64)
		{
			G_B12_0 = L_60;
			G_B12_1 = L_59;
			goto IL_01af;
		}
	}
	{
		QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* L_65 = V_0;
		int32_t L_66 = V_7;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69;
		L_69 = OVRExtensions_FromFlippedXQuatf_m22AB997CA79C83AB049758C60BD36D7118C9BB05(L_68, NULL);
		G_B13_0 = L_69;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_01d0;
	}

IL_01af:
	{
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_70;
		L_70 = FromOVRHandDataSource_get_Config_m62051F394E930E580F0EE109BABA0F0EC41CE2CF(__this, NULL);
		NullCheck(L_70);
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_71;
		L_71 = HandDataSourceConfig_get_HandSkeleton_m749A8C9530B31B6449F64598D281C6D53A8B2488_inline(L_70, NULL);
		NullCheck(L_71);
		HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* L_72 = L_71->___joints_0;
		int32_t L_73 = V_7;
		NullCheck(L_72);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_74 = (&((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___pose_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75 = L_74->___rotation_1;
		G_B13_0 = L_75;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_01d0:
	{
		NullCheck(G_B13_2);
		(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)G_B13_0);
		// for (int i = 0; i < bones.Length; i++)
		int32_t L_76 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01db:
	{
		// for (int i = 0; i < bones.Length; i++)
		int32_t L_77 = V_7;
		QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* L_78 = V_0;
		NullCheck(L_78);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
		{
			goto IL_017f;
		}
	}
	{
		// _handDataAsset.Joints[0] = WristFixupRotation;
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_79 = __this->____handDataAsset_21;
		NullCheck(L_79);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_80 = L_79->___Joints_5;
		il2cpp_codegen_runtime_class_init_inline(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81;
		L_81 = FromOVRHandDataSource_get_WristFixupRotation_m0CDC8374A1659B878A37E03802B4F55F7683DB92_inline(NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_81);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectAllFromOVRHandDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<Oculus.Interaction.Input.HandDataAsset>,Oculus.Interaction.Input.IDataSource,Oculus.Interaction.Input.Handedness,Oculus.Interaction.Input.ITrackingToWorldTransformer,Oculus.Interaction.Input.IHandSkeletonProvider,Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectAllFromOVRHandDataSource_m5B0A0075C4D4C02B0C9FA1D74F9A24704BA00DBC (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, int32_t ___handedness2, RuntimeObject* ___trackingToWorldTransformer3, RuntimeObject* ___handSkeletonProvider4, RuntimeObject* ___hmdData5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InjectAllDataSource(updateMode, updateAfter);
		int32_t L_0 = ___updateMode0;
		RuntimeObject* L_1 = ___updateAfter1;
		DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253(__this, L_0, L_1, DataSource_1_InjectAllDataSource_mA38066CC13A6A872B6E29B2A23B7CA26701E5253_RuntimeMethod_var);
		// InjectHandedness(handedness);
		int32_t L_2 = ___handedness2;
		FromOVRHandDataSource_InjectHandedness_m0A2CFFFD12F32F429E472E7CCFCF43B01FC6D373_inline(__this, L_2, NULL);
		// InjectTrackingToWorldTransformer(trackingToWorldTransformer);
		RuntimeObject* L_3 = ___trackingToWorldTransformer3;
		FromOVRHandDataSource_InjectTrackingToWorldTransformer_m4C812B31C6F4FB73A18A177588308AF55E32E9EB(__this, L_3, NULL);
		// InjectHandSkeletonProvider(handSkeletonProvider);
		RuntimeObject* L_4 = ___handSkeletonProvider4;
		FromOVRHandDataSource_InjectHandSkeletonProvider_m98B9B404DF74A3773C81A884A8F4880E97C8B73E(__this, L_4, NULL);
		// InjectHmdData(hmdData);
		RuntimeObject* L_5 = ___hmdData5;
		FromOVRHandDataSource_InjectHmdData_m7B4783242EBA82B7650A64B9FA9FB91EAB910D64(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectHandedness(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHandedness_m0A2CFFFD12F32F429E472E7CCFCF43B01FC6D373 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// _handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->____handedness_14 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectTrackingToWorldTransformer_m4C812B31C6F4FB73A18A177588308AF55E32E9EB (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackingToWorldTransformer = trackingToWorldTransformer as MonoBehaviour;
		RuntimeObject* L_0 = ___trackingToWorldTransformer0;
		__this->____trackingToWorldTransformer_15 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackingToWorldTransformer_15), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// TrackingToWorldTransformer = trackingToWorldTransformer;
		RuntimeObject* L_1 = ___trackingToWorldTransformer0;
		__this->___TrackingToWorldTransformer_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_16), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectHandSkeletonProvider(Oculus.Interaction.Input.IHandSkeletonProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHandSkeletonProvider_m98B9B404DF74A3773C81A884A8F4880E97C8B73E (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, RuntimeObject* ___handSkeletonProvider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handSkeletonProvider = handSkeletonProvider as MonoBehaviour;
		RuntimeObject* L_0 = ___handSkeletonProvider0;
		__this->____handSkeletonProvider_17 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handSkeletonProvider_17), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HandSkeletonProvider = handSkeletonProvider;
		RuntimeObject* L_1 = ___handSkeletonProvider0;
		__this->___HandSkeletonProvider_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandSkeletonProvider_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::InjectHmdData(Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HmdDataAsset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHmdData_m7B4783242EBA82B7650A64B9FA9FB91EAB910D64 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, RuntimeObject* ___hmdData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hmdData = hmdData as MonoBehaviour;
		RuntimeObject* L_0 = ___hmdData0;
		__this->____hmdData_19 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmdData_19), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HmdData = hmdData;
		RuntimeObject* L_1 = ___hmdData0;
		__this->___HmdData_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HmdData_20), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource__ctor_m1BCB30129AC6C3D3A860FAC898123F6685CBC832 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HandDataAsset _handDataAsset = new HandDataAsset();
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_0 = (HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3*)il2cpp_codegen_object_new(HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandDataAsset__ctor_m4B295E8EC3BA9AC265706984717743500B2E17E9(L_0, NULL);
		__this->____handDataAsset_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handDataAsset_21), (void*)L_0);
		DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B(__this, DataSource_1__ctor_m994E961FFCEF2747409FAFB1434CB0F01D1FB96B_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource__cctor_m30064FBA7DC59EDE5FEAB756B291F93D4D630925 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new Quaternion(0.0f, 1.0f, 0.0f, 0.0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_0), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var))->___U3CWristFixupRotationU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHandDataSource::<Start>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHandDataSource_U3CStartU3Eb__24_0_m4AE416468E841BE53835486BA417E107D006D554 (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE(__this, DataSource_1_Start_mABC46B1BBF1EC7635CBC6DBF5A1F3A4E5A08B2AE_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.FromOVRHmdDataSource::get_CameraRigRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FromOVRHmdDataSource_get_CameraRigRef_m9701F8D26583D60BF41D866E77293BAD713FA800 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCameraRigRefU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::set_CameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_set_CameraRigRef_mF7F1292CCD53BFD490169C7292E43482B0439CDD (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCameraRigRefU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraRigRefU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.Input.FromOVRHmdDataSource::get_ProcessLateUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FromOVRHmdDataSource_get_ProcessLateUpdates_mE04DAAF8178D3ED9184F047B2AB1A39B0B7B23A0 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	{
		// return _processLateUpdates;
		bool L_0 = __this->____processLateUpdates_14;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::set_ProcessLateUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_set_ProcessLateUpdates_m7E5F6A1CFFE4B1E8386036D19B6CB710B196EDA0 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _processLateUpdates = value;
		bool L_0 = ___value0;
		__this->____processLateUpdates_14 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_Awake_m66A411D11A0F63CAF0FB3D04B39A6AAD27825E89 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____cameraRigRef_12;
		FromOVRHmdDataSource_set_CameraRigRef_mF7F1292CCD53BFD490169C7292E43482B0439CDD_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var)), NULL);
		// TrackingToWorldTransformer = _trackingToWorldTransformer as ITrackingToWorldTransformer;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____trackingToWorldTransformer_16;
		__this->___TrackingToWorldTransformer_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_17), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_Start_mF45DA31B7B349052FA2600DB556DCE7B945E8F1A (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHmdDataSource_U3CStartU3Eb__15_0_m3B3878DDDF1148FA81E635F9FBBDDBEBB4B7A8CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((DataSource_1_t43863080B32A3078810E52A6590829D07D453583*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)FromOVRHmdDataSource_U3CStartU3Eb__15_0_m3B3878DDDF1148FA81E635F9FBBDDBEBB4B7A8CD_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, L_1, NULL);
		// this.EndStart(ref _started);
		bool* L_2 = (&((DataSource_1_t43863080B32A3078810E52A6590829D07D453583*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_OnEnable_m9E64F48408F2A4F82C2917F2037A1A3EA3A54B22 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnEnable_mA19EB4C9B1B8437DC989BD91310F584A88551C90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHmdDataSource_HandleInputDataDirtied_m14AA5466E2B650B6B6AC27E81054A0D309CAB5D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		DataSource_1_OnEnable_mA19EB4C9B1B8437DC989BD91310F584A88551C90(__this, DataSource_1_OnEnable_mA19EB4C9B1B8437DC989BD91310F584A88551C90_RuntimeMethod_var);
		// if (_started)
		bool L_0 = ((DataSource_1_t43863080B32A3078810E52A6590829D07D453583*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied += HandleInputDataDirtied;
		RuntimeObject* L_1;
		L_1 = FromOVRHmdDataSource_get_CameraRigRef_m9701F8D26583D60BF41D866E77293BAD713FA800_inline(__this, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRHmdDataSource_HandleInputDataDirtied_m14AA5466E2B650B6B6AC27E81054A0D309CAB5D9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(5 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::add_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_OnDisable_mFB8CBBAEB1B3338FC285AEDF4EFE6258A32B567C (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_OnDisable_mF1B627104F56C9FF19B3E5576F8A52CB24C8C478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHmdDataSource_HandleInputDataDirtied_m14AA5466E2B650B6B6AC27E81054A0D309CAB5D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = ((DataSource_1_t43863080B32A3078810E52A6590829D07D453583*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// CameraRigRef.WhenInputDataDirtied -= HandleInputDataDirtied;
		RuntimeObject* L_1;
		L_1 = FromOVRHmdDataSource_get_CameraRigRef_m9701F8D26583D60BF41D866E77293BAD713FA800_inline(__this, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)FromOVRHmdDataSource_HandleInputDataDirtied_m14AA5466E2B650B6B6AC27E81054A0D309CAB5D9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(6 /* System.Void Oculus.Interaction.Input.IOVRCameraRigRef::remove_WhenInputDataDirtied(System.Action`1<System.Boolean>) */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// base.OnDisable();
		DataSource_1_OnDisable_mF1B627104F56C9FF19B3E5576F8A52CB24C8C478(__this, DataSource_1_OnDisable_mF1B627104F56C9FF19B3E5576F8A52CB24C8C478_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::HandleInputDataDirtied(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_HandleInputDataDirtied_m14AA5466E2B650B6B6AC27E81054A0D309CAB5D9 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, bool ___isLateUpdate0, const RuntimeMethod* method) 
{
	{
		// if (isLateUpdate && !_processLateUpdates)
		bool L_0 = ___isLateUpdate0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = __this->____processLateUpdates_14;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// MarkInputDataRequiresUpdate();
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HmdDataAsset>::MarkInputDataRequiresUpdate() */, __this);
		// }
		return;
	}
}
// Oculus.Interaction.Input.HmdDataSourceConfig Oculus.Interaction.Input.FromOVRHmdDataSource::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* FromOVRHmdDataSource_get_Config_m07BC652804E928436AF209955AC55FCD4FDDA645 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_config != null)
		HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* L_0 = __this->____config_19;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _config;
		HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* L_1 = __this->____config_19;
		return L_1;
	}

IL_000f:
	{
		// _config = new HmdDataSourceConfig()
		// {
		//     TrackingToWorldTransformer = TrackingToWorldTransformer
		// };
		HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* L_2 = (HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F*)il2cpp_codegen_object_new(HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HmdDataSourceConfig__ctor_mD83D5EA81D238BBFDE57C635A044401E8F735C43(L_2, NULL);
		HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* L_3 = L_2;
		RuntimeObject* L_4 = __this->___TrackingToWorldTransformer_17;
		NullCheck(L_3);
		HmdDataSourceConfig_set_TrackingToWorldTransformer_m16678A152AEFFFE83CF6FB6222C49A30EC6FAB75_inline(L_3, L_4, NULL);
		__this->____config_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____config_19), (void*)L_3);
		// return _config;
		HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* L_5 = __this->____config_19;
		return L_5;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_UpdateData_m1DB5CC920E858C5788A0B99A7955B12D44560C1C (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRNodeStateProperties_tE41A5F7393D4FB967D6062A0A2DBE4F3A24350BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _hmdDataAsset.Config = Config;
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_0 = __this->____hmdDataAsset_18;
		HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* L_1;
		L_1 = FromOVRHmdDataSource_get_Config_m07BC652804E928436AF209955AC55FCD4FDDA645(__this, NULL);
		NullCheck(L_0);
		L_0->___Config_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Config_3), (void*)L_1);
		// bool hmdPresent = OVRNodeStateProperties.IsHmdPresent();
		il2cpp_codegen_runtime_class_init_inline(OVRNodeStateProperties_tE41A5F7393D4FB967D6062A0A2DBE4F3A24350BC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = OVRNodeStateProperties_IsHmdPresent_m7ACB316D37EDFFCEF6AB24503AD8F4C7FA5E1A5B(NULL);
		V_0 = L_2;
		// ref var centerEyePose = ref _hmdDataAsset.Root;
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_3 = __this->____hmdDataAsset_18;
		NullCheck(L_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&L_3->___Root_0);
		V_1 = L_4;
		// if (_useOvrManagerEmulatedPose)
		bool L_5 = __this->____useOvrManagerEmulatedPose_15;
		if (!L_5)
		{
			goto IL_007b;
		}
	}
	{
		// Quaternion emulatedRotation = Quaternion.Euler(
		//     -OVRManager.instance.headPoseRelativeOffsetRotation.x,
		//     -OVRManager.instance.headPoseRelativeOffsetRotation.y,
		//     OVRManager.instance.headPoseRelativeOffsetRotation.z);
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_6;
		L_6 = OVRManager_get_instance_mD4D2BEB818DA7BFC5DA79F80E6768804A896EE10_inline(NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline(L_6, NULL);
		float L_8 = L_7.___x_2;
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_9;
		L_9 = OVRManager_get_instance_mD4D2BEB818DA7BFC5DA79F80E6768804A896EE10_inline(NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline(L_9, NULL);
		float L_11 = L_10.___y_3;
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_12;
		L_12 = OVRManager_get_instance_mD4D2BEB818DA7BFC5DA79F80E6768804A896EE10_inline(NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline(L_12, NULL);
		float L_14 = L_13.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((-L_8)), ((-L_11)), L_14, NULL);
		V_2 = L_15;
		// centerEyePose.rotation = emulatedRotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_2;
		L_16->___rotation_1 = L_17;
		// centerEyePose.position = OVRManager.instance.headPoseRelativeOffsetTranslation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = V_1;
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_19;
		L_19 = OVRManager_get_instance_mD4D2BEB818DA7BFC5DA79F80E6768804A896EE10_inline(NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline(L_19, NULL);
		L_18->___position_0 = L_20;
		// hmdPresent = true;
		V_0 = (bool)1;
		goto IL_00e0;
	}

IL_007b:
	{
		// var previousEyePose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		V_3 = L_21;
		// if (_hmdDataAsset.IsTracked)
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_22 = __this->____hmdDataAsset_18;
		NullCheck(L_22);
		bool L_23 = L_22->___IsTracked_1;
		if (!L_23)
		{
			goto IL_009a;
		}
	}
	{
		// previousEyePose = _hmdDataAsset.Root;
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_24 = __this->____hmdDataAsset_18;
		NullCheck(L_24);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_25 = L_24->___Root_0;
		V_3 = L_25;
	}

IL_009a:
	{
		// if (hmdPresent)
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00d9;
		}
	}
	{
		// if (!OVRNodeStateProperties.GetNodeStatePropertyVector3(XRNode.CenterEye,
		//     NodeStatePropertyType.Position, OVRPlugin.Node.EyeCenter,
		//     OVRPlugin.Step.Render, out centerEyePose.position))
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&L_27->___position_0);
		il2cpp_codegen_runtime_class_init_inline(OVRNodeStateProperties_tE41A5F7393D4FB967D6062A0A2DBE4F3A24350BC_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = OVRNodeStateProperties_GetNodeStatePropertyVector3_m40CA506AC8F2D5F402FBA3AAE2059110B8656940(2, 4, 2, (-1), L_28, NULL);
		if (L_29)
		{
			goto IL_00ba;
		}
	}
	{
		// centerEyePose.position = previousEyePose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_31 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_31.___position_0;
		L_30->___position_0 = L_32;
	}

IL_00ba:
	{
		// if (!OVRNodeStateProperties.GetNodeStatePropertyQuaternion(XRNode.CenterEye,
		//     NodeStatePropertyType.Orientation, OVRPlugin.Node.EyeCenter,
		//     OVRPlugin.Step.Render, out centerEyePose.rotation))
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_34 = (&L_33->___rotation_1);
		il2cpp_codegen_runtime_class_init_inline(OVRNodeStateProperties_tE41A5F7393D4FB967D6062A0A2DBE4F3A24350BC_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m1FFBED819E7AA22BDB65F27FE466C2807DE2768A(2, 5, 2, (-1), L_34, NULL);
		if (L_35)
		{
			goto IL_00e0;
		}
	}
	{
		// centerEyePose.rotation = previousEyePose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_36 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_37 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = L_37.___rotation_1;
		L_36->___rotation_1 = L_38;
		goto IL_00e0;
	}

IL_00d9:
	{
		// centerEyePose = previousEyePose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_39 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_40 = V_3;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_39 = L_40;
	}

IL_00e0:
	{
		// _hmdDataAsset.IsTracked = hmdPresent;
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_41 = __this->____hmdDataAsset_18;
		bool L_42 = V_0;
		NullCheck(L_41);
		L_41->___IsTracked_1 = L_42;
		// _hmdDataAsset.FrameId = Time.frameCount;
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_43 = __this->____hmdDataAsset_18;
		int32_t L_44;
		L_44 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		NullCheck(L_43);
		L_43->___FrameId_2 = L_44;
		// }
		return;
	}
}
// Oculus.Interaction.Input.HmdDataAsset Oculus.Interaction.Input.FromOVRHmdDataSource::get_DataAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* FromOVRHmdDataSource_get_DataAsset_m341254ECD4CD4976F42A304DC852FECEE454F680 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	{
		// protected override HmdDataAsset DataAsset => _hmdDataAsset;
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_0 = __this->____hmdDataAsset_18;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::InjectAllFromOVRHmdDataSource(Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<Oculus.Interaction.Input.HmdDataAsset>,Oculus.Interaction.Input.IDataSource,System.Boolean,Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_InjectAllFromOVRHmdDataSource_m15AB72F08A1F7CF48DA06989F1F4289A123A6DCB (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, int32_t ___updateMode0, RuntimeObject* ___updateAfter1, bool ___useOvrManagerEmulatedPose2, RuntimeObject* ___trackingToWorldTransformer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_InjectAllDataSource_m0A129B63BA4AE69ED3B9BA0D77F0F716C0695D86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InjectAllDataSource(updateMode, updateAfter);
		int32_t L_0 = ___updateMode0;
		RuntimeObject* L_1 = ___updateAfter1;
		DataSource_1_InjectAllDataSource_m0A129B63BA4AE69ED3B9BA0D77F0F716C0695D86(__this, L_0, L_1, DataSource_1_InjectAllDataSource_m0A129B63BA4AE69ED3B9BA0D77F0F716C0695D86_RuntimeMethod_var);
		// InjectUseOvrManagerEmulatedPose(useOvrManagerEmulatedPose);
		bool L_2 = ___useOvrManagerEmulatedPose2;
		FromOVRHmdDataSource_InjectUseOvrManagerEmulatedPose_m09200B01D452610D27E55B79E05CBCD86C53B1DD_inline(__this, L_2, NULL);
		// InjectTrackingToWorldTransformer(trackingToWorldTransformer);
		RuntimeObject* L_3 = ___trackingToWorldTransformer3;
		FromOVRHmdDataSource_InjectTrackingToWorldTransformer_m5BD5A0AA3199E19046AF96B45246C8BD68BCAFF9(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::InjectUseOvrManagerEmulatedPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_InjectUseOvrManagerEmulatedPose_m09200B01D452610D27E55B79E05CBCD86C53B1DD (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, bool ___useOvrManagerEmulatedPose0, const RuntimeMethod* method) 
{
	{
		// _useOvrManagerEmulatedPose = useOvrManagerEmulatedPose;
		bool L_0 = ___useOvrManagerEmulatedPose0;
		__this->____useOvrManagerEmulatedPose_15 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::InjectTrackingToWorldTransformer(Oculus.Interaction.Input.ITrackingToWorldTransformer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_InjectTrackingToWorldTransformer_m5BD5A0AA3199E19046AF96B45246C8BD68BCAFF9 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, RuntimeObject* ___trackingToWorldTransformer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackingToWorldTransformer = trackingToWorldTransformer as MonoBehaviour;
		RuntimeObject* L_0 = ___trackingToWorldTransformer0;
		__this->____trackingToWorldTransformer_16 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackingToWorldTransformer_16), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// TrackingToWorldTransformer = trackingToWorldTransformer;
		RuntimeObject* L_1 = ___trackingToWorldTransformer0;
		__this->___TrackingToWorldTransformer_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TrackingToWorldTransformer_17), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource__ctor_m92DF09EC8A3BA8252E2F1CE146E501BFFB33B163 (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1__ctor_m1560EBA9AE56AFEA520462114662B2DF46F6EF5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HmdDataAsset _hmdDataAsset = new HmdDataAsset();
		HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED* L_0 = (HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED*)il2cpp_codegen_object_new(HmdDataAsset_tD78CD64BF92E02FF803F48F1CD8B1B6476167EED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HmdDataAsset__ctor_m118A2075F8D66D12D12C6ED6C8B335C604CBFF27(L_0, NULL);
		__this->____hmdDataAsset_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmdDataAsset_18), (void*)L_0);
		DataSource_1__ctor_m1560EBA9AE56AFEA520462114662B2DF46F6EF5C(__this, DataSource_1__ctor_m1560EBA9AE56AFEA520462114662B2DF46F6EF5C_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.Input.FromOVRHmdDataSource::<Start>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_U3CStartU3Eb__15_0_m3B3878DDDF1148FA81E635F9FBBDDBEBB4B7A8CD (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_Start_m09DBE0DB15E616C56C4B990647E00B86C13CB270_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		DataSource_1_Start_m09DBE0DB15E616C56C4B990647E00B86C13CB270(__this, DataSource_1_Start_m09DBE0DB15E616C56C4B990647E00B86C13CB270_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandSkeletonOVR::get_Item(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* HandSkeletonOVR_get_Item_m20FD26CE5973A0F59AFD8843B2F374F566C2ECD0 (HandSkeletonOVR_t996D4212C7D93C00A7A400C055C056FE09CE8BD1* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// public HandSkeleton this[Handedness handedness] => _skeletons[(int)handedness];
		HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* L_0 = __this->____skeletons_4;
		int32_t L_1 = ___handedness0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Oculus.Interaction.Input.HandSkeletonOVR::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandSkeletonOVR_Awake_mA0C738D159835D9B7A869317EA820A8559062899 (HandSkeletonOVR_t996D4212C7D93C00A7A400C055C056FE09CE8BD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApplyToSkeleton(OVRSkeletonData.LeftSkeleton, _skeletons[0]);
		il2cpp_codegen_runtime_class_init_inline(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var);
		HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* L_0 = __this->____skeletons_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		HandSkeletonOVR_ApplyToSkeleton_mCA0A0B26DFA7E53626DCAED6FF0016D9E9C3B61E((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___LeftSkeleton_0), L_2, NULL);
		// ApplyToSkeleton(OVRSkeletonData.RightSkeleton, _skeletons[1]);
		HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* L_3 = __this->____skeletons_4;
		NullCheck(L_3);
		int32_t L_4 = 1;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		HandSkeletonOVR_ApplyToSkeleton_mCA0A0B26DFA7E53626DCAED6FF0016D9E9C3B61E((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___RightSkeleton_1), L_5, NULL);
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandSkeletonOVR::CreateSkeletonData(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* HandSkeletonOVR_CreateSkeletonData_m594DC5C390907A0C64E645E22B5246869DC72248 (int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* V_0 = NULL;
	{
		// HandSkeleton handSkeleton = new HandSkeleton();
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_0 = (HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A*)il2cpp_codegen_object_new(HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandSkeleton__ctor_mD8F0C35BB9A78E5048BDC992C7F017BE9BFD0CA7(L_0, NULL);
		V_0 = L_0;
		// if (handedness == Handedness.Left)
		int32_t L_1 = ___handedness0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// ApplyToSkeleton(OVRSkeletonData.LeftSkeleton, handSkeleton);
		il2cpp_codegen_runtime_class_init_inline(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var);
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_2 = V_0;
		HandSkeletonOVR_ApplyToSkeleton_mCA0A0B26DFA7E53626DCAED6FF0016D9E9C3B61E((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___LeftSkeleton_0), L_2, NULL);
		goto IL_0021;
	}

IL_0016:
	{
		// ApplyToSkeleton(OVRSkeletonData.RightSkeleton, handSkeleton);
		il2cpp_codegen_runtime_class_init_inline(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var);
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_3 = V_0;
		HandSkeletonOVR_ApplyToSkeleton_mCA0A0B26DFA7E53626DCAED6FF0016D9E9C3B61E((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___RightSkeleton_1), L_3, NULL);
	}

IL_0021:
	{
		// return handSkeleton;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_4 = V_0;
		return L_4;
	}
}
// System.Void Oculus.Interaction.Input.HandSkeletonOVR::ApplyToSkeleton(OVRPlugin/Skeleton2&,Oculus.Interaction.Input.HandSkeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandSkeletonOVR_ApplyToSkeleton_mCA0A0B26DFA7E53626DCAED6FF0016D9E9C3B61E (Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F* ___ovrSkeleton0, HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___handSkeleton1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CApplyToSkeletonU3Eb__0_mFDF5988F401DB10F65B02B9803521EA588CE1B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* V_2 = NULL;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float G_B8_0 = 0.0f;
	{
		// int numJoints = handSkeleton.joints.Length;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_0 = ___handSkeleton1;
		NullCheck(L_0);
		HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* L_1 = L_0->___joints_0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// for (int i = 0; i < numJoints; ++i)
		V_1 = 0;
		goto IL_00f2;
	}

IL_0010:
	{
		U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* L_2 = (U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass5_0__ctor_m42554D359DA9FB4659D09B2E4D6F3E52C3B19F67(L_2, NULL);
		V_2 = L_2;
		// ref var srcPose = ref ovrSkeleton.Bones[i].Pose;
		Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F* L_3 = ___ovrSkeleton0;
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_4 = L_3->___Bones_3;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61* L_6 = (&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___Pose_2);
		V_3 = L_6;
		// int boneIndex = i;
		U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* L_7 = V_2;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		L_7->___boneIndex_0 = L_8;
		// if (i == (int)HandJointId.HandThumb0)
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_003c;
		}
	}
	{
		// boneIndex = (int)HandJointId.HandThumb1;
		U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* L_10 = V_2;
		NullCheck(L_10);
		L_10->___boneIndex_0 = 3;
		goto IL_0049;
	}

IL_003c:
	{
		// else if (i == (int)HandJointId.HandPinky0)
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0049;
		}
	}
	{
		// boneIndex = (int)HandJointId.HandPinky1;
		U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* L_12 = V_2;
		NullCheck(L_12);
		L_12->___boneIndex_0 = ((int32_t)16);
	}

IL_0049:
	{
		// int capsuleIndex = System.Array.FindIndex(ovrSkeleton.BoneCapsules, c => c.BoneIndex == boneIndex);
		Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F* L_13 = ___ovrSkeleton0;
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_14 = L_13->___BoneCapsules_4;
		U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* L_15 = V_2;
		Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1* L_16 = (Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1*)il2cpp_codegen_object_new(Predicate_1_tA9EAD6C541352D6E88E6F5EE734E87AE8BF7DCF1_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Predicate_1__ctor_m23D83BABAD74D8AC55D02DD00E6312E7C26027EC(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CApplyToSkeletonU3Eb__0_mFDF5988F401DB10F65B02B9803521EA588CE1B5B_RuntimeMethod_var), NULL);
		int32_t L_17;
		L_17 = Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A(L_14, L_16, Array_FindIndex_TisBoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74_m50E1C44EA960C2C569E0741B5CB1A98FD11A185A_RuntimeMethod_var);
		V_4 = L_17;
		// float radius = capsuleIndex < 0 ? 0f : ovrSkeleton.BoneCapsules[capsuleIndex].Radius;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F* L_19 = ___ovrSkeleton0;
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_20 = L_19->___BoneCapsules_4;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Radius_3;
		G_B8_0 = L_22;
		goto IL_0080;
	}

IL_007b:
	{
		G_B8_0 = (0.0f);
	}

IL_0080:
	{
		V_5 = G_B8_0;
		// handSkeleton.joints[i] = new HandSkeletonJoint()
		// {
		//     pose = new Pose()
		//     {
		//         position = srcPose.Position.FromFlippedXVector3f(),
		//         rotation = srcPose.Orientation.FromFlippedXQuatf()
		//     },
		//     parent = ovrSkeleton.Bones[i].ParentBoneIndex,
		//     radius = radius
		// };
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_23 = ___handSkeleton1;
		NullCheck(L_23);
		HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* L_24 = L_23->___joints_0;
		int32_t L_25 = V_1;
		il2cpp_codegen_initobj((&V_6), sizeof(HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50));
		il2cpp_codegen_initobj((&V_7), sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61* L_26 = V_3;
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_27 = L_26->___Position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = OVRExtensions_FromFlippedXVector3f_mCF64073D3FC08B769D9069DA074A652DC3F71175(L_27, NULL);
		(&V_7)->___position_0 = L_28;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61* L_29 = V_3;
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_30 = L_29->___Orientation_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = OVRExtensions_FromFlippedXQuatf_m22AB997CA79C83AB049758C60BD36D7118C9BB05(L_30, NULL);
		(&V_7)->___rotation_1 = L_31;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32 = V_7;
		(&V_6)->___pose_1 = L_32;
		Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F* L_33 = ___ovrSkeleton0;
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_34 = L_33->___Bones_3;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int16_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___ParentBoneIndex_1;
		(&V_6)->___parent_0 = L_36;
		float L_37 = V_5;
		(&V_6)->___radius_2 = L_37;
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_38 = V_6;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50)L_38);
		// for (int i = 0; i < numJoints; ++i)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00f2:
	{
		// for (int i = 0; i < numJoints; ++i)
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.HandSkeletonOVR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandSkeletonOVR__ctor_mD1147F36DC5A85AF8F4A09FBB2B91AFCED969858 (HandSkeletonOVR_t996D4212C7D93C00A7A400C055C056FE09CE8BD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HandSkeleton[] _skeletons = { new HandSkeleton(), new HandSkeleton() };
		HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* L_0 = (HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8*)(HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8*)SZArrayNew(HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8_il2cpp_TypeInfo_var, (uint32_t)2);
		HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* L_1 = L_0;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_2 = (HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A*)il2cpp_codegen_object_new(HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandSkeleton__ctor_mD8F0C35BB9A78E5048BDC992C7F017BE9BFD0CA7(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A*)L_2);
		HandSkeletonU5BU5D_tFA06444E9B00A9A2A0BCEBD88AD4E1BCAFAB30C8* L_3 = L_1;
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_4 = (HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A*)il2cpp_codegen_object_new(HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HandSkeleton__ctor_mD8F0C35BB9A78E5048BDC992C7F017BE9BFD0CA7(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A*)L_4);
		__this->____skeletons_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____skeletons_4), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m42554D359DA9FB4659D09B2E4D6F3E52C3B19F67 (U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass5_0::<ApplyToSkeleton>b__0(OVRPlugin/BoneCapsule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CApplyToSkeletonU3Eb__0_mFDF5988F401DB10F65B02B9803521EA588CE1B5B (U3CU3Ec__DisplayClass5_0_t61F8E38DF002BDDD4D61776E9AA38E3C1BB21895* __this, BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 ___c0, const RuntimeMethod* method) 
{
	{
		// int capsuleIndex = System.Array.FindIndex(ovrSkeleton.BoneCapsules, c => c.BoneIndex == boneIndex);
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_0 = ___c0;
		int16_t L_1 = L_0.___BoneIndex_0;
		int32_t L_2 = __this->___boneIndex_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// OVRCameraRig Oculus.Interaction.Input.OVRCameraRigRef::get_CameraRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* OVRCameraRigRef_get_CameraRig_mBA6A96863C9DA3F9056645D33E18145A12962CD9 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// public OVRCameraRig CameraRig => _ovrCameraRig;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____ovrCameraRig_4;
		return L_0;
	}
}
// OVRHand Oculus.Interaction.Input.OVRCameraRigRef::get_LeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* OVRCameraRigRef_get_LeftHand_mF29F31FC8E074732C959C2D3F2AD662B56122A77 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// public OVRHand LeftHand => GetHandCached(ref _leftHand, _ovrCameraRig.leftHandAnchor);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** L_0 = (&__this->____leftHand_6);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_1 = __this->____ovrCameraRig_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline(L_1, NULL);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_3;
		L_3 = OVRCameraRigRef_GetHandCached_mBE75C8E398359CFE0150C12767F56172853658E5(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// OVRHand Oculus.Interaction.Input.OVRCameraRigRef::get_RightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* OVRCameraRigRef_get_RightHand_mCB7C152272CF5D305C3F921B7494EF175BF67AA7 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// public OVRHand RightHand => GetHandCached(ref _rightHand, _ovrCameraRig.rightHandAnchor);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** L_0 = (&__this->____rightHand_7);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_1 = __this->____ovrCameraRig_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = OVRCameraRig_get_rightHandAnchor_mF2D328A04338A8119F3BE6EE09FE66965258A26D_inline(L_1, NULL);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_3;
		L_3 = OVRCameraRigRef_GetHandCached_mBE75C8E398359CFE0150C12767F56172853658E5(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Transform Oculus.Interaction.Input.OVRCameraRigRef::get_LeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRigRef_get_LeftController_m8859AE4C6C30830FDE3664F304100AC9111E57E3 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// public Transform LeftController => _ovrCameraRig.leftControllerAnchor;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____ovrCameraRig_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = OVRCameraRig_get_leftControllerAnchor_m0757202E2FCE3F39E1E8E8A1CFABFB1645596538_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Transform Oculus.Interaction.Input.OVRCameraRigRef::get_RightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRigRef_get_RightController_mECA3D4EBEF423D9B0888448BEE4637DFD98A7328 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// public Transform RightController => _ovrCameraRig.rightControllerAnchor;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____ovrCameraRig_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::add_WhenInputDataDirtied(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_add_WhenInputDataDirtied_mDC434DE4A9CA515E24C8A583D5E3A54B033015CE (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___WhenInputDataDirtied_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___WhenInputDataDirtied_8);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::remove_WhenInputDataDirtied(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_remove_WhenInputDataDirtied_m754F5EA46184B2BEEB189F91BCBD7DDE83C3A4B2 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___WhenInputDataDirtied_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___WhenInputDataDirtied_8);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_Start_m8AD9FA46EA3EEE1D02B79CE1CCC6D2E2FCAFE702 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_9);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_9);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_FixedUpdate_mAECE4F46652FA30171C4DF315887062C5BA9FF27 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// _isLateUpdate = false;
		__this->____isLateUpdate_10 = (bool)0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_Update_m66DC649403A11F49080979FBE15B76CDB23F2AC3 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// _isLateUpdate = false;
		__this->____isLateUpdate_10 = (bool)0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_LateUpdate_m5938AD077AF317AC0177EA3A162599870B6549EF (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// _isLateUpdate = true;
		__this->____isLateUpdate_10 = (bool)1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_OnEnable_mFE90843F31B1FF9E605413959815FB8198578399 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRCameraRigRef_HandleInputDataDirtied_m84A927FABA960B4070DB030F97A9888AD589448B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_9;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// CameraRig.UpdatedAnchors += HandleInputDataDirtied;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_1;
		L_1 = OVRCameraRigRef_get_CameraRig_mBA6A96863C9DA3F9056645D33E18145A12962CD9_inline(__this, NULL);
		Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* L_2 = (Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F*)il2cpp_codegen_object_new(Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m992ECB87E90C3F7EC7889339CEA48B40EDEC5160(L_2, __this, (intptr_t)((void*)OVRCameraRigRef_HandleInputDataDirtied_m84A927FABA960B4070DB030F97A9888AD589448B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		OVRCameraRig_add_UpdatedAnchors_m7F37F5EAA0B3AF5C4D14BAB445F7249AC5886FC7(L_1, L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_OnDisable_m8D58C65F0810159559A08DF8663B4C42CD945D93 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRCameraRigRef_HandleInputDataDirtied_m84A927FABA960B4070DB030F97A9888AD589448B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_9;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// CameraRig.UpdatedAnchors -= HandleInputDataDirtied;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_1;
		L_1 = OVRCameraRigRef_get_CameraRig_mBA6A96863C9DA3F9056645D33E18145A12962CD9_inline(__this, NULL);
		Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* L_2 = (Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F*)il2cpp_codegen_object_new(Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m992ECB87E90C3F7EC7889339CEA48B40EDEC5160(L_2, __this, (intptr_t)((void*)OVRCameraRigRef_HandleInputDataDirtied_m84A927FABA960B4070DB030F97A9888AD589448B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		OVRCameraRig_remove_UpdatedAnchors_m362CA0EC6662BBE7563DD98E5BE05CD6C22B2E26(L_1, L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// OVRHand Oculus.Interaction.Input.OVRCameraRigRef::GetHandCached(OVRHand&,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* OVRCameraRigRef_GetHandCached_mBE75C8E398359CFE0150C12767F56172853658E5 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** ___cachedValue0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handAnchor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_mBAD8051B6FE029CE959F47310C0042658F827B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cachedValue != null)
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** L_0 = ___cachedValue0;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_1 = *((OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509**)L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return cachedValue;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** L_3 = ___cachedValue0;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_4 = *((OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509**)L_3);
		return L_4;
	}

IL_000d:
	{
		// cachedValue = handAnchor.GetComponentInChildren<OVRHand>(true);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** L_5 = ___cachedValue0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___handAnchor1;
		NullCheck(L_6);
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_7;
		L_7 = Component_GetComponentInChildren_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_mBAD8051B6FE029CE959F47310C0042658F827B20(L_6, (bool)1, Component_GetComponentInChildren_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_mBAD8051B6FE029CE959F47310C0042658F827B20_RuntimeMethod_var);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		// if (_requireOvrHands)
		bool L_8 = __this->____requireOvrHands_5;
		// return cachedValue;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509** L_9 = ___cachedValue0;
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_10 = *((OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509**)L_9);
		return L_10;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::HandleInputDataDirtied(OVRCameraRig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_HandleInputDataDirtied_m84A927FABA960B4070DB030F97A9888AD589448B (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___cameraRig0, const RuntimeMethod* method) 
{
	{
		// WhenInputDataDirtied(_isLateUpdate);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___WhenInputDataDirtied_8;
		bool L_1 = __this->____isLateUpdate_10;
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::InjectAllOVRCameraRigRef(OVRCameraRig,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_InjectAllOVRCameraRigRef_m51C335083A39E04253ADF989BC8D351F0AEA6B63 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___ovrCameraRig0, bool ___requireHands1, const RuntimeMethod* method) 
{
	{
		// InjectInteractionOVRCameraRig(ovrCameraRig);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = ___ovrCameraRig0;
		OVRCameraRigRef_InjectInteractionOVRCameraRig_m8272E5BFDA1F4BC724CF98BF094A599BA3A3C739(__this, L_0, NULL);
		// InjectRequireHands(requireHands);
		bool L_1 = ___requireHands1;
		OVRCameraRigRef_InjectRequireHands_mF8D0893140652474BFB8478DA5B4F3A57E184A83_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::InjectInteractionOVRCameraRig(OVRCameraRig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_InjectInteractionOVRCameraRig_m8272E5BFDA1F4BC724CF98BF094A599BA3A3C739 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___ovrCameraRig0, const RuntimeMethod* method) 
{
	{
		// _ovrCameraRig = ovrCameraRig;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = ___ovrCameraRig0;
		__this->____ovrCameraRig_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrCameraRig_4), (void*)L_0);
		// _leftHand = null;
		__this->____leftHand_6 = (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftHand_6), (void*)(OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509*)NULL);
		// _rightHand = null;
		__this->____rightHand_7 = (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightHand_7), (void*)(OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::InjectRequireHands(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef_InjectRequireHands_mF8D0893140652474BFB8478DA5B4F3A57E184A83 (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, bool ___requireHands0, const RuntimeMethod* method) 
{
	{
		// _requireOvrHands = requireHands;
		bool L_0 = ___requireHands0;
		__this->____requireOvrHands_5 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRCameraRigRef__ctor_m0ED06B3BF13E8F9F7EE200F8725C3A02EBE2B1CD (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__30_0_m930BEFE90A964D1BE21178A92DF764478A7139C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* G_B2_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* G_B1_1 = NULL;
	{
		// private bool _requireOvrHands = true;
		__this->____requireOvrHands_5 = (bool)1;
		// public event Action<bool> WhenInputDataDirtied = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var);
		U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144* L_2 = ((U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__30_0_m930BEFE90A964D1BE21178A92DF764478A7139C0_RuntimeMethod_var), NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = L_3;
		((U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenInputDataDirtied_8 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenInputDataDirtied_8), (void*)G_B2_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5264B5908612DE05D2BF125D910C370551A3E582 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144* L_0 = (U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144*)il2cpp_codegen_object_new(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mECDB5846FC37B6FC0D23E41452DDC1C4B673564E(L_0, NULL);
		((U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mECDB5846FC37B6FC0D23E41452DDC1C4B673564E (U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::<.ctor>b__30_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__30_0_m930BEFE90A964D1BE21178A92DF764478A7139C0 (U3CU3Ec_tAB0F8FB6DD25D3AABE265FFC392DB5EB3EC44144* __this, bool ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public event Action<bool> WhenInputDataDirtied = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.Input.OVRInputDeviceActiveState::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputDeviceActiveState_get_Active_m82DF33191BF6A250AC483A69F0E183483B3E1F8F (OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDCD406017C11470C2C72A04C04C579C3C1E7ED87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m49F5AA38898BAC4BD0EF2FA858F3B0AFFB91E9C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF6B92BD4CC7F0F206C3B132D8B49927950328FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7674D83AFE0D3BAA2769D4C59414734D279BBEB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// foreach (OVRInput.Controller controllerType in _controllerTypes)
		List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* L_0 = __this->____controllerTypes_4;
		NullCheck(L_0);
		Enumerator_t8BE4B8A85DCA7E485346EC3F313A5E8F1EA8CACB L_1;
		L_1 = List_1_GetEnumerator_m7674D83AFE0D3BAA2769D4C59414734D279BBEB6(L_0, List_1_GetEnumerator_m7674D83AFE0D3BAA2769D4C59414734D279BBEB6_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDCD406017C11470C2C72A04C04C579C3C1E7ED87((&V_0), Enumerator_Dispose_mDCD406017C11470C2C72A04C04C579C3C1E7ED87_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_000e_1:
			{
				// foreach (OVRInput.Controller controllerType in _controllerTypes)
				int32_t L_2;
				L_2 = Enumerator_get_Current_mF6B92BD4CC7F0F206C3B132D8B49927950328FD4_inline((&V_0), Enumerator_get_Current_mF6B92BD4CC7F0F206C3B132D8B49927950328FD4_RuntimeMethod_var);
				V_1 = L_2;
				// if (OVRInput.GetConnectedControllers() == controllerType) return true;
				il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = OVRInput_GetConnectedControllers_m4EF5F5C48A11AA32286CB818986AC1BA36F0DE65_inline(NULL);
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
				{
					goto IL_0022_1;
				}
			}
			{
				// if (OVRInput.GetConnectedControllers() == controllerType) return true;
				V_2 = (bool)1;
				goto IL_003d;
			}

IL_0022_1:
			{
				// foreach (OVRInput.Controller controllerType in _controllerTypes)
				bool L_5;
				L_5 = Enumerator_MoveNext_m49F5AA38898BAC4BD0EF2FA858F3B0AFFB91E9C5((&V_0), Enumerator_MoveNext_m49F5AA38898BAC4BD0EF2FA858F3B0AFFB91E9C5_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void Oculus.Interaction.Input.OVRInputDeviceActiveState::InjectAllOVRInputDeviceActiveState(System.Collections.Generic.List`1<OVRInput/Controller>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputDeviceActiveState_InjectAllOVRInputDeviceActiveState_m78C6767FEC719CA5292B110A54DF0960B7108EC4 (OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559* __this, List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* ___controllerTypes0, const RuntimeMethod* method) 
{
	{
		// InjectControllerTypes(controllerTypes);
		List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* L_0 = ___controllerTypes0;
		OVRInputDeviceActiveState_InjectControllerTypes_m0CDBF4767F3C14AD09296F5D0FB5DC53FE8D825F_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRInputDeviceActiveState::InjectControllerTypes(System.Collections.Generic.List`1<OVRInput/Controller>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputDeviceActiveState_InjectControllerTypes_m0CDBF4767F3C14AD09296F5D0FB5DC53FE8D825F (OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559* __this, List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* ___controllerTypes0, const RuntimeMethod* method) 
{
	{
		// _controllerTypes = controllerTypes;
		List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* L_0 = ___controllerTypes0;
		__this->____controllerTypes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controllerTypes_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRInputDeviceActiveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputDeviceActiveState__ctor_mF8DFC8889BDC8C27135B2993A222FA644AC8469B (OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.OVRSkeletonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRSkeletonData__ctor_m60E94FDB5540ED05BDD5BBC2F27809CAC7003BF8 (OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRSkeletonData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRSkeletonData__cctor_m58ECF91EE20746A800A9D33E592DA705C902BDEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A V_4;
	memset((&V_4), 0, sizeof(V_4));
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// public static readonly OVRPlugin.Skeleton2 LeftSkeleton = new OVRPlugin.Skeleton2()
		// {
		//     Type = OVRPlugin.SkeletonType.HandLeft,
		//     NumBones = 24,
		//     NumBoneCapsules = 19,
		//     Bones = new OVRPlugin.Bone[] {
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Start, ParentBoneIndex=-1, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0f,y=0f,z=0f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_ForearmStub, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0f,y=0f,z=0f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb0, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.0200693f,y=0.0115541f,z=-0.01049652f}, Orientation=new OVRPlugin.Quatf(){x=0.3753869f,y=0.4245841f,z=-0.007778856f,w=0.8238644f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb1, ParentBoneIndex=2, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02485256f,y=-9.31E-10f,z=-1.863E-09f}, Orientation=new OVRPlugin.Quatf(){x=0.2602303f,y=0.02433088f,z=0.125678f,w=0.9570231f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb2, ParentBoneIndex=3, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.03251291f,y=5.82E-10f,z=1.863E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.08270377f,y=-0.0769617f,z=-0.08406223f,w=0.9900357f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb3, ParentBoneIndex=4, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.0337931f,y=3.26E-09f,z=1.863E-09f}, Orientation=new OVRPlugin.Quatf(){x=0.08350593f,y=0.06501573f,z=-0.05827406f,w=0.9926752f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Index1, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.09599624f,y=0.007316455f,z=-0.02355068f}, Orientation=new OVRPlugin.Quatf(){x=0.03068309f,y=-0.01885559f,z=0.04328144f,w=0.9984136f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Index2, ParentBoneIndex=6, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.0379273f,y=-5.82E-10f,z=-5.97E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.02585241f,y=-0.007116061f,z=0.003292944f,w=0.999635f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Index3, ParentBoneIndex=7, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02430365f,y=-6.73E-10f,z=-6.75E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.016056f,y=-0.02714872f,z=-0.072034f,w=0.9969034f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Middle1, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.09564661f,y=0.002543155f,z=-0.001725906f}, Orientation=new OVRPlugin.Quatf(){x=-0.009066326f,y=-0.05146559f,z=0.05183575f,w=0.9972874f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Middle2, ParentBoneIndex=9, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.042927f,y=-8.51E-10f,z=-1.193E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.01122823f,y=-0.004378874f,z=-0.001978267f,w=0.9999254f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Middle3, ParentBoneIndex=10, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02754958f,y=3.09E-10f,z=1.128E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.03431955f,y=-0.004611839f,z=-0.09300701f,w=0.9950631f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Ring1, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.0886938f,y=0.006529308f,z=0.01746524f}, Orientation=new OVRPlugin.Quatf(){x=-0.05315936f,y=-0.1231034f,z=0.04981349f,w=0.9897162f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Ring2, ParentBoneIndex=12, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.0389961f,y=0f,z=5.24E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.03363252f,y=-0.00278984f,z=0.00567602f,w=0.9994143f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Ring3, ParentBoneIndex=13, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02657339f,y=1.281E-09f,z=1.63E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.003477462f,y=0.02917945f,z=-0.02502854f,w=0.9992548f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky0, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.03407356f,y=0.009419836f,z=0.02299858f}, Orientation=new OVRPlugin.Quatf(){x=-0.207036f,y=-0.1403428f,z=0.0183118f,w=0.9680417f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky1, ParentBoneIndex=15, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.04565055f,y=9.97679E-07f,z=-2.193963E-06f}, Orientation=new OVRPlugin.Quatf(){x=0.09111304f,y=0.00407137f,z=0.02812923f,w=0.9954349f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky2, ParentBoneIndex=16, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.03072042f,y=1.048E-09f,z=-1.75E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.03761665f,y=-0.04293772f,z=-0.01328605f,w=0.9982809f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky3, ParentBoneIndex=17, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02031138f,y=-2.91E-10f,z=9.31E-10f}, Orientation=new OVRPlugin.Quatf(){x=0.0006447434f,y=0.04917067f,z=-0.02401883f,w=0.9985014f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_ThumbTip, ParentBoneIndex=5, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02459077f,y=-0.001026974f,z=0.0006703701f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_IndexTip, ParentBoneIndex=8, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02236338f,y=-0.00102507f,z=0.0002956076f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_MiddleTip, ParentBoneIndex=11, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02496492f,y=-0.001137299f,z=0.0003086528f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_RingTip, ParentBoneIndex=14, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02432613f,y=-0.001608172f,z=0.000257905f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_PinkyTip, ParentBoneIndex=18, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0.02192238f,y=-0.001216086f,z=-0.0002464796f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		// },
		//     BoneCapsules = new OVRPlugin.BoneCapsule[] {
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.01822828f, StartPoint=new OVRPlugin.Vector3f() {x=0.02755879f,y=0.01404149f,z=-0.01685145f}, EndPoint=new OVRPlugin.Vector3f() {x=0.07794081f,y=0.009090679f,z=-0.02178327f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.02323196f, StartPoint=new OVRPlugin.Vector3f() {x=0.02632602f,y=0.008661013f,z=-0.006531342f}, EndPoint=new OVRPlugin.Vector3f() {x=0.07255958f,y=0.004580691f,z=-0.003326343f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.01608828f, StartPoint=new OVRPlugin.Vector3f() {x=0.0297035f,y=0.00920606f,z=0.01111641f}, EndPoint=new OVRPlugin.Vector3f() {x=0.07271415f,y=0.007254403f,z=0.01574543f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.02346085f, StartPoint=new OVRPlugin.Vector3f() {x=0.02844799f,y=0.008827154f,z=0.01446979f}, EndPoint=new OVRPlugin.Vector3f() {x=0.06036391f,y=0.009573798f,z=0.02133043f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=3, Radius=0.01838252f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=2.561E-09f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.03251291f,y=6.98E-10f,z=-3.492E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=4, Radius=0.01028295f, StartPoint=new OVRPlugin.Vector3f() {x=7.451E-09f,y=2.794E-09f,z=-3.725E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.03379309f,y=6.519E-09f,z=-8.382E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=5, Radius=0.009768805f, StartPoint=new OVRPlugin.Vector3f() {x=7.451E-09f,y=5.588E-09f,z=-4.657E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.01500075f,y=-0.0006525163f,z=0.0005929575f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=6, Radius=0.01029526f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=0f,z=-1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.03792731f,y=4.66E-10f,z=-3.725E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=7, Radius=0.008038102f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=-9.31E-10f,z=-1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.02430364f,y=-1.863E-09f,z=-3.725E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=8, Radius=0.007636196f, StartPoint=new OVRPlugin.Vector3f() {x=-1.4901E-08f,y=-1.863E-09f,z=0f}, EndPoint=new OVRPlugin.Vector3f() {x=0.01507758f,y=-0.0005028695f,z=6.049499E-05f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=9, Radius=0.01117394f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=-4.66E-10f,z=9.31E-10f}, EndPoint=new OVRPlugin.Vector3f() {x=0.042927f,y=-2.328E-09f,z=-9.31E-10f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=10, Radius=0.008030958f, StartPoint=new OVRPlugin.Vector3f() {x=1.4901E-08f,y=-4.66E-10f,z=0f}, EndPoint=new OVRPlugin.Vector3f() {x=0.02754962f,y=-4.66E-10f,z=-1.863E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=11, Radius=0.007629411f, StartPoint=new OVRPlugin.Vector3f() {x=1.4901E-08f,y=-3.725E-09f,z=0f}, EndPoint=new OVRPlugin.Vector3f() {x=0.01719159f,y=-0.0007450115f,z=0.0004036371f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=12, Radius=0.009922137f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=2.33E-10f,z=2.328E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.03899612f,y=0f,z=4.66E-10f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=13, Radius=0.007611672f, StartPoint=new OVRPlugin.Vector3f() {x=1.4901E-08f,y=-4.66E-10f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.02657339f,y=1.397E-09f,z=0f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=14, Radius=0.007231089f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=9.31E-10f,z=2.328E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.01632451f,y=-0.001288094f,z=0.0001235888f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=16, Radius=0.008483353f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=-2.33E-10f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.03072041f,y=-1.164E-09f,z=0f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=17, Radius=0.006764194f, StartPoint=new OVRPlugin.Vector3f() {x=-7.451E-09f,y=-1.717E-09f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.02031137f,y=1.46E-10f,z=1.863E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=18, Radius=0.006425985f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=0f,z=-1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=0.01507002f,y=-0.0006056242f,z=-2.491474E-05f}},
		// }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F));
		(&V_0)->___Type_0 = 0;
		(&V_0)->___NumBones_1 = ((int32_t)24);
		(&V_0)->___NumBoneCapsules_2 = ((int32_t)19);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_0 = (BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784*)(BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784*)SZArrayNew(BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_1 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 0;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)(-1);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_2 = V_3;
		(&V_2)->___Position_1 = L_2;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_3 = V_4;
		(&V_2)->___Orientation_0 = L_3;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_4 = V_2;
		(&V_1)->___Pose_2 = L_4;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_5 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_5);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_6 = L_1;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 1;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_7 = V_3;
		(&V_2)->___Position_1 = L_7;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_8 = V_4;
		(&V_2)->___Orientation_0 = L_8;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_9 = V_2;
		(&V_1)->___Pose_2 = L_9;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_10 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_10);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_11 = L_6;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 2;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0200692993f);
		(&V_3)->___y_1 = (0.0115540996f);
		(&V_3)->___z_2 = (-0.0104965204f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_12 = V_3;
		(&V_2)->___Position_1 = L_12;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.375386894f);
		(&V_4)->___y_1 = (0.424584091f);
		(&V_4)->___z_2 = (-0.00777885597f);
		(&V_4)->___w_3 = (0.8238644f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_13 = V_4;
		(&V_2)->___Orientation_0 = L_13;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_14 = V_2;
		(&V_1)->___Pose_2 = L_14;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_15 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_15);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_16 = L_11;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 3;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)2;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0248525608f);
		(&V_3)->___y_1 = (-9.30999999E-10f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_17 = V_3;
		(&V_2)->___Position_1 = L_17;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.260230303f);
		(&V_4)->___y_1 = (0.0243308805f);
		(&V_4)->___z_2 = (0.125678003f);
		(&V_4)->___w_3 = (0.957023084f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_18 = V_4;
		(&V_2)->___Orientation_0 = L_18;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_19 = V_2;
		(&V_1)->___Pose_2 = L_19;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_20 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_20);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_21 = L_16;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 4;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)3;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0325129107f);
		(&V_3)->___y_1 = (5.82000004E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_22 = V_3;
		(&V_2)->___Position_1 = L_22;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0827037692f);
		(&V_4)->___y_1 = (-0.0769617036f);
		(&V_4)->___z_2 = (-0.0840622336f);
		(&V_4)->___w_3 = (0.990035713f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_23 = V_4;
		(&V_2)->___Orientation_0 = L_23;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_24 = V_2;
		(&V_1)->___Pose_2 = L_24;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_25 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_25);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_26 = L_21;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 5;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)4;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0337930992f);
		(&V_3)->___y_1 = (3.26000005E-09f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_27 = V_3;
		(&V_2)->___Position_1 = L_27;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0835059285f);
		(&V_4)->___y_1 = (0.0650157332f);
		(&V_4)->___z_2 = (-0.0582740605f);
		(&V_4)->___w_3 = (0.992675185f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_28 = V_4;
		(&V_2)->___Orientation_0 = L_28;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_29 = V_2;
		(&V_1)->___Pose_2 = L_29;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_30 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_30);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_31 = L_26;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 6;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0959962383f);
		(&V_3)->___y_1 = (0.00731645478f);
		(&V_3)->___z_2 = (-0.0235506799f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_32 = V_3;
		(&V_2)->___Position_1 = L_32;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0306830909f);
		(&V_4)->___y_1 = (-0.0188555904f);
		(&V_4)->___z_2 = (0.0432814397f);
		(&V_4)->___w_3 = (0.998413622f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_33 = V_4;
		(&V_2)->___Orientation_0 = L_33;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_34 = V_2;
		(&V_1)->___Pose_2 = L_34;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_35 = V_1;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(6), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_35);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_36 = L_31;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 7;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)6;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0379272997f);
		(&V_3)->___y_1 = (-5.82000004E-10f);
		(&V_3)->___z_2 = (-5.97000005E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_37 = V_3;
		(&V_2)->___Position_1 = L_37;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0258524101f);
		(&V_4)->___y_1 = (-0.00711606117f);
		(&V_4)->___z_2 = (0.00329294405f);
		(&V_4)->___w_3 = (0.999634981f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_38 = V_4;
		(&V_2)->___Orientation_0 = L_38;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_39 = V_2;
		(&V_1)->___Pose_2 = L_39;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_40 = V_1;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_40);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_41 = L_36;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 8;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)7;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0243036505f);
		(&V_3)->___y_1 = (-6.72999989E-10f);
		(&V_3)->___z_2 = (-6.75E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_42 = V_3;
		(&V_2)->___Position_1 = L_42;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0160559993f);
		(&V_4)->___y_1 = (-0.0271487199f);
		(&V_4)->___z_2 = (-0.0720340014f);
		(&V_4)->___w_3 = (0.996903419f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_43 = V_4;
		(&V_2)->___Orientation_0 = L_43;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_44 = V_2;
		(&V_1)->___Pose_2 = L_44;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_45 = V_1;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(8), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_45);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_46 = L_41;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)9);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0956466123f);
		(&V_3)->___y_1 = (0.0025431551f);
		(&V_3)->___z_2 = (-0.00172590604f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_47 = V_3;
		(&V_2)->___Position_1 = L_47;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.00906632561f);
		(&V_4)->___y_1 = (-0.0514655896f);
		(&V_4)->___z_2 = (0.0518357493f);
		(&V_4)->___w_3 = (0.997287393f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_48 = V_4;
		(&V_2)->___Orientation_0 = L_48;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_49 = V_2;
		(&V_1)->___Pose_2 = L_49;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_50 = V_1;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_50);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_51 = L_46;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)10);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)9);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0429270007f);
		(&V_3)->___y_1 = (-8.50999993E-10f);
		(&V_3)->___z_2 = (-1.19300003E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_52 = V_3;
		(&V_2)->___Position_1 = L_52;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0112282299f);
		(&V_4)->___y_1 = (-0.00437887385f);
		(&V_4)->___z_2 = (-0.00197826698f);
		(&V_4)->___w_3 = (0.999925375f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_53 = V_4;
		(&V_2)->___Orientation_0 = L_53;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_54 = V_2;
		(&V_1)->___Pose_2 = L_54;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_55 = V_1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_55);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_56 = L_51;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)11);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)10);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0275495797f);
		(&V_3)->___y_1 = (3.08999992E-10f);
		(&V_3)->___z_2 = (1.12800003E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_57 = V_3;
		(&V_2)->___Position_1 = L_57;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0343195498f);
		(&V_4)->___y_1 = (-0.00461183907f);
		(&V_4)->___z_2 = (-0.0930070132f);
		(&V_4)->___w_3 = (0.995063126f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_58 = V_4;
		(&V_2)->___Orientation_0 = L_58;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_59 = V_2;
		(&V_1)->___Pose_2 = L_59;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_60 = V_1;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_60);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_61 = L_56;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)12);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0886937976f);
		(&V_3)->___y_1 = (0.00652930792f);
		(&V_3)->___z_2 = (0.0174652394f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_62 = V_3;
		(&V_2)->___Position_1 = L_62;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0531593598f);
		(&V_4)->___y_1 = (-0.123103403f);
		(&V_4)->___z_2 = (0.0498134904f);
		(&V_4)->___w_3 = (0.989716172f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_63 = V_4;
		(&V_2)->___Orientation_0 = L_63;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_64 = V_2;
		(&V_1)->___Pose_2 = L_64;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_65 = V_1;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_65);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_66 = L_61;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)13);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)12);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0389961004f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (5.2400001E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_67 = V_3;
		(&V_2)->___Position_1 = L_67;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0336325206f);
		(&V_4)->___y_1 = (-0.0027898401f);
		(&V_4)->___z_2 = (0.00567601994f);
		(&V_4)->___w_3 = (0.999414325f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_68 = V_4;
		(&V_2)->___Orientation_0 = L_68;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_69 = V_2;
		(&V_1)->___Pose_2 = L_69;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_70 = V_1;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_70);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_71 = L_66;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)14);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)13);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0265733898f);
		(&V_3)->___y_1 = (1.28099997E-09f);
		(&V_3)->___z_2 = (1.63000002E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_72 = V_3;
		(&V_2)->___Position_1 = L_72;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0034774621f);
		(&V_4)->___y_1 = (0.0291794501f);
		(&V_4)->___z_2 = (-0.0250285398f);
		(&V_4)->___w_3 = (0.999254823f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_73 = V_4;
		(&V_2)->___Orientation_0 = L_73;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_74 = V_2;
		(&V_1)->___Pose_2 = L_74;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_75 = V_1;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_75);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_76 = L_71;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)15);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0340735614f);
		(&V_3)->___y_1 = (0.0094198361f);
		(&V_3)->___z_2 = (0.0229985807f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_77 = V_3;
		(&V_2)->___Position_1 = L_77;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.207036003f);
		(&V_4)->___y_1 = (-0.140342802f);
		(&V_4)->___z_2 = (0.0183118004f);
		(&V_4)->___w_3 = (0.968041718f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_78 = V_4;
		(&V_2)->___Orientation_0 = L_78;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_79 = V_2;
		(&V_1)->___Pose_2 = L_79;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_80 = V_1;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_80);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_81 = L_76;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)16);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)15);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0456505492f);
		(&V_3)->___y_1 = (9.97678967E-07f);
		(&V_3)->___z_2 = (-2.19396293E-06f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_82 = V_3;
		(&V_2)->___Position_1 = L_82;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0911130384f);
		(&V_4)->___y_1 = (0.00407136977f);
		(&V_4)->___z_2 = (0.0281292293f);
		(&V_4)->___w_3 = (0.99543488f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_83 = V_4;
		(&V_2)->___Orientation_0 = L_83;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_84 = V_2;
		(&V_1)->___Pose_2 = L_84;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_85 = V_1;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_85);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_86 = L_81;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)17);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)16);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0307204202f);
		(&V_3)->___y_1 = (1.04800002E-09f);
		(&V_3)->___z_2 = (-1.75000001E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_87 = V_3;
		(&V_2)->___Position_1 = L_87;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0376166515f);
		(&V_4)->___y_1 = (-0.0429377183f);
		(&V_4)->___z_2 = (-0.0132860504f);
		(&V_4)->___w_3 = (0.998280883f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_88 = V_4;
		(&V_2)->___Orientation_0 = L_88;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_89 = V_2;
		(&V_1)->___Pose_2 = L_89;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_90 = V_1;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_90);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_91 = L_86;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)18);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)17);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0203113798f);
		(&V_3)->___y_1 = (-2.91000002E-10f);
		(&V_3)->___z_2 = (9.30999999E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_92 = V_3;
		(&V_2)->___Position_1 = L_92;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.000644743384f);
		(&V_4)->___y_1 = (0.0491706692f);
		(&V_4)->___z_2 = (-0.0240188297f);
		(&V_4)->___w_3 = (0.99850142f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_93 = V_4;
		(&V_2)->___Orientation_0 = L_93;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_94 = V_2;
		(&V_1)->___Pose_2 = L_94;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_95 = V_1;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_95);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_96 = L_91;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)19);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)5;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0245907698f);
		(&V_3)->___y_1 = (-0.00102697394f);
		(&V_3)->___z_2 = (0.000670370122f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_97 = V_3;
		(&V_2)->___Position_1 = L_97;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_98 = V_4;
		(&V_2)->___Orientation_0 = L_98;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_99 = V_2;
		(&V_1)->___Pose_2 = L_99;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_100 = V_1;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_100);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_101 = L_96;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)20);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)8;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0223633796f);
		(&V_3)->___y_1 = (-0.00102506997f);
		(&V_3)->___z_2 = (0.000295607606f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_102 = V_3;
		(&V_2)->___Position_1 = L_102;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_103 = V_4;
		(&V_2)->___Orientation_0 = L_103;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_104 = V_2;
		(&V_1)->___Pose_2 = L_104;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_105 = V_1;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_105);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_106 = L_101;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)21);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)11);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0249649193f);
		(&V_3)->___y_1 = (-0.001137299f);
		(&V_3)->___z_2 = (0.000308652787f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_107 = V_3;
		(&V_2)->___Position_1 = L_107;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_108 = V_4;
		(&V_2)->___Orientation_0 = L_108;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_109 = V_2;
		(&V_1)->___Pose_2 = L_109;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_110 = V_1;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_110);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_111 = L_106;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)22);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)14);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0243261307f);
		(&V_3)->___y_1 = (-0.00160817197f);
		(&V_3)->___z_2 = (0.000257904991f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_112 = V_3;
		(&V_2)->___Position_1 = L_112;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_113 = V_4;
		(&V_2)->___Orientation_0 = L_113;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_114 = V_2;
		(&V_1)->___Pose_2 = L_114;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_115 = V_1;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_115);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_116 = L_111;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)23);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)18);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0219223797f);
		(&V_3)->___y_1 = (-0.00121608598f);
		(&V_3)->___z_2 = (-0.000246479613f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_117 = V_3;
		(&V_2)->___Position_1 = L_117;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_118 = V_4;
		(&V_2)->___Orientation_0 = L_118;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_119 = V_2;
		(&V_1)->___Pose_2 = L_119;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_120 = V_1;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_120);
		(&V_0)->___Bones_3 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Bones_3), (void*)L_116);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_121 = (BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44*)(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44*)SZArrayNew(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_122 = L_121;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0182282794f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0275587905f);
		(&V_3)->___y_1 = (0.0140414899f);
		(&V_3)->___z_2 = (-0.0168514494f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_123 = V_3;
		(&V_5)->___StartPoint_1 = L_123;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0779408067f);
		(&V_3)->___y_1 = (0.00909067877f);
		(&V_3)->___z_2 = (-0.0217832699f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_124 = V_3;
		(&V_5)->___EndPoint_2 = L_124;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_125 = V_5;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_125);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_126 = L_122;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0232319608f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0263260193f);
		(&V_3)->___y_1 = (0.0086610131f);
		(&V_3)->___z_2 = (-0.00653134193f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_127 = V_3;
		(&V_5)->___StartPoint_1 = L_127;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0725595802f);
		(&V_3)->___y_1 = (0.00458069099f);
		(&V_3)->___z_2 = (-0.00332634291f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_128 = V_3;
		(&V_5)->___EndPoint_2 = L_128;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_129 = V_5;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(1), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_129);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_130 = L_126;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0160882808f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0297034997f);
		(&V_3)->___y_1 = (0.00920606032f);
		(&V_3)->___z_2 = (0.0111164097f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_131 = V_3;
		(&V_5)->___StartPoint_1 = L_131;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.07271415f);
		(&V_3)->___y_1 = (0.00725440308f);
		(&V_3)->___z_2 = (0.0157454293f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_132 = V_3;
		(&V_5)->___EndPoint_2 = L_132;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_133 = V_5;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(2), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_133);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_134 = L_130;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0234608501f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0284479894f);
		(&V_3)->___y_1 = (0.00882715359f);
		(&V_3)->___z_2 = (0.0144697903f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_135 = V_3;
		(&V_5)->___StartPoint_1 = L_135;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0603639111f);
		(&V_3)->___y_1 = (0.0095737977f);
		(&V_3)->___z_2 = (0.0213304292f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_136 = V_3;
		(&V_5)->___EndPoint_2 = L_136;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_137 = V_5;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(3), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_137);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_138 = L_134;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)3;
		(&V_5)->___Radius_3 = (0.0183825195f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (2.56100008E-09f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_139 = V_3;
		(&V_5)->___StartPoint_1 = L_139;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0325129107f);
		(&V_3)->___y_1 = (6.97999991E-10f);
		(&V_3)->___z_2 = (-3.49200002E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_140 = V_3;
		(&V_5)->___EndPoint_2 = L_140;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_141 = V_5;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(4), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_141);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_142 = L_138;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)4;
		(&V_5)->___Radius_3 = (0.0102829495f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (7.45099982E-09f);
		(&V_3)->___y_1 = (2.79399992E-09f);
		(&V_3)->___z_2 = (-3.72500009E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_143 = V_3;
		(&V_5)->___StartPoint_1 = L_143;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0337930918f);
		(&V_3)->___y_1 = (6.51900001E-09f);
		(&V_3)->___z_2 = (-8.38199998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_144 = V_3;
		(&V_5)->___EndPoint_2 = L_144;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_145 = V_5;
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(5), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_145);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_146 = L_142;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)5;
		(&V_5)->___Radius_3 = (0.00976880454f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (7.45099982E-09f);
		(&V_3)->___y_1 = (5.58799984E-09f);
		(&V_3)->___z_2 = (-4.65700012E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_147 = V_3;
		(&V_5)->___StartPoint_1 = L_147;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0150007503f);
		(&V_3)->___y_1 = (-0.000652516319f);
		(&V_3)->___z_2 = (0.000592957484f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_148 = V_3;
		(&V_5)->___EndPoint_2 = L_148;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_149 = V_5;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(6), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_149);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_150 = L_146;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)6;
		(&V_5)->___Radius_3 = (0.0102952598f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_151 = V_3;
		(&V_5)->___StartPoint_1 = L_151;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0379273109f);
		(&V_3)->___y_1 = (4.66000016E-10f);
		(&V_3)->___z_2 = (-3.72500009E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_152 = V_3;
		(&V_5)->___EndPoint_2 = L_152;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_153 = V_5;
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(7), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_153);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_154 = L_150;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)7;
		(&V_5)->___Radius_3 = (0.00803810172f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (-9.30999999E-10f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_155 = V_3;
		(&V_5)->___StartPoint_1 = L_155;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0243036393f);
		(&V_3)->___y_1 = (-1.86299998E-09f);
		(&V_3)->___z_2 = (-3.72500009E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_156 = V_3;
		(&V_5)->___EndPoint_2 = L_156;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_157 = V_5;
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(8), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_157);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_158 = L_154;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)8;
		(&V_5)->___Radius_3 = (0.00763619598f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-1.49010004E-08f);
		(&V_3)->___y_1 = (-1.86299998E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_159 = V_3;
		(&V_5)->___StartPoint_1 = L_159;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0150775798f);
		(&V_3)->___y_1 = (-0.000502869487f);
		(&V_3)->___z_2 = (6.04949892E-05f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_160 = V_3;
		(&V_5)->___EndPoint_2 = L_160;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_161 = V_5;
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_161);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_162 = L_158;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)9);
		(&V_5)->___Radius_3 = (0.0111739403f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (-4.66000016E-10f);
		(&V_3)->___z_2 = (9.30999999E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_163 = V_3;
		(&V_5)->___StartPoint_1 = L_163;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0429270007f);
		(&V_3)->___y_1 = (-2.32800001E-09f);
		(&V_3)->___z_2 = (-9.30999999E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_164 = V_3;
		(&V_5)->___EndPoint_2 = L_164;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_165 = V_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_165);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_166 = L_162;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)10);
		(&V_5)->___Radius_3 = (0.00803095754f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (1.49010004E-08f);
		(&V_3)->___y_1 = (-4.66000016E-10f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_167 = V_3;
		(&V_5)->___StartPoint_1 = L_167;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0275496207f);
		(&V_3)->___y_1 = (-4.66000016E-10f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_168 = V_3;
		(&V_5)->___EndPoint_2 = L_168;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_169 = V_5;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_169);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_170 = L_166;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)11);
		(&V_5)->___Radius_3 = (0.00762941083f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (1.49010004E-08f);
		(&V_3)->___y_1 = (-3.72500009E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_171 = V_3;
		(&V_5)->___StartPoint_1 = L_171;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0171915907f);
		(&V_3)->___y_1 = (-0.000745011494f);
		(&V_3)->___z_2 = (0.000403637096f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_172 = V_3;
		(&V_5)->___EndPoint_2 = L_172;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_173 = V_5;
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_173);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_174 = L_170;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)12);
		(&V_5)->___Radius_3 = (0.00992213655f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (2.33000008E-10f);
		(&V_3)->___z_2 = (2.32800001E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_175 = V_3;
		(&V_5)->___StartPoint_1 = L_175;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0389961191f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (4.66000016E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_176 = V_3;
		(&V_5)->___EndPoint_2 = L_176;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_177 = V_5;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_177);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_178 = L_174;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)13);
		(&V_5)->___Radius_3 = (0.00761167193f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (1.49010004E-08f);
		(&V_3)->___y_1 = (-4.66000016E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_179 = V_3;
		(&V_5)->___StartPoint_1 = L_179;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0265733898f);
		(&V_3)->___y_1 = (1.39699996E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_180 = V_3;
		(&V_5)->___EndPoint_2 = L_180;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_181 = V_5;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_181);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_182 = L_178;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)14);
		(&V_5)->___Radius_3 = (0.00723108882f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (9.30999999E-10f);
		(&V_3)->___z_2 = (2.32800001E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_183 = V_3;
		(&V_5)->___StartPoint_1 = L_183;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0163245108f);
		(&V_3)->___y_1 = (-0.00128809398f);
		(&V_3)->___z_2 = (0.000123588805f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_184 = V_3;
		(&V_5)->___EndPoint_2 = L_184;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_185 = V_5;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_185);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_186 = L_182;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)16);
		(&V_5)->___Radius_3 = (0.00848335307f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (-2.33000008E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_187 = V_3;
		(&V_5)->___StartPoint_1 = L_187;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0307204109f);
		(&V_3)->___y_1 = (-1.16400001E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_188 = V_3;
		(&V_5)->___EndPoint_2 = L_188;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_189 = V_5;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_189);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_190 = L_186;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)17);
		(&V_5)->___Radius_3 = (0.006764194f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-7.45099982E-09f);
		(&V_3)->___y_1 = (-1.71699999E-09f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_191 = V_3;
		(&V_5)->___StartPoint_1 = L_191;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0203113705f);
		(&V_3)->___y_1 = (1.46000004E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_192 = V_3;
		(&V_5)->___EndPoint_2 = L_192;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_193 = V_5;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_193);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_194 = L_190;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)18);
		(&V_5)->___Radius_3 = (0.00642598514f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_195 = V_3;
		(&V_5)->___StartPoint_1 = L_195;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0150700202f);
		(&V_3)->___y_1 = (-0.000605624227f);
		(&V_3)->___z_2 = (-2.49147397E-05f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_196 = V_3;
		(&V_5)->___EndPoint_2 = L_196;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_197 = V_5;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_197);
		(&V_0)->___BoneCapsules_4 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___BoneCapsules_4), (void*)L_194);
		Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F L_198 = V_0;
		((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___LeftSkeleton_0 = L_198;
		Il2CppCodeGenWriteBarrier((void**)&(((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___LeftSkeleton_0))->___Bones_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___LeftSkeleton_0))->___BoneCapsules_4), (void*)NULL);
		#endif
		// public static readonly OVRPlugin.Skeleton2 RightSkeleton = new OVRPlugin.Skeleton2()
		// {
		//     Type = OVRPlugin.SkeletonType.HandRight,
		//     NumBones = 24,
		//     NumBoneCapsules = 19,
		//     Bones = new OVRPlugin.Bone[] {new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Start, ParentBoneIndex=-1, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0f,y=0f,z=0f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_ForearmStub, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=0f,y=0f,z=0f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb0, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.0200693f,y=-0.0115541f,z=0.01049652f}, Orientation=new OVRPlugin.Quatf(){x=0.3753869f,y=0.4245841f,z=-0.007778856f,w=0.8238644f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb1, ParentBoneIndex=2, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02485256f,y=2.328E-09f,z=0f}, Orientation=new OVRPlugin.Quatf(){x=0.2602303f,y=0.02433088f,z=0.125678f,w=0.9570231f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb2, ParentBoneIndex=3, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.03251291f,y=-1.16E-10f,z=0f}, Orientation=new OVRPlugin.Quatf(){x=-0.08270377f,y=-0.0769617f,z=-0.08406223f,w=0.9900357f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Thumb3, ParentBoneIndex=4, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.0337931f,y=-3.26E-09f,z=-1.863E-09f}, Orientation=new OVRPlugin.Quatf(){x=0.08350593f,y=0.06501573f,z=-0.05827406f,w=0.9926752f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Index1, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.09599624f,y=-0.007316455f,z=0.02355068f}, Orientation=new OVRPlugin.Quatf(){x=0.03068309f,y=-0.01885559f,z=0.04328144f,w=0.9984136f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Index2, ParentBoneIndex=6, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.0379273f,y=1.16E-10f,z=5.97E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.02585241f,y=-0.007116061f,z=0.003292944f,w=0.999635f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Index3, ParentBoneIndex=7, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02430365f,y=6.73E-10f,z=6.75E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.016056f,y=-0.02714872f,z=-0.072034f,w=0.9969034f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Middle1, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.09564661f,y=-0.002543155f,z=0.001725906f}, Orientation=new OVRPlugin.Quatf(){x=-0.009066326f,y=-0.05146559f,z=0.05183575f,w=0.9972874f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Middle2, ParentBoneIndex=9, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.042927f,y=1.317E-09f,z=1.193E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.01122823f,y=-0.004378874f,z=-0.001978267f,w=0.9999254f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Middle3, ParentBoneIndex=10, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02754958f,y=-7.71E-10f,z=-1.12E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.03431955f,y=-0.004611839f,z=-0.09300701f,w=0.9950631f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Ring1, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.0886938f,y=-0.006529307f,z=-0.01746524f}, Orientation=new OVRPlugin.Quatf(){x=-0.05315936f,y=-0.1231034f,z=0.04981349f,w=0.9897162f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Ring2, ParentBoneIndex=12, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.0389961f,y=-4.66E-10f,z=-5.24E-10f}, Orientation=new OVRPlugin.Quatf(){x=-0.03363252f,y=-0.00278984f,z=0.00567602f,w=0.9994143f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Ring3, ParentBoneIndex=13, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02657339f,y=-1.281E-09f,z=-1.63E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.003477462f,y=0.02917945f,z=-0.02502854f,w=0.9992548f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky0, ParentBoneIndex=0, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.03407356f,y=-0.009419835f,z=-0.02299858f}, Orientation=new OVRPlugin.Quatf(){x=-0.207036f,y=-0.1403428f,z=0.0183118f,w=0.9680417f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky1, ParentBoneIndex=15, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.04565055f,y=-9.98611E-07f,z=2.193963E-06f}, Orientation=new OVRPlugin.Quatf(){x=0.09111304f,y=0.00407137f,z=0.02812923f,w=0.9954349f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky2, ParentBoneIndex=16, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.03072042f,y=6.98E-10f,z=1.106E-09f}, Orientation=new OVRPlugin.Quatf(){x=-0.03761665f,y=-0.04293772f,z=-0.01328605f,w=0.9982809f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_Pinky3, ParentBoneIndex=17, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02031138f,y=-1.455E-09f,z=-1.397E-09f}, Orientation=new OVRPlugin.Quatf(){x=0.0006447434f,y=0.04917067f,z=-0.02401883f,w=0.9985014f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_ThumbTip, ParentBoneIndex=5, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02459077f,y=0.001026974f,z=-0.0006703701f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_IndexTip, ParentBoneIndex=8, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02236338f,y=0.00102507f,z=-0.0002956076f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_MiddleTip, ParentBoneIndex=11, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02496492f,y=0.001137299f,z=-0.0003086528f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_RingTip, ParentBoneIndex=14, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02432613f,y=0.001608172f,z=-0.000257905f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		//     new OVRPlugin.Bone() { Id=OVRPlugin.BoneId.Hand_PinkyTip, ParentBoneIndex=18, Pose=new OVRPlugin.Posef() { Position=new OVRPlugin.Vector3f() {x=-0.02192238f,y=0.001216086f,z=0.0002464796f}, Orientation=new OVRPlugin.Quatf(){x=0f,y=0f,z=0f,w=1f}}},
		// },
		//     BoneCapsules = new OVRPlugin.BoneCapsule[] {new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.01822828f, StartPoint=new OVRPlugin.Vector3f() {x=-0.02755879f,y=-0.01404148f,z=0.01685145f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.07794081f,y=-0.009090678f,z=0.02178326f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.02323196f, StartPoint=new OVRPlugin.Vector3f() {x=-0.02632602f,y=-0.008661013f,z=0.006531343f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.07255958f,y=-0.004580691f,z=0.003326343f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.01608828f, StartPoint=new OVRPlugin.Vector3f() {x=-0.0297035f,y=-0.00920606f,z=-0.01111641f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.07271415f,y=-0.007254403f,z=-0.01574543f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=0, Radius=0.02346085f, StartPoint=new OVRPlugin.Vector3f() {x=-0.02844799f,y=-0.008827153f,z=-0.01446979f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.06036392f,y=-0.009573797f,z=-0.02133043f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=3, Radius=0.01838251f, StartPoint=new OVRPlugin.Vector3f() {x=3.725E-09f,y=-6.98E-10f,z=-2.794E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.03251291f,y=-6.98E-10f,z=2.561E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=4, Radius=0.01028296f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=-9.31E-10f,z=5.588E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.03379308f,y=-4.657E-09f,z=1.0245E-08f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=5, Radius=0.009768807f, StartPoint=new OVRPlugin.Vector3f() {x=-7.451E-09f,y=1.863E-09f,z=8.382E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.0150008f,y=0.0006525647f,z=-0.000592957f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=6, Radius=0.01029526f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=4.66E-10f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.03792731f,y=-4.66E-10f,z=3.725E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=7, Radius=0.008038101f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=9.31E-10f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.02430364f,y=1.863E-09f,z=3.725E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=8, Radius=0.007636196f, StartPoint=new OVRPlugin.Vector3f() {x=1.4901E-08f,y=1.863E-09f,z=0f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.01507759f,y=0.0005028695f,z=-6.052852E-05f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=9, Radius=0.01117394f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=0f,z=-9.31E-10f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.042927f,y=1.863E-09f,z=9.31E-10f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=10, Radius=0.008030958f, StartPoint=new OVRPlugin.Vector3f() {x=-1.4901E-08f,y=0f,z=0f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.02754962f,y=4.66E-10f,z=1.863E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=11, Radius=0.00762941f, StartPoint=new OVRPlugin.Vector3f() {x=-1.4901E-08f,y=1.863E-09f,z=0f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.01719156f,y=0.0007450022f,z=-0.0004036473f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=12, Radius=0.009922139f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=-2.33E-10f,z=-2.328E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.03899612f,y=4.66E-10f,z=-4.66E-10f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=13, Radius=0.007611674f, StartPoint=new OVRPlugin.Vector3f() {x=-1.4901E-08f,y=1.863E-09f,z=-1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.02657339f,y=0f,z=0f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=14, Radius=0.00723109f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=9.31E-10f,z=-2.328E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.01632455f,y=0.001288087f,z=-0.0001235851f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=16, Radius=0.008483353f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=2.33E-10f,z=-1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.03072041f,y=1.164E-09f,z=0f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=17, Radius=0.006764191f, StartPoint=new OVRPlugin.Vector3f() {x=7.451E-09f,y=1.717E-09f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.02031137f,y=-1.46E-10f,z=-1.863E-09f}},
		//     new OVRPlugin.BoneCapsule() { BoneIndex=18, Radius=0.006425982f, StartPoint=new OVRPlugin.Vector3f() {x=0f,y=0f,z=1.863E-09f}, EndPoint=new OVRPlugin.Vector3f() {x=-0.01507004f,y=0.0006056186f,z=2.490915E-05f}},
		// }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F));
		(&V_0)->___Type_0 = 1;
		(&V_0)->___NumBones_1 = ((int32_t)24);
		(&V_0)->___NumBoneCapsules_2 = ((int32_t)19);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_199 = (BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784*)(BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784*)SZArrayNew(BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_200 = L_199;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 0;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)(-1);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_201 = V_3;
		(&V_2)->___Position_1 = L_201;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_202 = V_4;
		(&V_2)->___Orientation_0 = L_202;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_203 = V_2;
		(&V_1)->___Pose_2 = L_203;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_204 = V_1;
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(0), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_204);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_205 = L_200;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 1;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_206 = V_3;
		(&V_2)->___Position_1 = L_206;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_207 = V_4;
		(&V_2)->___Orientation_0 = L_207;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_208 = V_2;
		(&V_1)->___Pose_2 = L_208;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_209 = V_1;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(1), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_209);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_210 = L_205;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 2;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0200692993f);
		(&V_3)->___y_1 = (-0.0115540996f);
		(&V_3)->___z_2 = (0.0104965204f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_211 = V_3;
		(&V_2)->___Position_1 = L_211;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.375386894f);
		(&V_4)->___y_1 = (0.424584091f);
		(&V_4)->___z_2 = (-0.00777885597f);
		(&V_4)->___w_3 = (0.8238644f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_212 = V_4;
		(&V_2)->___Orientation_0 = L_212;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_213 = V_2;
		(&V_1)->___Pose_2 = L_213;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_214 = V_1;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(2), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_214);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_215 = L_210;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 3;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)2;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0248525608f);
		(&V_3)->___y_1 = (2.32800001E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_216 = V_3;
		(&V_2)->___Position_1 = L_216;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.260230303f);
		(&V_4)->___y_1 = (0.0243308805f);
		(&V_4)->___z_2 = (0.125678003f);
		(&V_4)->___w_3 = (0.957023084f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_217 = V_4;
		(&V_2)->___Orientation_0 = L_217;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_218 = V_2;
		(&V_1)->___Pose_2 = L_218;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_219 = V_1;
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(3), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_219);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_220 = L_215;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 4;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)3;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0325129107f);
		(&V_3)->___y_1 = (-1.16000001E-10f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_221 = V_3;
		(&V_2)->___Position_1 = L_221;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0827037692f);
		(&V_4)->___y_1 = (-0.0769617036f);
		(&V_4)->___z_2 = (-0.0840622336f);
		(&V_4)->___w_3 = (0.990035713f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_222 = V_4;
		(&V_2)->___Orientation_0 = L_222;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_223 = V_2;
		(&V_1)->___Pose_2 = L_223;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_224 = V_1;
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(4), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_224);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_225 = L_220;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 5;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)4;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0337930992f);
		(&V_3)->___y_1 = (-3.26000005E-09f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_226 = V_3;
		(&V_2)->___Position_1 = L_226;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0835059285f);
		(&V_4)->___y_1 = (0.0650157332f);
		(&V_4)->___z_2 = (-0.0582740605f);
		(&V_4)->___w_3 = (0.992675185f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_227 = V_4;
		(&V_2)->___Orientation_0 = L_227;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_228 = V_2;
		(&V_1)->___Pose_2 = L_228;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_229 = V_1;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(5), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_229);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_230 = L_225;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 6;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0959962383f);
		(&V_3)->___y_1 = (-0.00731645478f);
		(&V_3)->___z_2 = (0.0235506799f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_231 = V_3;
		(&V_2)->___Position_1 = L_231;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0306830909f);
		(&V_4)->___y_1 = (-0.0188555904f);
		(&V_4)->___z_2 = (0.0432814397f);
		(&V_4)->___w_3 = (0.998413622f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_232 = V_4;
		(&V_2)->___Orientation_0 = L_232;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_233 = V_2;
		(&V_1)->___Pose_2 = L_233;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_234 = V_1;
		NullCheck(L_230);
		(L_230)->SetAt(static_cast<il2cpp_array_size_t>(6), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_234);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_235 = L_230;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 7;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)6;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0379272997f);
		(&V_3)->___y_1 = (1.16000001E-10f);
		(&V_3)->___z_2 = (5.97000005E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_236 = V_3;
		(&V_2)->___Position_1 = L_236;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0258524101f);
		(&V_4)->___y_1 = (-0.00711606117f);
		(&V_4)->___z_2 = (0.00329294405f);
		(&V_4)->___w_3 = (0.999634981f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_237 = V_4;
		(&V_2)->___Orientation_0 = L_237;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_238 = V_2;
		(&V_1)->___Pose_2 = L_238;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_239 = V_1;
		NullCheck(L_235);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(7), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_239);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_240 = L_235;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = 8;
		(&V_1)->___ParentBoneIndex_1 = (int16_t)7;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0243036505f);
		(&V_3)->___y_1 = (6.72999989E-10f);
		(&V_3)->___z_2 = (6.75E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_241 = V_3;
		(&V_2)->___Position_1 = L_241;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0160559993f);
		(&V_4)->___y_1 = (-0.0271487199f);
		(&V_4)->___z_2 = (-0.0720340014f);
		(&V_4)->___w_3 = (0.996903419f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_242 = V_4;
		(&V_2)->___Orientation_0 = L_242;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_243 = V_2;
		(&V_1)->___Pose_2 = L_243;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_244 = V_1;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(8), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_244);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_245 = L_240;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)9);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0956466123f);
		(&V_3)->___y_1 = (-0.0025431551f);
		(&V_3)->___z_2 = (0.00172590604f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_246 = V_3;
		(&V_2)->___Position_1 = L_246;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.00906632561f);
		(&V_4)->___y_1 = (-0.0514655896f);
		(&V_4)->___z_2 = (0.0518357493f);
		(&V_4)->___w_3 = (0.997287393f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_247 = V_4;
		(&V_2)->___Orientation_0 = L_247;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_248 = V_2;
		(&V_1)->___Pose_2 = L_248;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_249 = V_1;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_249);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_250 = L_245;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)10);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)9);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0429270007f);
		(&V_3)->___y_1 = (1.31699995E-09f);
		(&V_3)->___z_2 = (1.19300003E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_251 = V_3;
		(&V_2)->___Position_1 = L_251;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0112282299f);
		(&V_4)->___y_1 = (-0.00437887385f);
		(&V_4)->___z_2 = (-0.00197826698f);
		(&V_4)->___w_3 = (0.999925375f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_252 = V_4;
		(&V_2)->___Orientation_0 = L_252;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_253 = V_2;
		(&V_1)->___Pose_2 = L_253;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_254 = V_1;
		NullCheck(L_250);
		(L_250)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_254);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_255 = L_250;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)11);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)10);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0275495797f);
		(&V_3)->___y_1 = (-7.70999986E-10f);
		(&V_3)->___z_2 = (-1.11999998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_256 = V_3;
		(&V_2)->___Position_1 = L_256;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0343195498f);
		(&V_4)->___y_1 = (-0.00461183907f);
		(&V_4)->___z_2 = (-0.0930070132f);
		(&V_4)->___w_3 = (0.995063126f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_257 = V_4;
		(&V_2)->___Orientation_0 = L_257;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_258 = V_2;
		(&V_1)->___Pose_2 = L_258;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_259 = V_1;
		NullCheck(L_255);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_259);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_260 = L_255;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)12);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0886937976f);
		(&V_3)->___y_1 = (-0.00652930699f);
		(&V_3)->___z_2 = (-0.0174652394f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_261 = V_3;
		(&V_2)->___Position_1 = L_261;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0531593598f);
		(&V_4)->___y_1 = (-0.123103403f);
		(&V_4)->___z_2 = (0.0498134904f);
		(&V_4)->___w_3 = (0.989716172f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_262 = V_4;
		(&V_2)->___Orientation_0 = L_262;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_263 = V_2;
		(&V_1)->___Pose_2 = L_263;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_264 = V_1;
		NullCheck(L_260);
		(L_260)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_264);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_265 = L_260;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)13);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)12);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0389961004f);
		(&V_3)->___y_1 = (-4.66000016E-10f);
		(&V_3)->___z_2 = (-5.2400001E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_266 = V_3;
		(&V_2)->___Position_1 = L_266;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0336325206f);
		(&V_4)->___y_1 = (-0.0027898401f);
		(&V_4)->___z_2 = (0.00567601994f);
		(&V_4)->___w_3 = (0.999414325f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_267 = V_4;
		(&V_2)->___Orientation_0 = L_267;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_268 = V_2;
		(&V_1)->___Pose_2 = L_268;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_269 = V_1;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_269);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_270 = L_265;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)14);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)13);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0265733898f);
		(&V_3)->___y_1 = (-1.28099997E-09f);
		(&V_3)->___z_2 = (-1.63000002E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_271 = V_3;
		(&V_2)->___Position_1 = L_271;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0034774621f);
		(&V_4)->___y_1 = (0.0291794501f);
		(&V_4)->___z_2 = (-0.0250285398f);
		(&V_4)->___w_3 = (0.999254823f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_272 = V_4;
		(&V_2)->___Orientation_0 = L_272;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_273 = V_2;
		(&V_1)->___Pose_2 = L_273;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_274 = V_1;
		NullCheck(L_270);
		(L_270)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_274);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_275 = L_270;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)15);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)0;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0340735614f);
		(&V_3)->___y_1 = (-0.00941983517f);
		(&V_3)->___z_2 = (-0.0229985807f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_276 = V_3;
		(&V_2)->___Position_1 = L_276;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.207036003f);
		(&V_4)->___y_1 = (-0.140342802f);
		(&V_4)->___z_2 = (0.0183118004f);
		(&V_4)->___w_3 = (0.968041718f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_277 = V_4;
		(&V_2)->___Orientation_0 = L_277;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_278 = V_2;
		(&V_1)->___Pose_2 = L_278;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_279 = V_1;
		NullCheck(L_275);
		(L_275)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_279);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_280 = L_275;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)16);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)15);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0456505492f);
		(&V_3)->___y_1 = (-9.98610972E-07f);
		(&V_3)->___z_2 = (2.19396293E-06f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_281 = V_3;
		(&V_2)->___Position_1 = L_281;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0911130384f);
		(&V_4)->___y_1 = (0.00407136977f);
		(&V_4)->___z_2 = (0.0281292293f);
		(&V_4)->___w_3 = (0.99543488f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_282 = V_4;
		(&V_2)->___Orientation_0 = L_282;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_283 = V_2;
		(&V_1)->___Pose_2 = L_283;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_284 = V_1;
		NullCheck(L_280);
		(L_280)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_284);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_285 = L_280;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)17);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)16);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0307204202f);
		(&V_3)->___y_1 = (6.97999991E-10f);
		(&V_3)->___z_2 = (1.10599996E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_286 = V_3;
		(&V_2)->___Position_1 = L_286;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (-0.0376166515f);
		(&V_4)->___y_1 = (-0.0429377183f);
		(&V_4)->___z_2 = (-0.0132860504f);
		(&V_4)->___w_3 = (0.998280883f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_287 = V_4;
		(&V_2)->___Orientation_0 = L_287;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_288 = V_2;
		(&V_1)->___Pose_2 = L_288;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_289 = V_1;
		NullCheck(L_285);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_289);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_290 = L_285;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)18);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)17);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0203113798f);
		(&V_3)->___y_1 = (-1.45500001E-09f);
		(&V_3)->___z_2 = (-1.39699996E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_291 = V_3;
		(&V_2)->___Position_1 = L_291;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.000644743384f);
		(&V_4)->___y_1 = (0.0491706692f);
		(&V_4)->___z_2 = (-0.0240188297f);
		(&V_4)->___w_3 = (0.99850142f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_292 = V_4;
		(&V_2)->___Orientation_0 = L_292;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_293 = V_2;
		(&V_1)->___Pose_2 = L_293;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_294 = V_1;
		NullCheck(L_290);
		(L_290)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_294);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_295 = L_290;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)19);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)5;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0245907698f);
		(&V_3)->___y_1 = (0.00102697394f);
		(&V_3)->___z_2 = (-0.000670370122f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_296 = V_3;
		(&V_2)->___Position_1 = L_296;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_297 = V_4;
		(&V_2)->___Orientation_0 = L_297;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_298 = V_2;
		(&V_1)->___Pose_2 = L_298;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_299 = V_1;
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_299);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_300 = L_295;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)20);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)8;
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0223633796f);
		(&V_3)->___y_1 = (0.00102506997f);
		(&V_3)->___z_2 = (-0.000295607606f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_301 = V_3;
		(&V_2)->___Position_1 = L_301;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_302 = V_4;
		(&V_2)->___Orientation_0 = L_302;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_303 = V_2;
		(&V_1)->___Pose_2 = L_303;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_304 = V_1;
		NullCheck(L_300);
		(L_300)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_304);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_305 = L_300;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)21);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)11);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0249649193f);
		(&V_3)->___y_1 = (0.001137299f);
		(&V_3)->___z_2 = (-0.000308652787f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_306 = V_3;
		(&V_2)->___Position_1 = L_306;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_307 = V_4;
		(&V_2)->___Orientation_0 = L_307;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_308 = V_2;
		(&V_1)->___Pose_2 = L_308;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_309 = V_1;
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_309);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_310 = L_305;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)22);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)14);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0243261307f);
		(&V_3)->___y_1 = (0.00160817197f);
		(&V_3)->___z_2 = (-0.000257904991f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_311 = V_3;
		(&V_2)->___Position_1 = L_311;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_312 = V_4;
		(&V_2)->___Orientation_0 = L_312;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_313 = V_2;
		(&V_1)->___Pose_2 = L_313;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_314 = V_1;
		NullCheck(L_310);
		(L_310)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_314);
		BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* L_315 = L_310;
		il2cpp_codegen_initobj((&V_1), sizeof(Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D));
		(&V_1)->___Id_0 = ((int32_t)23);
		(&V_1)->___ParentBoneIndex_1 = (int16_t)((int32_t)18);
		il2cpp_codegen_initobj((&V_2), sizeof(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0219223797f);
		(&V_3)->___y_1 = (0.00121608598f);
		(&V_3)->___z_2 = (0.000246479613f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_316 = V_3;
		(&V_2)->___Position_1 = L_316;
		il2cpp_codegen_initobj((&V_4), sizeof(Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A));
		(&V_4)->___x_0 = (0.0f);
		(&V_4)->___y_1 = (0.0f);
		(&V_4)->___z_2 = (0.0f);
		(&V_4)->___w_3 = (1.0f);
		Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A L_317 = V_4;
		(&V_2)->___Orientation_0 = L_317;
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_318 = V_2;
		(&V_1)->___Pose_2 = L_318;
		Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D L_319 = V_1;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D)L_319);
		(&V_0)->___Bones_3 = L_315;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Bones_3), (void*)L_315);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_320 = (BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44*)(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44*)SZArrayNew(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_321 = L_320;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0182282794f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0275587905f);
		(&V_3)->___y_1 = (-0.0140414797f);
		(&V_3)->___z_2 = (0.0168514494f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_322 = V_3;
		(&V_5)->___StartPoint_1 = L_322;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0779408067f);
		(&V_3)->___y_1 = (-0.00909067784f);
		(&V_3)->___z_2 = (0.0217832606f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_323 = V_3;
		(&V_5)->___EndPoint_2 = L_323;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_324 = V_5;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(0), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_324);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_325 = L_321;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0232319608f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0263260193f);
		(&V_3)->___y_1 = (-0.0086610131f);
		(&V_3)->___z_2 = (0.00653134286f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_326 = V_3;
		(&V_5)->___StartPoint_1 = L_326;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0725595802f);
		(&V_3)->___y_1 = (-0.00458069099f);
		(&V_3)->___z_2 = (0.00332634291f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_327 = V_3;
		(&V_5)->___EndPoint_2 = L_327;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_328 = V_5;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(1), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_328);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_329 = L_325;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0160882808f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0297034997f);
		(&V_3)->___y_1 = (-0.00920606032f);
		(&V_3)->___z_2 = (-0.0111164097f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_330 = V_3;
		(&V_5)->___StartPoint_1 = L_330;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.07271415f);
		(&V_3)->___y_1 = (-0.00725440308f);
		(&V_3)->___z_2 = (-0.0157454293f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_331 = V_3;
		(&V_5)->___EndPoint_2 = L_331;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_332 = V_5;
		NullCheck(L_329);
		(L_329)->SetAt(static_cast<il2cpp_array_size_t>(2), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_332);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_333 = L_329;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)0;
		(&V_5)->___Radius_3 = (0.0234608501f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0284479894f);
		(&V_3)->___y_1 = (-0.00882715266f);
		(&V_3)->___z_2 = (-0.0144697903f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_334 = V_3;
		(&V_5)->___StartPoint_1 = L_334;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0603639185f);
		(&V_3)->___y_1 = (-0.00957379676f);
		(&V_3)->___z_2 = (-0.0213304292f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_335 = V_3;
		(&V_5)->___EndPoint_2 = L_335;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_336 = V_5;
		NullCheck(L_333);
		(L_333)->SetAt(static_cast<il2cpp_array_size_t>(3), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_336);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_337 = L_333;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)3;
		(&V_5)->___Radius_3 = (0.0183825102f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (3.72500009E-09f);
		(&V_3)->___y_1 = (-6.97999991E-10f);
		(&V_3)->___z_2 = (-2.79399992E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_338 = V_3;
		(&V_5)->___StartPoint_1 = L_338;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0325129107f);
		(&V_3)->___y_1 = (-6.97999991E-10f);
		(&V_3)->___z_2 = (2.56100008E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_339 = V_3;
		(&V_5)->___EndPoint_2 = L_339;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_340 = V_5;
		NullCheck(L_337);
		(L_337)->SetAt(static_cast<il2cpp_array_size_t>(4), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_340);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_341 = L_337;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)4;
		(&V_5)->___Radius_3 = (0.0102829598f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (-9.30999999E-10f);
		(&V_3)->___z_2 = (5.58799984E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_342 = V_3;
		(&V_5)->___StartPoint_1 = L_342;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0337930806f);
		(&V_3)->___y_1 = (-4.65700012E-09f);
		(&V_3)->___z_2 = (1.02450004E-08f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_343 = V_3;
		(&V_5)->___EndPoint_2 = L_343;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_344 = V_5;
		NullCheck(L_341);
		(L_341)->SetAt(static_cast<il2cpp_array_size_t>(5), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_344);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_345 = L_341;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)5;
		(&V_5)->___Radius_3 = (0.00976880733f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-7.45099982E-09f);
		(&V_3)->___y_1 = (1.86299998E-09f);
		(&V_3)->___z_2 = (8.38199998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_346 = V_3;
		(&V_5)->___StartPoint_1 = L_346;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0150007997f);
		(&V_3)->___y_1 = (0.00065256469f);
		(&V_3)->___z_2 = (-0.000592957018f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_347 = V_3;
		(&V_5)->___EndPoint_2 = L_347;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_348 = V_5;
		NullCheck(L_345);
		(L_345)->SetAt(static_cast<il2cpp_array_size_t>(6), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_348);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_349 = L_345;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)6;
		(&V_5)->___Radius_3 = (0.0102952598f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (4.66000016E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_350 = V_3;
		(&V_5)->___StartPoint_1 = L_350;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0379273109f);
		(&V_3)->___y_1 = (-4.66000016E-10f);
		(&V_3)->___z_2 = (3.72500009E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_351 = V_3;
		(&V_5)->___EndPoint_2 = L_351;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_352 = V_5;
		NullCheck(L_349);
		(L_349)->SetAt(static_cast<il2cpp_array_size_t>(7), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_352);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_353 = L_349;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)7;
		(&V_5)->___Radius_3 = (0.00803810079f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (9.30999999E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_354 = V_3;
		(&V_5)->___StartPoint_1 = L_354;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0243036393f);
		(&V_3)->___y_1 = (1.86299998E-09f);
		(&V_3)->___z_2 = (3.72500009E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_355 = V_3;
		(&V_5)->___EndPoint_2 = L_355;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_356 = V_5;
		NullCheck(L_353);
		(L_353)->SetAt(static_cast<il2cpp_array_size_t>(8), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_356);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_357 = L_353;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)8;
		(&V_5)->___Radius_3 = (0.00763619598f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (1.49010004E-08f);
		(&V_3)->___y_1 = (1.86299998E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_358 = V_3;
		(&V_5)->___StartPoint_1 = L_358;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.01507759f);
		(&V_3)->___y_1 = (0.000502869487f);
		(&V_3)->___z_2 = (-6.05285204E-05f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_359 = V_3;
		(&V_5)->___EndPoint_2 = L_359;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_360 = V_5;
		NullCheck(L_357);
		(L_357)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_360);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_361 = L_357;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)9);
		(&V_5)->___Radius_3 = (0.0111739403f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (-9.30999999E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_362 = V_3;
		(&V_5)->___StartPoint_1 = L_362;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0429270007f);
		(&V_3)->___y_1 = (1.86299998E-09f);
		(&V_3)->___z_2 = (9.30999999E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_363 = V_3;
		(&V_5)->___EndPoint_2 = L_363;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_364 = V_5;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_364);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_365 = L_361;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)10);
		(&V_5)->___Radius_3 = (0.00803095754f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-1.49010004E-08f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_366 = V_3;
		(&V_5)->___StartPoint_1 = L_366;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0275496207f);
		(&V_3)->___y_1 = (4.66000016E-10f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_367 = V_3;
		(&V_5)->___EndPoint_2 = L_367;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_368 = V_5;
		NullCheck(L_365);
		(L_365)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_368);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_369 = L_365;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)11);
		(&V_5)->___Radius_3 = (0.0076294099f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-1.49010004E-08f);
		(&V_3)->___y_1 = (1.86299998E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_370 = V_3;
		(&V_5)->___StartPoint_1 = L_370;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0171915591f);
		(&V_3)->___y_1 = (0.00074500218f);
		(&V_3)->___z_2 = (-0.000403647311f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_371 = V_3;
		(&V_5)->___EndPoint_2 = L_371;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_372 = V_5;
		NullCheck(L_369);
		(L_369)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_372);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_373 = L_369;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)12);
		(&V_5)->___Radius_3 = (0.00992213935f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (-2.33000008E-10f);
		(&V_3)->___z_2 = (-2.32800001E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_374 = V_3;
		(&V_5)->___StartPoint_1 = L_374;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0389961191f);
		(&V_3)->___y_1 = (4.66000016E-10f);
		(&V_3)->___z_2 = (-4.66000016E-10f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_375 = V_3;
		(&V_5)->___EndPoint_2 = L_375;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_376 = V_5;
		NullCheck(L_373);
		(L_373)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_376);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_377 = L_373;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)13);
		(&V_5)->___Radius_3 = (0.00761167379f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-1.49010004E-08f);
		(&V_3)->___y_1 = (1.86299998E-09f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_378 = V_3;
		(&V_5)->___StartPoint_1 = L_378;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0265733898f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_379 = V_3;
		(&V_5)->___EndPoint_2 = L_379;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_380 = V_5;
		NullCheck(L_377);
		(L_377)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_380);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_381 = L_377;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)14);
		(&V_5)->___Radius_3 = (0.00723109022f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (9.30999999E-10f);
		(&V_3)->___z_2 = (-2.32800001E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_382 = V_3;
		(&V_5)->___StartPoint_1 = L_382;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0163245499f);
		(&V_3)->___y_1 = (0.00128808699f);
		(&V_3)->___z_2 = (-0.000123585094f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_383 = V_3;
		(&V_5)->___EndPoint_2 = L_383;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_384 = V_5;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_384);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_385 = L_381;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)16);
		(&V_5)->___Radius_3 = (0.00848335307f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (2.33000008E-10f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_386 = V_3;
		(&V_5)->___StartPoint_1 = L_386;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0307204109f);
		(&V_3)->___y_1 = (1.16400001E-09f);
		(&V_3)->___z_2 = (0.0f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_387 = V_3;
		(&V_5)->___EndPoint_2 = L_387;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_388 = V_5;
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_388);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_389 = L_385;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)17);
		(&V_5)->___Radius_3 = (0.0067641912f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (7.45099982E-09f);
		(&V_3)->___y_1 = (1.71699999E-09f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_390 = V_3;
		(&V_5)->___StartPoint_1 = L_390;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0203113705f);
		(&V_3)->___y_1 = (-1.46000004E-10f);
		(&V_3)->___z_2 = (-1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_391 = V_3;
		(&V_5)->___EndPoint_2 = L_391;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_392 = V_5;
		NullCheck(L_389);
		(L_389)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_392);
		BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* L_393 = L_389;
		il2cpp_codegen_initobj((&V_5), sizeof(BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74));
		(&V_5)->___BoneIndex_0 = (int16_t)((int32_t)18);
		(&V_5)->___Radius_3 = (0.00642598188f);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (0.0f);
		(&V_3)->___y_1 = (0.0f);
		(&V_3)->___z_2 = (1.86299998E-09f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_394 = V_3;
		(&V_5)->___StartPoint_1 = L_394;
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562));
		(&V_3)->___x_0 = (-0.0150700398f);
		(&V_3)->___y_1 = (0.000605618581f);
		(&V_3)->___z_2 = (2.49091499E-05f);
		Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 L_395 = V_3;
		(&V_5)->___EndPoint_2 = L_395;
		BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74 L_396 = V_5;
		NullCheck(L_393);
		(L_393)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74)L_396);
		(&V_0)->___BoneCapsules_4 = L_393;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___BoneCapsules_4), (void*)L_393);
		Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F L_397 = V_0;
		((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___RightSkeleton_1 = L_397;
		Il2CppCodeGenWriteBarrier((void**)&(((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___RightSkeleton_1))->___Bones_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_StaticFields*)il2cpp_codegen_static_fields_for(OVRSkeletonData_t6C85DC6103A1CFF1FACB103A206637A58D2A9CA6_il2cpp_TypeInfo_var))->___RightSkeleton_1))->___BoneCapsules_4), (void*)NULL);
		#endif
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.SetDisplayRefresh::SetDesiredDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDisplayRefresh_SetDesiredDisplayFrequency_mD8D02EE88963C2FE24CBC40A58E07576BA3086F8 (SetDisplayRefresh_t1F83887BC4D7009A3C0A6C7404A6E972B75B5719* __this, float ___desiredDisplayFrequency0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17B4432F452C748E18CA9391A423D5A6AF5646B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var validFrequencies = OVRPlugin.systemDisplayFrequenciesAvailable;
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0;
		L_0 = OVRPlugin_get_systemDisplayFrequenciesAvailable_m11215058F2FA1DCB9DC3AF176BAC424D567BEF9B(NULL);
		// if (validFrequencies.Contains(_desiredDisplayFrequency))
		float L_1 = __this->____desiredDisplayFrequency_4;
		bool L_2;
		L_2 = Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534((RuntimeObject*)L_0, L_1, Enumerable_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD6D1FAD86278BA0487A861167B11E6783CFE534_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.Log("[Oculus.Interaction] Setting desired display frequency to " + _desiredDisplayFrequency);
		float* L_3 = (&__this->____desiredDisplayFrequency_4);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral17B4432F452C748E18CA9391A423D5A6AF5646B2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// OVRPlugin.systemDisplayFrequency = _desiredDisplayFrequency;
		float L_6 = __this->____desiredDisplayFrequency_4;
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		OVRPlugin_set_systemDisplayFrequency_m228B8C0548F88E6EB7EBD7A66E42B273F3D155EB(L_6, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.SetDisplayRefresh::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDisplayRefresh_Awake_mC0D805EACD51C81099F0CE009E56D0EF62F79388 (SetDisplayRefresh_t1F83887BC4D7009A3C0A6C7404A6E972B75B5719* __this, const RuntimeMethod* method) 
{
	{
		// SetDesiredDisplayFrequency(_desiredDisplayFrequency);
		float L_0 = __this->____desiredDisplayFrequency_4;
		SetDisplayRefresh_SetDesiredDisplayFrequency_mD8D02EE88963C2FE24CBC40A58E07576BA3086F8(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.SetDisplayRefresh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDisplayRefresh__ctor_m03ACF121F70E891C7C4031D7C2FC5ACF697BC06F (SetDisplayRefresh_t1F83887BC4D7009A3C0A6C7404A6E972B75B5719* __this, const RuntimeMethod* method) 
{
	{
		// private float _desiredDisplayFrequency = 90f;
		__this->____desiredDisplayFrequency_4 = (90.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Input.IOVRCameraRigRef Oculus.Interaction.Input.TrackingToWorldTransformerOVR::get_CameraRigRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackingToWorldTransformerOVR_get_CameraRigRef_mE27D2627F557B2C82BFB456A0E4109E70B34BDC3 (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCameraRigRefU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::set_CameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_set_CameraRigRef_m49E4398C42EDBC38F8F2B72FFFFBAD818556EF0B (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCameraRigRefU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraRigRefU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.Input.TrackingToWorldTransformerOVR::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TrackingToWorldTransformerOVR_get_Transform_mE918FAAE6A2FD32CA5FA5CAC8F604588C5EFC653 (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform Transform => CameraRigRef.CameraRig.transform;
		RuntimeObject* L_0;
		L_0 = TrackingToWorldTransformerOVR_get_CameraRigRef_mE27D2627F557B2C82BFB456A0E4109E70B34BDC3_inline(__this, NULL);
		NullCheck(L_0);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_1;
		L_1 = InterfaceFuncInvoker0< OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* >::Invoke(0 /* OVRCameraRig Oculus.Interaction.Input.IOVRCameraRigRef::get_CameraRig() */, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Pose Oculus.Interaction.Input.TrackingToWorldTransformerOVR::ToWorldPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackingToWorldTransformerOVR_ToWorldPose_m309C9A4A25FF0DC8866DC1B3EFB4BBB60C4EA81C (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// Transform trackingToWorldSpace = Transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = TrackingToWorldTransformerOVR_get_Transform_mE918FAAE6A2FD32CA5FA5CAC8F604588C5EFC653(__this, NULL);
		V_0 = L_0;
		// pose.position = trackingToWorldSpace.TransformPoint(pose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___position_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_3, NULL);
		(&___pose0)->___position_0 = L_4;
		// pose.rotation = trackingToWorldSpace.rotation * pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_8, NULL);
		(&___pose0)->___rotation_1 = L_9;
		// return pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = ___pose0;
		return L_10;
	}
}
// UnityEngine.Pose Oculus.Interaction.Input.TrackingToWorldTransformerOVR::ToTrackingPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackingToWorldTransformerOVR_ToTrackingPose_m9AF62ABF51AAE4CCD93E93673F100136FBB318BC (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPose0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Transform trackingToWorldSpace = Transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = TrackingToWorldTransformerOVR_get_Transform_mE918FAAE6A2FD32CA5FA5CAC8F604588C5EFC653(__this, NULL);
		// Vector3 position = trackingToWorldSpace.InverseTransformPoint(worldPose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___worldPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___position_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_3, NULL);
		V_0 = L_4;
		// Quaternion rotation = Quaternion.Inverse(trackingToWorldSpace.rotation) * worldPose.rotation;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_5, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___worldPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return new Pose(position, rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_12), L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Input.TrackingToWorldTransformerOVR::get_WorldToTrackingWristJointFixup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TrackingToWorldTransformerOVR_get_WorldToTrackingWristJointFixup_mB0D0650B912262C90A72D2FAE44B4330888B2CEA (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Quaternion WorldToTrackingWristJointFixup => FromOVRHandDataSource.WristFixupRotation;
		il2cpp_codegen_runtime_class_init_inline(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = FromOVRHandDataSource_get_WristFixupRotation_m0CDC8374A1659B878A37E03802B4F55F7683DB92_inline(NULL);
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_Awake_m3257DCD440DB56525ECF31C867BA8466CF6AD6F9 (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____cameraRigRef_4;
		TrackingToWorldTransformerOVR_set_CameraRigRef_m49E4398C42EDBC38F8F2B72FFFFBAD818556EF0B_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IOVRCameraRigRef_t80C138B66CEC666A9A053632C2EFAF1B24FA67B8_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_Start_m09AF68A70EA96E218907FFFE63384586B0FFB9DB (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::InjectAllTrackingToWorldTransformerOVR(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_InjectAllTrackingToWorldTransformerOVR_mE8D0DC71460D617EBF6B2DDCB41C0B33A4C2B607 (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, RuntimeObject* ___cameraRigRef0, const RuntimeMethod* method) 
{
	{
		// InjectCameraRigRef(cameraRigRef);
		RuntimeObject* L_0 = ___cameraRigRef0;
		TrackingToWorldTransformerOVR_InjectCameraRigRef_m57BF77341D801D3237EF26C5931CD63A2F6DC32F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::InjectCameraRigRef(Oculus.Interaction.Input.IOVRCameraRigRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_InjectCameraRigRef_m57BF77341D801D3237EF26C5931CD63A2F6DC32F (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, RuntimeObject* ___cameraRigRef0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cameraRigRef = cameraRigRef as MonoBehaviour;
		RuntimeObject* L_0 = ___cameraRigRef0;
		__this->____cameraRigRef_4 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraRigRef_4), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// CameraRigRef = cameraRigRef;
		RuntimeObject* L_1 = ___cameraRigRef0;
		TrackingToWorldTransformerOVR_set_CameraRigRef_m49E4398C42EDBC38F8F2B72FFFFBAD818556EF0B_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.TrackingToWorldTransformerOVR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR__ctor_m9B233C04F8CB9319410ABB0368CC04D37D918AFC (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Input.TrackingToWorldTransformerOVR::Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackingToWorldTransformerOVR_Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose_m3D90EFE6F65A7372E23A310744758743A8EC5DE5 (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPose0, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___worldPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = TrackingToWorldTransformerOVR_ToTrackingPose_m9AF62ABF51AAE4CCD93E93673F100136FBB318BC(__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.Input.Visuals.OVRControllerVisual::get_ForceOffVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	{
		// public bool ForceOffVisibility { get; set; }
		bool L_0 = __this->___U3CForceOffVisibilityU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::set_ForceOffVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_set_ForceOffVisibility_m231B7EFC10879F66D25B393CAC366D02287BB341 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ForceOffVisibility { get; set; }
		bool L_0 = ___value0;
		__this->___U3CForceOffVisibilityU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_Awake_mC9A29A2934C219E871DAA971716F4DBE03785441 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Controller = _controller as IController;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____controller_4;
		__this->___Controller_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Controller_5), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_Start_mEBE2CAD8B217957A29D058684C371DE63AD6D529 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_8);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// switch (Controller.Handedness)
		RuntimeObject* L_1 = __this->___Controller_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.IController::get_Handedness() */, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_003c;
	}

IL_0022:
	{
		// _ovrControllerHelper.m_controller = OVRInput.Controller.LTouch;
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_5 = __this->____ovrControllerHelper_6;
		NullCheck(L_5);
		L_5->___m_controller_12 = 1;
		// break;
		goto IL_003c;
	}

IL_0030:
	{
		// _ovrControllerHelper.m_controller = OVRInput.Controller.RTouch;
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_6 = __this->____ovrControllerHelper_6;
		NullCheck(L_6);
		L_6->___m_controller_12 = 2;
	}

IL_003c:
	{
		// this.EndStart(ref _started);
		bool* L_7 = (&__this->____started_8);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_OnEnable_m7B49E7A5389C6289203707219E8BFD9E203F2292 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Controller.WhenUpdated += HandleUpdated;
		RuntimeObject* L_1 = __this->___Controller_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(8 /* System.Void Oculus.Interaction.Input.IController::add_WhenUpdated(System.Action) */, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_OnDisable_mF09EF8F6D29649B179DAA7264EFCE8F293D3FB05 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started && _controller != null)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____controller_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Controller.WhenUpdated -= HandleUpdated;
		RuntimeObject* L_3 = __this->___Controller_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(9 /* System.Void Oculus.Interaction.Input.IController::remove_WhenUpdated(System.Action) */, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::HandleUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		// if (!Controller.IsConnected ||
		//     ForceOffVisibility ||
		//     !Controller.TryGetPose(out Pose rootPose))
		RuntimeObject* L_0 = __this->___Controller_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Oculus.Interaction.Input.IController::get_IsConnected() */, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6_inline(__this, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = __this->___Controller_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(3 /* System.Boolean Oculus.Interaction.Input.IController::TryGetPose(UnityEngine.Pose&) */, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_3, (&V_0));
		if (L_4)
		{
			goto IL_0031;
		}
	}

IL_0024:
	{
		// _ovrControllerHelper.enabled = false;
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_5 = __this->____ovrControllerHelper_6;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// _ovrControllerHelper.enabled = true;
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_6 = __this->____ovrControllerHelper_6;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// transform.position = rootPose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8.___position_0;
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_9, NULL);
		// transform.rotation = rootPose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11.___rotation_1;
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_12, NULL);
		// float parentScale = transform.parent != null ? transform.parent.lossyScale.x : 1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0079;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_008e;
	}

IL_0079:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_17, NULL);
		float L_19 = L_18.___x_2;
		G_B7_0 = L_19;
	}

IL_008e:
	{
		V_1 = G_B7_0;
		// transform.localScale = Controller.Scale / parentScale * Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_21 = __this->___Controller_5;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single Oculus.Interaction.Input.IController::get_Scale() */, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_21);
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)(L_22/L_23)), L_24, NULL);
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_25, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::InjectAllOVRControllerVisual(Oculus.Interaction.Input.IController,OVRControllerHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerVisual_m167637C984FEA203699F72F3E3F5A0807B05C7C9 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, RuntimeObject* ___controller0, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper1, const RuntimeMethod* method) 
{
	{
		// InjectController(controller);
		RuntimeObject* L_0 = ___controller0;
		OVRControllerVisual_InjectController_m88C4432F0B0CA047F62BC9D0DF5DC3302B5F05BB(__this, L_0, NULL);
		// InjectAllOVRControllerHelper(ovrControllerHelper);
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_1 = ___ovrControllerHelper1;
		OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::InjectController(Oculus.Interaction.Input.IController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectController_m88C4432F0B0CA047F62BC9D0DF5DC3302B5F05BB (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, RuntimeObject* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _controller = controller as MonoBehaviour;
		RuntimeObject* L_0 = ___controller0;
		__this->____controller_4 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_4), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// Controller = controller;
		RuntimeObject* L_1 = ___controller0;
		__this->___Controller_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Controller_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::InjectAllOVRControllerHelper(OVRControllerHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper0, const RuntimeMethod* method) 
{
	{
		// _ovrControllerHelper = ovrControllerHelper;
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_0 = ___ovrControllerHelper0;
		__this->____ovrControllerHelper_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerHelper_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.Visuals.OVRControllerVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual__ctor_mC0577E7320E03CE7593955752190A912E9C7AADE (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRCanvasMeshRenderer_get_RenderingMode_mE24382BC23C839818FD4E62FA057B44FCDEC4AF0_inline (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, const RuntimeMethod* method) 
{
	{
		// private OVRRenderingMode RenderingMode => (OVRRenderingMode)_renderingMode;
		int32_t L_0 = ((CanvasMeshRenderer_t9A3BB36C15352BA3F71071BDEEB390B849FB6419*)__this)->____renderingMode_7;
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRCanvasMeshRenderer_InjectCanvasMesh_m3E468056EA29A9302498CE9BCC951B338134308F_inline (OVRCanvasMeshRenderer_t79F619DA21BCBC644A841CE9FAD1E27954D5C97A* __this, CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* ___canvasMesh0, const RuntimeMethod* method) 
{
	{
		// _canvasMesh = canvasMesh;
		CanvasMesh_t27611EB5D29FF601150D5ED935F77B23ED0B38A9* L_0 = ___canvasMesh0;
		__this->____canvasMesh_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasMesh_12), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectController_m7C333EF1092C97A05ACC7620F57E0A877688FE28_inline (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// _controller = controller;
		int32_t L_0 = ___controller0;
		__this->____controller_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedHandOVR_InjectAnimator_mBD7C14F0B699D142D625EF6C8DC502669AB5FE53_inline (AnimatedHandOVR_t5215E103CB7E6CDB45543E152722254ACACD2D78* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, const RuntimeMethod* method) 
{
	{
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		__this->____animator_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_10), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Touch_m043596169576575A80587233F191A32D427F1057_inline (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public OVRInput.Touch Touch { get; }
		int32_t L_0 = __this->___U3CTouchU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Button_mB700B20D2988D3CDDD9B5963550FDB2238880FA4_inline (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public OVRInput.Button Button { get; }
		int32_t L_0 = __this->___U3CButtonU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UsageMapping_get_Usage_mB0FF90119D5BDF02FB1E9D357F1FB9C0D03B674E_inline (UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB* __this, const RuntimeMethod* method) 
{
	{
		// public ControllerButtonUsage Usage { get; }
		int32_t L_0 = __this->___U3CUsageU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 OVRPointerPoseSelector_get_LocalPointerPose_m1B2EBC32C0F4D3C778CADB2D58DE762AF4EFFEC6_inline (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, const RuntimeMethod* method) 
{
	{
		// public Pose LocalPointerPose { get; private set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CLocalPointerPoseU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRPointerPoseSelector_set_LocalPointerPose_m0F08718CAB486B4A44E57730FE87D04358D282CE_inline (OVRPointerPoseSelector_tAFF9D6C036191193059498E82B3E62E3A3490743* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose LocalPointerPose { get; private set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CLocalPointerPoseU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_set_CameraRigRef_m77081F15C21BCF15B5CFCD3F432EA0709A5BF69D_inline (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCameraRigRefU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraRigRefU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FromOVRControllerDataSource_get_CameraRigRef_mA1AF0A9F82733AB80D7BAF05AD09FF82D693C04D_inline (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCameraRigRefU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerDataSourceConfig_set_Handedness_mB4FAE612E5494F06F211F9FE3E0C459273EA2AE5_inline (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Handedness Handedness { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandednessU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerDataSourceConfig_set_TrackingToWorldTransformer_m3FEFC92EA64E81A433997AFA752FE3CB725A46E6_inline (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerDataSourceConfig_set_HmdData_mD4ED53FF6FAB6AA6BDB1173951802BF2FB2D9283_inline (ControllerDataSourceConfig_t77F9591B645FD62760D99484471B223F3ACF8062* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IDataSource<HmdDataAsset> HmdData { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHmdDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHmdDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRInput_GetConnectedControllers_m4EF5F5C48A11AA32286CB818986AC1BA36F0DE65_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return connectedControllerTypes;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_StaticFields*)il2cpp_codegen_static_fields_for(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var))->___connectedControllerTypes_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerDataSource_InjectHandedness_m81961E1B46DFC1189822BFBD49AD90C1AEE92F54_inline (FromOVRControllerDataSource_t15807F807DEF85A26FA6C78577FD8EB5697A4ACA* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// _handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->____handedness_15 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_Handedness_m6D4D243AC1A402A05F9674A5115E901EA2C0E85C_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Handedness Handedness { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CHandednessU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_TrackingToWorldTransformer_m32D9167DF390D900C1C75D774F143CEC05D3326E_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_HandSkeleton_m4BF7D11ABA852539E4AA81534AFCAB2E6A1F2F56_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___value0, const RuntimeMethod* method) 
{
	{
		// public HandSkeleton HandSkeleton { get; set; }
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_0 = ___value0;
		__this->___U3CHandSkeletonU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandSkeletonU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandDataSourceConfig_set_HmdData_m0A05997DA96A459644871953EDE2C9AFA77096F6_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IDataSource<HmdDataAsset> HmdData { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHmdDataU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHmdDataU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FromOVRControllerHandDataSource_get_WristFixupRotation_m55A8CE77CB2CFDEB69E8BCCE82A7812660D0E31D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Quaternion WristFixupRotation { get; } =
		il2cpp_codegen_runtime_class_init_inline(FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B_il2cpp_TypeInfo_var))->___U3CWristFixupRotationU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = __this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectHandedness_m49BF2D8D79B9352448C8EACFB0B7C023AFE53176_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// _handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->____handedness_19 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectBones_m3CF7465457AC661EB4F140BEED7E2C10925BFB83_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___bones0, const RuntimeMethod* method) 
{
	{
		// _bones = bones;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ___bones0;
		__this->____bones_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bones_12), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectPinchCurve_mFF0B2A824EC5859E940160B6F8B88312994E3BF4_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___pinchCurve0, const RuntimeMethod* method) 
{
	{
		// _pinchCurve = pinchCurve;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___pinchCurve0;
		__this->____pinchCurve_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinchCurve_13), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectRootOffset_m0F2279ABC8294E0C8D134D7F894F3D3B69CCD6E5_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootOffset0, const RuntimeMethod* method) 
{
	{
		// _rootOffset = rootOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___rootOffset0;
		__this->____rootOffset_14 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRControllerHandDataSource_InjectRootAngleOffset_m2A87ACA5AA1A6D791D9DCBC5B7FCA51848BC10EA_inline (FromOVRControllerHandDataSource_tD3DFB2E0722B4FCB9FA1279945C34E4BB80DC43B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootAngleOffset0, const RuntimeMethod* method) 
{
	{
		// _rootAngleOffset = rootAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___rootAngleOffset0;
		__this->____rootAngleOffset_15 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonPoseData_get_IsDataValid_m7C3D29FE3C5F765C05C11DF50F7CCB6F7A5D35DD_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; }
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SkeletonPoseData_get_RootScale_mFCF463E498E2652EE2F3B71C4D54B7801EC0D4F1_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; }
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkeletonPoseData_set_IsDataValid_m3EB469D44C3697FC541F1EB3AADEFAC3EB57AE20_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkeletonPoseData_set_RootScale_m418868BB1AA7A8080B53BEA4E4E72CEA9074D7A7_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; }
		float L_0 = ___value0;
		__this->___U3CRootScaleU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsTracked_m869AA41C7CC8F224F1CD5A10FF6CD62E6F6BDFDA_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsTracked { get; private set; }
		bool L_0 = __this->___U3CIsTrackedU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonPoseData_get_IsDataHighConfidence_mA41FF6B1B22AC004AC0502A6EEED5F0E5DD46BDC_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; }
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsDominantHand_m27F6ABFDF2E9F717E7EED827AF1867D11CBA415A_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDominantHand { get; private set; }
		bool L_0 = __this->___U3CIsDominantHandU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 SkeletonPoseData_get_RootPose_m80C1C69254FA42D1065FBA827681D934E1B334A1_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) 
{
	{
		// public OVRPlugin.Posef RootPose { get; set; }
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_0 = __this->___U3CRootPoseU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsPointerPoseValid_m675548AD3E51E67A3F5EF6C47345775E5B1C8B5F_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPointerPoseValid { get; private set; }
		bool L_0 = __this->___U3CIsPointerPoseValidU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) 
{
	{
		// public Transform PointerPose { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CPointerPoseU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* SkeletonPoseData_get_BoneRotations_mACE351DC74E169E3806489E476047373DA10C25E_inline (SkeletonPoseData_tA0A3A4163EEA849A40C82CF95F1847A9827A5F86* __this, const RuntimeMethod* method) 
{
	{
		// public OVRPlugin.Quatf[] BoneRotations { get; set; }
		QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* L_0 = __this->___U3CBoneRotationsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* HandDataSourceConfig_get_HandSkeleton_m749A8C9530B31B6449F64598D281C6D53A8B2488_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) 
{
	{
		// public HandSkeleton HandSkeleton { get; set; }
		HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* L_0 = __this->___U3CHandSkeletonU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FromOVRHandDataSource_get_WristFixupRotation_m0CDC8374A1659B878A37E03802B4F55F7683DB92_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Quaternion WristFixupRotation { get; } =
		il2cpp_codegen_runtime_class_init_inline(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_StaticFields*)il2cpp_codegen_static_fields_for(FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9_il2cpp_TypeInfo_var))->___U3CWristFixupRotationU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRHandDataSource_InjectHandedness_m0A2CFFFD12F32F429E472E7CCFCF43B01FC6D373_inline (FromOVRHandDataSource_t432607B9E900CE79C6DAF59C38656A25387CF7C9* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// _handedness = handedness;
		int32_t L_0 = ___handedness0;
		__this->____handedness_14 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_set_CameraRigRef_mF7F1292CCD53BFD490169C7292E43482B0439CDD_inline (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCameraRigRefU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraRigRefU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FromOVRHmdDataSource_get_CameraRigRef_m9701F8D26583D60BF41D866E77293BAD713FA800_inline (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCameraRigRefU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HmdDataSourceConfig_set_TrackingToWorldTransformer_m16678A152AEFFFE83CF6FB6222C49A30EC6FAB75_inline (HmdDataSourceConfig_tDF44AA08CCE0251849B4951A28930B6405B7C51F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTrackingToWorldTransformerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrackingToWorldTransformerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* OVRManager_get_instance_mD4D2BEB818DA7BFC5DA79F80E6768804A896EE10_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OVRManager instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_0 = ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_StaticFields*)il2cpp_codegen_static_fields_for(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* __this, const RuntimeMethod* method) 
{
	{
		// return _headPoseRelativeOffsetRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____headPoseRelativeOffsetRotation_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* __this, const RuntimeMethod* method) 
{
	{
		// return _headPoseRelativeOffsetTranslation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____headPoseRelativeOffsetTranslation_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FromOVRHmdDataSource_InjectUseOvrManagerEmulatedPose_m09200B01D452610D27E55B79E05CBCD86C53B1DD_inline (FromOVRHmdDataSource_t60F1D32F93B58AC36DB8E25645BB23596DCFA1CF* __this, bool ___useOvrManagerEmulatedPose0, const RuntimeMethod* method) 
{
	{
		// _useOvrManagerEmulatedPose = useOvrManagerEmulatedPose;
		bool L_0 = ___useOvrManagerEmulatedPose0;
		__this->____useOvrManagerEmulatedPose_15 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		// public Transform leftHandAnchor { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CleftHandAnchorU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_rightHandAnchor_mF2D328A04338A8119F3BE6EE09FE66965258A26D_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		// public Transform rightHandAnchor { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CrightHandAnchorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_leftControllerAnchor_m0757202E2FCE3F39E1E8E8A1CFABFB1645596538_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		// public Transform leftControllerAnchor { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CleftControllerAnchorU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		// public Transform rightControllerAnchor { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CrightControllerAnchorU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* OVRCameraRigRef_get_CameraRig_mBA6A96863C9DA3F9056645D33E18145A12962CD9_inline (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, const RuntimeMethod* method) 
{
	{
		// public OVRCameraRig CameraRig => _ovrCameraRig;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____ovrCameraRig_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRCameraRigRef_InjectRequireHands_mF8D0893140652474BFB8478DA5B4F3A57E184A83_inline (OVRCameraRigRef_t559BBEBD06F1FE029695CA0E072E21E1CE9C01DE* __this, bool ___requireHands0, const RuntimeMethod* method) 
{
	{
		// _requireOvrHands = requireHands;
		bool L_0 = ___requireHands0;
		__this->____requireOvrHands_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRInputDeviceActiveState_InjectControllerTypes_m0CDBF4767F3C14AD09296F5D0FB5DC53FE8D825F_inline (OVRInputDeviceActiveState_tC7731D9583BB49397FFB1C9F9913D04611C5B559* __this, List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* ___controllerTypes0, const RuntimeMethod* method) 
{
	{
		// _controllerTypes = controllerTypes;
		List_1_tE4FDA13E1EFDB69156FBF29C3207E24FFBA09333* L_0 = ___controllerTypes0;
		__this->____controllerTypes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controllerTypes_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TrackingToWorldTransformerOVR_get_CameraRigRef_mE27D2627F557B2C82BFB456A0E4109E70B34BDC3_inline (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCameraRigRefU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackingToWorldTransformerOVR_set_CameraRigRef_m49E4398C42EDBC38F8F2B72FFFFBAD818556EF0B_inline (TrackingToWorldTransformerOVR_t17348670A78557CA7D426556FAA0981B783ABB33* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IOVRCameraRigRef CameraRigRef { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCameraRigRefU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCameraRigRefU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6_inline (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	{
		// public bool ForceOffVisibility { get; set; }
		bool L_0 = __this->___U3CForceOffVisibilityU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222_inline (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper0, const RuntimeMethod* method) 
{
	{
		// _ovrControllerHelper = ovrControllerHelper;
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_0 = ___ovrControllerHelper0;
		__this->____ovrControllerHelper_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerHelper_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
