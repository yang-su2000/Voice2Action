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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DBNull
struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t4D2DC61F0664F305059641FF6BDA07DF2141236C;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t20C0BA2FB19CAD6D3BD432B033BC560186E574C1;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6;
// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704;
// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974;
// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133;
IL2CPP_EXTERN_C String_t* _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F;
IL2CPP_EXTERN_C String_t* _stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745;
IL2CPP_EXTERN_C String_t* _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763;
IL2CPP_EXTERN_C String_t* _stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472;
IL2CPP_EXTERN_C String_t* _stringLiteral53549F14C4C0C01E846937308C01413567514ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD369CF985844B111CA4447943A285D359441C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434;
IL2CPP_EXTERN_C String_t* _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral78875BB01F47001614AE95132434E503D00EA404;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705;
IL2CPP_EXTERN_C String_t* _stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D;
IL2CPP_EXTERN_C String_t* _stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288;
IL2CPP_EXTERN_C String_t* _stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_MoveNext_mDF9EAA69E0FA49EC7800444D746A5F9B356EF8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_Reset_m85AE4B4752761AD7401451241BE2BE534FE81F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Key_m1AD78734C58253FE332F4B32986DA06B49152F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Value_m232AE4728508F126C18C4A857130F9352CFAF98B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mC4318EB20EF707C70A420FAB8A12151AEA8D8270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_MoveNext_m698BC05A81B55BB269F0BCE6E06DBE24C2C1FFAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_Reset_mC4BFC7F208239DE8D810E369D06D22F6C5DA0600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_get_Current_mA455D4FFB6B905DE4C8274554A491A60F918C28A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke;
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveHashCodeProvider::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// System.Collections.Specialized.CompatibleComparer
struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E  : public RuntimeObject
{
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;
};

