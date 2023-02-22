#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding>
struct IEnumerable_1_tABF27AED8E88C2557464B0E32EAD36CE8213B1B8;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Camera/RenderRequest[]
struct RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339;
// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10;
// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t4A70F587CADFDFCCC21AE3CBC58F98D7BC925279;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
struct IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_t3B4D9311A3DF0B9342570C8E43A61973258D5751;
// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SceneManagement.SceneManagerAPI
struct SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D;
IL2CPP_EXTERN_C String_t* _stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37;
IL2CPP_EXTERN_C String_t* _stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426;
IL2CPP_EXTERN_C String_t* _stringLiteral146E540E8ADAE0D16B4171F3086BBE95F3F741B2;
IL2CPP_EXTERN_C String_t* _stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386;
IL2CPP_EXTERN_C String_t* _stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC;
IL2CPP_EXTERN_C String_t* _stringLiteral2C900BD6BA518D612CBAE23AF2EBE2349FBA72E7;
IL2CPP_EXTERN_C String_t* _stringLiteral40603CB9C3C2F0F007BD4C59CEB195FB17927F5C;
IL2CPP_EXTERN_C String_t* _stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458;
IL2CPP_EXTERN_C String_t* _stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6;
IL2CPP_EXTERN_C String_t* _stringLiteral76F71EBED61D73B069599B0725909048EA5155D4;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1EF620F523327123017878A2862AB13B665F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mF8C1163D3AF5DAD23FF4143F8EA9A0C8A333EDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;;

struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD  : public RuntimeObject
{
};

struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields
{
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableNoStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableNoStencil_0;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableStencil_1;
};

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
{
};

struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_DefaultDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate_0;
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_RequestLightsDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Rendering.OnDemandRendering
struct OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E  : public RuntimeObject
{
};

struct OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields
{
	// System.Int32 UnityEngine.Rendering.OnDemandRendering::m_RenderFrameInterval
	int32_t ___m_RenderFrameInterval_0;
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};

// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.RenderPipeline::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_0;
};

// UnityEngine.Rendering.RenderPipelineManager
struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB  : public RuntimeObject
{
};

struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields
{
	// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___s_CurrentPipelineAsset_0;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.RenderPipelineManager::s_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___s_Cameras_1;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_currentPipelineType
	String_t* ___s_currentPipelineType_2;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_builtinPipelineName
	String_t* ___s_builtinPipelineName_3;
	// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::s_currentPipeline
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___s_currentPipeline_4;
	// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> UnityEngine.Rendering.RenderPipelineManager::beginCameraRendering
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___beginCameraRendering_5;
	// System.Action UnityEngine.Rendering.RenderPipelineManager::activeRenderPipelineTypeChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___activeRenderPipelineTypeChanged_6;
};

// UnityEngine.SceneManagement.SceneManager
struct SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA  : public RuntimeObject
{
};

struct SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields
{
	// System.Boolean UnityEngine.SceneManagement.SceneManager::s_AllowLoadScene
	bool ___s_AllowLoadScene_0;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___sceneLoaded_1;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* ___sceneUnloaded_2;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* ___activeSceneChanged_3;
};

// UnityEngine.SceneManagement.SceneManagerAPI
struct SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169  : public RuntimeObject
{
};

struct SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_StaticFields
{
	// UnityEngine.SceneManagement.SceneManagerAPI UnityEngine.SceneManagement.SceneManagerAPI::s_DefaultAPI
	SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* ___s_DefaultAPI_0;
	// UnityEngine.SceneManagement.SceneManagerAPI UnityEngine.SceneManagement.SceneManagerAPI::<overrideAPI>k__BackingField
	SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* ___U3CoverrideAPIU3Ek__BackingField_1;
};

// UnityEngine.SceneManagement.SceneManagerAPIInternal
struct SceneManagerAPIInternal_t60C54632D8C0D1EE03FEFFDACE92A833D9F88CE8  : public RuntimeObject
{
};

// UnityEngine.SceneManagement.SceneUtility
struct SceneUtility_tFD8F214B3A90C8210EA5847E4B9E41E6BD4B038B  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF  : public RuntimeObject
{
};

struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields
{
	// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::s_Instance
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ___s_Instance_0;
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924  : public RuntimeObject
{
	// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::<implementation>k__BackingField
	RuntimeObject* ___U3CimplementationU3Ek__BackingField_0;
};

// UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com
{
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

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6  : public RuntimeObject
{
	// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbeModes>k__BackingField
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField_1;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<defaultMixedLightingModes>k__BackingField
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<mixedLightingModes>k__BackingField
	int32_t ___U3CmixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapBakeTypes>k__BackingField
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapsModes>k__BackingField
	int32_t ___U3ClightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlightenLightmapper>k__BackingField
	bool ___U3CenlightenLightmapperU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlighten>k__BackingField
	bool ___U3CenlightenU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<lightProbeProxyVolumes>k__BackingField
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<motionVectors>k__BackingField
	bool ___U3CmotionVectorsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<receiveShadows>k__BackingField
	bool ___U3CreceiveShadowsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbes>k__BackingField
	bool ___U3CreflectionProbesU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbesBlendDistance>k__BackingField
	bool ___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererPriority>k__BackingField
	bool ___U3CrendererPriorityU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendersUIOverlay>k__BackingField
	bool ___U3CrendersUIOverlayU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesEnvironmentLighting>k__BackingField
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesFog>k__BackingField
	bool ___U3CoverridesFogU3Ek__BackingField_16;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesRealtimeReflectionProbes>k__BackingField
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesOtherLightingSettings>k__BackingField
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<editableMaterialRenderQueue>k__BackingField
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField_19;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesLODBias>k__BackingField
	bool ___U3CoverridesLODBiasU3Ek__BackingField_20;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesMaximumLODLevel>k__BackingField
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField_21;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererProbes>k__BackingField
	bool ___U3CrendererProbesU3Ek__BackingField_22;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<particleSystemInstancing>k__BackingField
	bool ___U3CparticleSystemInstancingU3Ek__BackingField_23;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoAmbientProbeBaking>k__BackingField
	bool ___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoDefaultReflectionProbeBaking>k__BackingField
	bool ___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesShadowmask>k__BackingField
	bool ___U3CoverridesShadowmaskU3Ek__BackingField_26;
	// System.String UnityEngine.Rendering.SupportedRenderingFeatures::<overrideShadowmaskMessage>k__BackingField
	String_t* ___U3CoverrideShadowmaskMessageU3Ek__BackingField_27;
};

struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields
{
	// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___s_Active_0;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};

struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9_0;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA 
{
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;
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

// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject* ___DefaultValue_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.PlayerLoop.EarlyUpdate
struct EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B 
{
	union
	{
		struct
		{
		};
		uint8_t EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t4A70F587CADFDFCCC21AE3CBC58F98D7BC925279  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.PlayerLoop.FixedUpdate
struct FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1 
{
	union
	{
		struct
		{
		};
		uint8_t FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1__padding[1];
	};
};

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;
};

// UnityEngine.PlayerLoop.Initialization
struct Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016 
{
	union
	{
		struct
		{
		};
		uint8_t Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016__padding[1];
	};
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

// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___Delegate_0;
};

// UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	// System.Int32 UnityEngine.LightBakingOutput::probeOcclusionLightIndex
	int32_t ___probeOcclusionLightIndex_0;
	// System.Int32 UnityEngine.LightBakingOutput::occlusionMaskChannel
	int32_t ___occlusionMaskChannel_1;
	// UnityEngine.LightmapBakeType UnityEngine.LightBakingOutput::lightmapBakeType
	int32_t ___lightmapBakeType_2;
	// UnityEngine.MixedLightingMode UnityEngine.LightBakingOutput::mixedLightingMode
	int32_t ___mixedLightingMode_3;
	// System.Boolean UnityEngine.LightBakingOutput::isBaked
	bool ___isBaked_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};
// Native definition for COM marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// UnityEngine.SceneManagement.LoadSceneParameters
struct LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E 
{
	// UnityEngine.SceneManagement.LoadSceneMode UnityEngine.SceneManagement.LoadSceneParameters::m_LoadSceneMode
	int32_t ___m_LoadSceneMode_0;
	// UnityEngine.SceneManagement.LocalPhysicsMode UnityEngine.SceneManagement.LoadSceneParameters::m_LocalPhysicsMode
	int32_t ___m_LocalPhysicsMode_1;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F 
{
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::className
	String_t* ___className_0;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpace
	String_t* ___nameSpace_1;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assembly
	String_t* ___assembly_2;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::classHasChanged
	bool ___classHasChanged_3;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpaceHasChanged
	bool ___nameSpaceHasChanged_4;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assemblyHasChanged
	bool ___assemblyHasChanged_5;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::autoUdpateAPI
	bool ___autoUdpateAPI_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke
{
	char* ___className_0;
	char* ___nameSpace_1;
	char* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};
// Native definition for COM marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com
{
	Il2CppChar* ___className_0;
	Il2CppChar* ___nameSpace_1;
	Il2CppChar* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};

// UnityEngine.PlayerLoop.PostLateUpdate
struct PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256 
{
	union
	{
		struct
		{
		};
		uint8_t PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate
struct PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6 
{
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate
struct PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED 
{
	union
	{
		struct
		{
		};
		uint8_t PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED__padding[1];
	};
};

// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_t3B4D9311A3DF0B9342570C8E43A61973258D5751  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.StencilState
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;
};

// UnityEngine.PlayerLoop.TimeUpdate
struct TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51 
{
	union
	{
		struct
		{
		};
		uint8_t TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51__padding[1];
	};
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.PlayerLoop.Update
struct Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89 
{
	union
	{
		struct
		{
		};
		uint8_t Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89__padding[1];
	};
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

// UnityEngine.Rendering.VertexAttributeDescriptor
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::<attribute>k__BackingField
	int32_t ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<stream>k__BackingField
	int32_t ___U3CstreamU3Ek__BackingField_3;
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

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate
struct ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270 
{
	union
	{
		struct
		{
		};
		uint8_t ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate
struct AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E 
{
	union
	{
		struct
		{
		};
		uint8_t AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
struct ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5 
{
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines
struct ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
struct DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A 
{
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
struct DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232 
{
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
struct ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp
struct GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35 
{
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
struct PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2 
{
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
struct PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
struct PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
struct PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209 
{
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection
struct PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A 
{
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
struct PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52 
{
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
struct ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput
struct ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
struct RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE 
{
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
struct ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2 
{
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
struct ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
struct SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB 
{
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate
struct TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2 
{
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
struct UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D 
{
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
struct UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager
struct UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect
struct UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
struct UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading
struct UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager
struct UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
struct UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate
struct XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9 
{
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate
struct AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2 
{
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines
struct ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
struct DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate
struct DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
struct DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate
struct LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate
struct NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate
struct Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate
struct PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate
struct PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate
struct ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate
struct ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate
struct XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006 
{
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate
struct AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
struct DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame
struct ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs
struct SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeState
struct SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors
struct UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate
struct XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015 
{
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate
struct BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D 
{
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
struct ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB 
{
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate
struct DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
struct DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
struct EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
struct EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3 
{
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
struct ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering
struct FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039 
{
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents
struct GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2 
{
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders
struct GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D 
{
	union
	{
		struct
		{
		};
		uint8_t GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
struct InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33 
{
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
struct MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90 
{
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
struct ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
struct PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
struct PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
struct PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
struct PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
struct PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
struct PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
struct PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
struct PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED 
{
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
struct ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame
struct ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
struct ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis
struct ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413 
{
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors
struct ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013 
{
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
struct SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07 
{
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
struct ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A 
{
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
struct TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B 
{
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers
struct UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
struct UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio
struct UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
struct UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
struct UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes
struct UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform
struct UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
struct UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance
struct UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo
struct UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures
struct UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate
struct VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252 
{
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate
struct XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent
struct XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame
struct XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF 
{
	union
	{
		struct
		{
		};
		uint8_t XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate
struct ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213 
{
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate
struct DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd
struct DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate
struct EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate
struct LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll
struct ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate
struct Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate
struct ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels
struct UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5 
{
	union
	{
		struct
		{
		};
		uint8_t UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate
struct UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8 
{
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface
struct UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager
struct UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate
struct AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput
struct CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0 
{
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C 
{
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate
struct NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate
struct Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate
struct PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents
struct SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5 
{
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo
struct UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate
struct WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B 
{
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B__padding[1];
	};
};

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime
struct WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C 
{
	union
	{
		struct
		{
		};
		uint8_t WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/DirectorUpdate
struct DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
struct ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.BatchRendererGroup::m_GroupHandle
	intptr_t ___m_GroupHandle_0;
	// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling UnityEngine.Rendering.BatchRendererGroup::m_PerformCulling
	OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* ___m_PerformCulling_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes_2;
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

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData UnityEngine.Scripting.APIUpdating.MovedFromAttribute::data
	MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F ___data_0;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystemInternal::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_1;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};

// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.PointLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Rendering.BatchCullingContext
struct BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Plane> UnityEngine.Rendering.BatchCullingContext::cullingPlanes
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___cullingPlanes_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> UnityEngine.Rendering.BatchCullingContext::batchVisibility
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___batchVisibility_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___visibleIndices_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndicesY
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___visibleIndicesY_3;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.BatchCullingContext::lodParameters
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___lodParameters_4;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.BatchCullingContext::cullingMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix_5;
	// System.Single UnityEngine.Rendering.BatchCullingContext::nearPlane
	float ___nearPlane_6;
};

// UnityEngine.Rendering.BatchRendererCullingOutput
struct BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5 
{
	// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererCullingOutput::cullingJobsFence
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobsFence_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.BatchRendererCullingOutput::cullingMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix_1;
	// UnityEngine.Plane* UnityEngine.Rendering.BatchRendererCullingOutput::cullingPlanes
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___cullingPlanes_2;
	// UnityEngine.Rendering.BatchVisibility* UnityEngine.Rendering.BatchRendererCullingOutput::batchVisibility
	BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA* ___batchVisibility_3;
	// System.Int32* UnityEngine.Rendering.BatchRendererCullingOutput::visibleIndices
	int32_t* ___visibleIndices_4;
	// System.Int32* UnityEngine.Rendering.BatchRendererCullingOutput::visibleIndicesY
	int32_t* ___visibleIndicesY_5;
	// System.Int32 UnityEngine.Rendering.BatchRendererCullingOutput::cullingPlanesCount
	int32_t ___cullingPlanesCount_6;
	// System.Int32 UnityEngine.Rendering.BatchRendererCullingOutput::batchVisibilityCount
	int32_t ___batchVisibilityCount_7;
	// System.Int32 UnityEngine.Rendering.BatchRendererCullingOutput::visibleIndicesCount
	int32_t ___visibleIndicesCount_8;
	// System.Single UnityEngine.Rendering.BatchRendererCullingOutput::nearPlane
	float ___nearPlane_9;
};

// UnityEngine.Experimental.Playables.CameraPlayable
struct CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.GraphicsSettings
struct GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
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

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};

struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.Playables.ScriptPlayableOutput
struct ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
struct SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934 
{
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SpriteID
	int32_t ___SpriteID_0;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::TextureID
	int32_t ___TextureID_1;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::MaterialID
	int32_t ___MaterialID_2;
	// UnityEngine.Color UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_3;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Transform_4;
	// UnityEngine.Bounds UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds_5;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Layer
	int32_t ___Layer_6;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingLayer
	int32_t ___SortingLayer_7;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingOrder
	int32_t ___SortingOrder_8;
	// System.UInt64 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SceneCullingMask
	uint64_t ___SceneCullingMask_9;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexData
	intptr_t ___IndexData_10;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexData
	intptr_t ___VertexData_11;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexCount
	int32_t ___IndexCount_12;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexCount
	int32_t ___VertexCount_13;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::ShaderChannelMask
	int32_t ___ShaderChannelMask_14;
};

// UnityEngine.Rendering.SubMeshDescriptor
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	// UnityEngine.Bounds UnityEngine.Rendering.SubMeshDescriptor::<bounds>k__BackingField
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField_0;
	// UnityEngine.MeshTopology UnityEngine.Rendering.SubMeshDescriptor::<topology>k__BackingField
	int32_t ___U3CtopologyU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::<indexStart>k__BackingField
	int32_t ___U3CindexStartU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::<indexCount>k__BackingField
	int32_t ___U3CindexCountU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::<baseVertex>k__BackingField
	int32_t ___U3CbaseVertexU3Ek__BackingField_4;
	// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::<firstVertex>k__BackingField
	int32_t ___U3CfirstVertexU3Ek__BackingField_5;
	// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::<vertexCount>k__BackingField
	int32_t ___U3CvertexCountU3Ek__BackingField_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2  : public MulticastDelegate_t
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 m_Items[1];

	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mF05ADA0EC0B9CC71EDE6D06F6A33A50705EEA32D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m45979AF2609BAB3A34CE383DFFC5E6DC46C56EC2_gshared_inline (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, int32_t ___arg11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mE37AFE8F618C0F22BD217DFCB96A788377376104_gshared_inline (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m28E37932B5C81CB3270E32EFF9BCE3B39CA865CF_gshared_inline (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg11, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_m4D67DA17E33F760CC6AAEDE11C7B896C7BD6DBEC (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___call0, const RuntimeMethod* method) ;
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, RuntimeObject* ___targetObj0, MethodInfo_t* ___method1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_m8507658F478F269090B0F2CBC9CA535B8A459FBA (Type_t* ___objectType0, String_t* ___functionName1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, RuntimeObject* ___target0, MethodInfo_t* ___theFunction1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::Set(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD (MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* __this, bool ___autoUpdateAPI0, String_t* ___sourceNamespace1, String_t* ___sourceAssembly2, String_t* ___sourceClassName3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValidInternal_mCD86549F23F07889FB3C2517E3E0F78CD6AD6811 (int32_t ___sceneHandle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_GetNameInternal_mE63A0808247C49C804EF5D72558C78ED32802DD3 (int32_t ___sceneHandle0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_GetIsLoadedInternal_m91826FE343B9937BBD2E3C7F3A0A55017F478CDE (int32_t ___sceneHandle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::GetBuildIndexInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetBuildIndexInternal_mE6E8F796728DEF0CCC34B5E45068F0C834089E28 (int32_t ___sceneHandle0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetRootCountInternal_m32052C5C58A12BD005391E20125064CF642C22DE (int32_t ___sceneHandle0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
inline void List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___rootGameObjects0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
inline int32_t List_1_get_Capacity_mF8C1163D3AF5DAD23FF4143F8EA9A0C8A333EDF2 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Capacity_mF05ADA0EC0B9CC71EDE6D06F6A33A50705EEA32D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_GetRootGameObjectsInternal_m9F83A0F6ADA73E0CD55CE55185832161163A8CC7 (int32_t ___sceneHandle0, RuntimeObject* ___resultRootList1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetHashCode_m74ACBFB8C656D5620A9A1E62D04E55ACBF63ADC9 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected_mDEDFF3267DE3357E8F2D154053D25A2FBE2D2AFD (String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.SceneManagerAPI UnityEngine.SceneManagement.SceneManagerAPI::get_overrideAPI()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* SceneManagerAPI_get_overrideAPI_mACC4192A2014665FF7D42EAAD41AA22A71AC040E_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManagerAPIInternal::GetNumScenesInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManagerAPIInternal_GetNumScenesInBuildSettings_m76F90158FAE4EB4F6983D4023B33DEE8F5C0B1BF (const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_m5FF3A8B53DD6A031DC52C167903AE4528391FE11 (String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManagerAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerAPI__ctor_m697F6B718DCE9B5E6CA4D58BBFB0CA275E003307 (SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.SceneManagerAPI UnityEngine.SceneManagement.SceneManagerAPI::get_ActiveAPI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* SceneManagerAPI_get_ActiveAPI_m720FAACCF2718020292060003E7331B19AEB5FA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::GetActiveScene_Injected(UnityEngine.SceneManagement.Scene&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_GetActiveScene_Injected_m8E7E24846A3B781AEBB4D189E6EDE3533AE6BF1B (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::GetSceneAt_Injected(System.Int32,UnityEngine.SceneManagement.Scene&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_GetSceneAt_Injected_mA38EDB6E1570DD59582AE345851F3BAB5E9D6AAF (int32_t ___index0, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___ret1, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsyncInternal_Injected(UnityEngine.SceneManagement.Scene&,UnityEngine.SceneManagement.UnloadSceneOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsyncInternal_Injected_m3E040418B0161E6B72A167874CD22A87231793F2 (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___scene0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::.ctor(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_LoadScene_m0E137F74CF4CC01BBF43BE81BAA6CAD4DB7BDE96 (int32_t ___sceneBuildIndex0, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters1, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsyncNameIndexInternal_m32EDF87979243BB1343585D146461C329D065A5D (String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mD501C44DA433BE225E6455D9AEB311C9A12FFF3C (String_t* ___sceneName0, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters1, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsyncInternal(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.UnloadSceneOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsyncInternal_m0967F8DAF633A39A2C72E577809B42D259F9D9D5 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_mA8E9470BBBEC323CF7103F7A75CD6E8911B2DB6A_inline (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, Scene_tA1DC762B79745EB5140F054C884855B922318356, int32_t, const RuntimeMethod*))UnityAction_2_Invoke_m45979AF2609BAB3A34CE383DFFC5E6DC46C56EC2_gshared_inline)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
inline void UnityAction_1_Invoke_mE37AFE8F618C0F22BD217DFCB96A788377376104_inline (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))UnityAction_1_Invoke_mE37AFE8F618C0F22BD217DFCB96A788377376104_gshared_inline)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m28E37932B5C81CB3270E32EFF9BCE3B39CA865CF_inline (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE*, Scene_tA1DC762B79745EB5140F054C884855B922318356, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))UnityAction_2_Invoke_m28E37932B5C81CB3270E32EFF9BCE3B39CA865CF_gshared_inline)(__this, ___arg00, ___arg11, method);
}
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_indexStart(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_indexStart_m04437852C448D05DB7638F9A207474187659FACB_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_indexCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_indexCount_m851B9A38CC1B4DBE766A064963D9FE6FC9D91674_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_topology(UnityEngine.MeshTopology)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_topology_m634819D6C110CD6EBFAF6590C48E24F77AC5A3CA_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_bounds(UnityEngine.Bounds)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_bounds_mF5AFD8FC9DD1321F7EBA2B115034E238B472ACEB_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_baseVertex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_baseVertex_mCCFBB14F4973C3EF2C00689667CEDA5A9AA20D9B_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_firstVertex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_firstVertex_mDC927003E251431E6DC95ACD80043DC8DC446FD8_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_vertexCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_vertexCount_mA5715EC8038FD91335706AE9226B94DA7D840436_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SubMeshDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.MeshTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor__ctor_m5234E625F44FA9B04F41BD9DC013E47C2C628D66 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___indexStart0, int32_t ___indexCount1, int32_t ___topology2, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Rendering.SubMeshDescriptor::get_bounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 SubMeshDescriptor_get_bounds_mD2F47C8E1407CAFAEE966ACE1D870CB50AF3CEE4_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// UnityEngine.MeshTopology UnityEngine.Rendering.SubMeshDescriptor::get_topology()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_topology_mA3766E71B2249BAA047049095DC9E166BF17CEA7_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_indexStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_indexCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_baseVertex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_baseVertex_mF0B569B62BA72FA94CB159390375BBC0D0EE6D53_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_firstVertex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_firstVertex_mEF80F76B602C4BF97182F76104D4D256344E8806_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_vertexCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_vertexCount_m75611DFB7BE0ED9F5260BD460A815BDCE11EA211_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.SubMeshDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubMeshDescriptor_ToString_mBA25D925D5A941C4DC6C6A80BB9D1D1371E12C78 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::get_attribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_attribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_format(UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_dimension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_dimension(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_stream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_stream(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::.ctor(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___attribute0, int32_t ___format1, int32_t ___dimension2, int32_t ___stream3, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.VertexAttributeDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(UnityEngine.Rendering.VertexAttributeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.RenderTargetIdentifier::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.OnDemandRendering::get_renderFrameInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnDemandRendering_get_renderFrameInterval_mE5574585DE4A02C5A5C0F6770FF86AF1C4F3CCA9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.BatchCullingContext::.ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane>,Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>,UnityEngine.Rendering.LODParameters,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___inCullingPlanes0, NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___inOutBatchVisibility1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndices2, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndicesY3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___inLodParameters4, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inCullingMatrix5, float ___inNearPlane6, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_ScheduleBatchedJobs_mD80F0AB54AEA1D1A107F4B7B84EE5288FD895A93 (const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.LODParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40 (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Camera>::ToArray()
inline CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Camera>::get_Count()
inline int32_t List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Camera>::get_Item(System.Int32)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_m3AC4375082D83077EB449AD20EC27B6B458D2EC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___results0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m89D456720172AE19FEABD43C870EE06BA6FFE885 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ____unity_self0, Type_t* ___listType1, RuntimeObject* ___resultList2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___listType0, RuntimeObject* ___resultList1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::TagToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_TagToID_m1FD312CA7913C007B8A80F638C3DCD24B5E47323 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mF977257DBAD4FAD9FF78232B33DF37121800834D (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A (int32_t ___mixedMode0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mF97CED14CB16F3193BCB30A9A37F7B8EDFB7AC4D (int32_t ___mixedMode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4 (int32_t ___bakeType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mC712C491E3596EE8C0655538CF08E042EB7B34C8 (int32_t ___bakeType0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) ;
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217 (const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m13BA20519948F798D105B0F5F4FCF0D738CEA5A7 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___lhs0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___p0, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_mAF77E9AD09CFBA177D85605ACF0B659F7DEE80E4 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___p0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::RGBMultiplied(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___multiplier0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_linear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Color::get_maxColorComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_m29E930EAED6270F37E98DCFDE78417DACEBA26A3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___lightInstanceID0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_bounceIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___intensity1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Light::get_useColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_colorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m92860D984CC8E5F6359CC8959C8BFD927379D45D (float ___kelvin0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92 (int32_t ___baketype0, const RuntimeMethod* method) ;
// UnityEngine.LightShadows UnityEngine.Light::get_shadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cct0, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___lightColor1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m546DD25E1DEFA2B7EECF8D0C5AB7B46F70426138 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Light::get_cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_cookieSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m168917A3FFE696B6B4F2BE2ACFB5C74AEA57AAE0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___dir1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m43F2AE128B08ACD1BE42D1A48FCE9DA5BD1BFF23 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m923E63DD2078497852AEC688E199BE6E129B69C4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___spot1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m6CD2C57089AE0B41970C60A597EAFBF3BE27B3A6 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___rect1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m4DB65098D5061C188791D825490B46EEE305DE6D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___disc1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B (const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m9C447321AA5B70BA35F3A23DFC772D449D92A315 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8 (int32_t ___minimumDepthBits0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m0F5051D3999D87A45F6CD5C80E6041F0B0C4C1E7 (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810 (int32_t ___format0, bool ___wholeImage1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6 (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* currentDelegate = reinterpret_cast<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenInst(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_InvokeArray_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) 
{
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___call0;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1;
		L_1 = UnityEvent_GetDelegate_m4D67DA17E33F760CC6AAEDE11C7B896C7BD6DBEC(L_0, NULL);
		UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC(__this, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) 
{
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___call0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ___call0;
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_2, NULL);
		UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B(__this, L_1, L_3, NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, String_t* ___name0, Type_t* ___targetObjType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		Type_t* L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t* L_3;
		L_3 = UnityEventBase_GetValidMethodInfo_m8507658F478F269090B0F2CBC9CA535B8A459FBA(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		MethodInfo_t* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, RuntimeObject* ___target0, MethodInfo_t* ___theFunction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___target0;
		MethodInfo_t* L_1 = ___theFunction1;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_2 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_m4D67DA17E33F760CC6AAEDE11C7B896C7BD6DBEC (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___action0;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_1 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0;
		L_0 = UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2(__this, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0089;
	}

IL_000c:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3;
		L_3 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_1, L_2, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_2 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_3, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_6 = V_2;
		NullCheck(L_6);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_6, NULL);
		goto IL_0084;
	}

IL_002b:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_9;
		L_9 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_7, L_8, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_4 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_9, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_10 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_12 = V_4;
		NullCheck(L_12);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_12, NULL);
		goto IL_0083;
	}

IL_004f:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_15;
		L_15 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_13, L_14, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_6 = L_15;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_InvokeArray_3;
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_InvokeArray_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)L_18);
	}

IL_0074:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_19 = V_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->___m_InvokeArray_3;
		NullCheck(L_19);
		VirtualActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_19, L_20);
	}

IL_0083:
	{
	}

IL_0084:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0089:
	{
		int32_t L_22 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_23, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_000c;
		}
	}
	{
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
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormerlySerializedAsAttribute__ctor_mD7361D52007EF623D139A726F892198E089F3C9D (FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* __this, String_t* ___oldName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___oldName0;
		__this->___m_oldName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_oldName_0), (void*)L_0);
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
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mF9E65066D9317F56C6F4AE274A1E2D55D6A62F96 (PreserveAttribute_t3B4D9311A3DF0B9342570C8E43A61973258D5751* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke& marshaled)
{
	marshaled.___className_0 = il2cpp_codegen_marshal_string(unmarshaled.___className_0);
	marshaled.___nameSpace_1 = il2cpp_codegen_marshal_string(unmarshaled.___nameSpace_1);
	marshaled.___assembly_2 = il2cpp_codegen_marshal_string(unmarshaled.___assembly_2);
	marshaled.___classHasChanged_3 = static_cast<int32_t>(unmarshaled.___classHasChanged_3);
	marshaled.___nameSpaceHasChanged_4 = static_cast<int32_t>(unmarshaled.___nameSpaceHasChanged_4);
	marshaled.___assemblyHasChanged_5 = static_cast<int32_t>(unmarshaled.___assemblyHasChanged_5);
	marshaled.___autoUdpateAPI_6 = static_cast<int32_t>(unmarshaled.___autoUdpateAPI_6);
}
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke& marshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled)
{
	unmarshaled.___className_0 = il2cpp_codegen_marshal_string_result(marshaled.___className_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___className_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___className_0));
	unmarshaled.___nameSpace_1 = il2cpp_codegen_marshal_string_result(marshaled.___nameSpace_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___nameSpace_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___nameSpace_1));
	unmarshaled.___assembly_2 = il2cpp_codegen_marshal_string_result(marshaled.___assembly_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___assembly_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___assembly_2));
	bool unmarshaledclassHasChanged_temp_3 = false;
	unmarshaledclassHasChanged_temp_3 = static_cast<bool>(marshaled.___classHasChanged_3);
	unmarshaled.___classHasChanged_3 = unmarshaledclassHasChanged_temp_3;
	bool unmarshalednameSpaceHasChanged_temp_4 = false;
	unmarshalednameSpaceHasChanged_temp_4 = static_cast<bool>(marshaled.___nameSpaceHasChanged_4);
	unmarshaled.___nameSpaceHasChanged_4 = unmarshalednameSpaceHasChanged_temp_4;
	bool unmarshaledassemblyHasChanged_temp_5 = false;
	unmarshaledassemblyHasChanged_temp_5 = static_cast<bool>(marshaled.___assemblyHasChanged_5);
	unmarshaled.___assemblyHasChanged_5 = unmarshaledassemblyHasChanged_temp_5;
	bool unmarshaledautoUdpateAPI_temp_6 = false;
	unmarshaledautoUdpateAPI_temp_6 = static_cast<bool>(marshaled.___autoUdpateAPI_6);
	unmarshaled.___autoUdpateAPI_6 = unmarshaledautoUdpateAPI_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup(MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___className_0);
	marshaled.___className_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___nameSpace_1);
	marshaled.___nameSpace_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___assembly_2);
	marshaled.___assembly_2 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_com(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com& marshaled)
{
	marshaled.___className_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___className_0);
	marshaled.___nameSpace_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___nameSpace_1);
	marshaled.___assembly_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___assembly_2);
	marshaled.___classHasChanged_3 = static_cast<int32_t>(unmarshaled.___classHasChanged_3);
	marshaled.___nameSpaceHasChanged_4 = static_cast<int32_t>(unmarshaled.___nameSpaceHasChanged_4);
	marshaled.___assemblyHasChanged_5 = static_cast<int32_t>(unmarshaled.___assemblyHasChanged_5);
	marshaled.___autoUdpateAPI_6 = static_cast<int32_t>(unmarshaled.___autoUdpateAPI_6);
}
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_com_back(const MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com& marshaled, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F& unmarshaled)
{
	unmarshaled.___className_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___className_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___className_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___className_0));
	unmarshaled.___nameSpace_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___nameSpace_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___nameSpace_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___nameSpace_1));
	unmarshaled.___assembly_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___assembly_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___assembly_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___assembly_2));
	bool unmarshaledclassHasChanged_temp_3 = false;
	unmarshaledclassHasChanged_temp_3 = static_cast<bool>(marshaled.___classHasChanged_3);
	unmarshaled.___classHasChanged_3 = unmarshaledclassHasChanged_temp_3;
	bool unmarshalednameSpaceHasChanged_temp_4 = false;
	unmarshalednameSpaceHasChanged_temp_4 = static_cast<bool>(marshaled.___nameSpaceHasChanged_4);
	unmarshaled.___nameSpaceHasChanged_4 = unmarshalednameSpaceHasChanged_temp_4;
	bool unmarshaledassemblyHasChanged_temp_5 = false;
	unmarshaledassemblyHasChanged_temp_5 = static_cast<bool>(marshaled.___assemblyHasChanged_5);
	unmarshaled.___assemblyHasChanged_5 = unmarshaledassemblyHasChanged_temp_5;
	bool unmarshaledautoUdpateAPI_temp_6 = false;
	unmarshaledautoUdpateAPI_temp_6 = static_cast<bool>(marshaled.___autoUdpateAPI_6);
	unmarshaled.___autoUdpateAPI_6 = unmarshaledautoUdpateAPI_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_com_cleanup(MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___className_0);
	marshaled.___className_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___nameSpace_1);
	marshaled.___nameSpace_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___assembly_2);
	marshaled.___assembly_2 = NULL;
}
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::Set(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD (MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* __this, bool ___autoUpdateAPI0, String_t* ___sourceNamespace1, String_t* ___sourceAssembly2, String_t* ___sourceClassName3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___sourceClassName3;
		__this->___className_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___className_0), (void*)L_0);
		String_t* L_1 = __this->___className_0;
		__this->___classHasChanged_3 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		String_t* L_2 = ___sourceNamespace1;
		__this->___nameSpace_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameSpace_1), (void*)L_2);
		String_t* L_3 = __this->___nameSpace_1;
		__this->___nameSpaceHasChanged_4 = (bool)((!(((RuntimeObject*)(String_t*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		String_t* L_4 = ___sourceAssembly2;
		__this->___assembly_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assembly_2), (void*)L_4);
		String_t* L_5 = __this->___assembly_2;
		__this->___assemblyHasChanged_5 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = ___autoUpdateAPI0;
		__this->___autoUdpateAPI_6 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD_AdjustorThunk (RuntimeObject* __this, bool ___autoUpdateAPI0, String_t* ___sourceNamespace1, String_t* ___sourceAssembly2, String_t* ___sourceClassName3, const RuntimeMethod* method)
{
	MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F*>(__this + _offset);
	MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD(_thisAdjusted, ___autoUpdateAPI0, ___sourceNamespace1, ___sourceAssembly2, ___sourceClassName3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttribute::.ctor(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttribute__ctor_m1B944ED92ED635A19DD4E82765BC0200C0BF3E4D (MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432* __this, bool ___autoUpdateAPI0, String_t* ___sourceNamespace1, String_t* ___sourceAssembly2, String_t* ___sourceClassName3, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* L_0 = (&__this->___data_0);
		bool L_1 = ___autoUpdateAPI0;
		String_t* L_2 = ___sourceNamespace1;
		String_t* L_3 = ___sourceAssembly2;
		String_t* L_4 = ___sourceClassName3;
		MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttribute__ctor_mFDCCBD975A9BCC410529DB2B7C01659ACF8005CC (MovedFromAttribute_t2938C24921E4D74A1A2F3B4A874BD6F89D1EA432* __this, String_t* ___sourceNamespace0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F* L_0 = (&__this->___data_0);
		String_t* L_1 = ___sourceNamespace0;
		MovedFromAttributeData_Set_m155005FB8BCE0569C40B02D75FFADB3FBDB7EEDD(L_0, (bool)1, L_1, (String_t*)NULL, (String_t*)NULL, NULL);
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
// System.Boolean UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValidInternal_mCD86549F23F07889FB3C2517E3E0F78CD6AD6811 (int32_t ___sceneHandle0, const RuntimeMethod* method) 
{
	typedef bool (*Scene_IsValidInternal_mCD86549F23F07889FB3C2517E3E0F78CD6AD6811_ftn) (int32_t);
	static Scene_IsValidInternal_mCD86549F23F07889FB3C2517E3E0F78CD6AD6811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_IsValidInternal_mCD86549F23F07889FB3C2517E3E0F78CD6AD6811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___sceneHandle0);
	return icallRetVal;
}
// System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_GetNameInternal_mE63A0808247C49C804EF5D72558C78ED32802DD3 (int32_t ___sceneHandle0, const RuntimeMethod* method) 
{
	typedef String_t* (*Scene_GetNameInternal_mE63A0808247C49C804EF5D72558C78ED32802DD3_ftn) (int32_t);
	static Scene_GetNameInternal_mE63A0808247C49C804EF5D72558C78ED32802DD3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_GetNameInternal_mE63A0808247C49C804EF5D72558C78ED32802DD3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(___sceneHandle0);
	return icallRetVal;
}
// System.Boolean UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_GetIsLoadedInternal_m91826FE343B9937BBD2E3C7F3A0A55017F478CDE (int32_t ___sceneHandle0, const RuntimeMethod* method) 
{
	typedef bool (*Scene_GetIsLoadedInternal_m91826FE343B9937BBD2E3C7F3A0A55017F478CDE_ftn) (int32_t);
	static Scene_GetIsLoadedInternal_m91826FE343B9937BBD2E3C7F3A0A55017F478CDE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_GetIsLoadedInternal_m91826FE343B9937BBD2E3C7F3A0A55017F478CDE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___sceneHandle0);
	return icallRetVal;
}
// System.Int32 UnityEngine.SceneManagement.Scene::GetBuildIndexInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetBuildIndexInternal_mE6E8F796728DEF0CCC34B5E45068F0C834089E28 (int32_t ___sceneHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*Scene_GetBuildIndexInternal_mE6E8F796728DEF0CCC34B5E45068F0C834089E28_ftn) (int32_t);
	static Scene_GetBuildIndexInternal_mE6E8F796728DEF0CCC34B5E45068F0C834089E28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_GetBuildIndexInternal_mE6E8F796728DEF0CCC34B5E45068F0C834089E28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::GetBuildIndexInternal(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___sceneHandle0);
	return icallRetVal;
}
// System.Int32 UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetRootCountInternal_m32052C5C58A12BD005391E20125064CF642C22DE (int32_t ___sceneHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*Scene_GetRootCountInternal_m32052C5C58A12BD005391E20125064CF642C22DE_ftn) (int32_t);
	static Scene_GetRootCountInternal_m32052C5C58A12BD005391E20125064CF642C22DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_GetRootCountInternal_m32052C5C58A12BD005391E20125064CF642C22DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___sceneHandle0);
	return icallRetVal;
}
// System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_GetRootGameObjectsInternal_m9F83A0F6ADA73E0CD55CE55185832161163A8CC7 (int32_t ___sceneHandle0, RuntimeObject* ___resultRootList1, const RuntimeMethod* method) 
{
	typedef void (*Scene_GetRootGameObjectsInternal_m9F83A0F6ADA73E0CD55CE55185832161163A8CC7_ftn) (int32_t, RuntimeObject*);
	static Scene_GetRootGameObjectsInternal_m9F83A0F6ADA73E0CD55CE55185832161163A8CC7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_GetRootGameObjectsInternal_m9F83A0F6ADA73E0CD55CE55185832161163A8CC7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)");
	_il2cpp_icall_func(___sceneHandle0, ___resultRootList1);
}
// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		bool L_1;
		L_1 = Scene_IsValidInternal_mCD86549F23F07889FB3C2517E3E0F78CD6AD6811(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	bool _returnValue;
	_returnValue = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		String_t* L_1;
		L_1 = Scene_GetNameInternal_mE63A0808247C49C804EF5D72558C78ED32802DD3(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		bool L_1;
		L_1 = Scene_GetIsLoadedInternal_m91826FE343B9937BBD2E3C7F3A0A55017F478CDE(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	bool _returnValue;
	_returnValue = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		int32_t L_1;
		L_1 = Scene_GetBuildIndexInternal_mE6E8F796728DEF0CCC34B5E45068F0C834089E28(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		int32_t L_1;
		L_1 = Scene_GetRootCountInternal_m32052C5C58A12BD005391E20125064CF642C22DE(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B(__this, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C(L_1, L_0, List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var);
		V_0 = L_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = V_0;
		Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0(__this, L_2, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = V_0;
		NullCheck(L_3);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4;
		L_4 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_3, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* _returnValue;
	_returnValue = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___rootGameObjects0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mF8C1163D3AF5DAD23FF4143F8EA9A0C8A333EDF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___rootGameObjects0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mF8C1163D3AF5DAD23FF4143F8EA9A0C8A333EDF2(L_0, List_1_get_Capacity_mF8C1163D3AF5DAD23FF4143F8EA9A0C8A333EDF2_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___rootGameObjects0;
		int32_t L_5;
		L_5 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B(__this, NULL);
		NullCheck(L_4);
		List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C(L_4, L_5, List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C_RuntimeMethod_var);
	}

IL_0020:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ___rootGameObjects0;
		NullCheck(L_6);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_6, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		bool L_7;
		L_7 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(__this, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C900BD6BA518D612CBAE23AF2EBE2349FBA72E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0_RuntimeMethod_var)));
	}

IL_003f:
	{
		bool L_10;
		L_10 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		bool L_11;
		L_11 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC(__this, NULL);
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B7_0 = 0;
	}

IL_0052:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral146E540E8ADAE0D16B4171F3086BBE95F3F741B2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0_RuntimeMethod_var)));
	}

IL_0061:
	{
		int32_t L_14;
		L_14 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B(__this, NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_007d;
	}

IL_0070:
	{
		int32_t L_16;
		L_16 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = ___rootGameObjects0;
		Scene_GetRootGameObjectsInternal_m9F83A0F6ADA73E0CD55CE55185832161163A8CC7(L_16, L_17, NULL);
	}

IL_007d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0_AdjustorThunk (RuntimeObject* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___rootGameObjects0, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	Scene_GetRootGameObjects_m099D50FE3AF09AEE788071DA9AE620C8E6675DF0(_thisAdjusted, ___rootGameObjects0, method);
}
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetHashCode_m74ACBFB8C656D5620A9A1E62D04E55ACBF63ADC9 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Scene_GetHashCode_m74ACBFB8C656D5620A9A1E62D04E55ACBF63ADC9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Scene_GetHashCode_m74ACBFB8C656D5620A9A1E62D04E55ACBF63ADC9(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___other0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002e;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___other0;
		V_0 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_2, Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var))));
		int32_t L_3;
		L_3 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53(__this, NULL);
		int32_t L_4;
		L_4 = Scene_get_handle_mD508BE60333C6168610E12CECAB12E9B11C25E53((&V_0), NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Scene_tA1DC762B79745EB5140F054C884855B922318356*>(__this + _offset);
	bool _returnValue;
	_returnValue = Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D(_thisAdjusted, ___other0, method);
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
// System.Int32 UnityEngine.SceneManagement.SceneManagerAPIInternal::GetNumScenesInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManagerAPIInternal_GetNumScenesInBuildSettings_m76F90158FAE4EB4F6983D4023B33DEE8F5C0B1BF (const RuntimeMethod* method) 
{
	typedef int32_t (*SceneManagerAPIInternal_GetNumScenesInBuildSettings_m76F90158FAE4EB4F6983D4023B33DEE8F5C0B1BF_ftn) ();
	static SceneManagerAPIInternal_GetNumScenesInBuildSettings_m76F90158FAE4EB4F6983D4023B33DEE8F5C0B1BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneManagerAPIInternal_GetNumScenesInBuildSettings_m76F90158FAE4EB4F6983D4023B33DEE8F5C0B1BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneManagerAPIInternal::GetNumScenesInBuildSettings()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_m5FF3A8B53DD6A031DC52C167903AE4528391FE11 (String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___sceneBuildIndex1;
		bool L_2 = ___mustCompleteNextFrame3;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3;
		L_3 = SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected_mDEDFF3267DE3357E8F2D154053D25A2FBE2D2AFD(L_0, L_1, (&___parameters2), L_2, NULL);
		return L_3;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected_mDEDFF3267DE3357E8F2D154053D25A2FBE2D2AFD (String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) 
{
	typedef AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* (*SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected_mDEDFF3267DE3357E8F2D154053D25A2FBE2D2AFD_ftn) (String_t*, int32_t, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E*, bool);
	static SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected_mDEDFF3267DE3357E8F2D154053D25A2FBE2D2AFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected_mDEDFF3267DE3357E8F2D154053D25A2FBE2D2AFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters&,System.Boolean)");
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* icallRetVal = _il2cpp_icall_func(___sceneName0, ___sceneBuildIndex1, ___parameters2, ___mustCompleteNextFrame3);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SceneManagement.SceneManagerAPI UnityEngine.SceneManagement.SceneManagerAPI::get_ActiveAPI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* SceneManagerAPI_get_ActiveAPI_m720FAACCF2718020292060003E7331B19AEB5FA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* G_B2_0 = NULL;
	SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_0;
		L_0 = SceneManagerAPI_get_overrideAPI_mACC4192A2014665FF7D42EAAD41AA22A71AC040E_inline(NULL);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_2 = ((SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var))->___s_DefaultAPI_0;
		G_B2_0 = L_2;
	}

IL_000e:
	{
		return G_B2_0;
	}
}
// UnityEngine.SceneManagement.SceneManagerAPI UnityEngine.SceneManagement.SceneManagerAPI::get_overrideAPI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* SceneManagerAPI_get_overrideAPI_mACC4192A2014665FF7D42EAAD41AA22A71AC040E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_0 = ((SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var))->___U3CoverrideAPIU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManagerAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerAPI__ctor_m697F6B718DCE9B5E6CA4D58BBFB0CA275E003307 (SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UnityEngine.SceneManagement.SceneManagerAPI::GetNumScenesInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManagerAPI_GetNumScenesInBuildSettings_mDE94AA0B1EABBE1912ABAFEAD6B51B4A5A6C1135 (SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = SceneManagerAPIInternal_GetNumScenesInBuildSettings_m76F90158FAE4EB4F6983D4023B33DEE8F5C0B1BF(NULL);
		return L_0;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadSceneAsyncByNameOrIndex(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManagerAPI_LoadSceneAsyncByNameOrIndex_mF00A93D5BFEB82C6E11ECC77CC1534A34A6D13D4 (SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* __this, String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___sceneBuildIndex1;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_2 = ___parameters2;
		bool L_3 = ___mustCompleteNextFrame3;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_m5FF3A8B53DD6A031DC52C167903AE4528391FE11(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadFirstScene(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManagerAPI_LoadFirstScene_mA4217ED8AD09C74E82DA9C10A0558AF830228E6F (SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* __this, bool ___mustLoadAsync0, const RuntimeMethod* method) 
{
	{
		return (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManagerAPI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerAPI__cctor_mE1B615097421660BFC1E125F86D5DDF3F6BA7C36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_0 = (SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169*)il2cpp_codegen_object_new(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SceneManagerAPI__ctor_m697F6B718DCE9B5E6CA4D58BBFB0CA275E003307(L_0, NULL);
		((SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var))->___s_DefaultAPI_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var))->___s_DefaultAPI_0), (void*)L_0);
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
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B (const RuntimeMethod* method) 
{
	typedef int32_t (*SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B_ftn) ();
	static SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneManager::get_sceneCount()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_0;
		L_0 = SceneManagerAPI_get_ActiveAPI_m720FAACCF2718020292060003E7331B19AEB5FA8(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.SceneManagement.SceneManagerAPI::GetNumScenesInBuildSettings() */, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_GetActiveScene_Injected_m8E7E24846A3B781AEBB4D189E6EDE3533AE6BF1B((&V_0), NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4 (int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_GetSceneAt_Injected_mA38EDB6E1570DD59582AE345851F3BAB5E9D6AAF(L_0, (&V_0), NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsyncInternal(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.UnloadSceneOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsyncInternal_m0967F8DAF633A39A2C72E577809B42D259F9D9D5 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___options1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = SceneManager_UnloadSceneAsyncInternal_Injected_m3E040418B0161E6B72A167874CD22A87231793F2((&___scene0), L_0, NULL);
		return L_1;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsyncNameIndexInternal_m32EDF87979243BB1343585D146461C329D065A5D (String_t* ___sceneName0, int32_t ___sceneBuildIndex1, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters2, bool ___mustCompleteNextFrame3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		bool L_0 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___s_AllowLoadScene_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_1 = (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL;
		goto IL_0022;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_2;
		L_2 = SceneManagerAPI_get_ActiveAPI_m720FAACCF2718020292060003E7331B19AEB5FA8(NULL);
		String_t* L_3 = ___sceneName0;
		int32_t L_4 = ___sceneBuildIndex1;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_5 = ___parameters2;
		bool L_6 = ___mustCompleteNextFrame3;
		NullCheck(L_2);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_7;
		L_7 = VirtualFuncInvoker4< AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*, String_t*, int32_t, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E, bool >::Invoke(5 /* UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadSceneAsyncByNameOrIndex(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean) */, L_2, L_3, L_4, L_5, L_6);
		V_1 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadFirstScene_Internal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadFirstScene_Internal_mB1BB5068ACF4A10B20923DC6081C7C8664BF9864 (bool ___async0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_0;
		L_0 = SceneManagerAPI_get_ActiveAPI_m720FAACCF2718020292060003E7331B19AEB5FA8(NULL);
		bool L_1 = ___async0;
		NullCheck(L_0);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = VirtualFuncInvoker1< AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*, bool >::Invoke(6 /* UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadFirstScene(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380((&V_0), 0, NULL);
		int32_t L_0 = ___sceneBuildIndex0;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_LoadScene_m0E137F74CF4CC01BBF43BE81BAA6CAD4DB7BDE96(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_LoadScene_m0E137F74CF4CC01BBF43BE81BAA6CAD4DB7BDE96 (int32_t ___sceneBuildIndex0, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___sceneBuildIndex0;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsyncNameIndexInternal_m32EDF87979243BB1343585D146461C329D065A5D((String_t*)NULL, L_0, L_1, (bool)1, NULL);
		int32_t L_3;
		L_3 = SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B(NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4(((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_1 = NULL;
	{
		LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380((&V_0), 0, NULL);
		String_t* L_0 = ___sceneName0;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsync_mD501C44DA433BE225E6455D9AEB311C9A12FFF3C(L_0, L_1, NULL);
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mD501C44DA433BE225E6455D9AEB311C9A12FFF3C (String_t* ___sceneName0, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_0 = NULL;
	{
		String_t* L_0 = ___sceneName0;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsyncNameIndexInternal_m32EDF87979243BB1343585D146461C329D065A5D(L_0, (-1), L_1, (bool)0, NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_m3E7FAB5F33771BC535CC78DBF1062328F1A36752 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_0 = NULL;
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = SceneManager_UnloadSceneAsyncInternal_m0967F8DAF633A39A2C72E577809B42D259F9D9D5(L_0, 0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_Internal_SceneLoaded_m52ABA92450E2B7A640C528A705E7322011A7E7CF (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___sceneLoaded_1;
		V_0 = (bool)((!(((RuntimeObject*)(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_2 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___sceneLoaded_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3 = ___scene0;
		int32_t L_4 = ___mode1;
		NullCheck(L_2);
		UnityAction_2_Invoke_mA8E9470BBBEC323CF7103F7A75CD6E8911B2DB6A_inline(L_2, L_3, L_4, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneUnloaded(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_Internal_SceneUnloaded_mAF39D5EE712D0079C20265D76D9366A0CA9A2703 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_0 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___sceneUnloaded_2;
		V_0 = (bool)((!(((RuntimeObject*)(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_2 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___sceneUnloaded_2;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3 = ___scene0;
		NullCheck(L_2);
		UnityAction_1_Invoke_mE37AFE8F618C0F22BD217DFCB96A788377376104_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_ActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_Internal_ActiveSceneChanged_m4BDBF7BD76501274A60D37D3EAB47002BA96A3D3 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___previousActiveScene0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___newActiveScene1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* L_0 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___activeSceneChanged_3;
		V_0 = (bool)((!(((RuntimeObject*)(UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* L_2 = ((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___activeSceneChanged_3;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3 = ___previousActiveScene0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4 = ___newActiveScene1;
		NullCheck(L_2);
		UnityAction_2_Invoke_m28E37932B5C81CB3270E32EFF9BCE3B39CA865CF_inline(L_2, L_3, L_4, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager__cctor_mA9975EBD8A8F5463A87A1341C6366631E1CC9267 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var))->___s_AllowLoadScene_0 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::GetActiveScene_Injected(UnityEngine.SceneManagement.Scene&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_GetActiveScene_Injected_m8E7E24846A3B781AEBB4D189E6EDE3533AE6BF1B (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*SceneManager_GetActiveScene_Injected_m8E7E24846A3B781AEBB4D189E6EDE3533AE6BF1B_ftn) (Scene_tA1DC762B79745EB5140F054C884855B922318356*);
	static SceneManager_GetActiveScene_Injected_m8E7E24846A3B781AEBB4D189E6EDE3533AE6BF1B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneManager_GetActiveScene_Injected_m8E7E24846A3B781AEBB4D189E6EDE3533AE6BF1B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneManager::GetActiveScene_Injected(UnityEngine.SceneManagement.Scene&)");
	_il2cpp_icall_func(___ret0);
}
// System.Void UnityEngine.SceneManagement.SceneManager::GetSceneAt_Injected(System.Int32,UnityEngine.SceneManagement.Scene&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_GetSceneAt_Injected_mA38EDB6E1570DD59582AE345851F3BAB5E9D6AAF (int32_t ___index0, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*SceneManager_GetSceneAt_Injected_mA38EDB6E1570DD59582AE345851F3BAB5E9D6AAF_ftn) (int32_t, Scene_tA1DC762B79745EB5140F054C884855B922318356*);
	static SceneManager_GetSceneAt_Injected_mA38EDB6E1570DD59582AE345851F3BAB5E9D6AAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneManager_GetSceneAt_Injected_mA38EDB6E1570DD59582AE345851F3BAB5E9D6AAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneManager::GetSceneAt_Injected(System.Int32,UnityEngine.SceneManagement.Scene&)");
	_il2cpp_icall_func(___index0, ___ret1);
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsyncInternal_Injected(UnityEngine.SceneManagement.Scene&,UnityEngine.SceneManagement.UnloadSceneOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsyncInternal_Injected_m3E040418B0161E6B72A167874CD22A87231793F2 (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___scene0, int32_t ___options1, const RuntimeMethod* method) 
{
	typedef AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* (*SceneManager_UnloadSceneAsyncInternal_Injected_m3E040418B0161E6B72A167874CD22A87231793F2_ftn) (Scene_tA1DC762B79745EB5140F054C884855B922318356*, int32_t);
	static SceneManager_UnloadSceneAsyncInternal_Injected_m3E040418B0161E6B72A167874CD22A87231793F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneManager_UnloadSceneAsyncInternal_Injected_m3E040418B0161E6B72A167874CD22A87231793F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneManager::UnloadSceneAsyncInternal_Injected(UnityEngine.SceneManagement.Scene&,UnityEngine.SceneManagement.UnloadSceneOptions)");
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* icallRetVal = _il2cpp_icall_func(___scene0, ___options1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::.ctor(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___mode0;
		__this->___m_LoadSceneMode_0 = L_0;
		__this->___m_LocalPhysicsMode_1 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380_AdjustorThunk (RuntimeObject* __this, int32_t ___mode0, const RuntimeMethod* method)
{
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E*>(__this + _offset);
	LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380(_thisAdjusted, ___mode0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.SceneManagement.SceneUtility::GetScenePathByBuildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D (int32_t ___buildIndex0, const RuntimeMethod* method) 
{
	typedef String_t* (*SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D_ftn) (int32_t);
	static SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SceneUtility_GetScenePathByBuildIndex_m05FA8A8072FAD3852479053D98459A7254EE7E0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.SceneUtility::GetScenePathByBuildIndex(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(___buildIndex0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___type_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0(_thisAdjusted, method);
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
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* currentDelegate = reinterpret_cast<UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenInst(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4 (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast;
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_mC1104F2F0A2CD67CE308CD7E5C1CCE74482C1BB4 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->___DefaultValue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DefaultValue_0), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___DefaultValue_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultValueAttribute_Equals_m6E5B33344C4FD2FC4775A657481B63F82F18B925 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121*)IsInstClass((RuntimeObject*)L_0, DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0041;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___DefaultValue_0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24(L_5, NULL);
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0041;
	}

IL_002d:
	{
		RuntimeObject* L_7 = __this->___DefaultValue_0;
		DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_9);
		V_2 = L_10;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultValueAttribute_GetHashCode_m6F99553C7E76E711DCA6368417F66898F5AF6359 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___DefaultValue_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2;
		L_2 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		V_1 = L_2;
		goto IL_0025;
	}

IL_0017:
	{
		RuntimeObject* L_3 = __this->___DefaultValue_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_5 = V_1;
		return L_5;
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
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcludeFromDocsAttribute__ctor_mF280A16634D72D09D550C2BA2294D9234D50C771 (ExcludeFromDocsAttribute_t4A70F587CADFDFCCC21AE3CBC58F98D7BC925279* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void UnityEngine.Rendering.SubMeshDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.MeshTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor__ctor_m5234E625F44FA9B04F41BD9DC013E47C2C628D66 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___indexStart0, int32_t ___indexCount1, int32_t ___topology2, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___indexStart0;
		SubMeshDescriptor_set_indexStart_m04437852C448D05DB7638F9A207474187659FACB_inline(__this, L_0, NULL);
		int32_t L_1 = ___indexCount1;
		SubMeshDescriptor_set_indexCount_m851B9A38CC1B4DBE766A064963D9FE6FC9D91674_inline(__this, L_1, NULL);
		int32_t L_2 = ___topology2;
		SubMeshDescriptor_set_topology_m634819D6C110CD6EBFAF6590C48E24F77AC5A3CA_inline(__this, L_2, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = V_0;
		SubMeshDescriptor_set_bounds_mF5AFD8FC9DD1321F7EBA2B115034E238B472ACEB_inline(__this, L_3, NULL);
		SubMeshDescriptor_set_baseVertex_mCCFBB14F4973C3EF2C00689667CEDA5A9AA20D9B_inline(__this, 0, NULL);
		SubMeshDescriptor_set_firstVertex_mDC927003E251431E6DC95ACD80043DC8DC446FD8_inline(__this, 0, NULL);
		SubMeshDescriptor_set_vertexCount_mA5715EC8038FD91335706AE9226B94DA7D840436_inline(__this, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor__ctor_m5234E625F44FA9B04F41BD9DC013E47C2C628D66_AdjustorThunk (RuntimeObject* __this, int32_t ___indexStart0, int32_t ___indexCount1, int32_t ___topology2, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor__ctor_m5234E625F44FA9B04F41BD9DC013E47C2C628D66(_thisAdjusted, ___indexStart0, ___indexCount1, ___topology2, method);
}
// UnityEngine.Bounds UnityEngine.Rendering.SubMeshDescriptor::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 SubMeshDescriptor_get_bounds_mD2F47C8E1407CAFAEE966ACE1D870CB50AF3CEE4 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___U3CboundsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 SubMeshDescriptor_get_bounds_mD2F47C8E1407CAFAEE966ACE1D870CB50AF3CEE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 _returnValue;
	_returnValue = SubMeshDescriptor_get_bounds_mD2F47C8E1407CAFAEE966ACE1D870CB50AF3CEE4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_bounds_mF5AFD8FC9DD1321F7EBA2B115034E238B472ACEB (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = ___value0;
		__this->___U3CboundsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_bounds_mF5AFD8FC9DD1321F7EBA2B115034E238B472ACEB_AdjustorThunk (RuntimeObject* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_bounds_mF5AFD8FC9DD1321F7EBA2B115034E238B472ACEB_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.MeshTopology UnityEngine.Rendering.SubMeshDescriptor::get_topology()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_topology_mA3766E71B2249BAA047049095DC9E166BF17CEA7 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtopologyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SubMeshDescriptor_get_topology_mA3766E71B2249BAA047049095DC9E166BF17CEA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubMeshDescriptor_get_topology_mA3766E71B2249BAA047049095DC9E166BF17CEA7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_topology(UnityEngine.MeshTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_topology_m634819D6C110CD6EBFAF6590C48E24F77AC5A3CA (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CtopologyU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_topology_m634819D6C110CD6EBFAF6590C48E24F77AC5A3CA_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_topology_m634819D6C110CD6EBFAF6590C48E24F77AC5A3CA_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_indexStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexStartU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_indexStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_indexStart_m04437852C448D05DB7638F9A207474187659FACB (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CindexStartU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_indexStart_m04437852C448D05DB7638F9A207474187659FACB_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_indexStart_m04437852C448D05DB7638F9A207474187659FACB_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_indexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_indexCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_indexCount_m851B9A38CC1B4DBE766A064963D9FE6FC9D91674 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CindexCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_indexCount_m851B9A38CC1B4DBE766A064963D9FE6FC9D91674_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_indexCount_m851B9A38CC1B4DBE766A064963D9FE6FC9D91674_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_baseVertex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_baseVertex_mF0B569B62BA72FA94CB159390375BBC0D0EE6D53 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CbaseVertexU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SubMeshDescriptor_get_baseVertex_mF0B569B62BA72FA94CB159390375BBC0D0EE6D53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubMeshDescriptor_get_baseVertex_mF0B569B62BA72FA94CB159390375BBC0D0EE6D53_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_baseVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_baseVertex_mCCFBB14F4973C3EF2C00689667CEDA5A9AA20D9B (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CbaseVertexU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_baseVertex_mCCFBB14F4973C3EF2C00689667CEDA5A9AA20D9B_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_baseVertex_mCCFBB14F4973C3EF2C00689667CEDA5A9AA20D9B_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_firstVertex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_firstVertex_mEF80F76B602C4BF97182F76104D4D256344E8806 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CfirstVertexU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SubMeshDescriptor_get_firstVertex_mEF80F76B602C4BF97182F76104D4D256344E8806_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubMeshDescriptor_get_firstVertex_mEF80F76B602C4BF97182F76104D4D256344E8806_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_firstVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_firstVertex_mDC927003E251431E6DC95ACD80043DC8DC446FD8 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CfirstVertexU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_firstVertex_mDC927003E251431E6DC95ACD80043DC8DC446FD8_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_firstVertex_mDC927003E251431E6DC95ACD80043DC8DC446FD8_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.SubMeshDescriptor::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_vertexCount_m75611DFB7BE0ED9F5260BD460A815BDCE11EA211 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CvertexCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SubMeshDescriptor_get_vertexCount_m75611DFB7BE0ED9F5260BD460A815BDCE11EA211_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubMeshDescriptor_get_vertexCount_m75611DFB7BE0ED9F5260BD460A815BDCE11EA211_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SubMeshDescriptor::set_vertexCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_vertexCount_mA5715EC8038FD91335706AE9226B94DA7D840436 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CvertexCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SubMeshDescriptor_set_vertexCount_mA5715EC8038FD91335706AE9226B94DA7D840436_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	SubMeshDescriptor_set_vertexCount_mA5715EC8038FD91335706AE9226B94DA7D840436_inline(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.Rendering.SubMeshDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubMeshDescriptor_ToString_mBA25D925D5A941C4DC6C6A80BB9D1D1371E12C78 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F71EBED61D73B069599B0725909048EA5155D4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2;
		L_2 = SubMeshDescriptor_get_topology_mA3766E71B2249BAA047049095DC9E166BF17CEA7_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6;
		L_6 = SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14;
		L_14 = SubMeshDescriptor_get_firstVertex_mEF80F76B602C4BF97182F76104D4D256344E8806_inline(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18;
		L_18 = SubMeshDescriptor_get_vertexCount_m75611DFB7BE0ED9F5260BD460A815BDCE11EA211_inline(__this, NULL);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22;
		L_22 = SubMeshDescriptor_get_baseVertex_mF0B569B62BA72FA94CB159390375BBC0D0EE6D53_inline(__this, NULL);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_26;
		L_26 = SubMeshDescriptor_get_bounds_mD2F47C8E1407CAFAEE966ACE1D870CB50AF3CEE4_inline(__this, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27 = L_26;
		RuntimeObject* L_28 = Box(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral76F71EBED61D73B069599B0725909048EA5155D4, L_25, NULL);
		V_0 = L_29;
		goto IL_0076;
	}

IL_0076:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* SubMeshDescriptor_ToString_mBA25D925D5A941C4DC6C6A80BB9D1D1371E12C78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SubMeshDescriptor_ToString_mBA25D925D5A941C4DC6C6A80BB9D1D1371E12C78(_thisAdjusted, method);
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
// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::get_attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CattributeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_attribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CattributeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CformatU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_format(UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CformatU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_dimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdimensionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_dimension(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CdimensionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::get_stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CstreamU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::set_stream(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CstreamU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.VertexAttributeDescriptor::.ctor(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___attribute0, int32_t ___format1, int32_t ___dimension2, int32_t ___stream3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___attribute0;
		VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline(__this, L_0, NULL);
		int32_t L_1 = ___format1;
		VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline(__this, L_1, NULL);
		int32_t L_2 = ___dimension2;
		VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline(__this, L_2, NULL);
		int32_t L_3 = ___stream3;
		VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A_AdjustorThunk (RuntimeObject* __this, int32_t ___attribute0, int32_t ___format1, int32_t ___dimension2, int32_t ___stream3, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	VertexAttributeDescriptor__ctor_m713B31395FB13FDEB2665F5C4C31572D5875A43A(_thisAdjusted, ___attribute0, ___format1, ___dimension2, ___stream3, method);
}
// System.String UnityEngine.Rendering.VertexAttributeDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40603CB9C3C2F0F007BD4C59CEB195FB17927F5C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2;
		L_2 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6;
		L_6 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14;
		L_14 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral40603CB9C3C2F0F007BD4C59CEB195FB17927F5C, L_13, NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = VertexAttributeDescriptor_ToString_m45F7E7D6715E000C617173246F2C9BE23DF3FC8F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), (int32_t)L_1));
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)23))), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)23))), L_5));
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)23))), L_7));
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VertexAttributeDescriptor_GetHashCode_mCB8C5F6AD422FE6A410C5406843FCE4B0ED5F2F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___other0;
		bool L_3;
		L_3 = VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D(__this, ((*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)((VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)UnBox(L_2, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	bool _returnValue;
	_returnValue = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VertexAttributeDescriptor::Equals(UnityEngine.Rendering.VertexAttributeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0;
		L_0 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline(__this, NULL);
		int32_t L_1;
		L_1 = VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline((&___other0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2;
		L_2 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline(__this, NULL);
		int32_t L_3;
		L_3 = VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline((&___other0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4;
		L_4 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline(__this, NULL);
		int32_t L_5;
		L_5 = VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline((&___other0), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6;
		L_6 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline(__this, NULL);
		int32_t L_7;
		L_7 = VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline((&___other0), NULL);
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0043;
	}

IL_0043:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D_AdjustorThunk (RuntimeObject* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___other0, const RuntimeMethod* method)
{
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*>(__this + _offset);
	bool _returnValue;
	_returnValue = VertexAttributeDescriptor_Equals_mF328DE139864C201987238048AC79F8925CA435D(_thisAdjusted, ___other0, method);
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
// System.String UnityEngine.Rendering.RenderTargetIdentifier::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___m_Type_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = __this->___m_NameID_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = __this->___m_InstanceID_2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		intptr_t L_14 = __this->___m_BufferPointer_3;
		intptr_t L_15 = L_14;
		RuntimeObject* L_16 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___m_MipLevel_4;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___m_CubeFace_5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = __this->___m_DepthSlice_6;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(_stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6, L_25, NULL);
		V_0 = L_29;
		goto IL_0076;
	}

IL_0076:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = (&__this->___m_Type_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_0, NULL);
		int32_t* L_2 = (&__this->___m_NameID_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		int32_t* L_4 = (&__this->___m_InstanceID_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23))), L_3)), ((int32_t)23))), L_5));
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1 = ___rhs0;
		int32_t L_2 = L_1.___m_Type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_3 = __this->___m_NameID_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_4 = ___rhs0;
		int32_t L_5 = L_4.___m_NameID_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_6 = __this->___m_InstanceID_2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7 = ___rhs0;
		int32_t L_8 = L_7.___m_InstanceID_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_006a;
		}
	}
	{
		intptr_t L_9 = __this->___m_BufferPointer_3;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_10 = ___rhs0;
		intptr_t L_11 = L_10.___m_BufferPointer_3;
		bool L_12;
		L_12 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = __this->___m_MipLevel_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_14 = ___rhs0;
		int32_t L_15 = L_14.___m_MipLevel_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = __this->___m_CubeFace_5;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_17 = ___rhs0;
		int32_t L_18 = L_17.___m_CubeFace_5;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_19 = __this->___m_DepthSlice_6;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_20 = ___rhs0;
		int32_t L_21 = L_20.___m_DepthSlice_6;
		G_B8_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006b;
	}

IL_006a:
	{
		G_B8_0 = 0;
	}

IL_006b:
	{
		V_0 = (bool)G_B8_0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9_AdjustorThunk (RuntimeObject* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs0, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9(_thisAdjusted, ___rhs0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0026;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((*(RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)((RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)(RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)UnBox(L_2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var))));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_3 = V_0;
		bool L_4;
		L_4 = RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A(_thisAdjusted, ___obj0, method);
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
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB (const RuntimeMethod* method) 
{
	typedef bool (*GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB_ftn) ();
	static GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Rendering.OnDemandRendering::get_renderFrameInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnDemandRendering_get_renderFrameInterval_mE5574585DE4A02C5A5C0F6770FF86AF1C4F3CCA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields*)il2cpp_codegen_static_fields_for(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var))->___m_RenderFrameInterval_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.OnDemandRendering::GetRenderFrameInterval(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDemandRendering_GetRenderFrameInterval_mEE92E09F4366D8D3F2224AB0EBA6F1E57CD13F40 (int32_t* ___frameInterval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___frameInterval0;
		il2cpp_codegen_runtime_class_init_inline(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OnDemandRendering_get_renderFrameInterval_mE5574585DE4A02C5A5C0F6770FF86AF1C4F3CCA9(NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		return;
	}
}
// System.Void UnityEngine.Rendering.OnDemandRendering::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDemandRendering__cctor_mBAE9AC06F698C374E748EF75B23B690656F88A47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields*)il2cpp_codegen_static_fields_for(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var))->___m_RenderFrameInterval_0 = 1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.BatchCullingContext::.ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane>,Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>,UnityEngine.Rendering.LODParameters,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___inCullingPlanes0, NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___inOutBatchVisibility1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndices2, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndicesY3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___inLodParameters4, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inCullingMatrix5, float ___inNearPlane6, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_0 = ___inCullingPlanes0;
		__this->___cullingPlanes_0 = L_0;
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_1 = ___inOutBatchVisibility1;
		__this->___batchVisibility_1 = L_1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2 = ___outVisibleIndices2;
		__this->___visibleIndices_2 = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = ___outVisibleIndicesY3;
		__this->___visibleIndicesY_3 = L_3;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_4 = ___inLodParameters4;
		__this->___lodParameters_4 = L_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___inCullingMatrix5;
		__this->___cullingMatrix_5 = L_5;
		float L_6 = ___inNearPlane6;
		__this->___nearPlane_6 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___inCullingPlanes0, NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___inOutBatchVisibility1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndices2, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndicesY3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___inLodParameters4, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inCullingMatrix5, float ___inNearPlane6, const RuntimeMethod* method)
{
	BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659*>(__this + _offset);
	BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449(_thisAdjusted, ___inCullingPlanes0, ___inOutBatchVisibility1, ___outVisibleIndices2, ___outVisibleIndicesY3, ___inLodParameters4, ___inCullingMatrix5, ___inNearPlane6, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Rendering.BatchRendererGroup::InvokeOnPerformCulling(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchRendererCullingOutput&,UnityEngine.Rendering.LODParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchRendererGroup_InvokeOnPerformCulling_m482BDBB3B02D5C2E66A37C1C4F76A1CB933864F8 (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___group0, BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* ___context1, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* ___lodParameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_0 = ___context1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_1 = L_0->___cullingPlanes_2;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_2 = ___context1;
		int32_t L_3 = L_2->___cullingPlanesCount_6;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6((void*)L_1, L_3, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_RuntimeMethod_var);
		V_0 = L_4;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_5 = ___context1;
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA* L_6 = L_5->___batchVisibility_3;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_7 = ___context1;
		int32_t L_8 = L_7->___batchVisibilityCount_7;
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_9;
		L_9 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C((void*)L_6, L_8, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_RuntimeMethod_var);
		V_1 = L_9;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_10 = ___context1;
		int32_t* L_11 = L_10->___visibleIndices_4;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_12 = ___context1;
		int32_t L_13 = L_12->___visibleIndicesCount_8;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		L_14 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724((void*)L_11, L_13, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var);
		V_2 = L_14;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_15 = ___context1;
		int32_t* L_16 = L_15->___visibleIndicesY_5;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_17 = ___context1;
		int32_t L_18 = L_17->___visibleIndicesCount_8;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_19;
		L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724((void*)L_16, L_18, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var);
		V_3 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				JobHandle_ScheduleBatchedJobs_mD80F0AB54AEA1D1A107F4B7B84EE5288FD895A93(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_20 = ___context1;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_21 = ___group0;
			NullCheck(L_21);
			OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* L_22 = L_21->___m_PerformCulling_1;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_23 = ___group0;
			NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_24 = V_0;
			NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_25 = V_1;
			NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = V_2;
			NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_27 = V_3;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* L_28 = ___lodParameters2;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_29 = (*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)L_28);
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_30 = ___context1;
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = L_30->___cullingMatrix_1;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_32 = ___context1;
			float L_33 = L_32->___nearPlane_9;
			BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 L_34;
			memset((&L_34), 0, sizeof(L_34));
			BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449((&L_34), L_24, L_25, L_26, L_27, L_29, L_31, L_33, /*hidden argument*/NULL);
			NullCheck(L_22);
			JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_35;
			L_35 = OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_inline(L_22, L_23, L_34, NULL);
			L_20->___cullingJobsFence_0 = L_35;
			goto IL_0087;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
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
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Multicast(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* currentDelegate = reinterpret_cast<OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2*>(delegatesToInvoke[i]);
		typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___rendererGroup0, ___cullingContext1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenInst(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	NullCheck(___rendererGroup0);
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___rendererGroup0, ___cullingContext1, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenStatic(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___rendererGroup0, ___cullingContext1, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenStaticInvoker(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(__this->___method_ptr_0, method, NULL, ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_ClosedStaticInvoker(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	NullCheck(___rendererGroup0);
	return VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(il2cpp_codegen_method_get_slot(method), ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	NullCheck(___rendererGroup0);
	return InterfaceFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	NullCheck(___rendererGroup0);
	return GenericVirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(method, ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	NullCheck(___rendererGroup0);
	return GenericInterfaceFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(method, ___rendererGroup0, ___cullingContext1);
}
// System.Void UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPerformCulling__ctor_mFB91FB8D6D713AC39AFB921AF1C23A50EC80529B (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Multicast;
}
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22 (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___rendererGroup0, ___cullingContext1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = __this->___m_IsOrthographic_0;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_1 = ___other0;
		int32_t L_2 = L_1.___m_IsOrthographic_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0058;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___m_CameraPosition_1);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_4 = ___other0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___m_CameraPosition_1;
		bool L_6;
		L_6 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		float* L_7 = (&__this->___m_FieldOfView_2);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_8 = ___other0;
		float L_9 = L_8.___m_FieldOfView_2;
		bool L_10;
		L_10 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		float* L_11 = (&__this->___m_OrthoSize_3);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_12 = ___other0;
		float L_13 = L_12.___m_OrthoSize_3;
		bool L_14;
		L_14 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_15 = __this->___m_CameraPixelHeight_4;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_16 = ___other0;
		int32_t L_17 = L_16.___m_CameraPixelHeight_4;
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 0;
	}

IL_0059:
	{
		V_0 = (bool)G_B6_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F_AdjustorThunk (RuntimeObject* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___other0, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	bool _returnValue;
	_returnValue = LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		bool L_4;
		L_4 = LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F(__this, ((*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)((LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)UnBox(L_3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	bool _returnValue;
	_returnValue = LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.LODParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40 (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___m_IsOrthographic_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___m_CameraPosition_1);
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_2, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		int32_t L_4 = V_0;
		float* L_5 = (&__this->___m_FieldOfView_2);
		int32_t L_6;
		L_6 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_5, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)397)))^L_6));
		int32_t L_7 = V_0;
		float* L_8 = (&__this->___m_OrthoSize_3);
		int32_t L_9;
		L_9 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_8, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)397)))^L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___m_CameraPixelHeight_4;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)397)))^L_11));
		int32_t L_12 = V_0;
		V_1 = L_12;
		goto IL_005e;
	}

IL_005e:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40(_thisAdjusted, method);
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
// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_m1303438384D0A5857A147C280A1AF0E16E488908 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Render_m41E15C2221365D92636651792FBDAD1A04E8AF1A (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_0 = ___context0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_1 = ___cameras1;
		NullCheck(L_1);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_2;
		L_2 = List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A(L_1, List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* >::Invoke(4 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]) */, __this, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___context0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___cameras1;
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* >::Invoke(6 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>) */, __this, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B5_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B3_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B4_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B6_2 = NULL;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___context0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___cameras1;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = __this;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_6 = ___cameras1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline(L_6, List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_8 = ___cameras1;
		NullCheck(L_8);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6(L_8, 0, List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0033:
	{
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_10 = ___renderRequests2;
		NullCheck(G_B6_2);
		VirtualActionInvoker3< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* >::Invoke(5 /* System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>) */, G_B6_2, G_B6_1, G_B6_0, L_10);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_m581E2B33EF0CCAF2C3E7BD71AE32B4974D259286 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_0 = NULL;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		V_0 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
	}
	try
	{// begin try (depth: 1)
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = VirtualFuncInvoker0< RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* >::Invoke(24 /* UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::CreatePipeline() */, __this);
		V_0 = L_0;
		goto IL_0065;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		{
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_1 = V_1;
			NullCheck(L_1);
			RuntimeObject* L_2;
			L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_1);
			NullCheck(L_2);
			bool L_3;
			L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!L_3)
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))))
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_7 = V_1;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			G_B6_0 = ((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0057;
		}

IL_0056:
		{
			G_B6_0 = 1;
		}

IL_0057:
		{
			V_2 = (bool)G_B6_0;
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_0062;
			}
		}
		{
			Exception_t* L_11 = V_1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_11, NULL);
		}

IL_0062:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0065;
		}
	}// end catch (depth: 1)

IL_0065:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_12 = V_0;
		V_3 = L_12;
		goto IL_0069;
	}

IL_0069:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_13 = V_3;
		return L_13;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_renderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_renderingLayerMaskNames_mC0978F38B2EADD1462593AC6D8395E612CB1329D (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_prefixedRenderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_prefixedRenderingLayerMaskNames_m89254E02D74CC6FC9320104B8A1748534FE55F6B (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultMaterial_mCF112570E7B47208A0B700BA97B33CAE6713D323 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveShader_m261A0788B4F73AFC5A50953878552BC3BFF8B674 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveTransparentShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveTransparentShader_m6E2A2439FCB378F64DC46CB6DB517A1661A306F8 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveMaskedShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveMaskedShader_m42DB9A70B290E217B91616E9274C9B7E58D54362 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailLitShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailLitShader_m74F2FA112CD18493E7003F6F711AA09A8C930136 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassShader_mBE126045BF9048B59CE56D1BD9C69C3DEB4CDD96 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassBillboardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassBillboardShader_mE233539926B92ADB7A057C34CBCD7E51823C75A2 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultParticleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultParticleMaterial_mC68CA6787815E00CF501F268F34DA0B3C83B3013 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultLineMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultLineMaterial_mB4DD122B043417F3810FEAAA74E79B369A26B484 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultTerrainMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultTerrainMaterial_m129D75CFE9689112452AA911C24BEE4939ADB520 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIMaterial_mBB9F6694EEEB97AC6140C094A48743660A0DAF04 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIOverdrawMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIOverdrawMaterial_m19832E76629C0AFC18F0D61C5C1CC47533200038 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIETC1SupportedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIETC1SupportedMaterial_m2D1DC4B89F59283C8AE3101F3DC05D88C10D4C10 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaterial_m2418C7E1A0974B2A06CF3BE81590C7B0DF1DB113 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaskMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaskMaterial_mEE67105F80768BDFD1C93E8709FEBF2D4561E14E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultShader_m633AD6A97B2D1D436E42920D766B1283C1FED858 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree7Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree7Shader_mCEF3795C9E36F0A9D9A3CE29824790B172637252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree8Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree8Shader_mAEB3D02FC0A0016BAC5C22BC1967827403E5C17A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnValidate_mD160C7BDEA559BAF3DDA48B4819307E07B377F52 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E(NULL);
		RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063(__this, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnDisable_mE99CEED707BDC901AD37DC976FA3A3A313E7E00C (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E(NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset__ctor_mC45BECAED54BEDC4555AF010323EABF49BA7B78A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_1 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_000b:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_2 = ___value0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2), (void*)G_B3_0);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_5 = ___value0;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4), (void*)L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_0 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_1 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_2 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)Castclass((RuntimeObject*)L_4, Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_5 = V_2;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_6 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*>((&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5), L_5, L_6);
		V_0 = L_7;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_8 = V_0;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_8) == ((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_0 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_1 = NULL;
	Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_2 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)Castclass((RuntimeObject*)L_4, Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_5 = V_2;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_6 = V_1;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*>((&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___beginCameraRendering_5), L_5, L_6);
		V_0 = L_7;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_8 = V_0;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_8) == ((RuntimeObject*)(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::OnActiveRenderPipelineTypeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_OnActiveRenderPipelineTypeChanged_mC5AC4C431D84C5F030CA2DF6B46C19EFA87E92EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___activeRenderPipelineTypeChanged_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m89D456720172AE19FEABD43C870EE06BA6FFE885 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ___pipelineAsset0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_0) == ((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E(NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_4 = ___pipelineAsset0;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)L_4);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		NullCheck(L_4);
		RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179(L_4, NULL);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL);
		RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF((RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_5 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_set_active_m3AC4375082D83077EB449AD20EC27B6B458D2EC4(L_5, NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.String UnityEngine.Rendering.RenderPipelineManager::GetCurrentPipelineAssetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderPipelineManager_GetCurrentPipelineAssetType_mD70AE9CC75AF741F336A494688F69B9AC666123C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset,System.IntPtr,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_DoRenderLoop_Internal_m7FB9F81FF54E716454A4888990CE46220DBAD6CC (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipe0, intptr_t ___loopPtr1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___pipe0;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063(L_0, NULL);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		V_1 = (bool)((((RuntimeObject*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_006e;
	}

IL_0016:
	{
		intptr_t L_3 = ___loopPtr1;
		ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5((&V_0), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_4 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_4);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_4, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189((&V_0), L_5, NULL);
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_6 = ___renderRequests2;
		V_2 = (bool)((((RuntimeObject*)(List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_9 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_10 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_8);
		RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE(L_8, L_9, L_10, NULL);
		goto IL_0063;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_11;
		L_11 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_12 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_13 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_14 = ___renderRequests2;
		NullCheck(L_11);
		RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57(L_11, L_12, L_13, L_14, NULL);
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_15 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_15);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_15, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
	}

IL_006e:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___pipelineAsset0;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_HandleRenderPipelineChange_m89D456720172AE19FEABD43C870EE06BA6FFE885(L_0, NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_3;
		L_3 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_4, NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_7 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		NullCheck(L_7);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252(L_7, NULL);
		RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF(L_8, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager__cctor_mE2CB9B1D60D04CAEEBC0130E5B99644870F90BF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1), (void*)L_0);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3 = _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3), (void*)_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4), (void*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL);
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
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___listType0, RuntimeObject* ___resultList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___listType0;
		RuntimeObject* L_1 = ___resultList1;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8_AdjustorThunk (RuntimeObject* __this, Type_t* ___listType0, RuntimeObject* ___resultList1, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(_thisAdjusted, ___listType0, ___resultList1, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ptr0;
		__this->___m_Ptr_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5_AdjustorThunk (RuntimeObject* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5(_thisAdjusted, ___ptr0, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___results0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_2 = ___results0;
		ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189_AdjustorThunk (RuntimeObject* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___results0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189(_thisAdjusted, ___results0, method);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t* L_0 = (&__this->___m_Ptr_1);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_1 = ___other0;
		intptr_t L_2 = L_1.___m_Ptr_1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D_AdjustorThunk (RuntimeObject* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___other0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		bool L_4;
		L_4 = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(__this, ((*(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)UnBox(L_3, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Ptr_1);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__cctor_mC3B278224EBBC167C90B484295DB8563BED64D6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B((&L_0), _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, /*hidden argument*/NULL);
		((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var))->___kRenderTypeTag_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ____unity_self0, Type_t* ___listType1, RuntimeObject* ___resultList2, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Type_t*, RuntimeObject*);
	static ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)");
	_il2cpp_icall_func(____unity_self0, ___listType1, ___resultList2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1;
		L_1 = Shader_TagToID_m1FD312CA7913C007B8A80F638C3DCD24B5E47323(L_0, NULL);
		__this->___m_Id_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B(_thisAdjusted, ___name0, method);
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(__this, ((*(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)UnBox(L_1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Id_0;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_1 = ___other0;
		int32_t L_2 = L_1.___m_Id_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0_AdjustorThunk (RuntimeObject* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___other0, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)2079669542);
		int32_t L_0 = V_0;
		int32_t* L_1 = (&__this->___m_Id_0);
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), L_2));
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF(_thisAdjusted, method);
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
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mF977257DBAD4FAD9FF78232B33DF37121800834D(L_0, NULL);
		__this->___m_Enabled_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___m_ReadMask_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___m_WriteMask_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_CompareFunctionFront_4 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_PassOperationFront_5 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_FailOperationFront_6 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_ZFailOperationFront_7 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_CompareFunctionBack_8 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_PassOperationBack_9 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_FailOperationBack_10 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_ZFailOperationBack_11 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		uint8_t L_0 = __this->___m_Enabled_0;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = ___other0;
		uint8_t L_2 = L_1.___m_Enabled_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_3 = __this->___m_ReadMask_1;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_4 = ___other0;
		uint8_t L_5 = L_4.___m_ReadMask_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_6 = __this->___m_WriteMask_2;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_7 = ___other0;
		uint8_t L_8 = L_7.___m_WriteMask_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_9 = __this->___m_CompareFunctionFront_4;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_10 = ___other0;
		uint8_t L_11 = L_10.___m_CompareFunctionFront_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_12 = __this->___m_PassOperationFront_5;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_13 = ___other0;
		uint8_t L_14 = L_13.___m_PassOperationFront_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_15 = __this->___m_FailOperationFront_6;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_16 = ___other0;
		uint8_t L_17 = L_16.___m_FailOperationFront_6;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_18 = __this->___m_ZFailOperationFront_7;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_19 = ___other0;
		uint8_t L_20 = L_19.___m_ZFailOperationFront_7;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_21 = __this->___m_CompareFunctionBack_8;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_22 = ___other0;
		uint8_t L_23 = L_22.___m_CompareFunctionBack_8;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_24 = __this->___m_PassOperationBack_9;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_25 = ___other0;
		uint8_t L_26 = L_25.___m_PassOperationBack_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_27 = __this->___m_FailOperationBack_10;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_28 = ___other0;
		uint8_t L_29 = L_28.___m_FailOperationBack_10;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_30 = __this->___m_ZFailOperationBack_11;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_31 = ___other0;
		uint8_t L_32 = L_31.___m_ZFailOperationBack_11;
		G_B12_0 = ((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B12_0 = 0;
	}

IL_00a4:
	{
		V_0 = (bool)G_B12_0;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051_AdjustorThunk (RuntimeObject* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___other0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		bool L_4;
		L_4 = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(__this, ((*(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)((StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)UnBox(L_3, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = (&__this->___m_Enabled_0);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = (&__this->___m_ReadMask_1);
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		uint8_t* L_6 = (&__this->___m_WriteMask_2);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		uint8_t* L_9 = (&__this->___m_CompareFunctionFront_4);
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		uint8_t* L_12 = (&__this->___m_PassOperationFront_5);
		int32_t L_13;
		L_13 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		uint8_t* L_15 = (&__this->___m_FailOperationFront_6);
		int32_t L_16;
		L_16 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_15, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		int32_t L_17 = V_0;
		uint8_t* L_18 = (&__this->___m_ZFailOperationFront_7);
		int32_t L_19;
		L_19 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_18, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		uint8_t* L_21 = (&__this->___m_CompareFunctionBack_8);
		int32_t L_22;
		L_22 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_21, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_22));
		int32_t L_23 = V_0;
		uint8_t* L_24 = (&__this->___m_PassOperationBack_9);
		int32_t L_25;
		L_25 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_24, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)397)))^L_25));
		int32_t L_26 = V_0;
		uint8_t* L_27 = (&__this->___m_FailOperationBack_10);
		int32_t L_28;
		L_28 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_27, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)397)))^L_28));
		int32_t L_29 = V_0;
		uint8_t* L_30 = (&__this->___m_ZFailOperationBack_11);
		int32_t L_31;
		L_31 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_30, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_29, ((int32_t)397)))^L_31));
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_00da;
	}

IL_00da:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5(_thisAdjusted, method);
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
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_m3AC4375082D83077EB449AD20EC27B6B458D2EC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackMixedLightingModeByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_m79883C2C0259DA7AF9B43DC1C6621EF8C2C882AB (intptr_t ___fallbackModePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___fallbackModePtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (int32_t*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2;
		L_2 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_4, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_6, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_8;
		L_8 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_8, NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0060;
	}

IL_0056:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)2;
		goto IL_0065;
	}

IL_005b:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)1;
		goto IL_0065;
	}

IL_0060:
	{
		int32_t* L_18 = V_0;
		*((int32_t*)L_18) = (int32_t)0;
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_008e;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A(2, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_21 = V_0;
		*((int32_t*)L_21) = (int32_t)2;
		goto IL_008e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A(1, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)1;
		goto IL_008e;
	}

IL_008b:
	{
		int32_t* L_25 = V_0;
		*((int32_t*)L_25) = (int32_t)0;
	}

IL_008e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A (int32_t ___mixedMode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___mixedMode0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mF97CED14CB16F3193BCB30A9A37F7B8EDFB7AC4D(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mF97CED14CB16F3193BCB30A9A37F7B8EDFB7AC4D (int32_t ___mixedMode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4(1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___mixedMode0;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7;
		L_7 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_7, NULL);
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_9 = ___mixedMode0;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_10;
		L_10 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_10, NULL);
		G_B6_0 = G_B5_0;
		if ((((int32_t)((int32_t)((int32_t)L_11&2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t L_12 = ___mixedMode0;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_13;
		L_13 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_13, NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4 (int32_t ___bakeType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___bakeType0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mC712C491E3596EE8C0655538CF08E042EB7B34C8(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mC712C491E3596EE8C0655538CF08E042EB7B34C8 (int32_t ___bakeType0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___bakeType0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4(2, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_6, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline(L_11, NULL);
		int32_t L_13 = ___bakeType0;
		int32_t L_14 = ___bakeType0;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___bakeType0;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_16;
		L_16 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline(L_16, NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m494FCDC548A34F66D7A71A81D0C38EFBF6459AEB (int32_t ___mode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline(L_3, NULL);
		int32_t L_5 = ___mode0;
		int32_t L_6 = ___mode0;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapperSupportedByRef(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_mFC8FCBE9FA4D3E210CBB8BA711FF0AE72648285A (int32_t ___lightmapper0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___lightmapper0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m1AE190FFF1E73E64DC2F9CF21F44656056F2B2C9 (intptr_t ___isSupportedPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoAmbientProbeBakingSupported_m2D00A73CB387BEDAFADF211A0E8579ACB544A6BC (intptr_t ___isSupportedPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoDefaultReflectionProbeBakingSupported_m226DAFBB7099877D23B8273789A1FAC2130DDCC0 (intptr_t ___isSupportedPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackLightmapperByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mE8CE8E18176F1DF7FB7A315C3FF41029BFBDCA63 (intptr_t ___lightmapperPtr0, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___lightmapperPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CreflectionProbeModesU3Ek__BackingField_1 = 0;
		__this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2 = 0;
		__this->___U3CmixedLightingModesU3Ek__BackingField_3 = 7;
		__this->___U3ClightmapBakeTypesU3Ek__BackingField_4 = 7;
		__this->___U3ClightmapsModesU3Ek__BackingField_5 = 1;
		__this->___U3CenlightenLightmapperU3Ek__BackingField_6 = (bool)1;
		__this->___U3CenlightenU3Ek__BackingField_7 = (bool)1;
		__this->___U3ClightProbeProxyVolumesU3Ek__BackingField_8 = (bool)1;
		__this->___U3CmotionVectorsU3Ek__BackingField_9 = (bool)1;
		__this->___U3CreceiveShadowsU3Ek__BackingField_10 = (bool)1;
		__this->___U3CreflectionProbesU3Ek__BackingField_11 = (bool)1;
		__this->___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12 = (bool)1;
		__this->___U3CrendererPriorityU3Ek__BackingField_13 = (bool)0;
		__this->___U3CoverridesEnvironmentLightingU3Ek__BackingField_15 = (bool)0;
		__this->___U3CoverridesFogU3Ek__BackingField_16 = (bool)0;
		__this->___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17 = (bool)0;
		__this->___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18 = (bool)0;
		__this->___U3CeditableMaterialRenderQueueU3Ek__BackingField_19 = (bool)1;
		__this->___U3CoverridesLODBiasU3Ek__BackingField_20 = (bool)0;
		__this->___U3CoverridesMaximumLODLevelU3Ek__BackingField_21 = (bool)0;
		__this->___U3CrendererProbesU3Ek__BackingField_22 = (bool)1;
		__this->___U3CparticleSystemInstancingU3Ek__BackingField_23 = (bool)1;
		__this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24 = (bool)1;
		__this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25 = (bool)1;
		__this->___U3CoverridesShadowmaskU3Ek__BackingField_26 = (bool)0;
		__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_m95816EF1A9511038798E9D7FF161E929E0217DE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_0, NULL);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m13BA20519948F798D105B0F5F4FCF0D738CEA5A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___handle0;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86_AdjustorThunk (RuntimeObject* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___other0, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.Playable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__cctor_m75FC3E0FF1F2C5AD39A0AE7F2967AC5D0ABAEF0A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217(NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		double L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Playables.PlayableAsset::get_outputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableAsset_get_outputs_m5760B1B5EE08B0327FA7D90AE92C94227B1C993C (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4;
		V_0 = (RuntimeObject*)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset,UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_CreatePlayable_mC2DE0964868E459854F8B7564830BDF47424CD65 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___asset0, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go2, intptr_t ___ptr3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* V_1 = NULL;
	bool V_2 = false;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___asset0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = Playable_get_Null_m13BA20519948F798D105B0F5F4FCF0D738CEA5A7(NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_0014:
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_4 = ___asset0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_5 = ___graph1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___go2;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7;
		L_7 = VirtualFuncInvoker2< Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject) */, L_4, L_5, L_6);
		V_0 = L_7;
	}

IL_001d:
	{
		void* L_8;
		L_8 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___ptr3), NULL);
		V_1 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_8;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_9 = V_1;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = V_0;
		*(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_9 = L_10;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_GetPlayableAssetDuration_m88EC64D33EDDDCF5DD24FF233BEC2013DFDDF622 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___asset0, intptr_t ___ptrToDouble1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double* V_1 = NULL;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___asset0;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(5 /* System.Double UnityEngine.Playables.PlayableAsset::get_duration() */, L_0);
		V_0 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___ptrToDouble1), NULL);
		V_1 = (double*)L_2;
		double* L_3 = V_1;
		double L_4 = V_0;
		*((double*)L_3) = (double)L_4;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStart_mB5944807796239EFB530022539674C4E4D185D65 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStop_mF80DFC8A3C2D2CA9299011D9E871ED6A8A9586CA (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableCreate_m22B0F0051A677A523C5702AABC6B1C9D358E90B8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableDestroy_m3DB0AF7BD9689DA1BCCBBFD19BDD544143027C3C (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPlay_m05F6FCCBC6E8FB4BA0BE2690045AF28BF95C6FE2 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPause_m431A7BD2EE99C1862563FEA37E20C365B753930B (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_PrepareFrame_m33FED1E870D350D8276712A2CD75118FEFAA86BD (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_mB80DDB2AB5D7EC0D3B9A466D37BE8556F6BBD2A0 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, RuntimeObject* ___playerData2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object UnityEngine.Playables.PlayableBehaviour::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableBehaviour_Clone_m6A5B052F4ECA2ADED5937A4843777F52CCD33EE8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
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


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Playables.PlayableBinding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBinding__cctor_m60F178A142DCD473565A15003603A696FE3EBC02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = (PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)SZArrayNew(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var, (uint32_t)0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4), (void*)L_0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5 = (std::numeric_limits<double>::infinity());
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
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* currentDelegate = reinterpret_cast<CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*>(delegatesToInvoke[i]);
		typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___graph0, ___name1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenInst(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___graph0, ___name1, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___graph0, ___name1, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___graph0, ___name1);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___graph0, ___name1);
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 returnValue = il2cppPInvokeFunc(___graph0, ____name1_marshaled);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method) 
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___graph0, ___name1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___x0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___p0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___p0;
		bool L_2;
		L_2 = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(__this, ((*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)UnBox(L_1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___p0, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670(_thisAdjusted, ___p0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = (*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___other0, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___lhs0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___lhs0;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = ___rhs1;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___lhs0;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = ___rhs1;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle__cctor_mD503717F819B6D5D115A206B2D88E8B1E5AEADA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4));
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) 
{
	typedef Type_t* (*PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)");
	Type_t* icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___handle0;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(__this, NULL);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1;
		L_1 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_op_Equality_mAF77E9AD09CFBA177D85605ACF0B659F7DEE80E4(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121_AdjustorThunk (RuntimeObject* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___other0, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutput::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__cctor_mA6BE3612E38131B9366284B8D0F96AABD4271D41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE(NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		((PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var))->___m_NullPlayableOutput_1 = L_1;
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
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_mAF77E9AD09CFBA177D85605ACF0B659F7DEE80E4 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___lhs0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___rhs1;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___p0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___p0;
		bool L_2;
		L_2 = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(__this, ((*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)UnBox(L_1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___p0, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A(_thisAdjusted, ___p0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = (*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)__this);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___other0, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___lhs0;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_2 = ___rhs1;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___lhs0;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_7 = ___rhs1;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle__cctor_m3739C240727C7DE5BE3C36E63D5114227F1EB09D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_red_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___value0;
		__this->___m_red_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_green_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___value0;
		__this->___m_green_1 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_blue_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___value0;
		__this->___m_blue_2 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(_thisAdjusted, ___value0, method);
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___intensity1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB(NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = ___intensity1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&___color0), L_1, NULL);
		V_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&V_4), NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_001b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&___color0), NULL);
		V_4 = L_4;
		float L_5 = ___intensity1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&V_4), L_5, NULL);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		float L_7;
		L_7 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_1 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = L_8.___r_0;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		float L_11 = L_10.___g_1;
		if ((((float)L_11) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___b_2;
		G_B7_0 = ((((float)L_13) < ((float)(0.0f)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B7_0 = 1;
	}

IL_005f:
	{
		V_5 = (bool)G_B7_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00c3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		float* L_18 = (&(&V_0)->___r_0);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (&(&V_0)->___g_1);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		float* L_26 = (&(&V_0)->___b_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		String_t* L_29;
		L_29 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_28, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_30 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803_RuntimeMethod_var)));
	}

IL_00c3:
	{
		float L_31 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_31) <= ((float)(9.99999968E-21f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33;
		L_33 = LinearColor_Black_m29E930EAED6270F37E98DCFDE78417DACEBA26A3(NULL);
		V_7 = L_33;
		goto IL_0125;
	}

IL_00dd:
	{
		float L_34;
		L_34 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_2 = ((float)((1.0f)/L_34));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_0;
		float L_36 = L_35.___r_0;
		float L_37 = V_2;
		(&V_3)->___m_red_0 = ((float)il2cpp_codegen_multiply(L_36, L_37));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_0;
		float L_39 = L_38.___g_1;
		float L_40 = V_2;
		(&V_3)->___m_green_1 = ((float)il2cpp_codegen_multiply(L_39, L_40));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_0;
		float L_42 = L_41.___b_2;
		float L_43 = V_2;
		(&V_3)->___m_blue_2 = ((float)il2cpp_codegen_multiply(L_42, L_43));
		float L_44 = V_1;
		(&V_3)->___m_intensity_3 = L_44;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_45 = V_3;
		V_7 = L_45;
		goto IL_0125;
	}

IL_0125:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_46 = V_7;
		return L_46;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_m29E930EAED6270F37E98DCFDE78417DACEBA26A3 (const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0 = (0.0f);
		V_1 = L_0;
		(&V_0)->___m_intensity_3 = L_0;
		float L_1 = V_1;
		float L_2 = L_1;
		V_1 = L_2;
		(&V_0)->___m_blue_2 = L_2;
		float L_3 = V_1;
		float L_4 = L_3;
		V_1 = L_4;
		(&V_0)->___m_green_1 = L_4;
		float L_5 = V_1;
		(&V_0)->___m_red_0 = L_5;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6 = V_0;
		V_2 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_2;
		return L_7;
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		__this->___range_7 = (0.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_14 = ___cookie1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&L_14->___sizes_2);
		float L_16 = L_15->___x_0;
		__this->___coneAngle_8 = L_16;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_17 = ___cookie1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&L_17->___sizes_2);
		float L_19 = L_18->___y_1;
		__this->___innerConeAngle_9 = L_19;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_20 = ___light0;
		float L_21 = L_20->___penumbraWidthRadian_7;
		__this->___shape0_10 = L_21;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_22 = ___light0;
		uint8_t L_23 = L_22->___mode_2;
		__this->___mode_13 = L_23;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_24 = ___light0;
		bool L_25 = L_24->___shadow_1;
		G_B1_0 = __this;
		if (L_25)
		{
			G_B2_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		__this->___falloff_15 = 4;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_16 = ___light0;
		float L_17 = L_16->___sphereRadius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 1;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_18 = ___light0;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_20 = ___light0;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_22 = ___light0;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_16 = ___light0;
		float L_17 = L_16->___coneAngle_9;
		__this->___coneAngle_8 = L_17;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_18 = ___light0;
		float L_19 = L_18->___innerConeAngle_10;
		__this->___innerConeAngle_9 = L_19;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_20 = ___light0;
		float L_21 = L_20->___sphereRadius_8;
		__this->___shape0_10 = L_21;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_22 = ___light0;
		uint8_t L_23 = L_22->___angularFalloff_12;
		__this->___shape1_11 = ((float)L_23);
		__this->___type_12 = 2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_24 = ___light0;
		uint8_t L_25 = L_24->___mode_2;
		__this->___mode_13 = L_25;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_26 = ___light0;
		bool L_27 = L_26->___shadow_1;
		G_B1_0 = __this;
		if (L_27)
		{
			G_B2_0 = __this;
			goto IL_00b1;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b2:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_28 = ___light0;
		uint8_t L_29 = L_28->___falloff_11;
		__this->___falloff_15 = L_29;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_16 = ___light0;
		float L_17 = L_16->___width_8;
		__this->___shape0_10 = L_17;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_18 = ___light0;
		float L_19 = L_18->___height_9;
		__this->___shape1_11 = L_19;
		__this->___type_12 = 3;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_20 = ___light0;
		uint8_t L_21 = L_20->___mode_2;
		__this->___mode_13 = L_21;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_22 = ___light0;
		bool L_23 = L_22->___shadow_1;
		G_B1_0 = __this;
		if (L_23)
		{
			G_B2_0 = __this;
			goto IL_00ae;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00af:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_24 = ___light0;
		uint8_t L_25 = L_24->___falloff_10;
		__this->___falloff_15 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038_AdjustorThunk (RuntimeObject* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_16 = ___light0;
		float L_17 = L_16->___radius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 4;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_18 = ___light0;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_20 = ___light0;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_22 = ___light0;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632_AdjustorThunk (RuntimeObject* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___lightInstanceID0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___lightInstanceID0;
		__this->___instanceID_0 = L_0;
		__this->___mode_13 = 3;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43_AdjustorThunk (RuntimeObject* __this, int32_t ___lightInstanceID0, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43(_thisAdjusted, ___lightInstanceID0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92 (int32_t ___baketype0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___baketype0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___baketype0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___l0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___l0;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m546DD25E1DEFA2B7EECF8D0C5AB7B46F70426138 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___l0;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___l0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m92860D984CC8E5F6359CC8959C8BFD927379D45D(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cct0, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___lightColor1, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___lightColor1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___cct0;
		float L_4 = L_3.___r_0;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___lightColor1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___cct0;
		float L_9 = L_8.___g_1;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___lightColor1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___cct0;
		float L_14 = L_13.___b_2;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m168917A3FFE696B6B4F2BE2ACFB5C74AEA57AAE0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___dir1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___dir1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___dir1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___dir1;
		L_34->___penumbraWidthRadian_7 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m43F2AE128B08ACD1BE42D1A48FCE9DA5BD1BFF23 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___point1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___point1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___point1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___point1;
		L_37->___sphereRadius_8 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___point1;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m923E63DD2078497852AEC688E199BE6E129B69C4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___spot1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___spot1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___spot1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___spot1;
		L_37->___sphereRadius_8 = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___l0;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle_9 = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___l0;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m546DD25E1DEFA2B7EECF8D0C5AB7B46F70426138(L_42, NULL);
		L_41->___innerConeAngle_10 = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___spot1;
		L_44->___falloff_11 = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___spot1;
		L_45->___angularFalloff_12 = 0;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m6CD2C57089AE0B41970C60A597EAFBF3BE27B3A6 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___rect1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___rect1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___rect1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___rect1;
		L_37->___width_8 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___rect1;
		L_38->___height_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___rect1;
		L_39->___falloff_10 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m4DB65098D5061C188791D825490B46EEE305DE6D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___disc1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___disc1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___disc1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___disc1;
		L_37->___radius_8 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___disc1;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___cookie1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID_0 = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___cookie1;
		L_7->___scale_1 = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___cookie1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___l0;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		G_B5_0 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___l0;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___l0;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes_2 = G_B7_0;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m71AF5AA8199040B3E901661236D09205092D0D8D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___del0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___del0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___del0;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)G_B3_0);
		return;
	}
}
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m847670CDD1E8DA380930C322A5713587AF3D2396 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::ResetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_mEFE29946965EAC2C6A5CDB5A4AF9A1B0069FAE1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLights(UnityEngine.Light[],System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m212529C7EE6B36F03073D4F372B4609E5867B12C (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___lights0, intptr_t ___outLightsPtr1, int32_t ___outLightsCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___outLightsPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		int32_t L_2 = ___outLightsCount2;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___lights0;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m759E8C6D97EBF814850F73B24EC5476007DA8BFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___requests0, ___lightsOutput1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	NullCheck(___requests0);
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___requests0, ___lightsOutput1, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___requests0, ___lightsOutput1, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, ___requests0, ___lightsOutput1);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___requests0, ___lightsOutput1);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___requests0, ___lightsOutput1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m44A253B91A8449C4AA3E269C17162C626673F6C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___requests0;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m168917A3FFE696B6B4F2BE2ACFB5C74AEA57AAE0(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m43F2AE128B08ACD1BE42D1A48FCE9DA5BD1BFF23(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m923E63DD2078497852AEC688E199BE6E129B69C4(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m6CD2C57089AE0B41970C60A597EAFBF3BE27B3A6(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_m4DB65098D5061C188791D825490B46EEE305DE6D(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___lightsOutput1))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___requests0;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
	{
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF_AdjustorThunk (RuntimeObject* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___other0, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	bool _returnValue;
	_returnValue = CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF(_thisAdjusted, ___other0, method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC_AdjustorThunk (RuntimeObject* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___other0, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC(_thisAdjusted, ___other0, method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7_AdjustorThunk (RuntimeObject* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___other0, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7(_thisAdjusted, ___other0, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::TickRealtimeProbes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_TickRealtimeProbes_m0CD6423541B0FCB022D55498C348A013E06E5F39 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m2CDBD30196F65463B8E86AC97DA2370A4D68762D (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0 (const RuntimeMethod* method) 
{
	typedef bool (*BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0_ftn) ();
	static BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* BuiltinRuntimeReflectionSystem_Internal_BuiltinRuntimeReflectionSystem_New_m37D7A68062DA942ACF90E1C41CF749BD948CA91B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* V_0 = NULL;
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_0 = (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE*)il2cpp_codegen_object_new(BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_set_Internal_ScriptableRuntimeReflectionSystemSettings_system_m668B05191322016F7A1AA39FF3A3B9B0BF8EC621 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_0, NULL);
		RuntimeObject* L_2 = ___value0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_4 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_4, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_7 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_7, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
	}

IL_0037:
	{
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_9 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		RuntimeObject* L_10 = ___value0;
		NullCheck(L_9);
		ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline(L_9, L_10, NULL);
		return;
	}
}
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ScriptableRuntimeReflectionSystemSettings_get_Internal_ScriptableRuntimeReflectionSystemSettings_instance_mAE76D73D6D2AED40835CED5D925ED7F8699A8560 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762 (const RuntimeMethod* method) 
{
	typedef void (*ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762_ftn) ();
	static ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings__cctor_m96B1BF54CF4E66158F55682A042AF76A9F40130B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924*)il2cpp_codegen_object_new(ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D(L_0, NULL);
		((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
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
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes_mDC08C9639CAF2D13623E82B3A9C51689D2FED2B3 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, bool* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		bool* L_0 = ___result0;
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem::TickRealtimeProbes() */, IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m40311CC93B197CDA001DB530FA6A7145BDF704A5 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___format0;
		bool L_1 = ___isSRGB1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___format0, ___isSRGB1);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m9C447321AA5B70BA35F3A23DFC772D449D92A315 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___format0;
		bool L_1 = ___isSRGB1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___format0, ___isSRGB1);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m86331B6F407E9C3648A3D628E2BC4059AC760DD2 (int32_t ___format0, int32_t ___readWrite1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		int32_t L_1 = ___readWrite1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___readWrite1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		bool L_3 = V_0;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		int32_t L_4 = ___format0;
		bool L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = GraphicsFormatUtility_GetGraphicsFormat_m9C447321AA5B70BA35F3A23DFC772D449D92A315(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8 (int32_t ___minimumDepthBits0, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___minimumDepthBits0);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_mF758A2225A636091FBA343397A283528ED220F54 (int32_t ___minimumDepthBits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___minimumDepthBits0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthBits_m7C5BCA03BDC9D6BB350456212F09680235D425BD (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthBits_m7C5BCA03BDC9D6BB350456212F09680235D425BD_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthBits_m7C5BCA03BDC9D6BB350456212F09680235D425BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthBits_m7C5BCA03BDC9D6BB350456212F09680235D425BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA (int32_t ___minimumDepthBits0, int32_t ___minimumStencilBits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* G_B24_0 = NULL;
	{
		int32_t L_0 = ___minimumDepthBits0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___minimumStencilBits1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_0016:
	{
		int32_t L_3 = ___minimumDepthBits0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___minimumStencilBits1;
		G_B8_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B8_0 = 1;
	}

IL_0021:
	{
		V_4 = (bool)G_B8_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_7 = ___minimumDepthBits0;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_10 = ___minimumStencilBits1;
		V_6 = (bool)((((int32_t)L_10) > ((int32_t)8))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___minimumDepthBits0;
		V_7 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		___minimumDepthBits0 = ((int32_t)16);
		goto IL_008f;
	}

IL_0073:
	{
		int32_t L_15 = ___minimumDepthBits0;
		V_8 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		___minimumDepthBits0 = ((int32_t)24);
		goto IL_008f;
	}

IL_0089:
	{
		___minimumDepthBits0 = ((int32_t)32);
	}

IL_008f:
	{
		int32_t L_17 = ___minimumStencilBits1;
		V_9 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		___minimumStencilBits1 = 8;
	}

IL_009c:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_19 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		NullCheck(L_19);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_20 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		NullCheck(L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0), NULL);
		int32_t L_21 = ___minimumStencilBits1;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_22 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		G_B24_0 = L_22;
		goto IL_00c2;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_23 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		G_B24_0 = L_23;
	}

IL_00c2:
	{
		V_0 = G_B24_0;
		int32_t L_24 = ___minimumDepthBits0;
		V_1 = ((int32_t)(L_24/8));
		int32_t L_25 = V_1;
		V_10 = L_25;
		goto IL_00ed;
	}

IL_00cc:
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_26 = V_0;
		int32_t L_27 = V_10;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_11 = L_29;
		int32_t L_30 = V_11;
		bool L_31;
		L_31 = SystemInfo_IsFormatSupported_m0F5051D3999D87A45F6CD5C80E6041F0B0C4C1E7(L_30, 4, NULL);
		V_12 = L_31;
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_11;
		V_3 = L_33;
		goto IL_00fe;
	}

IL_00e6:
	{
		int32_t L_34 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ed:
	{
		int32_t L_35 = V_10;
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_36 = V_0;
		NullCheck(L_36);
		V_13 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_13;
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_00fe:
	{
		int32_t L_38 = V_3;
		return L_38;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1_ftn) (int32_t);
	static GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA2F3226C7363D1A91D2E7A04741F57842522EA03 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetRenderTextureFormat_mA2F3226C7363D1A91D2E7A04741F57842522EA03_ftn) (int32_t);
	static GraphicsFormatUtility_GetRenderTextureFormat_mA2F3226C7363D1A91D2E7A04741F57842522EA03_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetRenderTextureFormat_mA2F3226C7363D1A91D2E7A04741F57842522EA03_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F_ftn) (int32_t);
	static GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810 (int32_t ___format0, bool ___wholeImage1, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810_ftn) (int32_t, bool);
	static GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___format0, ___wholeImage1);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_m7ACC154740876AA86DEB68AD574B1B11E32AF3A3 (int32_t ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807_ftn) (int32_t);
	static GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429_ftn) (int32_t);
	static GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC_ftn) (int32_t);
	static GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_m397B4BA9DCEF6DF734F3F4B349A0D60B235A476E (int32_t ___format0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___format0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)28))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___format0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)29))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___format0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)64))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___format0;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)65)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B5_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Experimental.Rendering.GraphicsFormatUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsFormatUtility__cctor_m4A3699EA318A3907272B8FF97CBE4FA92910B9D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_0 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)91));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)93));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0), (void*)L_4);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_5 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)94));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* SceneManagerAPI_get_overrideAPI_mACC4192A2014665FF7D42EAAD41AA22A71AC040E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var);
		SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169* L_0 = ((SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerAPI_t9F40646DDC167DB7D66499DE8E0E4C1776D75169_il2cpp_TypeInfo_var))->___U3CoverrideAPIU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_indexStart_m04437852C448D05DB7638F9A207474187659FACB_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CindexStartU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_indexCount_m851B9A38CC1B4DBE766A064963D9FE6FC9D91674_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CindexCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_topology_m634819D6C110CD6EBFAF6590C48E24F77AC5A3CA_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CtopologyU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_bounds_mF5AFD8FC9DD1321F7EBA2B115034E238B472ACEB_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = ___value0;
		__this->___U3CboundsU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_baseVertex_mCCFBB14F4973C3EF2C00689667CEDA5A9AA20D9B_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CbaseVertexU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_firstVertex_mDC927003E251431E6DC95ACD80043DC8DC446FD8_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CfirstVertexU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubMeshDescriptor_set_vertexCount_mA5715EC8038FD91335706AE9226B94DA7D840436_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CvertexCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 SubMeshDescriptor_get_bounds_mD2F47C8E1407CAFAEE966ACE1D870CB50AF3CEE4_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___U3CboundsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_topology_mA3766E71B2249BAA047049095DC9E166BF17CEA7_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtopologyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexStartU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_baseVertex_mF0B569B62BA72FA94CB159390375BBC0D0EE6D53_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CbaseVertexU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_firstVertex_mEF80F76B602C4BF97182F76104D4D256344E8806_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CfirstVertexU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_vertexCount_m75611DFB7BE0ED9F5260BD460A815BDCE11EA211_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CvertexCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_attribute_m2F7C7084857741A39E9FF0D4BABF98F9C7018AAA_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CattributeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_attribute_m526ED099EEA12DCB2FCB1BC88445FBF921E850A2_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CattributeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_format_mF8EF98F3E047BC26D177C3A008BCDAF979E52C79_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CformatU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_format_mCA82263EBD7802621D9ECE42D0F44D4AAECD46C5_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CformatU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_dimension_mAB440DDFA08BF61D717547EC8B9C43C3DFC56FB8_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdimensionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_dimension_mEF4325AE27221C732B214354A2DEB044ACFC69EE_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CdimensionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttributeDescriptor_get_stream_mAA4D41E2B4B9024161B176700100ADB27855E4FF_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CstreamU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VertexAttributeDescriptor_set_stream_m9A3991AA0365A1DCEDF80A61990F7B48913A1C0A_inline (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CstreamU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___rendererGroup0, ___cullingContext1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___multiplier0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1 = ___multiplier0;
		float L_2 = __this->___g_1;
		float L_3 = ___multiplier0;
		float L_4 = __this->___b_2;
		float L_5 = ___multiplier0;
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_0, NULL);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_2, NULL);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_4, NULL);
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2;
		L_2 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, L_1, NULL);
		float L_3 = __this->___b_2;
		float L_4;
		L_4 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___requests0, ___lightsOutput1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m45979AF2609BAB3A34CE383DFFC5E6DC46C56EC2_gshared_inline (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, int32_t ___arg11, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Scene_tA1DC762B79745EB5140F054C884855B922318356, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, ___arg11, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mE37AFE8F618C0F22BD217DFCB96A788377376104_gshared_inline (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m28E37932B5C81CB3270E32EFF9BCE3B39CA865CF_gshared_inline (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg11, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Scene_tA1DC762B79745EB5140F054C884855B922318356, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, ___arg11, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
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
