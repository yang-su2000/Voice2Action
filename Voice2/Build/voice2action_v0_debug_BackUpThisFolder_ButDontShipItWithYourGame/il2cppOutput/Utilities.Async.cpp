#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// Utilities.Async.AwaiterExtensions/CoroutineWrapper`1<System.Object>
struct CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>
struct SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_tE46FE323B8B98D539519FC4F68ABCBB6BB956A6F;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>
struct SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235;
// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2;
// Utilities.Async.AwaiterExtensions/CoroutineRunner
struct CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25;
// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c
struct U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d
struct U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260;
// Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3
struct U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F;
// Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4
struct U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9;
// Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2
struct U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458;
// Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_mAF6FB79AACBB3274B5947BE93D4F8394CFCF20E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_m6E14C87EED0EDA1D3D4A96C927904E36ECA24670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AwaiterExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_m6AC7AE2B4780A0268333B52211AF0EEF04F90865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_m0105F7D111716F495F5A39B3439D2F9A55555E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_mC87A350D621FE13CFF6F54E9D6C1D7D387A3DF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_m1F479FA81439572A111A58443019241DE32B829A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAssetBundleCreateRequestU3Ed__3_System_Collections_IEnumerator_Reset_m03CEDEB56B26465B370B9F176D89D1301891B161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAssetBundleRequestU3Ed__4_System_Collections_IEnumerator_Reset_m5BBF8F86A4E7E35E415E1686592C1A9D6257D3CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResourceRequestU3Ed__2_System_Collections_IEnumerator_Reset_m86729A6B53BB556E30AF5D2193C2A0CAAF911D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_Reset_mA485B7CF200A43B698366E916AB51B5E64BE0DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mE1329C50C28C0EB9A54E86B910CF75F3418F002F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CRunSynchronouslyU3Eb__0_m35BE85FE25E0522A442C6FA8781065A103ABAB86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE2BFC3704AF19ABDE1141B3AB5BAFC93D8C758EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_m9A3B9DFAE2ED9F10E106341803A45B0792559909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CGetAwaiterReturnVoidU3Eb__0_m0A7CE933696A1010D696411B40FC54313D7B48B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CRunOnUnitySchedulerU3Eg__SendOrPostCallbackU7C0_mA1714FD6BA289D1F890269A9AE77E14BC99E3311_RuntimeMethod_var;
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
struct U3CModuleU3E_t1E4BFF761B77AFF253324D0959BC08A29A050EFA 
{
};

// Utilities.Async.AwaiterExtensions/CoroutineWrapper`1<System.Object>
struct CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3  : public RuntimeObject
{
	// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<T> Utilities.Async.AwaiterExtensions/CoroutineWrapper`1::awaiter
	SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* ___awaiter_0;
	// System.Collections.Generic.Stack`1<System.Collections.IEnumerator> Utilities.Async.AwaiterExtensions/CoroutineWrapper`1::processStack
	Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* ___processStack_1;
};

// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>
struct SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23  : public RuntimeObject
{
	// System.Exception Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___result_2;
	// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_tE46FE323B8B98D539519FC4F68ABCBB6BB956A6F  : public RuntimeObject
{
	// System.Exception Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___result_2;
	// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E  : public RuntimeObject
{
	// System.Exception Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	RuntimeObject* ___result_2;
	// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>
struct SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235  : public RuntimeObject
{
	// System.Exception Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___result_2;
	// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};
struct Il2CppArrayBounds;

// Utilities.Async.AwaiterExtensions
struct AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C  : public RuntimeObject
{
};

struct AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields
{
	// UnityEngine.MonoBehaviour Utilities.Async.AwaiterExtensions::coroutineRunner
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___coroutineRunner_0;
};

// Utilities.Async.Awaiters
struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A  : public RuntimeObject
{
};

struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields
{
	// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::<UnityMainThread>k__BackingField
	UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___U3CUnityMainThreadU3Ek__BackingField_0;
	// Utilities.Async.AwaitYieldInstructions.BackgroundThread Utilities.Async.Awaiters::<BackgroundThread>k__BackingField
	BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* ___U3CBackgroundThreadU3Ek__BackingField_1;
};

// Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
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

// Utilities.Async.Internal.SyncContextUtility
struct SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F  : public RuntimeObject
{
};

struct SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields
{
	// System.Int32 Utilities.Async.Internal.SyncContextUtility::<UnityThreadId>k__BackingField
	int32_t ___U3CUnityThreadIdU3Ek__BackingField_0;
	// System.Threading.SynchronizationContext Utilities.Async.Internal.SyncContextUtility::<UnitySynchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CUnitySynchronizationContextU3Ek__BackingField_1;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6  : public RuntimeObject
{
	// System.Func`1<System.Threading.Tasks.Task> Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0::asyncFunc
	Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___asyncFunc_0;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1  : public RuntimeObject
{
	// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/<>c__DisplayClass12_0::enumerator
	RuntimeObject* ___enumerator_0;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258  : public RuntimeObject
{
	// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/<>c__DisplayClass13_0::enumerator
	RuntimeObject* ___enumerator_0;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C  : public RuntimeObject
{
	// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::enumerator
	RuntimeObject* ___enumerator_0;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17  : public RuntimeObject
{
	// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::enumerator
	RuntimeObject* ___enumerator_0;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B  : public RuntimeObject
{
	// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::enumerator
	RuntimeObject* ___enumerator_0;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2  : public RuntimeObject
{
	// System.Action Utilities.Async.AwaiterExtensions/<>c__DisplayClass21_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
};

// Utilities.Async.AwaiterExtensions/InstructionWrappers
struct InstructionWrappers_t0C91A60011315DC58556AA380E09E0EB712DEFC6  : public RuntimeObject
{
};

// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25  : public RuntimeObject
{
	// System.Exception Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;
};

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c
struct U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3  : public RuntimeObject
{
};

struct U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields
{
	// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::<>9
	U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* ___U3CU3E9_0;
	// System.Action Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::<>9__0_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__0_0_1;
};

// Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3
struct U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::awaiter
	SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* ___awaiter_2;
	// UnityEngine.AssetBundleCreateRequest Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::instruction
	AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___instruction_3;
};

// Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4
struct U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::awaiter
	SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* ___awaiter_2;
	// UnityEngine.AssetBundleRequest Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::instruction
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___instruction_3;
};

// Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2
struct U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::awaiter
	SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* ___awaiter_2;
	// UnityEngine.ResourceRequest Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::instruction
	ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___instruction_3;
};

// Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::awaiter
	SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* ___awaiter_2;
	// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::instruction
	RuntimeObject* ___instruction_3;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t* ___m_Type_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t* ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t* ___m_Type_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621  : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868
{
};
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d
struct U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0 Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::<>4__this
	U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Utilities.Async.AwaiterExtensions/CoroutineRunner
struct CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<T> Utilities.Async.AwaiterExtensions::GetAwaiterReturnSelf<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* AwaiterExtensions_GetAwaiterReturnSelf_TisRuntimeObject_mCF5DFC7C0BE4491C4E6627FB67AEE06C8479FE3E_gshared (RuntimeObject* ___instruction0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_gshared (SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/CoroutineWrapper`1<System.Object>::.ctor(System.Collections.IEnumerator,Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266_gshared (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3* __this, RuntimeObject* ___coroutine0, SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* ___awaiter1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/CoroutineWrapper`1<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8_gshared (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::Complete(T,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_1_Complete_m4E501AD1AA3933254C96048851DA6727989C4A6D_gshared (SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* __this, RuntimeObject* ___taskResult0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;

// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF2E24BAC22197B504851AC2B8AC304714D938C69 (U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___function0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Wait_m33955515E36BF6598FCEDA841C8C75F716DE5A4E (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiterReturnVoid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37 (RuntimeObject* ___instruction0, const RuntimeMethod* method) ;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<T> Utilities.Async.AwaiterExtensions::GetAwaiterReturnSelf<UnityEngine.AsyncOperation>(T)
inline SimpleCoroutineAwaiter_1_tE46FE323B8B98D539519FC4F68ABCBB6BB956A6F* AwaiterExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_m6AC7AE2B4780A0268333B52211AF0EEF04F90865 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___instruction0, const RuntimeMethod* method)
{
	return ((  SimpleCoroutineAwaiter_1_tE46FE323B8B98D539519FC4F68ABCBB6BB956A6F* (*) (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*, const RuntimeMethod*))AwaiterExtensions_GetAwaiterReturnSelf_TisRuntimeObject_mCF5DFC7C0BE4491C4E6627FB67AEE06C8479FE3E_gshared)(___instruction0, method);
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m40D923626C40E6C82B24ABBCFA3397C5DE895D20 (U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087 (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_gshared)(__this, method);
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::ResourceRequest(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ResourceRequest_m6BD7790E983382A22A7EDFBB6CDA56C036CD7F37 (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* ___awaiter0, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___instruction1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions::RunOnUnityScheduler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mDEA9AA66DA04AD96673403796B5F0FCDE4D4D27C (U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_m1F479FA81439572A111A58443019241DE32B829A (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_gshared)(__this, method);
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::AssetBundleCreateRequest(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>,UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleCreateRequest_mBE35345561DC380FA1A03940CB89093F1680D829 (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* ___awaiter0, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___instruction1, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m0734FB3329E0311751F70480674B04ADFF9B4252 (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::AssetBundleRequest(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleRequest_mCBAD6713E7814A2E49D1253FFFE99066DF9AB582 (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* ___awaiter0, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___instruction1, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m743F884DA6B8220442494F059936483A7621B3B1 (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64 (SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_gshared)(__this, method);
}
// System.Void Utilities.Async.AwaiterExtensions/CoroutineWrapper`1<System.Object>::.ctor(System.Collections.IEnumerator,Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<T>)
inline void CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266 (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3* __this, RuntimeObject* ___coroutine0, SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* ___awaiter1, const RuntimeMethod* method)
{
	((  void (*) (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3*, RuntimeObject*, SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E*, const RuntimeMethod*))CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266_gshared)(__this, ___coroutine0, ___awaiter1, method);
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/CoroutineWrapper`1<System.Object>::Run()
inline RuntimeObject* CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8 (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3*, const RuntimeMethod*))CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8_gshared)(__this, method);
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m9BA3E2EB4032B74B1A8D868ED01EE2C9A6E664D3 (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter__ctor_m22C18C8E8BF6BBB7CEFB6017D2635F046CDDD57B (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::ReturnVoid(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnVoid_mA738A105A8FD3D349B4E6D30DF7BCF45098E149E (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* ___awaiter0, RuntimeObject* ___instruction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Utilities.Async.AwaiterExtensions/CoroutineRunner>()
inline CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* GameObject_GetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_m0105F7D111716F495F5A39B3439D2F9A55555E46 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Utilities.Async.AwaiterExtensions/CoroutineRunner>()
inline CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mB77F119CD7B4C7FB19E1F47F7F9768573295332D (U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A (const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext Utilities.Async.Internal.SyncContextUtility::get_UnitySynchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SyncContextUtility_get_UnitySynchronizationContext_m51D7AD30493CAAA13348536FB924402CFD8CC057_inline (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_set_IsCompleted_mFA659BA7421B22EC7809F690DB47F7B79D26F864_inline (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0__ctor_m907851E727DECEE2EECCC08A34B384487FED56A1 (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__2__ctor_mBB412A0CA3B189B972D3D0408D0FBDC2726FD2D3 (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__3__ctor_m4D623E3FA50E6C7BBE2DF824E1EA6A07BFE07A7A (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__4__ctor_m7329FE74465DC462E0A2DBFBC232F2D25F2B9BB8 (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_Complete_m459F11138D85C25815D11109FFA3538ADEFAA4D0 (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087 (ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9 (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___taskResult0, Exception_t* ___e1, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Exception_t*, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m4E501AD1AA3933254C96048851DA6727989C4A6D_gshared)(__this, ___taskResult0, ___e1, method);
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_mC87A350D621FE13CFF6F54E9D6C1D7D387A3DF80 (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* __this, AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___taskResult0, Exception_t* ___e1, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23*, AssetBundle_tB38418819A49060CD738CB21541649340F082943*, Exception_t*, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m4E501AD1AA3933254C96048851DA6727989C4A6D_gshared)(__this, ___taskResult0, ___e1, method);
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSynchronouslyU3Eb__0U3Ed__ctor_m71BB93F95A8CE72325F7A446C36BCEE01927FB6D (U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_m6E14C87EED0EDA1D3D4A96C927904E36ECA24670 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Func_1_Invoke_mF62B79DDADBD36C0E8F0DA4BAD59B33D7BA3C880_inline (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_mAF6FB79AACBB3274B5947BE93D4F8394CFCF20E1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93 (RuntimeObject* ___enumerator0, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.UnityMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThread__ctor_mB503158CD706DC757EA69CB7E9D52728B9817062 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundThread__ctor_m4F3CC38C6D4714EA48577E0070406B6A947C6C80 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_mC3DC30B56B02C63EB8A9BC1740CA06C2C3C64C0E_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___value0, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnityThreadId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_mB4E3C031979F4D4EB4AA3709D86D299B08150509_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A129C8FB4D87D1790031D0ECD80D4D66D4A6C69 (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
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
// System.Void Utilities.Async.AwaiterExtensions::RunSynchronously(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunSynchronously_m939E678BE3099123134864B054B498AC1B3C449C (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___asyncFunc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CRunSynchronouslyU3Eb__0_m35BE85FE25E0522A442C6FA8781065A103ABAB86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* L_0 = (U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mF2E24BAC22197B504851AC2B8AC304714D938C69(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* L_1 = V_0;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_2 = ___asyncFunc0;
		NullCheck(L_1);
		L_1->___asyncFunc_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___asyncFunc_0), (void*)L_2);
		// => Task.Run(async () => await asyncFunc()).Wait();
		U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* L_3 = V_0;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_4 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CRunSynchronouslyU3Eb__0_m35BE85FE25E0522A442C6FA8781065A103ABAB86_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA(L_4, NULL);
		NullCheck(L_5);
		Task_Wait_m33955515E36BF6598FCEDA841C8C75F716DE5A4E(L_5, NULL);
		return;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForSeconds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_mE83C807232F12535BC6B4465B0D688CA8742551C (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(Utilities.Async.AwaitYieldInstructions.UnityMainThread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_mBAE6182A3BEB934EF44E113FD12B9E9D630B6727 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(Utilities.Async.AwaitYieldInstructions.BackgroundThread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_m2611C6F7765906F0BE2D15A21734C972F328F747 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForEndOfFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_mFF09C208B3285F4E34F04658714B0A1E85048BDC (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForFixedUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_m7939EF8491A657A961D242D163C33FFA0C171C5A (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForSecondsRealtime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_mF619FFAA83E68D9B2A71816FB27AA873ED7AE540 (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_m961DECDD8CC8CDF8431E50BE24D65795321551F7 (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitWhile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_mA1E9F7104CFAE1FF47822F4B67F40E8B744C9202 (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* ___instruction0, const RuntimeMethod* method) 
{
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tE46FE323B8B98D539519FC4F68ABCBB6BB956A6F* AwaiterExtensions_GetAwaiter_m0CEE0083B0D42BDADBDBAFE72A8E6546AB7FD24A (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___instruction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_m6AC7AE2B4780A0268333B52211AF0EEF04F90865_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnSelf(instruction);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = ___instruction0;
		SimpleCoroutineAwaiter_1_tE46FE323B8B98D539519FC4F68ABCBB6BB956A6F* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_m6AC7AE2B4780A0268333B52211AF0EEF04F90865(L_0, AwaiterExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_m6AC7AE2B4780A0268333B52211AF0EEF04F90865_RuntimeMethod_var);
		return L_1;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* AwaiterExtensions_GetAwaiter_mD3F4E02A36F8A3F300BCE8AF2C75A8F669735D9A (ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___instruction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE2BFC3704AF19ABDE1141B3AB5BAFC93D8C758EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* V_0 = NULL;
	SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* V_1 = NULL;
	SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* L_0 = (U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m40D923626C40E6C82B24ABBCFA3397C5DE895D20(L_0, NULL);
		V_0 = L_0;
		// var awaiter = new SimpleCoroutineAwaiter<Object>();
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_1 = (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087(L_1, SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087_RuntimeMethod_var);
		V_1 = L_1;
		// var enumerator = InstructionWrappers.ResourceRequest(awaiter, instruction);
		U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* L_2 = V_0;
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_3 = V_1;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_4 = ___instruction0;
		RuntimeObject* L_5;
		L_5 = InstructionWrappers_ResourceRequest_m6BD7790E983382A22A7EDFBB6CDA56C036CD7F37(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___enumerator_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___enumerator_0), (void*)L_5);
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE2BFC3704AF19ABDE1141B3AB5BAFC93D8C758EB_RuntimeMethod_var), NULL);
		AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D(L_7, NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_8 = V_1;
		V_2 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_9 = V_2;
		return L_9;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* AwaiterExtensions_GetAwaiter_m3A3C4658757CA1F7B73FEFC34048858B37379EAE (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___instruction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_m1F479FA81439572A111A58443019241DE32B829A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_m9A3B9DFAE2ED9F10E106341803A45B0792559909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* V_0 = NULL;
	SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* V_1 = NULL;
	SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* L_0 = (U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_mDEA9AA66DA04AD96673403796B5F0FCDE4D4D27C(L_0, NULL);
		V_0 = L_0;
		// var awaiter = new SimpleCoroutineAwaiter<AssetBundle>();
		SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* L_1 = (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimpleCoroutineAwaiter_1__ctor_m1F479FA81439572A111A58443019241DE32B829A(L_1, SimpleCoroutineAwaiter_1__ctor_m1F479FA81439572A111A58443019241DE32B829A_RuntimeMethod_var);
		V_1 = L_1;
		// var enumerator = InstructionWrappers.AssetBundleCreateRequest(awaiter, instruction);
		U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* L_2 = V_0;
		SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* L_3 = V_1;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_4 = ___instruction0;
		RuntimeObject* L_5;
		L_5 = InstructionWrappers_AssetBundleCreateRequest_mBE35345561DC380FA1A03940CB89093F1680D829(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___enumerator_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___enumerator_0), (void*)L_5);
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_m9A3B9DFAE2ED9F10E106341803A45B0792559909_RuntimeMethod_var), NULL);
		AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D(L_7, NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* L_8 = V_1;
		V_2 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* L_9 = V_2;
		return L_9;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* AwaiterExtensions_GetAwaiter_m776DC376233A206845E0B9CE567D4B70D471302A (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___instruction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* V_0 = NULL;
	SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* V_1 = NULL;
	SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_0 = (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m0734FB3329E0311751F70480674B04ADFF9B4252(L_0, NULL);
		V_0 = L_0;
		// var awaiter = new SimpleCoroutineAwaiter<Object>();
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_1 = (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087(L_1, SimpleCoroutineAwaiter_1__ctor_mB5C4E2A2A9A546CC07B43BA6897248BE24FAE087_RuntimeMethod_var);
		V_1 = L_1;
		// var enumerator = InstructionWrappers.AssetBundleRequest(awaiter, instruction);
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_2 = V_0;
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_3 = V_1;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_4 = ___instruction0;
		RuntimeObject* L_5;
		L_5 = InstructionWrappers_AssetBundleRequest_mCBAD6713E7814A2E49D1253FFFE99066DF9AB582(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___enumerator_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___enumerator_0), (void*)L_5);
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D_RuntimeMethod_var), NULL);
		AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D(L_7, NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_8 = V_1;
		V_2 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_9 = V_2;
		return L_9;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object> Utilities.Async.AwaiterExtensions::GetAwaiter(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* AwaiterExtensions_GetAwaiter_mA319AA3839FCE5E02C2ABA1D03EE9F961AB972F4 (RuntimeObject* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* V_0 = NULL;
	SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* V_1 = NULL;
	SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_0 = (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_m743F884DA6B8220442494F059936483A7621B3B1(L_0, NULL);
		V_0 = L_0;
		// var awaiter = new SimpleCoroutineAwaiter<object>();
		SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* L_1 = (SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64(L_1, SimpleCoroutineAwaiter_1__ctor_m41A9566873AF4B4E5980CF32A4F3058CB3C65D64_RuntimeMethod_var);
		V_1 = L_1;
		// var enumerator = new CoroutineWrapper<object>(coroutine, awaiter).Run();
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_2 = V_0;
		RuntimeObject* L_3 = ___coroutine0;
		SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* L_4 = V_1;
		CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3* L_5 = (CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3*)il2cpp_codegen_object_new(CoroutineWrapper_1_tCCF6F2ED79E2F35680334716274B63658AED56B3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266(L_5, L_3, L_4, CoroutineWrapper_1__ctor_m0855A127D3235495541928D2EBECDCE7CF79F266_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8(L_5, CoroutineWrapper_1_Run_mECD85CA5804F3530254AEABF178D427D00D0BEA8_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___enumerator_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___enumerator_0), (void*)L_6);
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D_RuntimeMethod_var), NULL);
		AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D(L_8, NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* L_9 = V_1;
		V_2 = L_9;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		SimpleCoroutineAwaiter_1_t10F8CC42C85825DDBF9F227CD0E3F13E8ABB455E* L_10 = V_2;
		return L_10;
	}
}
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiterReturnVoid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiterReturnVoid_mB1A83128608C23BEC90B568BA5355CFF02E26F37 (RuntimeObject* ___instruction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CGetAwaiterReturnVoidU3Eb__0_m0A7CE933696A1010D696411B40FC54313D7B48B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* V_0 = NULL;
	SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* V_1 = NULL;
	SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_0 = (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_m9BA3E2EB4032B74B1A8D868ED01EE2C9A6E664D3(L_0, NULL);
		V_0 = L_0;
		// var awaiter = new SimpleCoroutineAwaiter();
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_1 = (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimpleCoroutineAwaiter__ctor_m22C18C8E8BF6BBB7CEFB6017D2635F046CDDD57B(L_1, NULL);
		V_1 = L_1;
		// var enumerator = InstructionWrappers.ReturnVoid(awaiter, instruction);
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_2 = V_0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_3 = V_1;
		RuntimeObject* L_4 = ___instruction0;
		RuntimeObject* L_5;
		L_5 = InstructionWrappers_ReturnVoid_mA738A105A8FD3D349B4E6D30DF7BCF45098E149E(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___enumerator_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___enumerator_0), (void*)L_5);
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CGetAwaiterReturnVoidU3Eb__0_m0A7CE933696A1010D696411B40FC54313D7B48B9_RuntimeMethod_var), NULL);
		AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D(L_7, NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_8 = V_1;
		V_2 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_9 = V_2;
		return L_9;
	}
}
// System.Void Utilities.Async.AwaiterExtensions::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93 (RuntimeObject* ___enumerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_m0105F7D111716F495F5A39B3439D2F9A55555E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// if (coroutineRunner == null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// GameObject go = GameObject.Find(nameof(CoroutineRunner));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C, NULL);
		V_2 = L_5;
		// if (go == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// go = new GameObject(nameof(CoroutineRunner));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_9, _stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C, NULL);
		V_2 = L_9;
	}

IL_003e:
	{
		// Object.DontDestroyOnLoad(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_10, NULL);
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_11, ((int32_t)61), NULL);
		// coroutineRunner = go.GetComponent<CoroutineRunner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* L_13;
		L_13 = GameObject_GetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_m0105F7D111716F495F5A39B3439D2F9A55555E46(L_12, GameObject_GetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_m0105F7D111716F495F5A39B3439D2F9A55555E46_RuntimeMethod_var);
		((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0), (void*)L_13);
		// if (coroutineRunner == null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_14 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0;
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		// coroutineRunner = go.AddComponent<CoroutineRunner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_17);
		CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* L_18;
		L_18 = GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844(L_17, GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844_RuntimeMethod_var);
		((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0), (void*)L_18);
	}

IL_0077:
	{
	}

IL_0078:
	{
		// coroutineRunner.StartCoroutine(enumerator);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_19 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0;
		RuntimeObject* L_20 = ___enumerator0;
		NullCheck(L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_20, NULL);
		goto IL_0093;
	}

IL_0087:
	{
		// throw new Exception(nameof(CoroutineRunner));
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93_RuntimeMethod_var)));
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions::RunOnUnityScheduler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CRunOnUnitySchedulerU3Eg__SendOrPostCallbackU7C0_mA1714FD6BA289D1F890269A9AE77E14BC99E3311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* L_0 = (U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_mB77F119CD7B4C7FB19E1F47F7F9768573295332D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action0;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// if (SynchronizationContext.Current == SyncContextUtility.UnitySynchronizationContext)
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4;
		L_4 = SyncContextUtility_get_UnitySynchronizationContext_m51D7AD30493CAAA13348536FB924402CFD8CC057_inline(NULL);
		V_1 = (bool)((((RuntimeObject*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)L_3) == ((RuntimeObject*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// action();
		U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* L_6 = V_0;
		NullCheck(L_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6->___action_0;
		NullCheck(L_7);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
		goto IL_0049;
	}

IL_002e:
	{
		// SyncContextUtility.UnitySynchronizationContext.Post(SendOrPostCallback, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8;
		L_8 = SyncContextUtility_get_UnitySynchronizationContext_m51D7AD30493CAAA13348536FB924402CFD8CC057_inline(NULL);
		U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* L_9 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_10 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CRunOnUnitySchedulerU3Eg__SendOrPostCallbackU7C0_mA1714FD6BA289D1F890269A9AE77E14BC99E3311_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_8, L_10, NULL);
	}

IL_0049:
	{
		// }
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
// System.Void Utilities.Async.AwaiterExtensions/CoroutineRunner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineRunner__ctor_m96914B6CC753B65A34ADF2F97FB371ED4166747F (CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* __this, const RuntimeMethod* method) 
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
// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_set_IsCompleted_mFA659BA7421B22EC7809F690DB47F7B79D26F864 (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsCompletedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m15EE5EE65719C860AF24F8DF7572B64C309B69D1 (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Assert(IsCompleted);
		bool L_0;
		L_0 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216(L_0, NULL);
		// if (exception != null)
		Exception_t* L_1 = __this->___exception_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// ExceptionDispatchInfo.Capture(exception).Throw();
		Exception_t* L_3 = __this->___exception_0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4;
		L_4 = ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E(L_3, NULL);
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_Complete_m459F11138D85C25815D11109FFA3538ADEFAA4D0 (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Assert(!IsCompleted);
		bool L_0;
		L_0 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// IsCompleted = true;
		SimpleCoroutineAwaiter_set_IsCompleted_mFA659BA7421B22EC7809F690DB47F7B79D26F864_inline(__this, (bool)1, NULL);
		// exception = e;
		Exception_t* L_1 = ___e0;
		__this->___exception_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception_0), (void*)L_1);
		// if (continuation != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___continuation_1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// RunOnUnityScheduler(continuation);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___continuation_1;
		AwaiterExtensions_RunOnUnityScheduler_m5B9CA120158C4534DE6EADEC8F0B6514FDA0983D(L_4, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mAD426E13D9A81D78E6ECB19179758D100A7B7A48 (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___notifyContinuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(continuation == null);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), NULL);
		// Debug.Assert(!IsCompleted);
		bool L_1;
		L_1 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(__this, NULL);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// continuation = notifyContinuation;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___notifyContinuation0;
		__this->___continuation_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuation_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter__ctor_m22C18C8E8BF6BBB7CEFB6017D2635F046CDDD57B (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::ReturnVoid(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnVoid_mA738A105A8FD3D349B4E6D30DF7BCF45098E149E (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* ___awaiter0, RuntimeObject* ___instruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* L_0 = (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F*)il2cpp_codegen_object_new(U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReturnVoidU3Ed__0__ctor_m907851E727DECEE2EECCC08A34B384487FED56A1(L_0, 0, NULL);
		U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* L_1 = L_0;
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_2 = ___awaiter0;
		NullCheck(L_1);
		L_1->___awaiter_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_2), (void*)L_2);
		U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* L_3 = L_1;
		RuntimeObject* L_4 = ___instruction1;
		NullCheck(L_3);
		L_3->___instruction_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::ResourceRequest(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ResourceRequest_m6BD7790E983382A22A7EDFBB6CDA56C036CD7F37 (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* ___awaiter0, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___instruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* L_0 = (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458*)il2cpp_codegen_object_new(U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CResourceRequestU3Ed__2__ctor_mBB412A0CA3B189B972D3D0408D0FBDC2726FD2D3(L_0, 0, NULL);
		U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* L_1 = L_0;
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_2 = ___awaiter0;
		NullCheck(L_1);
		L_1->___awaiter_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_2), (void*)L_2);
		U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* L_3 = L_1;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_4 = ___instruction1;
		NullCheck(L_3);
		L_3->___instruction_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::AssetBundleCreateRequest(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>,UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleCreateRequest_mBE35345561DC380FA1A03940CB89093F1680D829 (SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* ___awaiter0, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___instruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* L_0 = (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F*)il2cpp_codegen_object_new(U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAssetBundleCreateRequestU3Ed__3__ctor_m4D623E3FA50E6C7BBE2DF824E1EA6A07BFE07A7A(L_0, 0, NULL);
		U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* L_1 = L_0;
		SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* L_2 = ___awaiter0;
		NullCheck(L_1);
		L_1->___awaiter_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_2), (void*)L_2);
		U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* L_3 = L_1;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_4 = ___instruction1;
		NullCheck(L_3);
		L_3->___instruction_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/InstructionWrappers::AssetBundleRequest(Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleRequest_mCBAD6713E7814A2E49D1253FFFE99066DF9AB582 (SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* ___awaiter0, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___instruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* L_0 = (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9*)il2cpp_codegen_object_new(U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAssetBundleRequestU3Ed__4__ctor_m7329FE74465DC462E0A2DBFBC232F2D25F2B9BB8(L_0, 0, NULL);
		U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* L_1 = L_0;
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_2 = ___awaiter0;
		NullCheck(L_1);
		L_1->___awaiter_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_2), (void*)L_2);
		U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* L_3 = L_1;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_4 = ___instruction1;
		NullCheck(L_3);
		L_3->___instruction_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_3), (void*)L_4);
		return L_3;
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
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0__ctor_m907851E727DECEE2EECCC08A34B384487FED56A1 (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0_System_IDisposable_Dispose_m2215CF7A72945BC7F5725AEE4847F9E747D873FD (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReturnVoidU3Ed__0_MoveNext_m179C50FA63A822E56657D9BB1FFCCAAD76293321 (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
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
		goto IL_0035;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		RuntimeObject* L_3 = __this->___instruction_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(null);
		SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_4 = __this->___awaiter_2;
		NullCheck(L_4);
		SimpleCoroutineAwaiter_Complete_m459F11138D85C25815D11109FFA3538ADEFAA4D0(L_4, (Exception_t*)NULL, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReturnVoidU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7EC94898FEF3EEAC7ED8B02D164259DBE53C2A8B (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_Reset_mA485B7CF200A43B698366E916AB51B5E64BE0DAA (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_Reset_mA485B7CF200A43B698366E916AB51B5E64BE0DAA_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_get_Current_m3B495D0538CC4870176A0B1A3CF88644645D15EB (U3CReturnVoidU3Ed__0_t1F93F76916A95E16F44603C2BB7BFC430AA0157F* __this, const RuntimeMethod* method) 
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
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__2__ctor_mBB412A0CA3B189B972D3D0408D0FBDC2726FD2D3 (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__2_System_IDisposable_Dispose_m7E7B79E3A12146BB64A545231F0BBB8CA0F6A63B (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResourceRequestU3Ed__2_MoveNext_m4CB4B07F12BC823BF8DAC800907C332405FBC488 (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_0035;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_3 = __this->___instruction_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction.asset, null);
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_4 = __this->___awaiter_2;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_5 = __this->___instruction_3;
		NullCheck(L_5);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6;
		L_6 = ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087(L_5, NULL);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9(L_4, L_6, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResourceRequestU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m637CE256EDADE0B989C95616B70983A2C2E5C553 (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__2_System_Collections_IEnumerator_Reset_m86729A6B53BB556E30AF5D2193C2A0CAAF911D7F (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResourceRequestU3Ed__2_System_Collections_IEnumerator_Reset_m86729A6B53BB556E30AF5D2193C2A0CAAF911D7F_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<ResourceRequest>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResourceRequestU3Ed__2_System_Collections_IEnumerator_get_Current_m90E050F202F7AA3A685AB6A6C1B001E089938DBA (U3CResourceRequestU3Ed__2_tCD1B962A019BF13D57D6F8EF0B89CC38C61C8458* __this, const RuntimeMethod* method) 
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
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__3__ctor_m4D623E3FA50E6C7BBE2DF824E1EA6A07BFE07A7A (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__3_System_IDisposable_Dispose_m0E86B06B167520890C8F9343EF1D7A8FA69E4D45 (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAssetBundleCreateRequestU3Ed__3_MoveNext_m45FA4BEC42A2B481F324079B04FAFF0C65A42F49 (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_mC87A350D621FE13CFF6F54E9D6C1D7D387A3DF80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_0035;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_3 = __this->___instruction_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction.assetBundle, null);
		SimpleCoroutineAwaiter_1_tC018756747919AE996878AA98740B4C04C547D23* L_4 = __this->___awaiter_2;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_5 = __this->___instruction_3;
		NullCheck(L_5);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_6;
		L_6 = AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21(L_5, NULL);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_mC87A350D621FE13CFF6F54E9D6C1D7D387A3DF80(L_4, L_6, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_mC87A350D621FE13CFF6F54E9D6C1D7D387A3DF80_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleCreateRequestU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBF1342D7005E91A3A12AAC52F7DC2DDBC75ABB62 (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__3_System_Collections_IEnumerator_Reset_m03CEDEB56B26465B370B9F176D89D1301891B161 (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAssetBundleCreateRequestU3Ed__3_System_Collections_IEnumerator_Reset_m03CEDEB56B26465B370B9F176D89D1301891B161_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleCreateRequestU3Ed__3_System_Collections_IEnumerator_get_Current_m6D478788867B0C123C5ABDEAF475189C6D7CCC3E (U3CAssetBundleCreateRequestU3Ed__3_t6F30F2914A363173396D9E9C3822E707E4EBE87F* __this, const RuntimeMethod* method) 
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
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__4__ctor_m7329FE74465DC462E0A2DBFBC232F2D25F2B9BB8 (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__4_System_IDisposable_Dispose_mCF4FC0C29FBF7AFFFAB62737FB61005859F2EE19 (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAssetBundleRequestU3Ed__4_MoveNext_m4A1FFAA7C0A5A0B1040717627AB67EC4C3BE987F (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_0035;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_3 = __this->___instruction_3;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction.asset, null);
		SimpleCoroutineAwaiter_1_tE4E567888E9D60CA24343F0C63E55676640C5235* L_4 = __this->___awaiter_2;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_5 = __this->___instruction_3;
		NullCheck(L_5);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6;
		L_6 = AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C(L_5, NULL);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9(L_4, L_6, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_m229BE0FDD147F4A17B0A44D21417F58050EE1FA9_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleRequestU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2776894E698D10480CF15BCC3E075D6B88CA5C78 (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__4_System_Collections_IEnumerator_Reset_m5BBF8F86A4E7E35E415E1686592C1A9D6257D3CA (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAssetBundleRequestU3Ed__4_System_Collections_IEnumerator_Reset_m5BBF8F86A4E7E35E415E1686592C1A9D6257D3CA_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/InstructionWrappers/<AssetBundleRequest>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleRequestU3Ed__4_System_Collections_IEnumerator_get_Current_m130F5B682A8FEA6A746368686E920EFEDED62CB2 (U3CAssetBundleRequestU3Ed__4_tEAB6939D02A22AD27E219D0AA9DB483B61C965B9* __this, const RuntimeMethod* method) 
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF2E24BAC22197B504851AC2B8AC304714D938C69 (U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0::<RunSynchronously>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass0_0_U3CRunSynchronouslyU3Eb__0_m35BE85FE25E0522A442C6FA8781065A103ABAB86 (U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_m6E14C87EED0EDA1D3D4A96C927904E36ECA24670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* V_0 = NULL;
	{
		U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* L_0 = (U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260*)il2cpp_codegen_object_new(U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CRunSynchronouslyU3Eb__0U3Ed__ctor_m71BB93F95A8CE72325F7A446C36BCEE01927FB6D(L_0, NULL);
		V_0 = L_0;
		U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_m6E14C87EED0EDA1D3D4A96C927904E36ECA24670(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_m6E14C87EED0EDA1D3D4A96C927904E36ECA24670_RuntimeMethod_var);
		U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSynchronouslyU3Eb__0U3Ed__ctor_m71BB93F95A8CE72325F7A446C36BCEE01927FB6D (U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSynchronouslyU3Eb__0U3Ed_MoveNext_m8D0F3917B93514059C208B2DEB962A8CEE381C41 (U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_mAF6FB79AACBB3274B5947BE93D4F8394CFCF20E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0051_1;
		}

IL_000e_1:
		{
			// => Task.Run(async () => await asyncFunc()).Wait();
			U3CU3Ec__DisplayClass0_0_tF561F79C4BD5CA0926A03F32A702C262463718B6* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_3 = L_2->___asyncFunc_0;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = Func_1_Invoke_mF62B79DDADBD36C0E8F0DA4BAD59B33D7BA3C880_inline(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_6)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_mAF6FB79AACBB3274B5947BE93D4F8394CFCF20E1(L_9, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260_mAF6FB79AACBB3274B5947BE93D4F8394CFCF20E1_RuntimeMethod_var);
			goto IL_00a3;
		}

IL_0051_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_3;
			V_1 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_008f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a3;
	}// end catch (depth: 1)

IL_008f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_15, NULL);
	}

IL_00a3:
	{
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass0_0/<<RunSynchronously>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSynchronouslyU3Eb__0U3Ed_SetStateMachine_m25E54AA48A0C1C06025C40AB24F1C52A468B2770 (U3CU3CRunSynchronouslyU3Eb__0U3Ed_t7E746FD21A54F16DAF2607E0CC0B91ECD60E4260* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m40D923626C40E6C82B24ABBCFA3397C5DE895D20 (U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass12_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE2BFC3704AF19ABDE1141B3AB5BAFC93D8C758EB (U3CU3Ec__DisplayClass12_0_tB20015DB42A6CA392FDCDA8C033B93242155F7F1* __this, const RuntimeMethod* method) 
{
	{
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		RuntimeObject* L_0 = __this->___enumerator_0;
		AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93(L_0, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mDEA9AA66DA04AD96673403796B5F0FCDE4D4D27C (U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass13_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_m9A3B9DFAE2ED9F10E106341803A45B0792559909 (U3CU3Ec__DisplayClass13_0_t2ABA72682AD5C9FB58B1F604ED4D6C1A0A521258* __this, const RuntimeMethod* method) 
{
	{
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		RuntimeObject* L_0 = __this->___enumerator_0;
		AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93(L_0, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m0734FB3329E0311751F70480674B04ADFF9B4252 (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* __this, const RuntimeMethod* method) 
{
	{
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		RuntimeObject* L_0 = __this->___enumerator_0;
		AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93(L_0, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m743F884DA6B8220442494F059936483A7621B3B1 (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* __this, const RuntimeMethod* method) 
{
	{
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		RuntimeObject* L_0 = __this->___enumerator_0;
		AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93(L_0, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m9BA3E2EB4032B74B1A8D868ED01EE2C9A6E664D3 (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::<GetAwaiterReturnVoid>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CGetAwaiterReturnVoidU3Eb__0_m0A7CE933696A1010D696411B40FC54313D7B48B9 (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* __this, const RuntimeMethod* method) 
{
	{
		// RunOnUnityScheduler(() => RunCoroutine(enumerator));
		RuntimeObject* L_0 = __this->___enumerator_0;
		AwaiterExtensions_RunCoroutine_m7FF80D8D85FAE0BADB4C81EEC946C89C898ECD93(L_0, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mB77F119CD7B4C7FB19E1F47F7F9768573295332D (U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass21_0::<RunOnUnityScheduler>g__SendOrPostCallback|0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CRunOnUnitySchedulerU3Eg__SendOrPostCallbackU7C0_mA1714FD6BA289D1F890269A9AE77E14BC99E3311 (U3CU3Ec__DisplayClass21_0_t26F2532F7CDAEC505A69F8E4FF1281D23462DEB2* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	{
		// void SendOrPostCallback(object state) => action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::get_UnityMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* Awaiters_get_UnityMainThread_m395697B4350A5F98A1B047AFB052BD5ACF60C2BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMainThread UnityMainThread { get; } = new UnityMainThread();
		il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = ((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0;
		return L_0;
	}
}
// Utilities.Async.AwaitYieldInstructions.BackgroundThread Utilities.Async.Awaiters::get_BackgroundThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* Awaiters_get_BackgroundThread_mB46C4E18367E905564312DD168519EC54EDD51BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BackgroundThread BackgroundThread { get; } = new BackgroundThread();
		il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* L_0 = ((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Utilities.Async.Awaiters::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiters__cctor_m8205751360EF8C44143DC793C9A7145C442DC7BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMainThread UnityMainThread { get; } = new UnityMainThread();
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC*)il2cpp_codegen_object_new(UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityMainThread__ctor_mB503158CD706DC757EA69CB7E9D52728B9817062(L_0, NULL);
		((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0), (void*)L_0);
		// public static BackgroundThread BackgroundThread { get; } = new BackgroundThread();
		BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* L_1 = (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938*)il2cpp_codegen_object_new(BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BackgroundThread__ctor_m4F3CC38C6D4714EA48577E0070406B6A947C6C80(L_1, NULL);
		((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1), (void*)L_1);
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
// System.Void Utilities.Async.Internal.SyncContextUtility::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_Initialize_mD11B53D114D85C1F43599342289B24805BEBD2DC (const RuntimeMethod* method) 
{
	{
		// UnitySynchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		SyncContextUtility_set_UnitySynchronizationContext_mC3DC30B56B02C63EB8A9BC1740CA06C2C3C64C0E_inline(L_0, NULL);
		// UnityThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		SyncContextUtility_set_UnityThreadId_mB4E3C031979F4D4EB4AA3709D86D299B08150509_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Int32 Utilities.Async.Internal.SyncContextUtility::get_UnityThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncContextUtility_get_UnityThreadId_m485DBA72DDAC781405C5CDF351624254F5A8893C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnityThreadId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_mB4E3C031979F4D4EB4AA3709D86D299B08150509 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ___value0;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Threading.SynchronizationContext Utilities.Async.Internal.SyncContextUtility::get_UnitySynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SyncContextUtility_get_UnitySynchronizationContext_m51D7AD30493CAAA13348536FB924402CFD8CC057 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_mC3DC30B56B02C63EB8A9BC1740CA06C2C3C64C0E (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___value0;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean Utilities.Async.Internal.SyncContextUtility::get_IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncContextUtility_get_IsMainThread_m74579117774264430EEFD5B1EA2E4000A0731D22 (const RuntimeMethod* method) 
{
	{
		// public static bool IsMainThread => UnitySynchronizationContext == SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SyncContextUtility_get_UnitySynchronizationContext_m51D7AD30493CAAA13348536FB924402CFD8CC057_inline(NULL);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1;
		L_1 = SynchronizationContext_get_Current_m6ED0A3B92F310858004DCEBCEAB5FE85B1704C5A(NULL);
		return (bool)((((RuntimeObject*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)L_0) == ((RuntimeObject*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)L_1))? 1 : 0);
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Async.AwaitYieldInstructions.BackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 BackgroundThread_GetAwaiter_m7453D22205837E2EC20DBAC79D42AC3D42F4BC64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mE1329C50C28C0EB9A54E86B910CF75F3418F002F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* L_2 = ((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mE1329C50C28C0EB9A54E86B910CF75F3418F002F_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(G_B2_0, NULL);
		NullCheck(L_5);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
		L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_0), NULL);
		V_1 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_8 = V_1;
		return L_8;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundThread__ctor_m4F3CC38C6D4714EA48577E0070406B6A947C6C80 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* __this, const RuntimeMethod* method) 
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
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m97E2D52A25B9055D69A18FF43740A8CD414D12ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* L_0 = (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3*)il2cpp_codegen_object_new(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9A129C8FB4D87D1790031D0ECD80D4D66D4A6C69(L_0, NULL);
		((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A129C8FB4D87D1790031D0ECD80D4D66D4A6C69 (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mE1329C50C28C0EB9A54E86B910CF75F3418F002F (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* __this, const RuntimeMethod* method) 
{
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
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
// System.Boolean Utilities.Async.AwaitYieldInstructions.UnityMainThread::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityMainThread_get_keepWaiting_m1D318EC3CEA99CA3C55819983AC2768DE4CFB18B (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* __this, const RuntimeMethod* method) 
{
	{
		// public override bool keepWaiting => false;
		return (bool)0;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.UnityMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThread__ctor_mB503158CD706DC757EA69CB7E9D52728B9817062 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SyncContextUtility_get_UnitySynchronizationContext_m51D7AD30493CAAA13348536FB924402CFD8CC057_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_set_IsCompleted_mFA659BA7421B22EC7809F690DB47F7B79D26F864_inline (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsCompletedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_mC3DC30B56B02C63EB8A9BC1740CA06C2C3C64C0E_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___value0;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_mB4E3C031979F4D4EB4AA3709D86D299B08150509_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ___value0;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