struct CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields
{
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.DBNull
struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC  : public RuntimeObject
{
};

struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields
{
	// System.DBNull System.DBNull::Value
	DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___Value_0;
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Specialized.ListDictionary
struct ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B  : public RuntimeObject
{
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_16;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_17;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Collections.Specialized.StringCollection
struct StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___data_0;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
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

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704  : public RuntimeObject
{
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject* ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject* ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* ___next_2;
};

// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974  : public RuntimeObject
{
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeEnumerator::_list
	ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ____list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeEnumerator::_current
	DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* ____current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeEnumerator::_version
	int32_t ____version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::_start
	bool ____start_3;
};

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471  : public RuntimeObject
{
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::_list
	ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ____list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::_isKeys
	bool ____isKeys_1;
};

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81  : public RuntimeObject
{
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ____coll_0;
};

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2  : public RuntimeObject
{
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject* ___Value_1;
};

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0  : public RuntimeObject
{
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;
};

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532  : public RuntimeObject
{
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::_list
	ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ____list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::_current
	DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* ____current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::_version
	int32_t ____version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::_isKeys
	bool ____isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::_start
	bool ____start_4;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	int32_t ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_canceledTask_0;
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

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_5;
	// System.Globalization.CompareOptions System.CultureAwareComparer::_options
	int32_t ____options_6;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_19;
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
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

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26__padding[14];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7__padding[9];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A
	__StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 ___00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374_2;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
	__StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 ___27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_5;
	// System.Int64 <PrivateImplementationDetails>::3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C
	int64_t ___3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF
	__StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD ___356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF_7;
	// System.Int64 <PrivateImplementationDetails>::6C8F647E1FCD63826D12272FF0930E9C16F1FFEF719948703A4C0F3B90052885
	int64_t ___6C8F647E1FCD63826D12272FF0930E9C16F1FFEF719948703A4C0F3B90052885_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8
	__StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F ___9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::9F58F1261D211553DE8FBC1AFA477C84EA3974B9BFF38223D771D0CDA787E15A
	__StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D ___9F58F1261D211553DE8FBC1AFA477C84EA3974B9BFF38223D771D0CDA787E15A_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_12;
	// System.Int64 <PrivateImplementationDetails>::BB6BB42AC5453BD8AA992CCB8929F1CB7D4E112E3FC56E57D711E106D1F72859
	int64_t ___BB6BB42AC5453BD8AA992CCB8929F1CB7D4E112E3FC56E57D711E106D1F72859_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::DFA7289CF8D8029ACEE90F30530C6926950E8DD20285772458F271AFD015BAD5
	__StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26 ___DFA7289CF8D8029ACEE90F30530C6926950E8DD20285772458F271AFD015BAD5_14;
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_5;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_6;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_7;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_8;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* ___native_9;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* ____deflateStream_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760  : public RuntimeObject
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject* ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject* ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject* ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject* ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	// System.Int64 System.Runtime.Remoting.Messaging.AsyncResult::add_time
	int64_t ___add_time_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601* ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;
	// System.Threading.WaitCallback System.Runtime.Remoting.Messaging.AsyncResult::orig_cb
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___orig_cb_15;
};
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_pinvoke
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_com
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com* ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};

// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD  : public RuntimeObject
{
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_1;
	// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::z_stream
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___io_buffer_5;
	// System.Exception System.IO.Compression.DeflateStreamNative::last_error
	Exception_t* ___last_error_6;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9 (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionary_get_SyncRoot_mB57A6103DFFB6AC447C437B7D68A50E427307862 (ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator__ctor_mC4273DE23DD0DE374C06740AA476BF6B6F2B5341 (NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532* __this, ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ___list0, bool ___isKeys1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_GetAsOneString_m6B44F208B557CE92924A116A67838CB4C259B844 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) ;
// System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetAsStringArray_m6799C5A95954105A8849EDE540988D1352D19E64 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameObjectCollectionBase_BaseGetAllKeys_m00ADAB2845483DCD590077264B6C11553BBAD744 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___dummy0, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultHashCodeProvider_m292C48BD6A5A7065925BAF2BFDEBF7217516DC50 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultComparer_m9CC25AF4BD1553D2B2C51FDE9AC8110BABB5C5D5 (const RuntimeMethod* method) ;
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) ;
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC09A19935970846B38570D03608F0E5F25E2020C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___comparer0, RuntimeObject* ___hashCodeProvider1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513 (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___coll0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mF713FCC09E41A8D1C0DE44EDD0932A57800A9BA3 (String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mE9CAF0B3E78E95BA138B5623615D3C0242581977 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCultureIgnoreCase_mAAE3230211B6F7E6303F496B33286218FC9ADD64_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveComparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveComparer__ctor_mCB4043516ED08874EE7AA38C56A3C3E016F4DA1E (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveHashCodeProvider__ctor_mE5326CFE4A3269CC813CCF1ADF2E57529E902C4B (CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, int32_t ___windowsBits3, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB (const RuntimeMethod* method) ;
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_m74D46F5BDD3D2FDD5DF969205C514105C459EBEB (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708 (RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_gshared)(___asyncResult0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Stream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_m15176F3206012448A5CD8D62B300A2880A82DBCA (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Stream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F (const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m628D0A7F7EE62339C0D867FBF4319093C82018A7 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_gshared_inline)(___array0, ___start1, ___length2, method);
}
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___destination0, method);
}
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m5075DD90424301C1C82A2142AA530FDC6F345006 (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_mAC7D59B136EB2C8B1512123F21B91976CDE33D5F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mC4E36C2FDE3E7850B154FE6A09825D7B055E1519 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m95704830E739FD66C207ED91323852F7E0FCC35B (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_mEA426722FFB221614DC4AFEC80BBB4382B375187 (intptr_t ___stream0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C void* CDECL CreateZStream(int32_t, int32_t, Il2CppMethodPointer, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL CloseZStream(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Flush(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ReadZStream(void*, intptr_t, int32_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WriteZStream(void*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator__ctor_m5789602EADB23A1C70CF6E50814E2BD3C9607A82 (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ___list0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_0 = ___list0;
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		__this->____version_2 = L_2;
		__this->____start_3 = (bool)1;
		__this->____current_1 = (DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Current_mB94FB39141E548003ADC8EDDF7B7F09DB3EDD5E7 (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9 (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_0 = __this->____current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Entry_mBBDB5B3E11DB47CCA5492E71BF7E31E3B44CB9C9_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_2 = __this->____current_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___key_0;
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_4 = __this->____current_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___value_1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Key_m1AD78734C58253FE332F4B32986DA06B49152F64 (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_0 = __this->____current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Key_m1AD78734C58253FE332F4B32986DA06B49152F64_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_2 = __this->____current_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___key_0;
		return L_3;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Value_m232AE4728508F126C18C4A857130F9352CFAF98B (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_0 = __this->____current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Value_m232AE4728508F126C18C4A857130F9352CFAF98B_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_2 = __this->____current_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___value_1;
		return L_3;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeEnumerator_MoveNext_mDF9EAA69E0FA49EC7800444D746A5F9B356EF8CB (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_MoveNext_mDF9EAA69E0FA49EC7800444D746A5F9B356EF8CB_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->____start_3;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_5 = __this->____list_0;
		NullCheck(L_5);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_6 = L_5->___head_0;
		__this->____current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_6);
		__this->____start_3 = (bool)0;
		goto IL_0059;
	}

IL_0040:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_7 = __this->____current_1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_8 = __this->____current_1;
		NullCheck(L_8);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_9 = L_8->___next_2;
		__this->____current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_9);
	}

IL_0059:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_10 = __this->____current_1;
		return (bool)((!(((RuntimeObject*)(DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator_Reset_m85AE4B4752761AD7401451241BE2BE534FE81F16 (NodeEnumerator_tB5CEB7836076628E570BB691428B660F8D1FD974* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_Reset_m85AE4B4752761AD7401451241BE2BE534FE81F16_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->____start_3 = (bool)1;
		__this->____current_1 = (DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL);
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
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueCollection__ctor_mECB35302663BD3C7537F27CB3536C5B632741633 (NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471* __this, ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ___list0, bool ___isKeys1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_0 = ___list0;
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		bool L_1 = ___isKeys1;
		__this->____isKeys_1 = L_1;
		return;
	}
}
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mC4318EB20EF707C70A420FAB8A12151AEA8D8270 (NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* V_0 = NULL;
	RuntimeArray* G_B7_0 = NULL;
	RuntimeArray* G_B6_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeArray* G_B8_1 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mC4318EB20EF707C70A420FAB8A12151AEA8D8270_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___index1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mC4318EB20EF707C70A420FAB8A12151AEA8D8270_RuntimeMethod_var)));
	}

IL_0028:
	{
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_7 = __this->____list_0;
		NullCheck(L_7);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_8 = L_7->___head_0;
		V_0 = L_8;
		goto IL_005f;
	}

IL_0036:
	{
		RuntimeArray* L_9 = ___array0;
		bool L_10 = __this->____isKeys_1;
		G_B6_0 = L_9;
		if (L_10)
		{
			G_B7_0 = L_9;
			goto IL_0047;
		}
	}
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___value_1;
		G_B8_0 = L_12;
		G_B8_1 = G_B6_0;
		goto IL_004d;
	}

IL_0047:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___key_0;
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
	}

IL_004d:
	{
		int32_t L_15 = ___index1;
		NullCheck(G_B8_1);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(G_B8_1, G_B8_0, L_15, NULL);
		int32_t L_16 = ___index1;
		___index1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_17 = V_0;
		NullCheck(L_17);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_18 = L_17->___next_2;
		V_0 = L_18;
	}

IL_005f:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_19 = V_0;
		if (L_19)
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeKeyValueCollection_System_Collections_ICollection_get_Count_mB86B329122CF83EB8C0E141630059C470637642F (NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* V_1 = NULL;
	{
		V_0 = 0;
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_0 = __this->____list_0;
		NullCheck(L_0);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_1 = L_0->___head_0;
		V_1 = L_1;
		goto IL_001b;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_3 = V_1;
		NullCheck(L_3);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_4 = L_3->___next_2;
		V_1 = L_4;
	}

IL_001b:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_5 = V_1;
		if (L_5)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeKeyValueCollection_System_Collections_ICollection_get_IsSynchronized_m37F47AAD315C410A86E8E2C6B46D5BB95C09C6CA (NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m1EBB9493738DC9284CA18028CB347D76043531AB (NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471* __this, const RuntimeMethod* method) 
{
	{
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_0 = __this->____list_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ListDictionary_get_SyncRoot_mB57A6103DFFB6AC447C437B7D68A50E427307862(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m62C7DEA90EC94BC5175BD18E5BA78AC846716505 (NodeKeyValueCollection_t4625AE58F1FE1ED9AB714F7C0176F21312537471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_0 = __this->____list_0;
		bool L_1 = __this->____isKeys_1;
		NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532* L_2 = (NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532*)il2cpp_codegen_object_new(NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NodeKeyValueEnumerator__ctor_mC4273DE23DD0DE374C06740AA476BF6B6F2B5341(L_2, L_0, L_1, NULL);
		return L_2;
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
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator__ctor_mC4273DE23DD0DE374C06740AA476BF6B6F2B5341 (NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532* __this, ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* ___list0, bool ___isKeys1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_0 = ___list0;
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		bool L_1 = ___isKeys1;
		__this->____isKeys_3 = L_1;
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___version_1;
		__this->____version_2 = L_3;
		__this->____start_4 = (bool)1;
		__this->____current_1 = (DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeKeyValueEnumerator_get_Current_mA455D4FFB6B905DE4C8274554A491A60F918C28A (NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_0 = __this->____current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_get_Current_mA455D4FFB6B905DE4C8274554A491A60F918C28A_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_2 = __this->____isKeys_3;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_3 = __this->____current_1;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___value_1;
		return L_4;
	}

IL_0027:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_5 = __this->____current_1;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___key_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeKeyValueEnumerator_MoveNext_m698BC05A81B55BB269F0BCE6E06DBE24C2C1FFAA (NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_MoveNext_m698BC05A81B55BB269F0BCE6E06DBE24C2C1FFAA_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->____start_4;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_5 = __this->____list_0;
		NullCheck(L_5);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_6 = L_5->___head_0;
		__this->____current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_6);
		__this->____start_4 = (bool)0;
		goto IL_0059;
	}

IL_0040:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_7 = __this->____current_1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_8 = __this->____current_1;
		NullCheck(L_8);
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_9 = L_8->___next_2;
		__this->____current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_9);
	}

IL_0059:
	{
		DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* L_10 = __this->____current_1;
		return (bool)((!(((RuntimeObject*)(DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator_Reset_mC4BFC7F208239DE8D810E369D06D22F6C5DA0600 (NodeKeyValueEnumerator_tA94622FB066AA71B224E122DF4ED91547F5FC532* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		ListDictionary_tAC6CB299AB7426C8C1951C1E68005C1526732A5B* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_Reset_mC4BFC7F208239DE8D810E369D06D22F6C5DA0600_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->____start_4 = (bool)1;
		__this->____current_1 = (DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704*)NULL);
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
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryNode__ctor_m91B2E095E93FD55F8F8B8BF87DC0F1777B47749B (DictionaryNode_tE7A576ABAD8711C5BCA8919F1446F8B768903704* __this, const RuntimeMethod* method) 
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
// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mCA29E5386DACDF19F6F51BC395324F0A8EE05604 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_m1545E08D22D8E6C1FCDDAE43741AA43D52F4A21E (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		RuntimeObject* L_1 = ___equalityComparer1;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mAC66C8064A4AAB73914143C4CDF3BF28543BAEC3 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	{
		__this->____all_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____all_18), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->____allKeys_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allKeys_19), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_GetAsOneString_m6B44F208B557CE92924A116A67838CB4C259B844 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = ___list0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, 0);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = ___list0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, 0);
		StringBuilder_t* L_9 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_9;
		V_2 = 1;
		goto IL_0058;
	}

IL_0038:
	{
		StringBuilder_t* L_10 = V_1;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
		StringBuilder_t* L_12 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = ___list0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}

IL_0063:
	{
		return (String_t*)NULL;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetAsStringArray_m6799C5A95954105A8849EDE540988D1352D19E64 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = ___list0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker4< int32_t, RuntimeArray*, int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32) */, L_6, 0, (RuntimeArray*)L_7, 0, L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		bool L_0;
		L_0 = NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameValueCollection_Add_m68C266151774CD1FC057C9349BAE09BDB15A26A7_RuntimeMethod_var)));
	}

IL_0013:
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		String_t* L_2 = ___name0;
		RuntimeObject* L_3;
		L_3 = NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154(__this, L_2, NULL);
		V_0 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_3, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_5, 1, NULL);
		V_0 = L_5;
		String_t* L_6 = ___value1;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		String_t* L_8 = ___value1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_8);
	}

IL_003b:
	{
		String_t* L_10 = ___name0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_11 = V_0;
		NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E(__this, L_10, L_11, NULL);
		return;
	}

IL_0044:
	{
		String_t* L_12 = ___value1;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = V_0;
		String_t* L_14 = ___value1;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
	}

IL_004f:
	{
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_Get_m786B25D45B38D7051C696104946F3F0A2DF78106 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154(__this, L_0, NULL);
		String_t* L_2;
		L_2 = NameValueCollection_GetAsOneString_m6B44F208B557CE92924A116A67838CB4C259B844(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_GetValues_mC69C8E6E5E62365A35C3A2C99E5DD0C33625362E (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154(__this, L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = NameValueCollection_GetAsStringArray_m6799C5A95954105A8849EDE540988D1352D19E64(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		bool L_0;
		L_0 = NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameValueCollection_Set_mF0EA26F74B1E1D2F9A1A87D1093BEC31C51BCB8A_RuntimeMethod_var)));
	}

IL_0013:
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_2, 1, NULL);
		V_0 = L_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = V_0;
		String_t* L_4 = ___value1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_4);
		String_t* L_6 = ___name0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3(__this, L_6, L_7, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_Remove_m2146E6474DDFBE19E35E57F777C4FE2625247D56 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		NameValueCollection_InvalidateCachedArrays_mA9AA2F9B6A67C2576FA30F12208AA6E1F149C44B(__this, NULL);
		String_t* L_0 = ___name0;
		NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0(__this, L_0, NULL);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___value1;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String) */, __this, L_0, L_1);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_Get_m2C55CAA38BF0F6677AE8F44C22C289A5B59B4B20 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1;
		L_1 = NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA(__this, L_0, NULL);
		String_t* L_2;
		L_2 = NameValueCollection_GetAsOneString_m6B44F208B557CE92924A116A67838CB4C259B844(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_GetKey_m80CFEB6D61F9C3B9D03D7B25457D8B122C15170F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_0, NULL);
		return L_1;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameValueCollection_get_AllKeys_mEE8B643F93B5714DD9C231385589020E778AA94D (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____allKeys_19;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = NameObjectCollectionBase_BaseGetAllKeys_m00ADAB2845483DCD590077264B6C11553BBAD744(__this, NULL);
		__this->____allKeys_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allKeys_19), (void*)L_1);
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____allKeys_19;
		return L_2;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mF894B0B49D20CE92F0CE3BBF8ED67F48E61CDB6A (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___dummy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_0 = ___dummy0;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB(__this, L_0, NULL);
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
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(28 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_get_Count_mC6D18D20EEE559A67C72BD37ECA9C0FB93283F3F (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_System_Collections_IList_get_IsReadOnly_m4558520882327B88C80FE911E956E0F082872DED (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_System_Collections_IList_get_IsFixedSize_m821D69C64C5E4DE6841D4CC95FFC330E63F4D672 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Clear_m2B917BE0CCA6344B1FD65474C53CE512F0476435 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		return;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(33 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_CopyTo_mCD7A68178A8F87AC0628B2E92CE466A27512CB05 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, (RuntimeArray*)L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(38 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(39 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_get_IsSynchronized_m3FBF1146D4DD973DD06CD6929EE3764F8870A1D8 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_RemoveAt_m4D0E6E6AA354A0AFFB76AEB56B4CFF24717BB53A (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringCollection_get_SyncRoot_mC1F8C1DA3C5ED059D89BD483FB1A4A0A31053F86 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(26 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringCollection_System_Collections_IList_get_Item_m749070FBB55E7C9C0C21FE4C1013D154D4635BB2 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = StringCollection_get_Item_m4C46EE5894C7A604638AE2ABF4530C201B1FB88E(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_IList_set_Item_m176A74C64AA22AFEA5808E4C81AA3FB46B0F9F5E (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1 = ___value1;
		StringCollection_set_Item_mA1AFC86270CD52B6F5017555AD22CF7710D6B425(__this, L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_System_Collections_IList_Add_m4A71788F0E3068533B66D918B4F29762980052B5 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = StringCollection_Add_m03BBFAA1D11499DA68474A73F5DB55460F0D6DAF(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringCollection_System_Collections_IList_Contains_mEB0510524C7FD5886FFF9A0F710CFC04BACAFEF7 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		bool L_1;
		L_1 = StringCollection_Contains_mB9DCBDDFD850E68D6080D2D7657F399BA6002B10(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringCollection_System_Collections_IList_IndexOf_mFF76DA01812E585BDD7B25ED4453C22BE0FE9A25 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = StringCollection_IndexOf_m85C4CA19319F830D14472258D9A3DFD31F0F6BDF(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_IList_Insert_m3B0EB6DA5B02CCA0AB270A329B83152592E6D8B1 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1 = ___value1;
		StringCollection_Insert_mB3044A3F3B5C3B364DCEED9058895D978A4410CE(__this, L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_IList_Remove_m042058DA970F09FC6A0465F09F3082FB2B71BA45 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		StringCollection_Remove_mC6996622434EE5F503A70F425F0DE6E8D60399DC(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection_System_Collections_ICollection_CopyTo_m32503816BE4347138894130BD0AD6488643D6AB9 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringCollection_System_Collections_IEnumerable_GetEnumerator_mF4227CFA7634BA8BFF9F7D25079538A77BD060E1 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___data_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection__ctor_m3EF93D74FEC69C5A0CD7A502539B2CEDD8D02954 (StringCollection_t3C8ACD597B2EB7592031E5240BDDD4102223BDBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_0), (void*)L_0);
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
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6E0DCD48B817A59D0156390A09CD50BE07BF145D (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0 = ((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17;
		NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* G_B2_0 = NULL;
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___equalityComparer0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		RuntimeObject* L_1 = ___equalityComparer0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2 = ((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->____keyComparer_10 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____keyComparer_10), (void*)G_B3_0);
		NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m6B980F9EB155B69FB4C50AD38C2C0C104FE2F261 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___equalityComparer1;
		NameObjectCollectionBase__ctor_mB5F581BB65F493F603EE57E1815389E1406D5B61(__this, L_0, NULL);
		int32_t L_1 = ___capacity0;
		NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m113E50DAB246F05DB6302516E683D458250672DB (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___dummy0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__ctor_m7E8E8B56138D44BECF32865A11DAF942AE2BA4DA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		__this->____serializationInfo_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationInfo_14), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* V_3 = NULL;
	int32_t V_4 = 0;
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_5 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_GetObjectData_m0675A0B0EC79E1DAD6E307764C899EC5E552B32A_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		bool L_3 = __this->____readOnly_8;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, L_3, NULL);
		RuntimeObject* L_4 = __this->____keyComparer_10;
		il2cpp_codegen_runtime_class_init_inline(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_5 = ((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06*)L_5))))
		{
			goto IL_0065;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		RuntimeObject* L_7;
		L_7 = CompatibleComparer_get_DefaultHashCodeProvider_m292C48BD6A5A7065925BAF2BFDEBF7217516DC50(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_6, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, L_7, L_9, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___info0;
		RuntimeObject* L_11;
		L_11 = CompatibleComparer_get_DefaultComparer_m9CC25AF4BD1553D2B2C51FDE9AC8110BABB5C5D5(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_10, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_11, L_13, NULL);
		goto IL_0107;
	}

IL_0065:
	{
		RuntimeObject* L_14 = __this->____keyComparer_10;
		if (L_14)
		{
			goto IL_009b;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, NULL, L_17, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_18 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		NullCheck(L_18);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_18, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL, L_20, NULL);
		goto IL_0107;
	}

IL_009b:
	{
		RuntimeObject* L_21 = __this->____keyComparer_10;
		if (!((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E*)IsInstClass((RuntimeObject*)L_21, CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var)))
		{
			goto IL_00ec;
		}
	}
	{
		RuntimeObject* L_22 = __this->____keyComparer_10;
		V_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E*)CastclassClass((RuntimeObject*)L_22, CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_23 = ___info0;
		CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* L_24 = V_3;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4_inline(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_26, NULL);
		NullCheck(L_23);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_23, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, L_25, L_27, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_28 = ___info0;
		CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* L_29 = V_3;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9_inline(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		NullCheck(L_28);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_28, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_30, L_32, NULL);
		goto IL_0107;
	}

IL_00ec:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_33 = ___info0;
		RuntimeObject* L_34 = __this->____keyComparer_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_35, NULL);
		NullCheck(L_33);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_33, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_34, L_36, NULL);
	}

IL_0107:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_37 = __this->____entriesArray_9;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
		V_0 = L_38;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_39 = ___info0;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_39, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, L_40, NULL);
		int32_t L_41 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_1 = L_42;
		int32_t L_43 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_2 = L_44;
		V_4 = 0;
		goto IL_0162;
	}

IL_0132:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_45 = __this->____entriesArray_9;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		RuntimeObject* L_47;
		L_47 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_45, L_46);
		V_5 = ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_47, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_1;
		int32_t L_49 = V_4;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_50 = V_5;
		NullCheck(L_50);
		String_t* L_51 = L_50->___Key_0;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (String_t*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = V_2;
		int32_t L_53 = V_4;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_54 = V_5;
		NullCheck(L_54);
		RuntimeObject* L_55 = L_54->___Value_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (RuntimeObject*)L_55);
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0162:
	{
		int32_t L_57 = V_4;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0132;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_59 = ___info0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		NullCheck(L_59);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_59, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, (RuntimeObject*)L_60, L_62, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_63 = ___info0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_65, NULL);
		NullCheck(L_63);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_63, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, (RuntimeObject*)L_64, L_66, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_67 = ___info0;
		int32_t L_68 = __this->____version_15;
		NullCheck(L_67);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_67, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_68, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_9 = NULL;
	String_t* V_10 = NULL;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		RuntimeObject* L_0 = __this->____keyComparer_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____serializationInfo_14;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_2 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var)));
	}

IL_0017:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____serializationInfo_14;
		V_0 = L_3;
		__this->____serializationInfo_14 = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serializationInfo_14), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		V_1 = (bool)0;
		V_2 = 0;
		V_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		V_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		V_5 = (RuntimeObject*)NULL;
		V_6 = (RuntimeObject*)NULL;
		V_7 = (bool)0;
		V_8 = 0;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = V_0;
		NullCheck(L_4);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_5;
		L_5 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_4, NULL);
		V_9 = L_5;
		goto IL_025a;
	}

IL_0047:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_6 = V_9;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734(L_6, NULL);
		V_10 = L_7;
		String_t* L_8 = V_10;
		uint32_t L_9;
		L_9 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC09A19935970846B38570D03608F0E5F25E2020C(L_8, NULL);
		V_11 = L_9;
		uint32_t L_10 = V_11;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1573770551)))))
		{
			goto IL_00a2;
		}
	}
	{
		uint32_t L_11 = V_11;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1202781175)))))
		{
			goto IL_0085;
		}
	}
	{
		uint32_t L_12 = V_11;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)891156946))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_13 = V_11;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1202781175))))
		{
			goto IL_00df;
		}
	}
	{
		goto IL_025a;
	}

IL_0085:
	{
		uint32_t L_14 = V_11;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1228509323))))
		{
			goto IL_0121;
		}
	}
	{
		uint32_t L_15 = V_11;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1573770551))))
		{
			goto IL_0179;
		}
	}
	{
		goto IL_025a;
	}

