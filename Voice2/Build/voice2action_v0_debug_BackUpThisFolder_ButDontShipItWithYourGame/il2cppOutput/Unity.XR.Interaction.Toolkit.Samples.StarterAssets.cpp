#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct Action_1_t253935EBEC6470ADBF9515523E953BB179550B28;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8;
// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>
struct Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct RegistrationList_1_t2B2426074F9547A645EEE2F3F10E3EE551BFD2EF;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.Interaction.Toolkit.IXRGroupMember[]
struct IXRGroupMemberU5BU5D_tC8120A7E6EDEDDEDB7320E0542BCF1EDC5C3FD37;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
struct ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager
struct ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
struct ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Unity.XR.CoreUtils.Bindings.IEventBinding
struct IEventBinding_tD24AFBA7F41D64F17C1FA501D200A3B6439C4CBB;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider
struct IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E;
// UnityEngine.XR.Interaction.Toolkit.IXRGroupMember
struct IXRGroupMember_tFC6EF8D3F38A7F3921414DFF1FDECBA44479D9F5;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
struct TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34
struct U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281;
IL2CPP_EXTERN_C String_t* _stringLiteral20F033C533073620565D997BEBD20F6DE92BCFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral5E713EA1C5E365054E6D084D3D66B8AC0B016740;
IL2CPP_EXTERN_C String_t* _stringLiteral919906014E1E123A80DE10940C0556E859621860;
IL2CPP_EXTERN_C String_t* _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886;
IL2CPP_EXTERN_C String_t* _stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_RaySelectEntered_mF9AB3BB3816FC10F4A2EE1250F64877894C88560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_RaySelectExited_m5754105EC3EB186B271FE714C43D4FD85989BE3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_StartTeleport_m3BB3397C03EEC8DB2720D30007433C5B73B3E31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnAfterInteractionEventsU3Ed__34_System_Collections_IEnumerator_Reset_m6D5397B807D4B940C587BFF4A4E274627A049B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1F2131D82E2A9E70B1FFB012BBCEB8A6BE4A8AF 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRGroupMemberU5BU5D_tC8120A7E6EDEDDEDB7320E0542BCF1EDC5C3FD37* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRGroupMemberU5BU5D_tC8120A7E6EDEDDEDB7320E0542BCF1EDC5C3FD37* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding> Unity.XR.CoreUtils.Bindings.BindingsGroup::m_Bindings
	List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F* ___m_Bindings_0;
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

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34
struct U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::<>4__this
	ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>
struct NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041  : public RuntimeObject
{
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tE454B2F07459EA885F6D39FCB5E70BF80B11F175* ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
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

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
struct NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 
{
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_Values
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Values_0;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PreWrapMode
	int32_t ___m_PreWrapMode_1;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PostWrapMode
	int32_t ___m_PostWrapMode_2;
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

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<meetsRequirements>k__BackingField
	bool ___U3CmeetsRequirementsU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<pokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisAlignedPokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<interactionStrength>k__BackingField
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_pinvoke
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_com
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>
struct BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0  : public BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82  : public BindableVariable_1_tB68DAB26AE7AF6E274A845BB487AEE92F9E1DAA0
{
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::m_AnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::<target>k__BackingField
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CtargetU3Ek__BackingField_8;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::<initialValue>k__BackingField
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CinitialValueU3Ek__BackingField_9;
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430  : public TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_OutputInitialized
	bool ___m_OutputInitialized_10;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_JobOutputStore
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___m_JobOutputStore_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_CurveDirty
	bool ___m_CurveDirty_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_NativeCurve
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_HasJobPending
	bool ___m_HasJobPending_14;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_LastJobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle_15;
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager
struct ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_ManipulationInteractionGroup
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* ___m_ManipulationInteractionGroup_5;
	// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_DirectInteractor
	XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* ___m_DirectInteractor_6;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_RayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___m_RayInteractor_7;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___m_TeleportInteractor_8;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Select
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Select_9;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_AnchorTranslate
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_AnchorTranslate_10;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_AnchorRotate
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_AnchorRotate_11;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportModeActivate
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeActivate_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportModeCancel
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeCancel_13;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Turn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Turn_14;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SnapTurn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_SnapTurn_15;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Move
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Move_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Teleporting
	bool ___m_Teleporting_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SmoothMotionEnabled
	bool ___m_SmoothMotionEnabled_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SmoothTurnEnabled
	bool ___m_SmoothTurnEnabled_19;
};

struct ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::s_GroupMembers
	List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___s_GroupMembers_20;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_FallbackIfEyeTrackingUnavailable
	bool ___m_FallbackIfEyeTrackingUnavailable_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_EyeTrackingDeviceFound
	bool ___m_EyeTrackingDeviceFound_5;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::beginLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___beginLocomotion_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::endLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___endLocomotion_5;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::m_System
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___m_System_6;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::<locomotionPhase>k__BackingField
	int32_t ___U3ClocomotionPhaseU3Ek__BackingField_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::startLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___startLocomotion_8;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_CurrentExclusiveProvider
	LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* ___m_CurrentExclusiveProvider_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_TimeMadeExclusive
	float ___m_TimeMadeExclusive_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_Timeout
	float ___m_Timeout_6;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_7;
};

// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5  : public TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_28;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_29;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_30;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_31;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_34;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_35;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_36;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_38;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_41;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_44;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_45;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_46;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_47;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_39;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_40;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::registered
	Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::unregistered
	Action_1_t253935EBEC6470ADBF9515523E953BB179550B28* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_7;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_StartingGroupMembers
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingGroupMembers_9;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<activeInteractor>k__BackingField
	RuntimeObject* ___U3CactiveInteractorU3Ek__BackingField_10;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_GroupMembers
	RegistrationList_1_t2B2426074F9547A645EEE2F3F10E3EE551BFD2EF* ___m_GroupMembers_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_TempGroupMembers
	List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___m_TempGroupMembers_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_IsProcessingGroupMembers
	bool ___m_IsProcessingGroupMembers_13;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_14;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_15;
};

struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___s_InteractablesSelected_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___s_InteractablesHovered_18;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeFollowTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PokeFollowTransform_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_SmoothingSpeed
	float ___m_SmoothingSpeed_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ReturnToInitialPosition
	bool ___m_ReturnToInitialPosition_6;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeDataProvider
	RuntimeObject* ___m_PokeDataProvider_7;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_TransformTweenableVariable
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* ___m_TransformTweenableVariable_8;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_BindingsGroup
	BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* ___m_BindingsGroup_9;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_InitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialPosition_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_IsFirstFrame
	bool ___m_IsFirstFrame_11;
};

// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
struct ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A  : public LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_EnableStrafe
	bool ___m_EnableStrafe_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_EnableFly
	bool ___m_EnableFly_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_UseGravity
	bool ___m_UseGravity_12;
	// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_GravityApplicationMode
	int32_t ___m_GravityApplicationMode_13;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_ForwardSource
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ForwardSource_14;
	// UnityEngine.CharacterController UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_AttemptedGetCharacterController
	bool ___m_AttemptedGetCharacterController_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_IsMovingXROrigin
	bool ___m_IsMovingXROrigin_17;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_VerticalVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VerticalVelocity_18;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_48;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_50;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_52;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_54;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_55;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_56;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_58;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_60;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_62;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_63;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_67;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_72;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_79;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_84;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_85;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_86;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_87;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_91;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_92;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_93;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_88;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
struct ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E  : public ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::m_LeftHandMoveAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_LeftHandMoveAction_19;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::m_RightHandMoveAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RightHandMoveAction_20;
};

// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::<unsortedValidTargets>k__BackingField
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___U3CunsortedValidTargetsU3Ek__BackingField_94;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_StayedColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_StayedColliders_95;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_TriggerContactMonitor
	TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2* ___m_TriggerContactMonitor_96;
};

struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_StaticFields
{
	// UnityEngine.WaitForFixedUpdate UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::s_WaitForFixedUpdate
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___s_WaitForFixedUpdate_97;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_100;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_101;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_104;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_105;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_107;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_108;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_109;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_110;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_111;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_112;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_113;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_114;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_115;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_116;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_117;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_118;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_119;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_120;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_121;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_122;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_124;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_125;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_126;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_127;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_128;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_129;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_130;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_131;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_132;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_133;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_134;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_135;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_136;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_137;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_138;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_139;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_140;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_141;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_142;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_145;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_146;
};

struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_94;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_143;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_144;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A  : public ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_HeadTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HeadTransform_21;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftControllerTransform_22;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightControllerTransform_23;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftHandMovementDirection
	int32_t ___m_LeftHandMovementDirection_24;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightHandMovementDirection
	int32_t ___m_RightHandMovementDirection_25;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_CombinedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CombinedTransform_26;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftMovementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftMovementPose_27;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightMovementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightMovementPose_28;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E_gshared (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0_gshared (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_gshared (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041* __this, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54_gshared (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_gshared (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_gshared (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float ___tweenTarget0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_gshared_inline (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___value0, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateTurnActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::RayInteractorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_RayInteractorUpdate_m51B5DB10D9DE735AAD0AD17B249EB99237781456 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableLocomotionAndTurnActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableLocomotionAndTurnActions_mABD0F9C39BD055AD8936817F53AFA77B2D8ED179 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnAfterInteractionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionBasedControllerManager_OnAfterInteractionEvents_mCF40B0815F54413521A227CA9945ACAE6EBB83FD (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::GetGroupMembers(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_GetGroupMembers_mD9F958024795254B67D0B8F39D9D25F81B4E6D19 (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___results0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::get_Count()
inline int32_t List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_inline (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::AddGroupMember(UnityEngine.XR.Interaction.Toolkit.IXRGroupMember)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, RuntimeObject* ___groupMember0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::MoveGroupMemberTo(UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_MoveGroupMemberTo_mBCAE55279CA53E830E563504F0377555C6339EC0 (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, RuntimeObject* ___groupMember0, int32_t ___newIndex1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetupInteractorEvents_mE9FCCBD1C9BEEBBE22AD9B10F017A9EE1EBDA852 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TeardownInteractorEvents_mD09E6747F7DEBAC01AC1D58D78FA53503A2B68C8 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__34__ctor_m30A426DFEB735AD674845AEB9F2B283749FC951D (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::.ctor()
inline void List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionProvider_Awake_mDB71AC0528310B8B6A57E0D5D0C6E54C0E0E22EB (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::set_forwardSource(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProviderBase_set_forwardSource_mA1CBEB304ED21A5E919AEDBC38CAD176E23C9195_inline (ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::get_system()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::get_xrOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline (LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetWorldPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mF398159A7A5B43CE3054A41BD7B7D97AA8E9DDB4 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::get_leftHandMoveAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1A3CE1F7AFE741716F8CABEE541C67DE5E16C64B_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::get_rightHandMoveAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m798EAE65B649189963A7A35D4084FE9B28618490_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContinuousMoveProviderBase_ComputeDesiredMove_mDB77C9D41306941782F36D150B7CD774E1E3A702 (ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedContinuousMoveProvider__ctor_m1310A2218E70F36811987629965EF7BC0F356583 (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.InputDevices::add_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_add_deviceConnected_m78FF855F70C572E7B9BFD5A591E2C5B023AB8728 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::remove_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_remove_deviceConnected_m84A034DA67396DB4D3F2F7A97DC4C5EBBF764058 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0 (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0_gshared)(__this, ___object0, ___method1, method);
}
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<T>)
inline RuntimeObject* BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608 (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041* __this, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* ___callback0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BindableVariableBase_1_t6E41640D2419E25E9579C521963F28A608530041*, Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*, const RuntimeMethod*))BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_gshared)(__this, ___callback0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::AddBinding(Unity.XR.CoreUtils.Bindings.IEventBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, RuntimeObject* ___binding0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54 (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
inline void TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32 (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableAsyncBase_1_tBC224ABEF15BBD66D75B9D20BED7ADB1F273E430*, const RuntimeMethod*))TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
inline void TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9 (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float ___tweenTarget0, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82*, float, const RuntimeMethod*))TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_gshared)(__this, ___tweenTarget0, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___v0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_axisAlignedPokeInteractionPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(T)
inline void TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_inline (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___value0, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E, const RuntimeMethod*))TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3TweenableVariable__ctor_m22723734B74E394A833F2EEA06F910E45A91F042 (Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* __this, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716 (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_smoothMotionEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_smoothMotionEnabled_m8B330E329AE71CE007B9DE78AFA9A87D4E2C4F61 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothMotionEnabled;
		bool L_0 = __this->___m_SmoothMotionEnabled_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_smoothMotionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_smoothMotionEnabled_mAD21DF2AADD6B279F352C7D7CEBBCC372B78BF96 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_SmoothMotionEnabled = value;
		bool L_0 = ___value0;
		__this->___m_SmoothMotionEnabled_18 = L_0;
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_smoothTurnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_smoothTurnEnabled_m9AEFB376258A823C5C42D9128BF7F5F6331419A3 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothTurnEnabled;
		bool L_0 = __this->___m_SmoothTurnEnabled_19;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_smoothTurnEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_smoothTurnEnabled_m7503E78C50CEEE5F3F51D885F6363A264DA7B24F (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_SmoothTurnEnabled = value;
		bool L_0 = ___value0;
		__this->___m_SmoothTurnEnabled_19 = L_0;
		// UpdateTurnActions();
		ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetupInteractorEvents_mE9FCCBD1C9BEEBBE22AD9B10F017A9EE1EBDA852 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_RaySelectEntered_mF9AB3BB3816FC10F4A2EE1250F64877894C88560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_RaySelectExited_m5754105EC3EB186B271FE714C43D4FD85989BE3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_StartTeleport_m3BB3397C03EEC8DB2720D30007433C5B73B3E31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_3 = NULL;
	int32_t G_B5_0 = 0;
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// UpdateTurnActions();
		ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7(__this, NULL);
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		// m_RayInteractor.selectEntered.AddListener(RaySelectEntered);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_RayInteractor_7;
		NullCheck(L_3);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
		L_4 = XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline(L_3, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)ActionBasedControllerManager_RaySelectEntered_mF9AB3BB3816FC10F4A2EE1250F64877894C88560_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_4, L_5, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// m_RayInteractor.selectExited.AddListener(RaySelectExited);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_6 = __this->___m_RayInteractor_7;
		NullCheck(L_6);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_7;
		L_7 = XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline(L_6, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_8 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_8, __this, (intptr_t)((void*)ActionBasedControllerManager_RaySelectExited_m5754105EC3EB186B271FE714C43D4FD85989BE3E_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_7, L_8, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
	}

IL_005b:
	{
		// if (m_TeleportModeActivate != null && m_TeleportModeCancel != null)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_TeleportModeActivate_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = __this->___m_TeleportModeCancel_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = ((int32_t)(L_12));
		goto IL_0078;
	}

IL_0077:
	{
		G_B5_0 = 0;
	}

IL_0078:
	{
		V_1 = (bool)G_B5_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00cf;
		}
	}
	{
		// var teleportModeAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_14 = __this->___m_TeleportModeActivate_12;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751(L_14, NULL);
		V_2 = L_15;
		// var cancelTeleportModeAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_16 = __this->___m_TeleportModeCancel_13;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751(L_16, NULL);
		V_3 = L_17;
		// teleportModeAction.performed += StartTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_19 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_19, __this, (intptr_t)((void*)ActionBasedControllerManager_StartTeleport_m3BB3397C03EEC8DB2720D30007433C5B73B3E31C_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_18, L_19, NULL);
		// teleportModeAction.canceled += CancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, __this, (intptr_t)((void*)ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_20, L_21, NULL);
		// cancelTeleportModeAction.performed += CancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_23 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_23, __this, (intptr_t)((void*)ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_22, L_23, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TeardownInteractorEvents_mD09E6747F7DEBAC01AC1D58D78FA53503A2B68C8 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_RaySelectEntered_mF9AB3BB3816FC10F4A2EE1250F64877894C88560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_RaySelectExited_m5754105EC3EB186B271FE714C43D4FD85989BE3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_StartTeleport_m3BB3397C03EEC8DB2720D30007433C5B73B3E31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_3 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// m_RayInteractor.selectEntered.RemoveListener(RaySelectEntered);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_RayInteractor_7;
		NullCheck(L_3);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
		L_4 = XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline(L_3, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)ActionBasedControllerManager_RaySelectEntered_mF9AB3BB3816FC10F4A2EE1250F64877894C88560_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_4, L_5, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// m_RayInteractor.selectExited.RemoveListener(RaySelectExited);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_6 = __this->___m_RayInteractor_7;
		NullCheck(L_6);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_7;
		L_7 = XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline(L_6, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_8 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_8, __this, (intptr_t)((void*)ActionBasedControllerManager_RaySelectExited_m5754105EC3EB186B271FE714C43D4FD85989BE3E_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_7, L_8, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
	}

IL_004d:
	{
		// if (m_TeleportModeActivate != null && m_TeleportModeCancel != null)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_TeleportModeActivate_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = __this->___m_TeleportModeCancel_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = ((int32_t)(L_12));
		goto IL_006a;
	}

IL_0069:
	{
		G_B5_0 = 0;
	}

IL_006a:
	{
		V_1 = (bool)G_B5_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c1;
		}
	}
	{
		// var teleportModeAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_14 = __this->___m_TeleportModeActivate_12;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751(L_14, NULL);
		V_2 = L_15;
		// var cancelTeleportModeAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_16 = __this->___m_TeleportModeCancel_13;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751(L_16, NULL);
		V_3 = L_17;
		// teleportModeAction.performed -= StartTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_19 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_19, __this, (intptr_t)((void*)ActionBasedControllerManager_StartTeleport_m3BB3397C03EEC8DB2720D30007433C5B73B3E31C_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_18, L_19, NULL);
		// teleportModeAction.canceled -= CancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20 = V_2;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, __this, (intptr_t)((void*)ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_20, L_21, NULL);
		// cancelTeleportModeAction.performed -= CancelTeleport;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22 = V_3;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_23 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_23, __this, (intptr_t)((void*)ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_23, NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::StartTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_StartTeleport_m3BB3397C03EEC8DB2720D30007433C5B73B3E31C (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Teleporting = true;
		__this->___m_Teleporting_17 = (bool)1;
		// if (m_TeleportInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_TeleportInteractor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(true);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_TeleportInteractor_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_002a:
	{
		// RayInteractorUpdate();
		ActionBasedControllerManager_RayInteractorUpdate_m51B5DB10D9DE735AAD0AD17B249EB99237781456(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::CancelTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_CancelTeleport_mDEADB1823E22D5D3DD7A62B8B442B27C4311F7EE (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___obj0, const RuntimeMethod* method) 
{
	{
		// m_Teleporting = false;
		__this->___m_Teleporting_17 = (bool)0;
		// RayInteractorUpdate();
		ActionBasedControllerManager_RayInteractorUpdate_m51B5DB10D9DE735AAD0AD17B249EB99237781456(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::RayInteractorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_RayInteractorUpdate_m51B5DB10D9DE735AAD0AD17B249EB99237781456 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_RayInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// m_RayInteractor.gameObject.SetActive(!m_Teleporting);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_RayInteractor_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5 = __this->___m_Teleporting_17;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::RaySelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_RaySelectEntered_mF9AB3BB3816FC10F4A2EE1250F64877894C88560 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// DisableLocomotionAndTurnActions();
		ActionBasedControllerManager_DisableLocomotionAndTurnActions_mABD0F9C39BD055AD8936817F53AFA77B2D8ED179(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::RaySelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_RaySelectExited_m5754105EC3EB186B271FE714C43D4FD85989BE3E (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// UpdateTurnActions();
		ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Awake_m218F72512646A09591011C77FC350C86E8761271 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(OnAfterInteractionEvents());
		RuntimeObject* L_0;
		L_0 = ActionBasedControllerManager_OnAfterInteractionEvents_mCF40B0815F54413521A227CA9945ACAE6EBB83FD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Start_m18D931BF912208154FC2425A4C2565B74BCE5897 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA(__this, NULL);
		// UpdateTurnActions();
		ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7(__this, NULL);
		// var directInteractorIndex = -1;
		V_0 = (-1);
		// var rayInteractorIndex = -1;
		V_1 = (-1);
		// m_ManipulationInteractionGroup.GetGroupMembers(s_GroupMembers);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_0 = __this->___m_ManipulationInteractionGroup_5;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_1 = ((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_20;
		NullCheck(L_0);
		XRInteractionGroup_GetGroupMembers_mD9F958024795254B67D0B8F39D9D25F81B4E6D19(L_0, L_1, NULL);
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		V_2 = 0;
		goto IL_005e;
	}

IL_0028:
	{
		// var groupMember = s_GroupMembers[i];
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_2 = ((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_20;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D(L_2, L_3, List_1_get_Item_m3638DBC1A95785413DAA97E9C4D8B666EF05451D_RuntimeMethod_var);
		V_3 = L_4;
		// if (ReferenceEquals(groupMember, m_DirectInteractor))
		RuntimeObject* L_5 = V_3;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_6 = __this->___m_DirectInteractor_6;
		V_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B*)L_6))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// directInteractorIndex = i;
		int32_t L_8 = V_2;
		V_0 = L_8;
		goto IL_0059;
	}

IL_0048:
	{
		// else if (ReferenceEquals(groupMember, m_RayInteractor))
		RuntimeObject* L_9 = V_3;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_10 = __this->___m_RayInteractor_7;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// rayInteractorIndex = i;
		int32_t L_12 = V_2;
		V_1 = L_12;
	}

IL_0059:
	{
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_15 = ((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_20;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_inline(L_15, List_1_get_Count_m854A94510A2DE1CE03E558FF06F92F9A5B67255B_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0028;
		}
	}
	{
		// if (directInteractorIndex < 0)
		int32_t L_18 = V_0;
		V_7 = (bool)((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00c6;
		}
	}
	{
		// if (rayInteractorIndex < 0)
		int32_t L_20 = V_1;
		V_8 = (bool)((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00ae;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_DirectInteractor);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_22 = __this->___m_ManipulationInteractionGroup_5;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_23 = __this->___m_DirectInteractor_6;
		NullCheck(L_22);
		XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C(L_22, L_23, NULL);
		// m_ManipulationInteractionGroup.AddGroupMember(m_RayInteractor);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_24 = __this->___m_ManipulationInteractionGroup_5;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_25 = __this->___m_RayInteractor_7;
		NullCheck(L_24);
		XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C(L_24, L_25, NULL);
		goto IL_00c3;
	}

IL_00ae:
	{
		// m_ManipulationInteractionGroup.MoveGroupMemberTo(m_DirectInteractor, rayInteractorIndex);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_26 = __this->___m_ManipulationInteractionGroup_5;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_27 = __this->___m_DirectInteractor_6;
		int32_t L_28 = V_1;
		NullCheck(L_26);
		XRInteractionGroup_MoveGroupMemberTo_mBCAE55279CA53E830E563504F0377555C6339EC0(L_26, L_27, L_28, NULL);
	}

IL_00c3:
	{
		goto IL_0109;
	}

IL_00c6:
	{
		// if (rayInteractorIndex < 0)
		int32_t L_29 = V_1;
		V_9 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00e7;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_RayInteractor);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_31 = __this->___m_ManipulationInteractionGroup_5;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_32 = __this->___m_RayInteractor_7;
		NullCheck(L_31);
		XRInteractionGroup_AddGroupMember_m3E3F11BE7E94DD2F4C1DFE57DC1F44760EC40F8C(L_31, L_32, NULL);
		goto IL_0108;
	}

IL_00e7:
	{
		// if (rayInteractorIndex < directInteractorIndex)
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		V_10 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_0107;
		}
	}
	{
		// m_ManipulationInteractionGroup.MoveGroupMemberTo(m_DirectInteractor, rayInteractorIndex);
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_36 = __this->___m_ManipulationInteractionGroup_5;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_37 = __this->___m_DirectInteractor_6;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		XRInteractionGroup_MoveGroupMemberTo_mBCAE55279CA53E830E563504F0377555C6339EC0(L_36, L_37, L_38, NULL);
	}

IL_0107:
	{
	}

IL_0108:
	{
	}

IL_0109:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnable_m51D610223E8BB80FA2AA9945D7BE39E54DB2431B (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_TeleportInteractor != null)
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___m_TeleportInteractor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_3 = __this->___m_TeleportInteractor_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0023:
	{
		// SetupInteractorEvents();
		ActionBasedControllerManager_SetupInteractorEvents_mE9FCCBD1C9BEEBBE22AD9B10F017A9EE1EBDA852(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnDisable_m8B966E4F807DA7CF20155AD1239C1CE86658C535 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		// TeardownInteractorEvents();
		ActionBasedControllerManager_TeardownInteractorEvents_mD09E6747F7DEBAC01AC1D58D78FA53503A2B68C8(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnAfterInteractionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionBasedControllerManager_OnAfterInteractionEvents_mCF40B0815F54413521A227CA9945ACAE6EBB83FD (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* L_0 = (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6*)il2cpp_codegen_object_new(U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnAfterInteractionEventsU3Ed__34__ctor_m30A426DFEB735AD674845AEB9F2B283749FC951D(L_0, 0, NULL);
		U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateLocomotionActions_m90E85E149A202B3BEE453D8CCE7B9DC95F9442CA (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_SmoothMotionEnabled)
		bool L_0 = __this->___m_SmoothMotionEnabled_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// EnableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_Move_16;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE(L_2, NULL);
		// DisableAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___m_TeleportModeActivate_12;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_3, NULL);
		// DisableAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_TeleportModeCancel_13;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_4, NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___m_SnapTurn_15;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_5, NULL);
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6 = __this->___m_Turn_14;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_6, NULL);
		goto IL_0078;
	}

IL_004b:
	{
		// DisableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_7 = __this->___m_Move_16;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_7, NULL);
		// EnableAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_8 = __this->___m_TeleportModeActivate_12;
		ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE(L_8, NULL);
		// EnableAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_TeleportModeCancel_13;
		ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE(L_9, NULL);
		// UpdateTurnActions();
		ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7(__this, NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateTurnActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateTurnActions_m312043FF58D3979F121D7D62E1CE44B2D51F5CA7 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_SmoothMotionEnabled)
		bool L_0 = __this->___m_SmoothMotionEnabled_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_Turn_14;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_2, NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___m_SnapTurn_15;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_3, NULL);
		// return;
		goto IL_0066;
	}

IL_0026:
	{
		// if (m_SmoothTurnEnabled)
		bool L_4 = __this->___m_SmoothTurnEnabled_19;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// EnableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6 = __this->___m_Turn_14;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE(L_6, NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_7 = __this->___m_SnapTurn_15;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_7, NULL);
		goto IL_0066;
	}

IL_004c:
	{
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_8 = __this->___m_Turn_14;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_8, NULL);
		// EnableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9 = __this->___m_SnapTurn_15;
		ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE(L_9, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableLocomotionAndTurnActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableLocomotionAndTurnActions_mABD0F9C39BD055AD8936817F53AFA77B2D8ED179 (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TeleportModeActivate_12;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_0, NULL);
		// DisableAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_TeleportModeCancel_13;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_1, NULL);
		// DisableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_Move_16;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_2, NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___m_SnapTurn_15;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_3, NULL);
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_Turn_14;
		ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1(L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m5240EF994B2EC5AF536A9011639B3B964BEBEFFE (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751(L_0, NULL);
		V_0 = L_1;
		// if (action != null && !action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = V_0;
		NullCheck(L_6);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_6, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m3386AC99F98FDD70B7354CEF562E49272749CCD1 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751(L_0, NULL);
		V_0 = L_1;
		// if (action != null && action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// action.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = V_0;
		NullCheck(L_6);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_6, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionBasedControllerManager_GetInputAction_mF25A30A4FBBFD14E885F679280E3A23369CCD751 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B3_0 = NULL;
	{
		// return actionReference != null ? actionReference.action : null;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)(NULL));
		goto IL_0013;
	}

IL_000d:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__ctor_m3CC27D6ED7208EDE2640264C9C20DBDCF01B130C (ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__cctor_m4899C2D1525F71D08CDCA9F75696363ACAE72507 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<IXRGroupMember> s_GroupMembers = new List<IXRGroupMember>();
		List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* L_0 = (List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F*)il2cpp_codegen_object_new(List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA(L_0, List_1__ctor_mACBF1E6BD883475F3939DB16B207A64E7D937AAA_RuntimeMethod_var);
		((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717_il2cpp_TypeInfo_var))->___s_GroupMembers_20), (void*)L_0);
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
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__34__ctor_m30A426DFEB735AD674845AEB9F2B283749FC951D (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__34_System_IDisposable_Dispose_m7C33381891D16AF5A5C8AA2981016C7D0F9EA8FC (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnAfterInteractionEventsU3Ed__34_MoveNext_mA00815388D59C04DEEB3C8C3D06CBE09E883B8DD (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (m_TeleportInteractor == null)
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4 = L_3->___m_TeleportInteractor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0037:
	{
		goto IL_0092;
	}

IL_0039:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!m_Teleporting && m_TeleportInteractor.gameObject.activeSelf)
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		bool L_8 = L_7->___m_Teleporting_17;
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_10 = L_9->___m_TeleportInteractor_8;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		G_B14_0 = ((int32_t)(L_12));
		goto IL_0076;
	}

IL_0075:
	{
		G_B14_0 = 0;
	}

IL_0076:
	{
		V_2 = (bool)G_B14_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		ActionBasedControllerManager_t6BE24741ABCE5E9988A1D0B23790BB911E418717* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_15 = L_14->___m_TeleportInteractor_8;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0091:
	{
	}

IL_0092:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0039;
	}
}
// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnAfterInteractionEventsU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCB13AFF58E1CBE032043C3397D309A5084500172 (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__34_System_Collections_IEnumerator_Reset_m6D5397B807D4B940C587BFF4A4E274627A049B38 (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnAfterInteractionEventsU3Ed__34_System_Collections_IEnumerator_Reset_m6D5397B807D4B940C587BFF4A4E274627A049B38_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnAfterInteractionEventsU3Ed__34_System_Collections_IEnumerator_get_Current_m2618FBB3483E6C49D73A48431EF284914C809ADD (U3COnAfterInteractionEventsU3Ed__34_t8F31211130A9492BC7E98D18AB5A9D5F261014C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_headTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_headTransform_m303EF17C689C6B515494F07F2259A0BA6B8D0605 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_HeadTransform_21;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_headTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_headTransform_mCB442704F390FE95E70DE479145A5F2E2E138885 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_HeadTransform_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadTransform_21), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_leftControllerTransform_mAA1DA9B68DEEA326FC1560FDADDF454DEC69C8A8 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftControllerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftControllerTransform_22;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftControllerTransform_mF1E47F46BFE01F5355FC71BD67DD1A9CFD2C3DB1 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftControllerTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_LeftControllerTransform_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftControllerTransform_22), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DynamicMoveProvider_get_rightControllerTransform_m6FAEE855A31155E21184B32D086F15CE9DA7C92E (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightControllerTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightControllerTransform_23;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightControllerTransform_mD138BE95DF4A34447A88F1817806C4BAE2239CFA (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightControllerTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_RightControllerTransform_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightControllerTransform_23), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_leftHandMovementDirection_m5D0D0D4A984DC0B0CAED6DE32722BE640296ABBF (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftHandMovementDirection;
		int32_t L_0 = __this->___m_LeftHandMovementDirection_24;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftHandMovementDirection_mB73B1139104B7F11E0360C8E900789C0E05881F2 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->___m_LeftHandMovementDirection_24 = L_0;
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_rightHandMovementDirection_m88088CD035CDA2ED6597F19DC5C93D8730089C7C (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightHandMovementDirection;
		int32_t L_0 = __this->___m_RightHandMovementDirection_25;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightHandMovementDirection_m985C438DA67D7479D5D0AA020A8EB411856E51E5 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->___m_RightHandMovementDirection_25 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_Awake_m3BAB88EE73C713431D822EB7323817318C4C0711 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		LocomotionProvider_Awake_mDB71AC0528310B8B6A57E0D5D0C6E54C0E0E22EB(__this, NULL);
		// m_CombinedTransform = new GameObject("[Dynamic Move Provider] Combined Forward Source").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___m_CombinedTransform_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CombinedTransform_26), (void*)L_1);
		// m_CombinedTransform.SetParent(transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_CombinedTransform_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_3, (bool)0, NULL);
		// m_CombinedTransform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_CombinedTransform_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// m_CombinedTransform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_CombinedTransform_26;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
		// forwardSource = m_CombinedTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_CombinedTransform_26;
		ContinuousMoveProviderBase_set_forwardSource_mA1CBEB304ED21A5E919AEDBC38CAD176E23C9195_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DynamicMoveProvider_ComputeDesiredMove_mADD1C5EB231A3EDA633059109A91BC4361274733 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_9 = NULL;
	bool V_10 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B32_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B31_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B35_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B34_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	{
		// if (input == Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___input0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_6 = L_2;
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_7 = L_4;
		goto IL_0244;
	}

IL_001e:
	{
		// if (m_HeadTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_HeadTransform_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_6;
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// var xrOrigin = system.xrOrigin;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_8;
		L_8 = LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline(__this, NULL);
		NullCheck(L_8);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_9;
		L_9 = LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline(L_8, NULL);
		V_9 = L_9;
		// if (xrOrigin != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_10 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_11;
		bool L_12 = V_10;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// var xrCamera = xrOrigin.Camera;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_13 = V_9;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_13, NULL);
		V_11 = L_14;
		// if (xrCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_16;
		bool L_17 = V_12;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		// m_HeadTransform = xrCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_11;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		__this->___m_HeadTransform_21 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadTransform_21), (void*)L_19);
	}

IL_0071:
	{
	}

IL_0072:
	{
	}

IL_0073:
	{
		// switch (m_LeftHandMovementDirection)
		int32_t L_20 = __this->___m_LeftHandMovementDirection_24;
		V_14 = L_20;
		int32_t L_21 = V_14;
		V_13 = L_21;
		int32_t L_22 = V_13;
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0085;
	}

IL_0085:
	{
		int32_t L_23 = V_13;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_00d6;
	}

IL_008c:
	{
		// if (m_HeadTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___m_HeadTransform_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_15 = L_25;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00af;
		}
	}
	{
		// m_LeftMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___m_HeadTransform_21;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_28;
		L_28 = TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D(L_27, NULL);
		__this->___m_LeftMovementPose_27 = L_28;
	}

IL_00af:
	{
		// break;
		goto IL_00f9;
	}

IL_00b1:
	{
		// if (m_LeftControllerTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___m_LeftControllerTransform_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_16 = L_30;
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		// m_LeftMovementPose = m_LeftControllerTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_LeftControllerTransform_22;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33;
		L_33 = TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D(L_32, NULL);
		__this->___m_LeftMovementPose_27 = L_33;
	}

IL_00d4:
	{
		// break;
		goto IL_00f9;
	}

IL_00d6:
	{
		// Assert.IsTrue(false, $"Unhandled {nameof(MovementDirection)}={m_LeftHandMovementDirection}");
		int32_t L_34 = __this->___m_LeftHandMovementDirection_24;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6, _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA, L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mF398159A7A5B43CE3054A41BD7B7D97AA8E9DDB4((bool)0, L_37, NULL);
		// break;
		goto IL_00f9;
	}

IL_00f9:
	{
		// switch (m_RightHandMovementDirection)
		int32_t L_38 = __this->___m_RightHandMovementDirection_25;
		V_18 = L_38;
		int32_t L_39 = V_18;
		V_17 = L_39;
		int32_t L_40 = V_17;
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		goto IL_010b;
	}

IL_010b:
	{
		int32_t L_41 = V_17;
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_0137;
		}
	}
	{
		goto IL_015c;
	}

IL_0112:
	{
		// if (m_HeadTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___m_HeadTransform_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_19 = L_43;
		bool L_44 = V_19;
		if (!L_44)
		{
			goto IL_0135;
		}
	}
	{
		// m_RightMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___m_HeadTransform_21;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46;
		L_46 = TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D(L_45, NULL);
		__this->___m_RightMovementPose_28 = L_46;
	}

IL_0135:
	{
		// break;
		goto IL_017f;
	}

IL_0137:
	{
		// if (m_RightControllerTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___m_RightControllerTransform_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_20 = L_48;
		bool L_49 = V_20;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		// m_RightMovementPose = m_RightControllerTransform.GetWorldPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___m_RightControllerTransform_23;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51;
		L_51 = TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D(L_50, NULL);
		__this->___m_RightMovementPose_28 = L_51;
	}

IL_015a:
	{
		// break;
		goto IL_017f;
	}

IL_015c:
	{
		// Assert.IsTrue(false, $"Unhandled {nameof(MovementDirection)}={m_RightHandMovementDirection}");
		int32_t L_52 = __this->___m_RightHandMovementDirection_25;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(MovementDirection_tCAD7DEA53759ECE3132FEB72767B4A528AD0F0A7_il2cpp_TypeInfo_var, &L_53);
		String_t* L_55;
		L_55 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6, _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA, L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mF398159A7A5B43CE3054A41BD7B7D97AA8E9DDB4((bool)0, L_55, NULL);
		// break;
		goto IL_017f;
	}

IL_017f:
	{
		// var leftHandValue = leftHandMoveAction.action?.ReadValue<Vector2>() ?? Vector2.zero;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_56;
		L_56 = ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1A3CE1F7AFE741716F8CABEE541C67DE5E16C64B_inline(__this, NULL);
		V_21 = L_56;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_21), NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58 = L_57;
		G_B31_0 = L_58;
		if (L_58)
		{
			G_B32_0 = L_58;
			goto IL_0199;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		G_B33_0 = L_59;
		goto IL_019e;
	}

IL_0199:
	{
		NullCheck(G_B32_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(G_B32_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		G_B33_0 = L_60;
	}

IL_019e:
	{
		V_0 = G_B33_0;
		// var rightHandValue = rightHandMoveAction.action?.ReadValue<Vector2>() ?? Vector2.zero;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_61;
		L_61 = ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m798EAE65B649189963A7A35D4084FE9B28618490_inline(__this, NULL);
		V_21 = L_61;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
		L_62 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_21), NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_63 = L_62;
		G_B34_0 = L_63;
		if (L_63)
		{
			G_B35_0 = L_63;
			goto IL_01b9;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		G_B36_0 = L_64;
		goto IL_01be;
	}

IL_01b9:
	{
		NullCheck(G_B35_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(G_B35_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		G_B36_0 = L_65;
	}

IL_01be:
	{
		V_1 = G_B36_0;
		// var totalSqrMagnitude = leftHandValue.sqrMagnitude + rightHandValue.sqrMagnitude;
		float L_66;
		L_66 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		float L_67;
		L_67 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_add(L_66, L_67));
		// var leftHandBlend = 0.5f;
		V_3 = (0.5f);
		// if (totalSqrMagnitude > Mathf.Epsilon)
		float L_68 = V_2;
		float L_69 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_22 = (bool)((((float)L_68) > ((float)L_69))? 1 : 0);
		bool L_70 = V_22;
		if (!L_70)
		{
			goto IL_01ed;
		}
	}
	{
		// leftHandBlend = leftHandValue.sqrMagnitude / totalSqrMagnitude;
		float L_71;
		L_71 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		float L_72 = V_2;
		V_3 = ((float)(L_71/L_72));
	}

IL_01ed:
	{
		// var combinedPosition = Vector3.Lerp(m_RightMovementPose.position, m_LeftMovementPose.position, leftHandBlend);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_73 = (&__this->___m_RightMovementPose_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = L_73->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_75 = (&__this->___m_LeftMovementPose_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75->___position_0;
		float L_77 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_74, L_76, L_77, NULL);
		V_4 = L_78;
		// var combinedRotation = Quaternion.Slerp(m_RightMovementPose.rotation, m_LeftMovementPose.rotation, leftHandBlend);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_79 = (&__this->___m_RightMovementPose_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_80 = L_79->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_81 = (&__this->___m_LeftMovementPose_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82 = L_81->___rotation_1;
		float L_83 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		L_84 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_80, L_82, L_83, NULL);
		V_5 = L_84;
		// m_CombinedTransform.SetPositionAndRotation(combinedPosition, combinedRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = __this->___m_CombinedTransform_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87 = V_5;
		NullCheck(L_85);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_85, L_86, L_87, NULL);
		// return base.ComputeDesiredMove(input);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = ___input0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = ContinuousMoveProviderBase_ComputeDesiredMove_mDB77C9D41306941782F36D150B7CD774E1E3A702(__this, L_88, NULL);
		V_7 = L_89;
		goto IL_0244;
	}

IL_0244:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_7;
		return L_90;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider__ctor_mABE04D06EBE852E39DDBBB9A305090A5A7B04650 (DynamicMoveProvider_t1743D232A797F4B68334ADA837902C8680933F5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pose m_LeftMovementPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->___m_LeftMovementPose_27 = L_0;
		// Pose m_RightMovementPose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->___m_RightMovementPose_28 = L_1;
		ActionBasedContinuousMoveProvider__ctor_m1310A2218E70F36811987629965EF7BC0F356583(__this, NULL);
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::get_fallbackIfEyeTrackingUnavailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInputManager_get_fallbackIfEyeTrackingUnavailable_m4FB13F913AD2277E5F65AB7D7EF0729644F2D657 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FallbackIfEyeTrackingUnavailable;
		bool L_0 = __this->___m_FallbackIfEyeTrackingUnavailable_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::set_fallbackIfEyeTrackingUnavailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_set_fallbackIfEyeTrackingUnavailable_mE6650150E8EC6483E35CF60782A877B7434DE288 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FallbackIfEyeTrackingUnavailable = value;
		bool L_0 = ___value0;
		__this->___m_FallbackIfEyeTrackingUnavailable_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_Awake_m913673B2763F78D3AC484A62A8CB66DC93CAF6B7 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E713EA1C5E365054E6D084D3D66B8AC0B016740);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919906014E1E123A80DE10940C0556E859621860);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	bool V_1 = false;
	{
		// var inputDeviceList = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.EyeTracking, inputDeviceList);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(((int32_t)16), L_1, NULL);
		// if (inputDeviceList.Count == 0)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_2, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// Debug.LogWarning($"Could not find a device that supports eye tracking on Awake. {this} has subscribed to {nameof(InputDevices.deviceConnected)} and will enable eye tracking when eye tracking device is connected.", this);
		String_t* L_5;
		L_5 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral919906014E1E123A80DE10940C0556E859621860, __this, _stringLiteral5E713EA1C5E365054E6D084D3D66B8AC0B016740, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_5, __this, NULL);
		// InputDevices.deviceConnected += OnDeviceConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_6 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_6, __this, (intptr_t)((void*)GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var), NULL);
		InputDevices_add_deviceConnected_m78FF855F70C572E7B9BFD5A591E2C5B023AB8728(L_6, NULL);
		// gameObject.SetActive(m_FallbackIfEyeTrackingUnavailable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_8 = __this->___m_FallbackIfEyeTrackingUnavailable_4;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
		goto IL_0071;
	}

IL_005c:
	{
		// Debug.Log("Eye tracking device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_5 = (bool)1;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDestroy_m3D9C35EE01B4439AE17459009DD257CC22B45A4A (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputDevices.deviceConnected -= OnDeviceConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_0 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_0, __this, (intptr_t)((void*)GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68_RuntimeMethod_var), NULL);
		InputDevices_remove_deviceConnected_m84A034DA67396DB4D3F2F7A97DC4C5EBBF764058(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceConnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceConnected_mFD98427178DBDAF1C7B406FEA28161D3186F2E68 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_EyeTrackingDeviceFound || !inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.EyeTracking))
		bool L_0 = __this->___m_EyeTrackingDeviceFound_5;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_1;
		L_1 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
		uint32_t L_2 = L_1;
		int32_t L_3 = ((int32_t)16);
		bool L_4 = il2cpp_codegen_enum_has_flag((uint32_t)L_2, (uint32_t)L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		goto IL_004d;
	}

IL_002d:
	{
		// Debug.Log("Eye tracking device found!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->___m_EyeTrackingDeviceFound_5 = (bool)1;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager__ctor_m745DE4041AB26B99172061A4E8050A0FD507BEB8 (GazeInputManager_t76600ACADAE6718BABD1166EBED065FFD8C90C83* __this, const RuntimeMethod* method) 
{
	{
		// bool m_FallbackIfEyeTrackingUnavailable = true;
		__this->___m_FallbackIfEyeTrackingUnavailable_4 = (bool)1;
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
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_pokeFollowTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRPokeFollowAffordance_get_pokeFollowTransform_m73344435C2867D159F2F7E02F49376F558087F1E (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PokeFollowTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_pokeFollowTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_pokeFollowTransform_m349E957CDD31FC13ABF0136717A3CACDD1451546 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PokeFollowTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_PokeFollowTransform_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeFollowTransform_4), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_smoothingSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_smoothingSpeed_m6DA02413915676F5754E172BAF1C07C0C517BB75 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SmoothingSpeed;
		float L_0 = __this->___m_SmoothingSpeed_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_smoothingSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_smoothingSpeed_m6F6EDC78B71DE4F9223FB1DC41EA3EB1FBEC210D (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SmoothingSpeed = value;
		float L_0 = ___value0;
		__this->___m_SmoothingSpeed_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_returnToInitialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_returnToInitialPosition_m8D6FC7BDF8A2419ACEAF06B9E46321416A22412A (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReturnToInitialPosition;
		bool L_0 = __this->___m_ReturnToInitialPosition_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_returnToInitialPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_returnToInitialPosition_m77573EFC79B33125B097570F60A87EBA1BA1BA91 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReturnToInitialPosition = value;
		bool L_0 = ___value0;
		__this->___m_ReturnToInitialPosition_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Awake_m610BBBA2BD47341BB933845C9C005C3C5211F342 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_PokeFollowTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_PokeFollowTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_PokeFollowTransform_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeFollowTransform_4), (void*)L_3);
	}

IL_001d:
	{
		// m_InitialPosition = m_PokeFollowTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_PokeFollowTransform_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		__this->___m_InitialPosition_10 = L_5;
		// m_PokeDataProvider = GetComponentInParent<IPokeStateDataProvider>();
		RuntimeObject* L_6;
		L_6 = Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E(__this, Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var);
		__this->___m_PokeDataProvider_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PokeDataProvider_7), (void*)L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Start_m4499F1A6DA2148644B4AE565B55C82612943C8F9 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F033C533073620565D997BEBD20F6DE92BCFF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_PokeFollowTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// m_BindingsGroup.AddBinding(m_TransformTweenableVariable.Subscribe(OnTransformTweenableVariableUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_3 = __this->___m_BindingsGroup_9;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_4 = __this->___m_TransformTweenableVariable_8;
		Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B* L_5 = (Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B*)il2cpp_codegen_object_new(Action_1_t81CC87F0365077EC678FAF69B68180DC9750249B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mB233B0C3B645B249C912144F3F6EA0B343C5E5F0(L_5, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608(L_4, L_5, BindableVariableBase_1_Subscribe_mC4E18EDA53B1AF95B57D4D6976353EC198EA6608_RuntimeMethod_var);
		NullCheck(L_3);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_3, L_6, NULL);
		// m_BindingsGroup.AddBinding(m_PokeDataProvider.pokeStateData.SubscribeAndUpdate(OnPokeStateDataUpdated));
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_7 = __this->___m_BindingsGroup_9;
		RuntimeObject* L_8 = __this->___m_PokeDataProvider_7;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider::get_pokeStateData() */, IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var, L_8);
		Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* L_10 = (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*)il2cpp_codegen_object_new(Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54(L_10, __this, (intptr_t)((void*)XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* >::Invoke(1 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::SubscribeAndUpdate(System.Action`1<T>) */, IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var, L_9, L_10);
		NullCheck(L_7);
		BindingsGroup_AddBinding_m18697E73861A1C67DE0674F162B43CCE9E67C89B(L_7, L_11, NULL);
		goto IL_007c;
	}

IL_0060:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// Debug.LogWarning($"Poke Follow Affordance: missing Transform on {this}. Disabling component.", this);
		String_t* L_12;
		L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral20F033C533073620565D997BEBD20F6DE92BCFF1, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_12, __this, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnDestroy_mE345311D68D5D9E9877A7384691B230B1B0073FB (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B2_0 = NULL;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B1_0 = NULL;
	{
		// m_BindingsGroup.Clear();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_0 = __this->___m_BindingsGroup_9;
		NullCheck(L_0);
		BindingsGroup_Clear_m092668459F10E46245228224D1334DAB089B72E3(L_0, NULL);
		// m_TransformTweenableVariable?.Dispose();
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_1 = __this->___m_TransformTweenableVariable_8;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32(G_B2_0, TweenableVariableAsyncBase_1_Dispose_m7D9825BEBF868FFDC835F08406D9E9AD17F53E32_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_LateUpdate_m4C59B8156DE2AF9D63A61A9E523A059A41DD9099 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B4_0 = NULL;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* G_B5_1 = NULL;
	{
		// if (m_IsFirstFrame)
		bool L_0 = __this->___m_IsFirstFrame_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// m_TransformTweenableVariable.HandleTween(1f);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_2 = __this->___m_TransformTweenableVariable_8;
		NullCheck(L_2);
		TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9(L_2, (1.0f), TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
		// m_IsFirstFrame = false;
		__this->___m_IsFirstFrame_11 = (bool)0;
		// return;
		goto IL_0052;
	}

IL_0026:
	{
		// m_TransformTweenableVariable.HandleTween(m_SmoothingSpeed > 0f ? Time.deltaTime * m_SmoothingSpeed : 1f);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_3 = __this->___m_TransformTweenableVariable_8;
		float L_4 = __this->___m_SmoothingSpeed_5;
		G_B3_0 = L_3;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B4_0 = L_3;
			goto IL_0040;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_0040:
	{
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_6 = __this->___m_SmoothingSpeed_5;
		G_B5_0 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9(G_B5_1, G_B5_0, TweenableVariableBase_1_HandleTween_m61752C0D7316DD05AB1C8E10319F47902D4CDCD9_RuntimeMethod_var);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnTransformTweenableVariableUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m45F75BBA331A940327AD949A7C0939F24F6B57B2 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, const RuntimeMethod* method) 
{
	{
		// m_PokeFollowTransform.localPosition = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_PokeFollowTransform_4;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnPokeStateDataUpdated(UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnPokeStateDataUpdated_m47E524438FBC3D238855A42C176A43355387137F (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (data.target == transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline((&___data0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_TransformTweenableVariable.target = transform.InverseTransformPoint(data.axisAlignedPokeInteractionPoint);
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_4 = __this->___m_TransformTweenableVariable_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline((&___data0), NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_5, L_6, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8;
		L_8 = float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292(L_7, NULL);
		NullCheck(L_4);
		TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_inline(L_4, L_8, TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
		goto IL_005d;
	}

IL_003c:
	{
		// else if (m_ReturnToInitialPosition)
		bool L_9 = __this->___m_ReturnToInitialPosition_6;
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// m_TransformTweenableVariable.target = m_InitialPosition;
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_11 = __this->___m_TransformTweenableVariable_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___m_InitialPosition_10;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292(L_12, NULL);
		NullCheck(L_11);
		TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_inline(L_11, L_13, TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_RuntimeMethod_var);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance__ctor_mCBB6E96BA2E8B60AE508F619BFDBC0BAAD5CEBE5 (XRPokeFollowAffordance_t008BF5185DB23D6AA9F9E39C265BE9B8AEF64DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_SmoothingSpeed = 8f;
		__this->___m_SmoothingSpeed_5 = (8.0f);
		// bool m_ReturnToInitialPosition = true;
		__this->___m_ReturnToInitialPosition_6 = (bool)1;
		// readonly Vector3TweenableVariable m_TransformTweenableVariable = new Vector3TweenableVariable();
		Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5* L_0 = (Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5*)il2cpp_codegen_object_new(Vector3TweenableVariable_t0DF651B487F89825D0D459293C4A862C62C0EBD5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3TweenableVariable__ctor_m22723734B74E394A833F2EEA06F910E45A91F042(L_0, NULL);
		__this->___m_TransformTweenableVariable_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TransformTweenableVariable_8), (void*)L_0);
		// readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
		BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A* L_1 = (BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A*)il2cpp_codegen_object_new(BindingsGroup_tD5EC90BB10F9D310FE467A7E3A4CAE2E32D0397A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BindingsGroup__ctor_m1EFD3F405050571D3A66F9B95E8FBC296866A716(L_1, NULL);
		__this->___m_BindingsGroup_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BindingsGroup_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractor_get_selectEntered_m49681B23359BF5E9E0C3F69040D0C1567A528EC3_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractor_get_selectExited_m2B4FA666B95E8DF09EB6D92ACEDB892BFF375384_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_20;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProviderBase_set_forwardSource_mA1CBEB304ED21A5E919AEDBC38CAD176E23C9195_inline (ContinuousMoveProviderBase_t63CEB8C11A9935A166BE324AA48EBD5035ED635A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ForwardSource = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_ForwardSource_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ForwardSource_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_System;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_0 = __this->___m_System_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline (LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = __this->___m_XROrigin_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1A3CE1F7AFE741716F8CABEE541C67DE5E16C64B_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftHandMoveAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_LeftHandMoveAction_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m798EAE65B649189963A7A35D4084FE9B28618490_inline (ActionBasedContinuousMoveProvider_t9F6714C0271E33DE9DBF31AEE774B257E971A29E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightHandMoveAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_RightHandMoveAction_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Transform target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtargetU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axisAlignedPokeInteractionPoint { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m3127A21F0C2EF40FA4604D603803BA53DE604337_gshared_inline (TweenableVariableBase_1_t491314D6C5C1BEA5AFEAB55CCB93192270815F82* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___value0, const RuntimeMethod* method) 
{
	{
		// public T target { get; set; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___value0;
		__this->___U3CtargetU3Ek__BackingField_8 = L_0;
		return;
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