IL_00a2:
	{
		uint32_t L_16 = V_11;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1944240600)))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_17 = V_11;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1613443821))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_18 = V_11;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1944240600))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_025a;
	}

IL_00c5:
	{
		uint32_t L_19 = V_11;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1924324773))))
		{
			goto IL_0163;
		}
	}
	{
		uint32_t L_20 = V_11;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-504907628))))
		{
			goto IL_0137;
		}
	}
	{
		goto IL_025a;
	}

IL_00df:
	{
		String_t* L_21 = V_10;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		if (L_22)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_025a;
	}

IL_00f5:
	{
		String_t* L_23 = V_10;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, NULL);
		if (L_24)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_025a;
	}

IL_010b:
	{
		String_t* L_25 = V_10;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL);
		if (L_26)
		{
			goto IL_01c1;
		}
	}
	{
		goto IL_025a;
	}

IL_0121:
	{
		String_t* L_27 = V_10;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_025a;
	}

IL_0137:
	{
		String_t* L_29 = V_10;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		if (L_30)
		{
			goto IL_0201;
		}
	}
	{
		goto IL_025a;
	}

IL_014d:
	{
		String_t* L_31 = V_10;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, NULL);
		if (L_32)
		{
			goto IL_020f;
		}
	}
	{
		goto IL_025a;
	}

IL_0163:
	{
		String_t* L_33 = V_10;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, NULL);
		if (L_34)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_025a;
	}

IL_0179:
	{
		String_t* L_35 = V_10;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		if (L_36)
		{
			goto IL_024a;
		}
	}
	{
		goto IL_025a;
	}

IL_018f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_37 = V_0;
		NullCheck(L_37);
		bool L_38;
		L_38 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_37, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		V_1 = L_38;
		goto IL_025a;
	}

IL_01a0:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_39 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		NullCheck(L_39);
		RuntimeObject* L_42;
		L_42 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_39, _stringLiteral01C3E1084120C54EF6D707D79CEA78DCBCB4D133, L_41, NULL);
		V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_01c1:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_43 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_44, NULL);
		NullCheck(L_43);
		RuntimeObject* L_46;
		L_46 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_43, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_45, NULL);
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_46, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_01df:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_48, NULL);
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_47, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_49, NULL);
		__this->____keyComparer_10 = ((RuntimeObject*)Castclass((RuntimeObject*)L_50, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyComparer_10), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_50, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		goto IL_025a;
	}

IL_0201:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_51, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		V_2 = L_52;
		goto IL_025a;
	}

IL_020f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_54, NULL);
		NullCheck(L_53);
		RuntimeObject* L_56;
		L_56 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_53, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, L_55, NULL);
		V_3 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_56, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_022c:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_57 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
		NullCheck(L_57);
		RuntimeObject* L_60;
		L_60 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_57, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, L_59, NULL);
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_60, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		goto IL_025a;
	}

IL_024a:
	{
		V_7 = (bool)1;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_61, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_8 = L_62;
	}

IL_025a:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_63 = V_9;
		NullCheck(L_63);
		bool L_64;
		L_64 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_63, NULL);
		if (L_64)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_65 = __this->____keyComparer_10;
		if (L_65)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject* L_66 = V_6;
		if (!L_66)
		{
			goto IL_0276;
		}
	}
	{
		RuntimeObject* L_67 = V_5;
		if (L_67)
		{
			goto IL_027c;
		}
	}

IL_0276:
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_68 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_68);
		SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093(L_68, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var)));
	}

IL_027c:
	{
		RuntimeObject* L_69 = V_6;
		RuntimeObject* L_70 = V_5;
		CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* L_71 = (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E*)il2cpp_codegen_object_new(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7(L_71, L_69, L_70, NULL);
		__this->____keyComparer_10 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyComparer_10), (void*)L_71);
	}

IL_028b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_3;
		if (!L_72)
		{
			goto IL_0292;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = V_4;
		if (L_73)
		{
			goto IL_0298;
		}
	}

IL_0292:
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_74 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_74);
		SerializationException__ctor_m66A581BE334B57204506D2298511E9609AF30093(L_74, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_OnDeserialization_mFF0F15B0E4DB6D9B6043E2B338160B321889C4B6_RuntimeMethod_var)));
	}

IL_0298:
	{
		int32_t L_75 = V_2;
		NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3(__this, L_75, NULL);
		V_12 = 0;
		goto IL_02b9;
	}

IL_02a4:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = V_3;
		int32_t L_77 = V_12;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		String_t* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = V_4;
		int32_t L_81 = V_12;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E(__this, L_79, L_83, NULL);
		int32_t L_84 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_02b9:
	{
		int32_t L_85 = V_12;
		int32_t L_86 = V_2;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_02a4;
		}
	}
	{
		bool L_87 = V_1;
		__this->____readOnly_8 = L_87;
		bool L_88 = V_7;
		if (!L_88)
		{
			goto IL_02d1;
		}
	}
	{
		int32_t L_89 = V_8;
		__this->____version_15 = L_89;
	}

IL_02d1:
	{
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_m107877B3D64D818F9D4E0936DA9627C4D94DF6DC (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____entriesArray_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesArray_9), (void*)L_0);
		RuntimeObject* L_1 = __this->____keyComparer_10;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____entriesTable_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesTable_11), (void*)L_2);
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL);
		int32_t L_3 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_Reset_mFF34A1D69D7F9BECD9948E748769623EFA50C0D3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_1, L_0, NULL);
		__this->____entriesArray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesArray_9), (void*)L_1);
		int32_t L_2 = ___capacity0;
		RuntimeObject* L_3 = __this->____keyComparer_10;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_4, L_2, L_3, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____entriesTable_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entriesTable_11), (void*)L_4);
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL);
		int32_t L_5 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_2);
		return ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_3, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var));
	}

IL_0017:
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_4 = __this->____nullKeyEntry_12;
		il2cpp_codegen_memory_barrier();
		return L_4;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_8;
		return L_0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_0 = NULL;
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___name0;
		RuntimeObject* L_4 = ___value1;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_5 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)il2cpp_codegen_object_new(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = ___name0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_11 = ___name0;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_12 = V_0;
		NullCheck(L_10);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_10, L_11, L_12);
		goto IL_0057;
	}

IL_0044:
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_13 = __this->____nullKeyEntry_12;
		il2cpp_codegen_memory_barrier();
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_14 = V_0;
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)L_14);
	}

IL_0057:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_15 = __this->____entriesArray_9;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_16);
		int32_t L_18 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseRemove_m4F63F5229A84FEE7CD147149A7FB81CF580BBDD0_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___name0;
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____entriesTable_11;
		il2cpp_codegen_memory_barrier();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_4, L_5);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->____entriesArray_9;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_005e;
	}

IL_0039:
	{
		RuntimeObject* L_8 = __this->____keyComparer_10;
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		String_t* L_11;
		L_11 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_10, NULL);
		NullCheck(L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_9, L_11);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = __this->____entriesArray_9;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_13, L_14);
	}

IL_005a:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_005e:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_009a;
	}

IL_0064:
	{
		il2cpp_codegen_memory_barrier();
		__this->____nullKeyEntry_12 = (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nullKeyEntry_12), (void*)(NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_17 = __this->____entriesArray_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_0096;
	}

IL_007d:
	{
		int32_t L_19 = V_1;
		String_t* L_20;
		L_20 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_19, NULL);
		if (L_20)
		{
			goto IL_0092;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = __this->____entriesArray_9;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		VirtualActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_21, L_22);
	}

IL_0092:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}

IL_009a:
	{
		int32_t L_25 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mA6FA3CE608E74CF1E4C71227EA95F15C0D2BB154 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_1;
		L_1 = NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F(__this, L_0, NULL);
		V_0 = L_1;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_2 = V_0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return NULL;
	}

IL_000d:
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___Value_1;
		return L_4;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* V_0 = NULL;
	{
		bool L_0 = __this->____readOnly_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_BaseSet_mF1F6E7F3BC7848056912C124A964641FE628CCA3_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___name0;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_4;
		L_4 = NameObjectCollectionBase_FindEntry_m1BC4B6ACCE244B544B216D16DB53A769E670876F(__this, L_3, NULL);
		V_0 = L_4;
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* L_6 = V_0;
		RuntimeObject* L_7 = ___value1;
		NullCheck(L_6);
		L_6->___Value_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Value_1), (void*)L_7);
		int32_t L_8 = __this->____version_15;
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0039:
	{
		String_t* L_9 = ___name0;
		RuntimeObject* L_10 = ___value1;
		NameObjectCollectionBase_BaseAdd_m1A8E236F037A35B3FBC7435A120B2E66EE7F563E(__this, L_9, L_10, NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_BaseGet_mE892E8066502D48BEA2E9760D2BE31FB40B8DEAA (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3 = ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var))->___Value_1;
		return L_3;
	}
}
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var)));
		String_t* L_3 = ((NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2*)CastclassClass((RuntimeObject*)L_2, NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2_il2cpp_TypeInfo_var))->___Key_0;
		return L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_GetEnumerator_mDEEC7FF01AEF8FB0739964513BAF10C4C3F254BC (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* L_0 = (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0*)il2cpp_codegen_object_new(NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NameObjectCollectionBase_get_Count_m766C6702F64CD224AB123566BAACB2A81FCBF5F0 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___index1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___index1), L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = SR_GetString_mF713FCC09E41A8D1C0DE44EDD0932A57800A9BA3(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A)), L_8, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_0055:
	{
		RuntimeArray* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_13, NULL);
		int32_t L_15 = ___index1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = __this->____entriesArray_9;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_18;
		L_18 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mF47F5F43F47C553B071EB7A6AA4A352D95B02E01_RuntimeMethod_var)));
	}

IL_007a:
	{
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(13 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, __this);
		V_0 = L_20;
		goto IL_0095;
	}

IL_0083:
	{
		RuntimeArray* L_21 = ___array0;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
		int32_t L_24 = ___index1;
		int32_t L_25 = L_24;
		___index1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_21);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_21, L_23, L_25, NULL);
	}

IL_0095:
	{
		RuntimeObject* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0083;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mAC6E9FEF3C7C442481772E568C4FBF552B908624 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_16;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_16);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mE9CAF0B3E78E95BA138B5623615D3C0242581977(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_16;
		return L_4;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mA19A4DFBCF83655C1960F608E1CE54201D224AC8 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameObjectCollectionBase_BaseGetAllKeys_m00ADAB2845483DCD590077264B6C11553BBAD744 (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____entriesArray_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0025;
	}

IL_0017:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_2;
		String_t* L_7;
		L_7 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(__this, L_6, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_7);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		return L_11;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectCollectionBase__cctor_m4D457522AA1259C7AB96A98558FC6B0C38CEEAED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_InvariantCultureIgnoreCase_mAAE3230211B6F7E6303F496B33286218FC9ADD64_inline(NULL);
		((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields*)il2cpp_codegen_static_fields_for(NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_il2cpp_TypeInfo_var))->___defaultComparer_17), (void*)L_0);
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
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectEntry__ctor_m36EA15EE18936FA78B2E4E29C63311E03221F513 (NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___Key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Key_0), (void*)L_0);
		RuntimeObject* L_1 = ___value1;
		__this->___Value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_1), (void*)L_1);
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
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* ___coll0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = ___coll0;
		__this->____coll_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coll_1), (void*)L_0);
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		__this->____version_2 = L_2;
		__this->____pos_0 = (-1);
		return;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_MoveNext_m8800474BD1E5F24E4B88D1E33ABA793CB05DD540_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_5 = __this->____pos_0;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_6 = __this->____coll_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_6);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_8 = __this->____pos_0;
		__this->____pos_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return (bool)1;
	}

IL_0048:
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_9 = __this->____coll_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_9);
		__this->____pos_0 = L_10;
		return (bool)0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_1 = __this->____coll_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_Reset_m548902A21282FB0766D833231BE700069DA316A5_RuntimeMethod_var)));
	}

IL_0023:
	{
		__this->____pos_0 = (-1);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096 (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = __this->____pos_0;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_2 = __this->____coll_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_4 = __this->____coll_1;
		int32_t L_5 = __this->____pos_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = NameObjectCollectionBase_BaseGetKey_m4435B786286C5946CFA38206FFE20E33F32A78A6(L_4, L_5, NULL);
		return L_6;
	}

IL_002e:
	{
		String_t* L_7;
		L_7 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameObjectKeysEnumerator_get_Current_m23AC7A2525995AC67EF4002996653748F33F6096_RuntimeMethod_var)));
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
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0* L_1 = (NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0*)il2cpp_codegen_object_new(NameObjectKeysEnumerator_t4182E42291FFAE1FC7B3BB46365244F202EFE7A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NameObjectKeysEnumerator__ctor_mF3026FAD0A80AADFBC11888DCB0FDF7C2DD71801(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeysCollection_get_Count_mFCE07990FBE528B3E7E2A61DFB98CDD5C4499845 (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45F384B655DDF6A33BF7B0E551F80B07399CA472)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___index1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___index1), L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = SR_GetString_mF713FCC09E41A8D1C0DE44EDD0932A57800A9BA3(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB7B372D879A173F88B1B57D2B19E95BABF6F3A)), L_8, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_0055:
	{
		RuntimeArray* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_13, NULL);
		int32_t L_15 = ___index1;
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_16 = __this->____coll_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_18;
		L_18 = SR_GetString_m2FF076D246665572FABD5913A9945E2A694DCB4D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34AE52A4D26F1742129FB49939AAFD990890D6C0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeysCollection_System_Collections_ICollection_CopyTo_m010C50CC5201D341BAC4E43F271C4A1867CA53EC_RuntimeMethod_var)));
	}

IL_007a:
	{
		RuntimeObject* L_20;
		L_20 = KeysCollection_GetEnumerator_mF70147620B0FD9164D584FDD297BE3CFF78DB4EB(__this, NULL);
		V_0 = L_20;
		goto IL_0095;
	}

IL_0083:
	{
		RuntimeArray* L_21 = ___array0;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
		int32_t L_24 = ___index1;
		int32_t L_25 = L_24;
		___index1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_21);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_21, L_23, L_25, NULL);
	}

IL_0095:
	{
		RuntimeObject* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0083;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeysCollection_System_Collections_ICollection_get_SyncRoot_m37BE37DA43215029140183C22A297186DAE6B44C (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* L_0 = __this->____coll_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeysCollection_System_Collections_ICollection_get_IsSynchronized_m0FB5A86FED023E58C1A2774C2FDA4724058CB50D (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF (KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(KeysCollection__ctor_m8E73B12D23C242C0B41933D8500EB7B1C0F129CF_RuntimeMethod_var);
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
// System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_m9F601617145FDFCA25983415C4427C47E5C170A7 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___comparer0, RuntimeObject* ___hashCodeProvider1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___comparer0;
		__this->____comparer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_0), (void*)L_0);
		RuntimeObject* L_1 = ___hashCodeProvider1;
		__this->____hcp_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hcp_2), (void*)L_1);
		return;
	}
}
// System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompatibleComparer_Equals_m09CF7F036688C2E00C8BF5618C0528BA8D8C40D5 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_4 = __this->____comparer_0;
			if (!L_4)
			{
				goto IL_002a_1;
			}
		}
		{
			RuntimeObject* L_5 = __this->____comparer_0;
			RuntimeObject* L_6 = ___a0;
			RuntimeObject* L_7 = ___b1;
			NullCheck(L_5);
			int32_t L_8;
			L_8 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_5, L_6, L_7);
			V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
			goto IL_0050;
		}

IL_002a_1:
		{
			RuntimeObject* L_9 = ___a0;
			V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0041_1;
			}
		}
		{
			RuntimeObject* L_11 = V_0;
			RuntimeObject* L_12 = ___b1;
			NullCheck(L_11);
			int32_t L_13;
			L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_11, L_12);
			V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
			goto IL_0050;
		}

IL_0041_1:
		{
			goto IL_0048;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.ArgumentException)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	}// end catch (depth: 1)

IL_0048:
	{
		RuntimeObject* L_14 = ___a0;
		RuntimeObject* L_15 = ___b1;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_15);
		return L_16;
	}

IL_0050:
	{
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibleComparer_GetHashCode_mE88BB0E4CC1A615946A43A8DE75B6F1F57B1CDAF_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____hcp_2;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->____hcp_2;
		RuntimeObject* L_4 = ___obj0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IHashCodeProvider::GetHashCode(System.Object) */, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}

IL_0023:
	{
		RuntimeObject* L_6 = ___obj0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		return L_7;
	}
}
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_0;
		return L_0;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4 (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_2;
		return L_0;
	}
}
// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultComparer_m9CC25AF4BD1553D2B2C51FDE9AC8110BABB5C5D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* L_2 = (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281*)il2cpp_codegen_object_new(CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CaseInsensitiveComparer__ctor_mCB4043516ED08874EE7AA38C56A3C3E016F4DA1E(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1), (void*)L_2);
	}

IL_001a:
	{
		RuntimeObject* L_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultComparer_1;
		il2cpp_codegen_memory_barrier();
		return L_3;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_DefaultHashCodeProvider_m292C48BD6A5A7065925BAF2BFDEBF7217516DC50 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F* L_2 = (CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F*)il2cpp_codegen_object_new(CaseInsensitiveHashCodeProvider_tF498D8C952B58B677A9C869EE6A4BC750A3FF03F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CaseInsensitiveHashCodeProvider__ctor_mE5326CFE4A3269CC813CCF1ADF2E57529E902C4B(L_2, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3), (void*)L_2);
	}

IL_001a:
	{
		RuntimeObject* L_3 = ((CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_StaticFields*)il2cpp_codegen_static_fields_for(CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E_il2cpp_TypeInfo_var))->___defaultHashProvider_3;
		il2cpp_codegen_memory_barrier();
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
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C(L_3, L_0, L_1, L_2, ((int32_t)31), NULL);
		__this->____deflateStream_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_5), (void*)L_3);
		return;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_mFF4A941C8BD1D9C3A249A084C4335EFF8FAD47BB (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m0A3EC64CE819F978DE34A8477FAAA82889AE7248 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m530B997FC6D2144F7B73E708903E6E9F39E304DD (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, G_B2_0);
		return L_2;
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m8D38670B3BE0472E83AA60F783A8EF3E1C1F01A0 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var)));
	}
}
// System.Int32 System.IO.Compression.GZipStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_ReadByte_m486ACD72754C08B02CF1B90A71A744EE92F4D42C (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return L_1;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginRead_mDD211249BF8242D28889645A05453C3D89C6B0F1 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback3;
		RuntimeObject* L_6 = ___asyncState4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_m74D46F5BDD3D2FDD5DF969205C514105C459EBEB(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EndRead_m8245FEE8D2B21A169DD1A40A67B5D398DD6005D2 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncResult0;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m41EC5D087FD227D05C8435E8704C9F0F6A7E2F9D (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_mBC83A9A584B5A2DC2B08B044E96C0E8AF33723D5 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4 = ___buffer0;
		int32_t L_5;
		L_5 = Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE(__this, L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_6 = __this->____deflateStream_5;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___buffer0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40(L_6, L_7, NULL);
		return L_8;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginWrite_mB80B01F99925CF4A6B201E77B54E7656A40474B8 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(27 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback3;
		RuntimeObject* L_6 = ___asyncState4;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_m74D46F5BDD3D2FDD5DF969205C514105C459EBEB(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_EndWrite_m7FC15F1CD67B5C6977FEB16E630545AD6E020C91 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___asyncResult0;
		TaskToApm_End_m15176F3206012448A5CD8D62B300A2880A82DBCA(L_0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mCA30092CA9BEFD7425587337A5C4451866E1EB34 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mF25D52D7EC30B244830E14477D047FC5028E51D3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___buffer0;
		Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8(__this, L_4, NULL);
		return;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_5 = __this->____deflateStream_5;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___buffer0;
		NullCheck(L_5);
		DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730(L_5, L_6, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_mD369BCB8951329CEE518D159BB1D16BBC0C709E3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___disposing0;
				if (!L_1)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_2 = __this->____deflateStream_5;
				if (!L_2)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = __this->____deflateStream_5;
				NullCheck(L_3);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
			}

IL_0016_1:
			{
				__this->____deflateStream_5 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_5), (void*)(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL);
				goto IL_0027;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* GZipStream_ReadAsync_mACECFB99609D4696156F98AE738B2038E6663471 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken3;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 GZipStream_ReadAsync_mCFF5156AFDFF16B472A323F2D1BA86BFE13C7358 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___cancellationToken1;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_6;
		L_6 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_5;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_8 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___cancellationToken1;
		NullCheck(L_7);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_10;
		L_10 = DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_WriteAsync_m2CB67E3DB87DFC01588B604C8E2D60EE1AE27EF7 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken3;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(27 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.GZipStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F GZipStream_WriteAsync_m43C1DEA3F232AFD6036CB0637831887E93488000 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_4 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___cancellationToken1;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_6;
		L_6 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_5;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_8 = ___buffer0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___cancellationToken1;
		NullCheck(L_7);
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_10;
		L_10 = DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_5;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F(NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F (const RuntimeMethod* method) 
{
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_0 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_0, (String_t*)NULL, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78875BB01F47001614AE95132434E503D00EA404)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_ThrowStreamClosedException_m7B905CA279182188E2191C564DC9415234005D5F_RuntimeMethod_var)));
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
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m344C1EF8B83E612C4FC662F0152DF1D2A5636829 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, (bool)0, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, int32_t ___windowsBits3, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___compressedStream0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59BD369CF985844B111CA4447943A285D359441C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___mode1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___mode1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___compressedStream0;
		__this->___base_stream_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_5), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___compressedStream0;
		int32_t L_7 = ___mode1;
		bool L_8 = ___gzip3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_9;
		L_9 = DeflateStreamNative_Create_m628D0A7F7EE62339C0D867FBF4319093C82018A7(L_6, L_7, L_8, NULL);
		__this->___native_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___native_9), (void*)L_9);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_10 = __this->___native_9;
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_12 = ___mode1;
		__this->___mode_6 = L_12;
		bool L_13 = ___leaveOpen2;
		__this->___leaveOpen_7 = L_13;
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finalize_mAFF7BCEF197A6549D13572A0AFD326CD995EA7AC (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(19 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B4_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_0 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
	}

IL_0009:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = __this->___native_9;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		bool L_3 = ___disposing0;
		NullCheck(G_B4_0);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(G_B4_0, L_3, NULL);
	}

IL_001b:
	{
		bool L_4 = ___disposing0;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->___disposed_8;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___disposed_8 = (bool)1;
		bool L_6 = __this->___leaveOpen_7;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___base_stream_5;
		V_0 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_9);
	}

IL_0045:
	{
		__this->___base_stream_5 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_5), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_004c:
	{
		bool L_10 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_10, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_9;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___destination0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___destination0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken1;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_2;
		L_2 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___destination0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_inline(L_5, 0, L_6, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_RuntimeMethod_var);
		V_2 = L_7;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = ___destination0;
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_2), L_8, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0027:
	{
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		NullCheck(L_8);
		V_0 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		int32_t L_9 = ___offset1;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = ___count2;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}

IL_0046:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0051:
	{
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_15 = ___offset1;
		int32_t L_16 = ___count2;
		int32_t L_17 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16))) <= ((int32_t)L_17)))
		{
			goto IL_0071;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53549F14C4C0C01E846937308C01413567514ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___array0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___count2;
		int32_t L_22;
		L_22 = DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C(__this, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001c;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001c:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___offset1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_9;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18(L_7, L_8, L_9, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___source0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_0 = ___source0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___cancellationToken1;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_2;
		L_2 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E((&___source0), ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___source0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, L_1);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___offset1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0045:
	{
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_12 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___array0;
		NullCheck(L_13);
		int32_t L_14 = ___count2;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)))))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___array0;
		int32_t L_17 = ___offset1;
		int32_t L_18 = ___count2;
		DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845(__this, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_5 = __this->___native_9;
		NullCheck(L_5);
		DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F(L_5, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___offset1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___count2;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0075:
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_16 = (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)il2cpp_codegen_object_new(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396(L_16, __this, (intptr_t)((void*)DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___asyncCallback3;
		RuntimeObject* L_21 = ___asyncState4;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___offset1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___count2;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0075:
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_16 = (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)il2cpp_codegen_object_new(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A(L_16, __this, (intptr_t)((void*)DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___asyncCallback3;
		RuntimeObject* L_21 = ___asyncState4;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B6_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_6 = ((ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)IsInstSealed((RuntimeObject*)L_5, ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(G_B6_0);
		int32_t L_9;
		L_9 = ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7(G_B6_0, L_8, NULL);
		return L_9;
	}
}
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B6_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_6 = ((WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)IsInstSealed((RuntimeObject*)L_5, WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(G_B6_0);
		WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C(G_B6_0, L_8, NULL);
		return;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var)));
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___mode_6;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_8;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->___mode_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var)));
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
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* currentDelegate = reinterpret_cast<ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* currentDelegate = reinterpret_cast<WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2);

}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast;
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486(___buffer0, ___length1, ___data2, NULL);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m628D0A7F7EE62339C0D867FBF4319093C82018A7 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___compressedStream0, int32_t ___mode1, bool ___gzip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B2_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B1_0 = NULL;
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* G_B3_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_1 = NULL;
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_0 = (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)il2cpp_codegen_object_new(DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E(L_0, NULL);
		V_0 = L_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = V_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6(L_2, NULL);
		NullCheck(L_1);
		L_1->___data_3 = L_3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_0;
		int32_t L_5 = ___mode1;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0025;
		}
	}
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_6 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_6, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704_RuntimeMethod_var), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0025:
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_7 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_7, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486_RuntimeMethod_var), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___feeder_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___feeder_0), (void*)G_B3_0);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_8 = V_0;
		int32_t L_9 = ___mode1;
		bool L_10 = ___gzip2;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_11 = V_0;
		NullCheck(L_11);
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_12 = L_11->___feeder_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_13 = V_0;
		NullCheck(L_13);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = L_13->___data_3;
		intptr_t L_15;
		L_15 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_14, NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_16;
		L_16 = DeflateStreamNative_CreateZStream_m5075DD90424301C1C82A2142AA530FDC6F345006(L_9, L_10, L_12, L_15, NULL);
		NullCheck(L_8);
		L_8->___z_stream_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___z_stream_2), (void*)L_16);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_17 = V_0;
		NullCheck(L_17);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_18 = L_17->___z_stream_2;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_20 = V_0;
		NullCheck(L_20);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(L_20, (bool)1, NULL);
		return (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)NULL;
	}

IL_006a:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_21 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___compressedStream0;
		NullCheck(L_21);
		L_21->___base_stream_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___base_stream_1), (void*)L_22);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_23 = V_0;
		return L_23;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->___disposed_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->___disposed_4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		goto IL_0025;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		__this->___base_stream_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_1), (void*)L_2);
	}

IL_0025:
	{
		__this->___io_buffer_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_3 = __this->___z_stream_2;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_4 = __this->___z_stream_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_6 = __this->___z_stream_2;
		NullCheck(L_6);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_6, NULL);
	}

IL_004c:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = __this->___data_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (&__this->___data_3);
		bool L_9;
		L_9 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___data_3);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		int32_t L_1;
		L_1 = DeflateStreamNative_Flush_mAC7D59B136EB2C8B1512123F21B91976CDE33D5F(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_2, _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_ReadZStream_mC4E36C2FDE3E7850B154FE6A09825D7B055E1519(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F, NULL);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = DeflateStreamNative_WriteZStream_m95704830E739FD66C207ED91323852F7E0FCC35B(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m79E9628F6FF91A3995491997242DD83046C9B704 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___buffer0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_0 = L_4;
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_1 = L_8;
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_9 = V_2;
		__this->___last_error_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_9);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_004a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___io_buffer_5;
		intptr_t L_12 = ___buffer0;
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8(L_11, 0, L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_005e:
	{
		int32_t L_15 = V_3;
		return L_15;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m509AE153ECB916CDF755432335FBAB2B51CA1486 (intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___data2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___buffer0;
		int32_t L_6 = ___length1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_001c:
	{
		int32_t L_2 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		intptr_t L_5 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_5, L_6, 0, L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___io_buffer_5;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_11 = V_2;
		__this->___last_error_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_11);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007a;
	}// end catch (depth: 1)

IL_005b:
	{
		void* L_12;
		L_12 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___buffer0), NULL);
		int32_t L_13 = V_1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&___buffer0), ((void*)il2cpp_codegen_add((intptr_t)L_12, L_13)), NULL);
		int32_t L_14 = ___length1;
		int32_t L_15 = V_1;
		___length1 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
	}

IL_0074:
	{
		int32_t L_18 = ___length1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_007a:
	{
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___result0, String_t* ___where1, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___result0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		Exception_t** L_1 = (&__this->___last_error_6);
		Exception_t* L_2;
		L_2 = InterlockedExchangeImpl<Exception_t*>(L_1, (Exception_t*)NULL);
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_5 = ___result0;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)-11))))
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_008e;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_0076;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_0066;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0056;
			}
			case 10:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_004e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
		goto IL_0094;
	}

IL_0056:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163));
		goto IL_0094;
	}

IL_005e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB));
		goto IL_0094;
	}

IL_0066:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41));
		goto IL_0094;
	}

IL_006e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D));
		goto IL_0094;
	}

IL_0076:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D));
		goto IL_0094;
	}

IL_007e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408));
		goto IL_0094;
	}

IL_0086:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548));
		goto IL_0094;
	}

IL_008e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
	}

IL_0094:
	{
		String_t* L_6 = V_1;
		String_t* L_7 = ___where1;
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_7, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}
}
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m5075DD90424301C1C82A2142AA530FDC6F345006 (int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder2, intptr_t ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (int32_t, int32_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___feeder2' to native representation
	Il2CppMethodPointer ____feeder2_marshaled = NULL;
	____feeder2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___feeder2));

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateZStream)(___compress0, static_cast<int32_t>(___gzip1), ____feeder2_marshaled, ___data3);

	// Marshaling of return value back from native representation
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* _returnValue_unmarshaled = (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8*)il2cpp_codegen_object_new(SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
	SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_mEA426722FFB221614DC4AFEC80BBB4382B375187 (intptr_t ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseZStream)(___stream0);

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_mAC7D59B136EB2C8B1512123F21B91976CDE33D5F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Flush)(____stream0_marshaled);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mC4E36C2FDE3E7850B154FE6A09825D7B055E1519 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m95704830E739FD66C207ED91323852F7E0FCC35B (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___stream0, intptr_t ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___stream0' to native representation
	void* ____stream0_marshaled = NULL;
	if (___stream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____stream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stream0, (&___safeHandle_reference_incremented_for____stream0), NULL);
	____stream0_marshaled = reinterpret_cast<void*>((___stream0)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WriteZStream)(____stream0_marshaled, ___buffer1, ___length2);

	// Marshaling cleanup of parameter '___stream0' native representation
	if (___safeHandle_reference_incremented_for____stream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stream0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* currentDelegate = reinterpret_cast<UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenInst(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buffer0, ___length1, ___data2, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buffer0, ___length1, ___data2);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buffer0, ___length1, ___data2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buffer0, ___length1, ___data2);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buffer0, ___length1, ___data2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		return;
	}
}
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = DeflateStreamNative_CloseZStream_mEA426722FFB221614DC4AFEC80BBB4382B375187(L_0, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC09A19935970846B38570D03608F0E5F25E2020C (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
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
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___parentElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
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
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___parent0, RuntimeObject* ___configContext1, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___section2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NameObjectCollectionBase_get_IsReadOnly_m1B1072E33B3B42507F822EBB61F75A804A1D503A_inline (NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_m1085836D796353C24686CF56026EB89D783BBFC4_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_mFA7D1FF54540B95FED7C58DBCDB7ACC037FD3DF9_inline (CompatibleComparer_t8D7ECAA82055FA1BAC99BA4139D4A818120EBA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCultureIgnoreCase_mAAE3230211B6F7E6303F496B33286218FC9ADD64_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_invariantCultureIgnoreCase_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5B6280F768868B1F7D445C71C0134F220891A314_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___array0;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___start1;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___length2;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
