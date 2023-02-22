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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70;
// System.Action`2<UnityEngine.AudioClip,System.String>
struct Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.Object,System.Single>
struct Action_2_t4A5313D1C1FEF099C0E5969104BDE957CD82CF22;
// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E;
// System.Action`2<System.String,System.Boolean>
struct Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A;
// System.Action`2<System.String,System.Single>
struct Action_2_t2399F3C34C43EB392520F878CA121755E120498E;
// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D;
// System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>
struct Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79;
// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean>
struct Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC;
// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>
struct Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7;
// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74;
// System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String>
struct Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225;
// System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri>
struct Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<System.String,UnityEngine.AudioClip,System.String>
struct Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A;
// System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct Action_3_t3D676E8D072895C382459BE5575CBA308018765C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>
struct Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>
struct Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.UriBuilder,System.Uri>
struct Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.TTS.Data.TTSClipData>
struct IEnumerable_1_t5F92A7D8BD735C2B060951F94E50FAB0542F9ED4;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>
struct KeyCollection_t9BC09A235261D4D182BBFE3C802C095A4443790A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>
struct KeyCollection_tC7C7805BF00D5A6BEA73B655FAD1A7458279A529;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Facebook.WitAi.TTS.TTSService>
struct Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52;
// System.Predicate`1<Facebook.WitAi.TTS.Data.TTSVoiceSettings>
struct Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Facebook.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityAction`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323;
// UnityEngine.Events.UnityAction`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4;
// UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Utilities.TTSSpeaker,System.String>
struct UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4;
// UnityEngine.Events.UnityEvent`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct ValueCollection_t7E5C565B83017703251B47439DD3D79734904801;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>
struct ValueCollection_t19DE239DC3375A7845258A4CC4B9DE5A71C9C1A1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>
struct ValueCollection_tD70844A1ED2CD39D49C7A4FBEF00AE696D937D67;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Facebook.WitAi.TTS.Data.TTSClipData>[]
struct EntryU5BU5D_tB610590DEB2802FE8557E1A2D53535677A6272C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>[]
struct EntryU5BU5D_t7E36030EE3275E16EAC1588512AB681154B4F505;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>[]
struct EntryU5BU5D_t1E5D15DD216369C2F12BFED1DD505C80F54E08A1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Facebook.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33;
// Facebook.WitAi.TTS.TTSService[]
struct TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140;
// Facebook.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91;
// Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Facebook.WitAi.Data.Entities.WitEntity[]
struct WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65;
// Facebook.WitAi.Data.Intents.WitIntent[]
struct WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB;
// Facebook.WitAi.Data.Traits.WitTrait[]
struct WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC;
// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler
struct ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1;
// Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler
struct ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B;
// Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider
struct ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299;
// Facebook.WitAi.TTS.Interfaces.ITTSWebHandler
struct ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
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
// UnityEngine.RangeAttribute
struct RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Facebook.WitAi.TTS.Data.TTSClipData
struct TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15;
// Facebook.WitAi.TTS.Events.TTSClipDownloadErrorEvent
struct TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A;
// Facebook.WitAi.TTS.Events.TTSClipDownloadEvent
struct TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF;
// Facebook.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD;
// Facebook.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945;
// Facebook.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6;
// Facebook.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65;
// Facebook.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651;
// Facebook.WitAi.TTS.Integrations.TTSRuntimeCache
struct TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF;
// Facebook.WitAi.TTS.TTSService
struct TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD;
// Facebook.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB;
// Facebook.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB;
// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852;
// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862;
// Facebook.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31;
// Facebook.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104;
// Facebook.WitAi.TTS.Integrations.TTSWit
struct TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B;
// Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest
struct VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Facebook.WitAi.Data.Configuration.WitApplication
struct WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C;
// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD;
// Facebook.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest
struct WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B;
// Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C;
// Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E;
// Facebook.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9;
// Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C;
// Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97;
// Facebook.WitAi.TTS.TTSService/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B;
// Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35
struct U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5;
// Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27
struct U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286;
// Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961;
// Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25
struct U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c
struct U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2399F3C34C43EB392520F878CA121755E120498E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t3D676E8D072895C382459BE5575CBA308018765C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheLocation_t853A7011F61767B6242ABD20BABA104D61CD047D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C;
IL2CPP_EXTERN_C String_t* _stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2FFE95110A9382EE479E1DB659AEDC06132997;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CEA85C7135768ECC5156FEFBAB7BC2717C26009;
IL2CPP_EXTERN_C String_t* _stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9;
IL2CPP_EXTERN_C String_t* _stringLiteral105B80D12DB6276478E269600E49F476237FA089;
IL2CPP_EXTERN_C String_t* _stringLiteral109F24FE754618B6711730BF8202FE3DD259F9A5;
IL2CPP_EXTERN_C String_t* _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
IL2CPP_EXTERN_C String_t* _stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1639CF105315D420AFDD8C8BD886E05FA950557B;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676;
IL2CPP_EXTERN_C String_t* _stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261;
IL2CPP_EXTERN_C String_t* _stringLiteral2F67EDD17F502E8BE5C9CE81D80F4F4BC64E79B1;
IL2CPP_EXTERN_C String_t* _stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B;
IL2CPP_EXTERN_C String_t* _stringLiteral349AAE44F6B2A33FF1E13B6095ECA68746040DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD;
IL2CPP_EXTERN_C String_t* _stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1;
IL2CPP_EXTERN_C String_t* _stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral49C01923136530AB3D466B01CE56D524D05E3FAF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral5BC654B648FE77FA6112E8E3C960B5541CD4AE4E;
IL2CPP_EXTERN_C String_t* _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral6326FFB8548BB1176646EDEDE926CB5DA9106026;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral69A4B52D76FD413D44C178C9B1C353D678388583;
IL2CPP_EXTERN_C String_t* _stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral7023D9BCF916A7AA90A336FA9CB4F43A2CA9CD64;
IL2CPP_EXTERN_C String_t* _stringLiteral74E3FA38770254166118D359A4E4DE7FC6B8718D;
IL2CPP_EXTERN_C String_t* _stringLiteral7508047DA9D9EFA48BC101D66AB6D436C084F77C;
IL2CPP_EXTERN_C String_t* _stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral83EF01182FDC054BBC22CD6E76CEF5F369050A7B;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8938D7942C254913A76B4869239949263802711D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4;
IL2CPP_EXTERN_C String_t* _stringLiteralA937C899247696B6565665BE3BD09607F49A2042;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84;
IL2CPP_EXTERN_C String_t* _stringLiteralB217444EAC4744C203410B8BAF3DB3D0DE0EB57A;
IL2CPP_EXTERN_C String_t* _stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D;
IL2CPP_EXTERN_C String_t* _stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBC32F77CB3EA50F6385017E3FB6CDE22EB44CE60;
IL2CPP_EXTERN_C String_t* _stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B1000C31CF4895724E513340B19C099E04353C;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralC567FA2104A52A4FABA4DF88810B08F561D7726A;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A78E48BD288467843E179246A4E0BBB2D2ED9D;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
IL2CPP_EXTERN_C String_t* _stringLiteralD940B5E3E33ECDE4809B7014CF8207A0152C7767;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFC50E73367A371A2A214A0D87A032D8DA07B07DA;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_m30A13F7E66E232116645837B52BABC7B6EB7919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisTTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104_m477E4DC0A6BA52F28C5CDF1496D3E9F336F2B23E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m3432BF0E9BB88F8FD553E61A2216F1052D21A79C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD6E9F3B1C7D9B46F2CA85BAFB2FC72147CDE4232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m52404A5B8D47E59803815968C1E7DB9B5AF53DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8A5BA57F8A1C9C470C3AF070172EF2F57FE8AA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA4B7C76FE615E7BDD325C2B88382D8D1DED531E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m3726F85275C4AEC5E131D3235A97E95CD1AB1DD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA9A99F5A6C9786D97FE519A60D110EBE65060250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisAudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_mBF741BA29A25B0F49730557F32687450D0080C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_m1DEE63117869715E42B6B7CAAFEF35C5A2FDDC8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE5ABDE826C6B7E02D026E21F1452DF7D553E5696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC1B365E009BA9697D6E1A96A88BFE8AA24366112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m58D05EAD9953F5A5DDEFD0F7BD37CEF18462B87F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_mB61423632BA71692700EF81F421AFED94688C049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_m1E68C07D07D07A6D90D420DEB2A30E01C9C7861E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m80871A06C0FE5DB09B22970F1A40627263B00FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_mE147C77154A41307F480ADC82501AAD959465EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamBegin_m0F72BA1CB1E085E21764EF778988BB14F11F6385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamCancel_m890D6D96308198CDB9E751F2F483F6FAADF71C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamError_mABE1088C2B6EB9510A61127EBC50BCF7497BF3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamReady_mBD9BADE3481ED6182217220E0865B346063968DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadError_m38D3B9F9312B9CFBC958610CD30FDC492BBFE695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadSuccess_m924957A95BB1E5286384B1F30EAE7D3C04736D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamReady_m427CFD05C37F97ECB308BB1C6D7586CE07D71B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m8F7DD45A08BDD1A3409B8558F3A753C568ED73A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnPlaybackWaitU3Ed__27_System_Collections_IEnumerator_Reset_m4AC90E697803D6096B493CBD4B83E110D52369AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformUpdateU3Ed__25_System_Collections_IEnumerator_Reset_m7AADF144F4E2462E7353F50AD25FECE405675F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRequestTTSStreamU3Eb__4_0_mF7877CE783FCFE0BE2F182B84F542003B1E15366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mFBAD312C057DCD8CBE56B07A0A2D2D5EC05F9158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m64F34AEFA8EA6EEE16DE4A3317F23D49A0B07D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m3A3F3525E74CC8ACBDB7CEC9A628D8B71C038FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m7FDEBA08B24FD40C5FAA73AE1BF245DE9404D0D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mABBFBCC5E36FEEBC915B4A95986F6F448A50E40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_mEE65F1B2511B0CFC5685D1D8AA6AC4B9D41D16A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_m81CA877CE5F59809D9CDCF95125CAD9CD8CEE827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_m6E8A1B8A19B1E69668B96F749CDA35138F8305B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__0_m11C17558E0994B70F078FB937ED27C4977B23072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__1_m62A06C0F7C1E2A471405E9E66C0B6C34664C65E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m99928E1F2B162041FD4A9B97C2109A5511A807C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mC6986DFE9D64E2E70A09BFFC13027613B2587BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_mAD3ED337AF17390239B7A22243625D6204595DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mACF312205C963BFA8109098A53B4E20B8CF542F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_m05451A0844CD8DF8D6F774B7B9B30595A7CEDD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m3DC21A71DF0AA64B211CE49FFCB83BA254FCB2BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CRequestHeadersU3Eb__0_m5E01FB94E2FED7B4D2F5ABE8AEADD4AA70E7EECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__0_m8DFB20D7A300E9BE5A389E3A8BD0DE0A462E8CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__2_mB87FF84130C4E0402BCA9C2383E8E9C1FC01B465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CRequestTTSStreamU3Eb__1_m860C1F2277E461A604D4535F77C72A69A79C0F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CCheckFileExistsU3Eb__1_mB714384976C91B8FBE2ECAA61839D54FB13B12CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__0_m598B490F306521B90EB7031390DF738874B95984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__1_mF36CDE53CE312407BB5A292BF34260704437CCED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_mDF4E759C25A703524DC1818716D7AACEFB31E503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m33CF2D29C3BDF03758E2FD8E92893DA0E2679A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mA142AB3AA507E747D6277C8D4738E4D2291E2747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CRequestTTSU3Eb__0_mAEF2B87F9AA1E3A11E5A6E499F78C14D320209B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__0_mFA7220BBDB1801D069F75031707FCDBC85DBCFE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__1_m5482CEF064071E7ACC1369982200643ADCE9F057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CRequestTTSVoicesU3Eb__0_m0D2CD5062DB115A45909FEA9DD165B278D5889E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m06BC82994273E61B2B7D073B846884C909901B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m5E06ABFB25D8BF888C80BC3E1CACF5EE68899683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_AddListener_mC98DD737DD6481563C2DFA6EE4E0DF841516F55F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_RemoveListener_m90876C834CD955A903DE77E301E22F443406A107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m68DA004144A6FAC2EF4B2391126211708DE83ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33;
struct TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140;
struct TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91;
struct TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8E67C147A80A84667474BED923667DF390868886 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB610590DEB2802FE8557E1A2D53535677A6272C2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7E5C565B83017703251B47439DD3D79734904801* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>
struct Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7E36030EE3275E16EAC1588512AB681154B4F505* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9BC09A235261D4D182BBFE3C802C095A4443790A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t19DE239DC3375A7845258A4CC4B9DE5A71C9C1A1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>
struct Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E5D15DD216369C2F12BFED1DD505C80F54E08A1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC7C7805BF00D5A6BEA73B655FAD1A7458279A529* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD70844A1ED2CD39D49C7A4FBEF00AE696D937D67* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* ____dictionary_0;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct ValueCollection_t7E5C565B83017703251B47439DD3D79734904801  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Facebook.WitAi.TTS.Data.TTSClipData
struct TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15  : public RuntimeObject
{
	// System.String Facebook.WitAi.TTS.Data.TTSClipData::textToSpeak
	String_t* ___textToSpeak_0;
	// System.String Facebook.WitAi.TTS.Data.TTSClipData::clipID
	String_t* ___clipID_1;
	// UnityEngine.AudioType Facebook.WitAi.TTS.Data.TTSClipData::audioType
	int32_t ___audioType_2;
	// Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.Data.TTSClipData::voiceSettings
	TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings_3;
	// Facebook.WitAi.TTS.Data.TTSDiskCacheSettings Facebook.WitAi.TTS.Data.TTSClipData::diskCacheSettings
	TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.TTS.Data.TTSClipData::queryParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParameters_5;
	// UnityEngine.AudioClip Facebook.WitAi.TTS.Data.TTSClipData::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_6;
	// Facebook.WitAi.TTS.Data.TTSClipLoadState Facebook.WitAi.TTS.Data.TTSClipData::loadState
	int32_t ___loadState_7;
	// System.Single Facebook.WitAi.TTS.Data.TTSClipData::loadProgress
	float ___loadProgress_8;
	// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState> Facebook.WitAi.TTS.Data.TTSClipData::onStateChange
	Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74* ___onStateChange_9;
	// System.Action`1<System.String> Facebook.WitAi.TTS.Data.TTSClipData::onPlaybackReady
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPlaybackReady_10;
	// System.Action`1<System.String> Facebook.WitAi.TTS.Data.TTSClipData::onDownloadComplete
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete_11;
};

// Facebook.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Data.TTSDiskCacheLocation Facebook.WitAi.TTS.Data.TTSDiskCacheSettings::DiskCacheLocation
	int32_t ___DiskCacheLocation_0;
};

// Facebook.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Events.TTSClipDownloadEvent Facebook.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadBegin
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* ___OnDownloadBegin_0;
	// Facebook.WitAi.TTS.Events.TTSClipDownloadEvent Facebook.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadSuccess
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* ___OnDownloadSuccess_1;
	// Facebook.WitAi.TTS.Events.TTSClipDownloadEvent Facebook.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadCancel
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* ___OnDownloadCancel_2;
	// Facebook.WitAi.TTS.Events.TTSClipDownloadErrorEvent Facebook.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadError
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* ___OnDownloadError_3;
};

// Facebook.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Events.TTSServiceEvents::OnClipCreated
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___OnClipCreated_0;
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Events.TTSServiceEvents::OnClipUnloaded
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___OnClipUnloaded_1;
	// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Events.TTSServiceEvents::Stream
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* ___Stream_2;
	// Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Events.TTSServiceEvents::Download
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* ___Download_3;
};

// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadBegin
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnClipLoadBegin_0;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadFailed
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnClipLoadFailed_1;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadSuccess
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnClipLoadSuccess_2;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadAbort
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnClipLoadAbort_3;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnStartSpeaking
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnStartSpeaking_4;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnFinishedSpeaking
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnFinishedSpeaking_5;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::OnCancelledSpeaking
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* ___OnCancelledSpeaking_6;
};

// Facebook.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Events.TTSStreamEvents::OnStreamBegin
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___OnStreamBegin_0;
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Events.TTSStreamEvents::OnStreamReady
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___OnStreamReady_1;
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Events.TTSStreamEvents::OnStreamCancel
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___OnStreamCancel_2;
	// Facebook.WitAi.TTS.Events.TTSClipErrorEvent Facebook.WitAi.TTS.Events.TTSStreamEvents::OnStreamError
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* ___OnStreamError_3;
};

// Facebook.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104  : public RuntimeObject
{
	// System.String Facebook.WitAi.TTS.Data.TTSVoiceSettings::settingsID
	String_t* ___settingsID_1;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72  : public RuntimeObject
{
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;
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

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest
struct VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667  : public RuntimeObject
{
	// System.Boolean Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_transmitting
	bool ____transmitting_3;
	// System.Single Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_progress
	float ____progress_4;
	// UnityEngine.Networking.UnityWebRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____request_5;
	// System.Action`1<System.Single> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_onProgress
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ____onProgress_6;
	// System.Action`1<UnityEngine.Networking.UnityWebRequest> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_onComplete
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ____onComplete_7;
	// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_coroutine
	CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* ____coroutine_8;
};

struct VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields
{
	// System.Int32 Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::_requestCount
	int32_t ____requestCount_1;
	// System.Int32 Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Timeout
	int32_t ___Timeout_2;
};

// Facebook.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0  : public RuntimeObject
{
	// System.String Facebook.WitAi.Configuration.WitEndpointConfig::uriScheme
	String_t* ___uriScheme_1;
	// System.String Facebook.WitAi.Configuration.WitEndpointConfig::authority
	String_t* ___authority_2;
	// System.Int32 Facebook.WitAi.Configuration.WitEndpointConfig::port
	int32_t ___port_3;
	// System.String Facebook.WitAi.Configuration.WitEndpointConfig::witApiVersion
	String_t* ___witApiVersion_4;
	// System.String Facebook.WitAi.Configuration.WitEndpointConfig::speech
	String_t* ___speech_5;
	// System.String Facebook.WitAi.Configuration.WitEndpointConfig::message
	String_t* ___message_6;
	// System.String Facebook.WitAi.Configuration.WitEndpointConfig::dictation
	String_t* ___dictation_7;
};

struct WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_StaticFields
{
	// Facebook.WitAi.Configuration.WitEndpointConfig Facebook.WitAi.Configuration.WitEndpointConfig::defaultEndpointConfig
	WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* ___defaultEndpointConfig_0;
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

// Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Integrations.TTSDiskCache Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::<>4__this
	TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* ___U3CU3E4__this_0;
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::clipData
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData_1;
	// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean> Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::onCheckComplete
	Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* ___onCheckComplete_2;
};

// Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::clipData
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData_0;
	// Facebook.WitAi.TTS.Integrations.TTSDiskCache Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<>4__this
	TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* ___U3CU3E4__this_1;
};

// Facebook.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9  : public RuntimeObject
{
};

struct U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields
{
	// Facebook.WitAi.TTS.TTSService/<>c Facebook.WitAi.TTS.TTSService/<>c::<>9
	U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9* ___U3CU3E9_0;
	// System.Predicate`1<Facebook.WitAi.TTS.TTSService> Facebook.WitAi.TTS.TTSService/<>c::<>9__1_0
	Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* ___U3CU3E9__1_0_1;
};

// Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C  : public RuntimeObject
{
	// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String> Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::onStreamReady
	Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* ___onStreamReady_0;
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::clipData
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData_1;
	// Facebook.WitAi.TTS.TTSService Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<>4__this
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* ___U3CU3E4__this_2;
	// System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String> Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<>9__5
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___U3CU3E9__5_3;
};

// Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97  : public RuntimeObject
{
	// Facebook.WitAi.TTS.TTSService Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<>4__this
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* ___U3CU3E4__this_0;
	// System.String Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::downloadPath
	String_t* ___downloadPath_1;
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::clipData
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData_2;
	// System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String> Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::onDownloadComplete
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete_3;
	// System.Action`1<System.String> Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<>9__1
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__1_4;
};

// Facebook.WitAi.TTS.TTSService/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B  : public RuntimeObject
{
	// System.String Facebook.WitAi.TTS.TTSService/<>c__DisplayClass69_0::presetVoiceId
	String_t* ___presetVoiceId_0;
};

// Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35
struct U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5  : public RuntimeObject
{
	// System.Int32 Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Action Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::call
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call_2;
};

// Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27
struct U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286  : public RuntimeObject
{
	// System.Int32 Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Facebook.WitAi.TTS.Utilities.TTSSpeaker Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::<>4__this
	TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* ___U3CU3E4__this_2;
};

// Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::clipData
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData_0;
	// Facebook.WitAi.TTS.Integrations.TTSWit Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<>4__this
	TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* ___U3CU3E4__this_1;
};

// Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::clipData
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData_0;
	// Facebook.WitAi.TTS.Integrations.TTSWit Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<>4__this
	TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* ___U3CU3E4__this_1;
	// System.String Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::downloadPath
	String_t* ___downloadPath_2;
};

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0  : public RuntimeObject
{
	// System.Action`2<System.String,System.Single> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::onFileProgress
	Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onFileProgress_0;
	// System.String Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::fileUrl
	String_t* ___fileUrl_1;
	// System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::onFileLoaded
	Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* ___onFileLoaded_2;
};

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD  : public RuntimeObject
{
	// System.String Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0::fileUrl
	String_t* ___fileUrl_0;
	// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0::onHeadersObtained
	Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* ___onHeadersObtained_1;
};

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970  : public RuntimeObject
{
	// System.Action`2<System.String,System.Boolean> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0::onFileExistDetermined
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ___onFileExistDetermined_0;
	// System.String Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0::filePath
	String_t* ___filePath_1;
};

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9  : public RuntimeObject
{
	// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1::request
	VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* ___request_0;
	// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0 Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* ___CSU24U3CU3E8__locals1_1;
};

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B  : public RuntimeObject
{
	// System.Action`2<System.String,System.Single> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::onAudioClipProgress
	Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onAudioClipProgress_0;
	// System.String Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::audioUrl
	String_t* ___audioUrl_1;
	// System.Action`3<System.String,UnityEngine.AudioClip,System.String> Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::onAudioClipReady
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady_2;
};

// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25
struct U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4  : public RuntimeObject
{
	// System.Int32 Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::<>4__this
	VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* ___U3CU3E4__this_2;
};

// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c
struct U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA  : public RuntimeObject
{
};

struct U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields
{
	// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c::<>9
	U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA* ___U3CU3E9_0;
	// System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri> Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c::<>9__4_0
	Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* ___U3CU3E9__4_0_1;
};

// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F  : public RuntimeObject
{
	// System.Action`2<UnityEngine.AudioClip,System.String> Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass4_0::onClipReady
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* ___onClipReady_0;
};

// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1  : public RuntimeObject
{
	// System.String Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::tempDownloadPath
	String_t* ___tempDownloadPath_0;
	// System.String Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::downloadPath
	String_t* ___downloadPath_1;
	// System.Action`1<System.String> Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::onDownloadComplete
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete_2;
};

// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2  : public RuntimeObject
{
	// System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String> Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass6_0::onComplete
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* ___onComplete_0;
};

// Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA  : public RuntimeObject
{
	// System.Action`2<System.String,System.String> Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass8_0::onComplete
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___onComplete_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Facebook.WitAi.TTS.Data.TTSClipData>
struct Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Utilities.TTSSpeaker,System.String>
struct UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568 
{
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings::configuration
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration_0;
};
// Native definition for P/Invoke marshalling of Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_pinvoke
{
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration_0;
};
// Native definition for COM marshalling of Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_com
{
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration_0;
};

// Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923  : public TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104
{
	// System.String Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::voice
	String_t* ___voice_4;
	// System.String Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::style
	String_t* ___style_5;
	// System.Int32 Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::speed
	int32_t ___speed_6;
	// System.Int32 Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::pitch
	int32_t ___pitch_7;
	// System.Int32 Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::gain
	int32_t ___gain_8;
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

// Facebook.WitAi.TTS.Utilities.WitUnityRequest
struct WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB  : public VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667
{
};

struct WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields
{
	// UnityEngine.AudioType Facebook.WitAi.TTS.Utilities.WitUnityRequest::TTSAudioType
	int32_t ___TTSAudioType_9;
	// System.Func`2<System.UriBuilder,System.Uri> Facebook.WitAi.TTS.Utilities.WitUnityRequest::OnProvideCustomUri
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* ___OnProvideCustomUri_13;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Facebook.WitAi.TTS.Utilities.WitUnityRequest::OnProvideCustomHeaders
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___OnProvideCustomHeaders_14;
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

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RangeAttribute
struct RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Facebook.WitAi.TTS.Events.TTSClipDownloadErrorEvent
struct TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A  : public UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F
{
};

// Facebook.WitAi.TTS.Events.TTSClipDownloadEvent
struct TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF  : public UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4
{
};

// Facebook.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD  : public UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4
{
};

// Facebook.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945  : public UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A
{
};

// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852  : public UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237
{
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerAudioClip::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.AudioClip,System.String>
struct Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Single>
struct Action_2_t4A5313D1C1FEF099C0E5969104BDE957CD82CF22  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Boolean>
struct Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Single>
struct Action_2_t2399F3C34C43EB392520F878CA121755E120498E  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>
struct Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79  : public MulticastDelegate_t
{
};

// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean>
struct Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC  : public MulticastDelegate_t
{
};

// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>
struct Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7  : public MulticastDelegate_t
{
};

// System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String>
struct Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri>
struct Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,UnityEngine.AudioClip,System.String>
struct Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A  : public MulticastDelegate_t
{
};

// System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct Action_3_t3D676E8D072895C382459BE5575CBA308018765C  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.UriBuilder,System.Uri>
struct Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28  : public MulticastDelegate_t
{
};

// System.Predicate`1<Facebook.WitAi.TTS.TTSService>
struct Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52  : public MulticastDelegate_t
{
};

// System.Predicate`1<Facebook.WitAi.TTS.Data.TTSVoiceSettings>
struct Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Facebook.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Facebook.WitAi.Data.Configuration.WitApplication Facebook.WitAi.Data.Configuration.WitConfiguration::application
	WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* ___application_4;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::configId
	String_t* ___configId_5;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::clientAccessToken
	String_t* ___clientAccessToken_6;
	// System.Int32 Facebook.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Facebook.WitAi.Configuration.WitEndpointConfig Facebook.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* ___endpointConfiguration_8;
	// Facebook.WitAi.Data.Entities.WitEntity[] Facebook.WitAi.Data.Configuration.WitConfiguration::entities
	WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65* ___entities_9;
	// Facebook.WitAi.Data.Intents.WitIntent[] Facebook.WitAi.Data.Configuration.WitConfiguration::intents
	WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB* ___intents_10;
	// Facebook.WitAi.Data.Traits.WitTrait[] Facebook.WitAi.Data.Configuration.WitConfiguration::traits
	WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31* ___traits_11;
	// System.Boolean Facebook.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_12;
	// System.Boolean Facebook.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_13;
	// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::manifestLocalPath
	String_t* ___manifestLocalPath_14;
	// System.Boolean Facebook.WitAi.Data.Configuration.WitConfiguration::openManifestOnGeneration
	bool ___openManifestOnGeneration_15;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Facebook.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Facebook.WitAi.TTS.Integrations.TTSDiskCache::_diskPath
	String_t* ____diskPath_4;
	// Facebook.WitAi.TTS.Data.TTSDiskCacheSettings Facebook.WitAi.TTS.Integrations.TTSDiskCache::_defaultSettings
	TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ____defaultSettings_5;
	// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Integrations.TTSDiskCache::_events
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* ____events_6;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest> Facebook.WitAi.TTS.Integrations.TTSDiskCache::_streamRequests
	Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* ____streamRequests_7;
};

// Facebook.WitAi.TTS.Integrations.TTSRuntimeCache
struct TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::ClipLimit
	bool ___ClipLimit_4;
	// System.Int32 Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::ClipCapacity
	int32_t ___ClipCapacity_5;
	// System.Boolean Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::RamLimit
	bool ___RamLimit_6;
	// System.Int32 Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::RamCapacity
	int32_t ___RamCapacity_7;
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::<OnClipAdded>k__BackingField
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___U3COnClipAddedU3Ek__BackingField_8;
	// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::<OnClipRemoved>k__BackingField
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___U3COnClipRemovedU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData> Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::_clips
	Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* ____clips_10;
	// System.Collections.Generic.List`1<System.String> Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::_clipOrder
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____clipOrder_11;
};

// Facebook.WitAi.TTS.TTSService
struct TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.TTS.Events.TTSServiceEvents Facebook.WitAi.TTS.TTSService::_events
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* ____events_5;
	// System.Boolean Facebook.WitAi.TTS.TTSService::_delegates
	bool ____delegates_6;
	// System.Security.Cryptography.SHA256 Facebook.WitAi.TTS.TTSService::CLIP_HASH
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___CLIP_HASH_8;
};

struct TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields
{
	// Facebook.WitAi.TTS.TTSService Facebook.WitAi.TTS.TTSService::_instance
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* ____instance_4;
};

// Facebook.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Facebook.WitAi.TTS.Utilities.TTSSpeaker::presetVoiceID
	String_t* ___presetVoiceID_4;
	// UnityEngine.AudioSource Facebook.WitAi.TTS.Utilities.TTSSpeaker::AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___AudioSource_5;
	// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents Facebook.WitAi.TTS.Utilities.TTSSpeaker::_events
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* ____events_6;
	// System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::_speaking
	bool ____speaking_7;
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Utilities.TTSSpeaker::_loadingClip
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ____loadingClip_8;
	// UnityEngine.Coroutine Facebook.WitAi.TTS.Utilities.TTSSpeaker::_player
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____player_9;
	// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Utilities.TTSSpeaker::_lastClip
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ____lastClip_10;
};

// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_useUpdate
	bool ____useUpdate_5;
	// System.Collections.IEnumerator Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_method
	RuntimeObject* ____method_6;
	// UnityEngine.Coroutine Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coroutine_7;
};

// Facebook.WitAi.TTS.Integrations.TTSWit
struct TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B  : public TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD
{
	// Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.Integrations.TTSWit::_runtimeCache
	RuntimeObject* ____runtimeCache_10;
	// Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.Integrations.TTSWit::_diskCache
	RuntimeObject* ____diskCache_11;
	// Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings Facebook.WitAi.TTS.Integrations.TTSWit::RequestSettings
	TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568 ___RequestSettings_12;
	// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Integrations.TTSWit::<WebStreamEvents>k__BackingField
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* ___U3CWebStreamEventsU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest> Facebook.WitAi.TTS.Integrations.TTSWit::_webStreams
	Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* ____webStreams_14;
	// Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Integrations.TTSWit::<WebDownloadEvents>k__BackingField
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* ___U3CWebDownloadEventsU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest> Facebook.WitAi.TTS.Integrations.TTSWit::_webDownloads
	Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* ____webDownloads_16;
	// Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Facebook.WitAi.TTS.Integrations.TTSWit::_presetVoiceSettings
	TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* ____presetVoiceSettings_17;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Facebook.WitAi.TTS.TTSService[]
struct TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* m_Items[1];

	inline TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* value)
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
// Facebook.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* m_Items[1];

	inline TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* m_Items[1];

	inline TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* value)
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
// Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* m_Items[1];

	inline TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_m5C85593AB0779ED746918A1F2DB94A678C17110A_gshared (const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared (UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m49021A429720036E9DEA177CAB8D5375847FADCB_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m600728814D64949FB42DEE273E5E146A5E015BE1_gshared (Action_2_t4A5313D1C1FEF099C0E5969104BDE957CD82CF22* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,System.Boolean,TEnum&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m59A357DBF64ABC47252483A44FC3FD4298062AD9_gshared (String_t* ___value0, bool ___ignoreCase1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Single>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mAFC1A6B82DBD3B488FF63EE80C4D280D6979260F_gshared_inline (Action_2_t4A5313D1C1FEF099C0E5969104BDE957CD82CF22* __this, RuntimeObject* ___arg10, float ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m4EC31174530940C18F3127D8C7E7260B2606F4A0_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m977F48E7B446FA00AE2DB8F68B71E2033313739A_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<Facebook.WitAi.TTS.TTSService>()
inline TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* Resources_FindObjectsOfTypeAll_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_mE147C77154A41307F480ADC82501AAD959465EF6 (const RuntimeMethod* method)
{
	return ((  TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_m5C85593AB0779ED746918A1F2DB94A678C17110A_gshared)(method);
}
// System.Void System.Predicate`1<Facebook.WitAi.TTS.TTSService>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mA432163F7860ABB231F2D184ECC977434B5A1BF7 (Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Facebook.WitAi.TTS.TTSService>(T[],System.Predicate`1<T>)
inline TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* Array_Find_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_m30A13F7E66E232116645837B52BABC7B6EB7919F (TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* ___array0, Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* ___match1, const RuntimeMethod* method)
{
	return ((  TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* (*) (TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140*, Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared)(___array0, ___match1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.VLog::W(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_mDE8D258C754E170A0BD99D4E5041CC0CEF9E645C (String_t* ___log0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Facebook.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.TTS.Data.TTSClipData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A* __this, UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A*, UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5 (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4* __this, UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4*, UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m2F341CF594D6A6BD63DE4ADF5C967032EEA9C1DA (UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_AddListener_mC98DD737DD6481563C2DFA6EE4E0DF841516F55F (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F* __this, UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F*, UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3*, const RuntimeMethod*))UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.TTS.Data.TTSClipData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A* __this, UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A*, UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858 (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4* __this, UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4*, UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_RemoveListener_m90876C834CD955A903DE77E301E22F443406A107 (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F* __this, UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F*, UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3*, const RuntimeMethod*))UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared)(__this, ___call0, method);
}
// System.Void Facebook.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m90B79B7B1D03F27D2950612CB8551921ACDC69DC (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.String Facebook.WitAi.TTS.TTSService::GetSha256Hash(System.Security.Cryptography.SHA256,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetSha256Hash_mF63CF282ECF724FF6505A3752110FA6D04E23579 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___shaHash0, String_t* ___input1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::GetRuntimeCachedClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_GetRuntimeCachedClip_m7BBFA9662907394F5336A3BD9EFBE63F5980B1DA (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___clipID0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Data.TTSClipData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipData__ctor_m7C5F22000ABCAB8F122DB2BF11595A286E393368 (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState>::Invoke(T1,T2)
inline void Action_2_Invoke_m04CB138F2E5BFD7E2F7DD47D766DD51BD86FEB5C_inline (Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, int32_t, const RuntimeMethod*))Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.TTSService::GetPresetVoiceSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___presetVoiceId0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3EC242B9449233D438284F27ACBE92D4664F4B83 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.VLog::E(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829 (String_t* ___log0, const RuntimeMethod* method) ;
// System.Void System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_mE7F840CB53F1F6B008B4626F4555B0C20917B4FA_inline (Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Facebook.WitAi.TTS.TTSService::CallAfterAMoment(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSService_CallAfterAMoment_m03F6421DBD973A75A352F0CE0D810DD1F5788765 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call0, const RuntimeMethod* method) ;
// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer Facebook.WitAi.Utilities.CoroutineUtility::StartCoroutine(System.Collections.IEnumerator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* CoroutineUtility_StartCoroutine_mB06C8EE1DC30AF93C6513CEC927A53ECE5628657 (RuntimeObject* ___asyncMethod0, bool ___useUpdate1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnLoadBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnLoadBegin_mEF23BE71AAF97F03FDD9466AD35CC930364A9AA5 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35__ctor_m0CFB66F4266B7879A143646E4A139700AAB440BD (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.VLog::D(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196 (String_t* ___log0, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Events.TTSServiceEvents Facebook.WitAi.TTS.TTSService::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.TTS.Data.TTSClipData>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamBegin(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamBegin_m2FA4A6714C77A6350FDEFE222A46F86D018A9630 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamReady(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamReady_mE8179F78A0EF73F0CAD99A051E94A161CA98C666 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamError(Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamError_m8E6425704C039CBAF2EF775410928FA1DE4029D5 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, bool ___fromDisk2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamCancel(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamCancel_m0BA986779E377C58705BA74A0CED42C72CA494AF (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::Unload(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Unload_m788AE39AD5F1CC97D9268F9CC471DC747F92993A (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnUnloadBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnUnloadBegin_m295A418029FB7CE4A7B250C7B0D65C6F012524C3 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.TTS.TTSService::GetDiskCachePath(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetDiskCachePath_m3C99E181DA4B30F07D914D667E970F3AAA8BE650 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_DownloadToDiskCache_mB3FBB6A68F11059719CA0CBD9999ABD195827989 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete4, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mE9BB3380CC7BDA8D531B0483D7BA2FD96918FAFB (U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m36F0FE03049EC0952863B0AF092FDF9BAC0CF082 (Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::Invoke(T0,T1,T2)
inline void UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg00, String_t* ___arg11, String_t* ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, const RuntimeMethod*))UnityEvent_3_Invoke_m49021A429720036E9DEA177CAB8D5375847FADCB_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m093F59084A28A2475F56E3A231C1396D5A35C39F (U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Facebook.WitAi.TTS.Data.TTSVoiceSettings>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m5203FAABCE77244BD62CD785C1DB8EBFDEB4B859 (Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Facebook.WitAi.TTS.Data.TTSVoiceSettings>(T[],System.Predicate`1<T>)
inline TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* Array_Find_TisTTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104_m477E4DC0A6BA52F28C5CDF1496D3E9F336F2B23E (TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* ___array0, Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC* ___match1, const RuntimeMethod* method)
{
	return ((  TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* (*) (TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91*, Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared)(___array0, ___match1, method);
}
// System.Void Facebook.WitAi.TTS.Events.TTSServiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceEvents__ctor_m3887C7D2504FB73D0E6E2642DDBD9E1EEB3C21D9 (TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_mCF8D7EB52BAB85B20EAE61668D40DDF0CE3EC2E8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m40F969DADEDDA6C67D4A594A4EC3BEBCA9BA8F1C (U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamError(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.TTS.TTSService::ShouldCacheToDisk(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSService_ShouldCacheToDisk_mF9799C2D67960DD11CA622236A218DDC6E5CAC92 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnWebDownloadBegin(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnWebDownloadCancel(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamCancel(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.Void System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m0D903FD5BC01BE67CB73857563CE2532E8ADDA80 (Action_3_t3D676E8D072895C382459BE5575CBA308018765C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t3D676E8D072895C382459BE5575CBA308018765C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mF256D0A572644A7C694F8A5C9AD0F1295999A8C8_inline (Action_3_t3D676E8D072895C382459BE5575CBA308018765C* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg10, String_t* ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t3D676E8D072895C382459BE5575CBA308018765C*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Utilities.TTSSpeaker,System.String>::.ctor()
inline void UnityEvent_2__ctor_m5E06ABFB25D8BF888C80BC3E1CACF5EE68899683 (UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// Facebook.WitAi.TTS.TTSService Facebook.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* TTSSpeaker_get_VoiceSettings_m346C2FB15246AEE6BFE2B511FC44840741FCF6B6 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_mB0A07FD6722A912CBA96B847FC69A645A29003FD_inline (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Utilities.TTSSpeaker,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627 (UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237* __this, TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA8C698AB56B3E74270F3704564F2CBF1ED6B9237*, TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCC51F5408B1D4CCA203CAF1B14AB6B5A53A2CB03 (Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPlaybackWaitU3Ed__27__ctor_m14F342CBC8B88A2721AD3E9F1659A57F07566848 (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m967E98137B140DFD845C5E1699D1BC8EF08CC76C (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestFile(System.String,System.Action`2<System.String,System.Single>,System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestFile_m17E794FEA076C565C072C3DA07EC80A6B9931158 (String_t* ___fileUrl0, Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onFileProgress1, Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* ___onFileLoaded2, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4118BB91F95F14A229CC25784E135D46F0BA9519 (U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* __this, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::GetFinalUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceUnityRequest_GetFinalUrl_mA714897378C2FD6EDE74BF56EF1D042F4D105E9A (String_t* ___fileUrl0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76 (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Request(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_Request_m18E16E1268684B1A58C7FB0C49DDC142FC4125CC (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityRequest0, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress1, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___onComplete2, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m79D7E030BCB7C9FDF104764C004965137DE2C480 (U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Head(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Head_m679E92E76E5D9FE0F998D9B2F9C961C28BB898F2 (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m967D04D5730970725C0E30B3CDEC488F4C74F303 (U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8873DE82DD22859718FDB7145D76A08D7D55C19F (Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestHeaders(System.String,System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestHeaders_m847790186B4474397BE29ABCA73CE83EE3CDB1F6 (String_t* ___fileUrl0, Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* ___onHeadersObtained1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m111FA9F876F82B1D75BBEDF7205721E5CCA08850 (U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m7F62303F36F46A731A6332E89B736901F4B3B48F (Action_2_t2399F3C34C43EB392520F878CA121755E120498E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m600728814D64949FB42DEE273E5E146A5E015BE1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD2447C52D0207322B2D4ADD3190279B8895158BB (Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* __this, String_t* ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*, String_t*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestAudioClip(System.String,UnityEngine.AudioType,System.Action`2<System.String,System.Single>,System.Action`3<System.String,UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestAudioClip_mDB80F5E89A8BF8BD722E30B996E5AC9939CDBC43 (String_t* ___audioUrl0, int32_t ___audioType1, Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onAudioClipProgress2, Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady3, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mE3B03AD1B088DB80B9022DFA7EC39ADCADB684D7 (U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::TryParse<UnityEngine.AudioType>(System.String,System.Boolean,TEnum&)
inline bool Enum_TryParse_TisAudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_mBF741BA29A25B0F49730557F32687450D0080C6C (String_t* ___value0, bool ___ignoreCase1, int32_t* ___result2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, bool, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m59A357DBF64ABC47252483A44FC3FD4298062AD9_gshared)(___value0, ___ignoreCase1, ___result2, method);
}
// System.Void System.Action`3<System.String,UnityEngine.AudioClip,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mF6530D95C77F956A1746870B7F60069FBE32E836_inline (Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* __this, String_t* ___arg10, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A*, String_t*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, String_t*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestMultimedia::GetAudioClip(System.String,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestMultimedia_GetAudioClip_m15C8E07AD1A9AB041ACB9A76225B10422ECA6697 (String_t* ___uri0, int32_t ___audioType1, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::set_streamAudio(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest__ctor_mD125A64CDCDBE0A904EF4F76F89BDE3EFBA08C51 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.UnityWebRequest::get_timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_timeout_mE7983CCB87576C0BF53D22A6BC79AC5191BB4927 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformUpdateU3Ed__25__ctor_m05B2BDA7D478AB75860F7DF5E330877DEE9C6AAF (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequest>::Invoke(T)
inline void Action_1_Invoke_m2E790BB44663BD4EAAA462F9539D3DCDE112377C_inline (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineCancel_mA3B5FE5A3595D03B0715C32FF1AE551589708731 (CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Single>::Invoke(T1,T2)
inline void Action_2_Invoke_m4394ACFFC2C8D7A7D849C0781B4212454875DBC2_inline (Action_2_t2399F3C34C43EB392520F878CA121755E120498E* __this, String_t* ___arg10, float ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*, String_t*, float, const RuntimeMethod*))Action_2_Invoke_mAFC1A6B82DBD3B488FF63EE80C4D280D6979260F_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>::Invoke(T1,T2)
inline void Action_2_Invoke_mFCDFF41277810F0799BD361C2E8E56B310F3B0E7_inline (Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* __this, String_t* ___arg10, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79*, String_t*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Invoke(T1,T2)
inline void Action_2_Invoke_mD0107A6968AE9937D1C508BBB1825CEDFAD8CF28_inline (Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* __this, String_t* ___arg10, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Networking.DownloadHandlerAudioClip::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* DownloadHandlerAudioClip_GetContent_m31675D53AAC8820812A3CE0207E93E1333979F0B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m81A2FD77A34847CA40728300699E3D3F9E953A50 (U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m7CB7EAF34F1B7120E147C5F9248DAE9C4BF5339E (Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0041464CD160274EAF8E42389935E33A0A71E0D1 (Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTS(Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri>,System.Action`1<System.Single>,System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTS_m8121EEDEFF0BFF704AEEC96044D2166279A8BBB5 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, String_t* ___textToSpeak1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data2, Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* ___onSetup3, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress4, Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* ___onComplete5, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mDFD2BB45CBC11933F6DA571E3DEF790A53F5AA0E (U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB8698DFE77DBDAF723823DD09C8D61A6242100A9 (U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m6E13A504EA45031706B2163D2D8037AE21241180_inline (Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.String Facebook.WitAi.TTS.Utilities.WitUnityRequest::IsTextValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_IsTextValid_m02744507C9001684EE7E7FF005F5180D7FA227FD (String_t* ___textToSpeak0, const RuntimeMethod* method) ;
// System.Uri Facebook.WitAi.TTS.Utilities.WitUnityRequest::GetUri(Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* WitUnityRequest_GetUri_m5F5BC2F4890F2FCC70B1D57787184D7F15AF442C (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, String_t* ___path1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParams2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m357B5E7078790E0CEF7259D76512B031F37F2DEA (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri>::Invoke(T1,T2)
inline void Action_2_Invoke_m675C3FAB041A118F74193C11653C834F7AE67E74_inline (Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___arg10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestWit(Facebook.WitAi.Data.Configuration.WitConfiguration,UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestWit_mE467FF2EC59DC46AD93426BBD7EE446A507D1FFE (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityRequest1, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress2, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___onComplete3, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m42B743E923F2C6AA186A652360B76E96574E38EE (U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* __this, String_t* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, String_t*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mDC47D7545DA4A2EC763C81C0A149E39CD059BF38 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.Configuration.WitEndpointConfig Facebook.WitAi.Configuration.WitEndpointConfig::GetEndpointConfig(Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* WitEndpointConfig_GetEndpointConfig_m5E94C5612BD7D2C869888BABB0F51720ADD873DE (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___witConfig0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_UriScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_UriScheme_m86831992A6AD745AC3A5020DEE48643B7E84C793 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Authority_mF4F20B3CA37A69AB5D003F2D618BBF6496B7C583 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Host(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Facebook.WitAi.Configuration.WitEndpointConfig::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEndpointConfig_get_Port_m9FCE8AFC43BD2C735DC50D75B70CDDD604437403 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Port_mC6C31D266AA5790B8ED038C31489BCC2DE55DE3D (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Path_mD17EF197B4A8A764682938B468B647DAE716E9D0 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_WitApiVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_WitApiVersion_m63158C60ECC4C89A6B6ED9F87C64394DD19C587C (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Query(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Query_m1B7AB6F65BBAC94C07681D79F2A8DBDB15E844ED (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m0D32DB5F61DFFE1E4F61EE513E3419F9DA8F773E (String_t* ___stringToEscape0, const RuntimeMethod* method) ;
// System.String System.UriBuilder::get_Query()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriBuilder_get_Query_m905F5864CB1B5D09FD81F29B148541DFB353F78E_inline (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.UriBuilder,System.Uri>::Invoke(T)
inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* Func_2_Invoke_mACFAAC0F1C413E05EE9F08167B8A3A89C28905B7_inline (Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* __this, UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* ___arg0, const RuntimeMethod* method)
{
	return ((  Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* (*) (Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*, UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Uri System.UriBuilder::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.TTS.Utilities.WitUnityRequest::GetAuthorization(Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_GetAuthorization_m91CEABF16CFF6D62B8B7FA5B10A381019C67E05D (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.WitRequest::GetUserAgent(Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitRequest_GetUserAgent_m1DCBBFDFC1D44FBC00996A9A12A87468A3B9882B (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::Invoke()
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Func_1_Invoke_m627232433A84B3B05747AAE47C120BEEC8E62720_inline (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest__ctor_m2B2AED2013077B86B7E6E81516F404528A62D630 (WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::ApplyHeaders(Facebook.WitAi.Data.Configuration.WitConfiguration,UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_ApplyHeaders_mC124BE78658725BA7EB3A63913A97D7B12702783 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityRequest1, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.AudioClip,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_mC2EC2468C63DEAE014449CE4E047C35ED364BD57_inline (Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m483499969CA0B5034A1AEBF56AF3A4A1F11BE732 (U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::.ctor(System.Uri,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip__ctor_mFF61AA21FD2F3655A0E5DE811467FD7A2426592F (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, int32_t ___audioType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::set_compressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_set_compressed_m212FF53AE2E93AC9029E459101F95E51155359A5 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerFile::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerFile__ctor_m366A8B9559EAFF17D2E33DC0FBE13756C344E0EB (DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902* __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSDiskCache::ShouldCacheToDisk(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSDiskCache_ShouldCacheToDisk_mE0A8A5B4C325BE6D1DBF2CBAC3029A3C8DA51C72 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD (const RuntimeMethod* method) ;
// System.String Facebook.WitAi.TTS.Integrations.TTSDiskCache::get_DiskPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_mEC41B5632A4A43EADC79C286CC1B8029B117736B_inline (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.Utilities.IOUtility::CreateDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOUtility_CreateDirectory_m604E82A4436E7C0BDEE72CD06AC332587C8093D4 (String_t* ___directoryPath0, bool ___recursively1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9DCF41D3B28B183296A7A289881D25D5313BE1CE (U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* __this, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.TTS.Integrations.TTSDiskCache::GetDiskCachePath(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_GetDiskCachePath_mD42007E533848636889003ABEC77CA505DB027D6 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.Void System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m8510BACA4CC1BD4B729544E6A1693FA3B99E5DB7_inline (Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8D65B66B6B7CDF2C70A408F47BE85DB9B70CBDCF (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___object0, ___method1, method);
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::CheckFileExists(System.String,System.Action`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_CheckFileExists_m93A29856F76D90B9C95339E1089B513859ABCC9D (String_t* ___filePath0, Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ___onFileExistDetermined1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* __this, String_t* ___key0, VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E*, String_t*, VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m50C08A7EA18A76F72A25F12B56AB03137D2737D8 (U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Integrations.TTSDiskCache::get_DiskStreamEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3_inline (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.String,UnityEngine.AudioClip,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mCB64C93CACD091692FD0C45E61A2C7C89374FA0E (Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared)(__this, ___object0, ___method1, method);
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestAudioClip(System.String,System.Action`2<System.String,System.Single>,System.Action`3<System.String,UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestAudioClip_m7E47FD040499A4DC1946D521CB0537C7CEBD1AC1 (String_t* ___audioUrl0, Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onAudioClipProgress1, Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>::get_Item(TKey)
inline VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* Dictionary_2_get_Item_mA4B7C76FE615E7BDD325C2B88382D8D1DED531E7 (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* (*) (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>::Remove(TKey)
inline bool Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027 (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Facebook.WitAi.TTS.Data.TTSDiskCacheSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCacheSettings__ctor_mAF425C2DFE8E383E562E18689CA6E1229BDFD2D7 (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Events.TTSStreamEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamEvents__ctor_m4954D3331A8F779424CDD520F9D7CFBAC366E75D (TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.VoiceUnityRequest>::.ctor()
inline void Dictionary_2__ctor_m52404A5B8D47E59803815968C1E7DB9B5AF53DF5 (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::get_Values()
inline ValueCollection_t7E5C565B83017703251B47439DD3D79734904801* Dictionary_2_get_Values_m3726F85275C4AEC5E131D3235A97E95CD1AB1DD2 (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t7E5C565B83017703251B47439DD3D79734904801* (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Facebook.WitAi.TTS.Data.TTSClipData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* Enumerable_ToArray_TisTTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_m1DEE63117869715E42B6B7CAAFEF35C5A2FDDC8E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::get_Item(TKey)
inline TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38 (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA9A99F5A6C9786D97FE519A60D110EBE65060250 (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, String_t* ___key0, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::RemoveClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_RemoveClip_mD300393D693EB9C1C2C9F282C4F68FD0C6E1A80F (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, String_t* ___clipID0, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::IsCacheFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_IsCacheFull_m93B46E7F407BA7C88F5A60AD8DDECB1FF0016A0A (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::get_Keys()
inline KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::get_Count()
inline int32_t KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B (KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipAdded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* TTSRuntimeCache_get_OnClipAdded_m72DD3BD5194AD0CB1D8040A7E14486742CC08B58_inline (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::Remove(TKey)
inline bool Dictionary_2_Remove_mD6E9F3B1C7D9B46F2CA85BAFB2FC72147CDE4232 (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipRemoved()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* TTSRuntimeCache_get_OnClipRemoved_mF538BEEF98ED44EE07C8FE9BA0AD79D275329DCF_inline (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) ;
// System.Int32 Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::GetCacheDiskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSRuntimeCache_GetCacheDiskSize_mA3FDE1C0D41BE3D680F0F19F25CE76233BD46375 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::GetEnumerator()
inline Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB KeyCollection_GetEnumerator_m80871A06C0FE5DB09B22970F1A40627263B00FD9 (KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB (*) (KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::Dispose()
inline void Enumerator_Dispose_mE5ABDE826C6B7E02D026E21F1452DF7D553E5696 (Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::get_Current()
inline String_t* Enumerator_get_Current_m58D05EAD9953F5A5DDEFD0F7BD37CEF18462B87F_inline (Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Int64 Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::GetClipBytes(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TTSRuntimeCache_GetClipBytes_m24DCFFE9AD856FD6FECECDEF73F7BA2F88732E38 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::MoveNext()
inline bool Enumerator_MoveNext_mC1B365E009BA9697D6E1A96A88BFE8AA24366112 (Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Events.TTSClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453 (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void Dictionary_2__ctor_m8A5BA57F8A1C9C470C3AF070172EF2F57FE8AA10 (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Facebook.WitAi.TTS.Data.TTSVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSVoiceSettings__ctor_m3AB6290B24923DCC159B80B43C1299D4CA55CCF6 (TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler>()
inline RuntimeObject* GameObject_GetComponent_TisITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_m1E68C07D07D07A6D90D420DEB2A30E01C9C7861E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler>()
inline RuntimeObject* GameObject_GetComponent_TisITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_mB61423632BA71692700EF81F421AFED94688C049 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String Facebook.WitAi.TTS.TTSService::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetInvalidError_m91001E7570CE63FB297AAF2FEBCB707159757AA3 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m1FAD6C425C98C8BD6A55521CA7A28B40383B76C2 (U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Integrations.TTSWit::get_WebStreamEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.TTS.Integrations.TTSWit::IsRequestValid(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsRequestValid_m5C392FBD420452C712323611FA20792845EAD384 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSWit::CancelWebStream(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebStream_mFA70C7368E3CB6505EBB7B03946A369DCA891118 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.AudioClip,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF733309DE658768D4F1A71EEBAEBF2B0F9A06592 (Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTSStream(Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Single>,System.Action`2<UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTSStream_mB62C85290F30CDC18188E8375EBBB18BD98DA73E (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, String_t* ___textToSpeak1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress3, Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* ___onClipReady4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02 (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* __this, String_t* ___key0, WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*, String_t*, WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>::get_Item(TKey)
inline WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0 (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* (*) (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>::Remove(TKey)
inline bool Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380 (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m87AB19A35ADCA2586AE6414DDB927966D871AC2A (U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Integrations.TTSWit::get_WebDownloadEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSWit::CancelWebDownload(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebDownload_m401641275F17DFB2A26CE3AAC417F2A05D5BA8E6 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTSDownload(System.String,Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Single>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTSDownload_mEAE9BE782718AC02F044914E3FEB304BF5D9B27B (String_t* ___downloadPath0, WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration1, String_t* ___textToSpeak2, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data3, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete5, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWitVoiceSettings__ctor_mBF6418094FCA593E90521488C962A68D78170AF9 (TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.TTS.Data.TTSVoiceSettings[] Facebook.WitAi.TTS.Integrations.TTSWit::get_PresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* TTSWit_get_PresetVoiceSettings_m81E93241097E5AA437DE61C02974A7D6D9D59C93 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<UnityEngine.RangeAttribute>(System.Reflection.MemberInfo)
inline RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m3432BF0E9BB88F8FD553E61A2216F1052D21A79C (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m4EC31174530940C18F3127D8C7E7260B2606F4A0_gshared)(___element0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.TTS.Utilities.WitUnityRequest>::.ctor()
inline void Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072 (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Facebook.WitAi.TTS.Events.TTSDownloadEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDownloadEvents__ctor_m4430343E222FF5B892CD63206A07836871BDF105 (TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.TTSService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService__ctor_mF5BC0E9DE19B4FEE2B5184A6FE377CF19816073A (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>::.ctor()
inline void UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96 (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCC54ED7ECAB39177455C85E65A0F33D0E70150A4*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor()
inline void UnityEvent_3__ctor_m68DA004144A6FAC2EF4B2391126211708DE83ECE (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tC2B41DE4BE6078E43C0DED0C01DCFA8AA826A52F*, const RuntimeMethod*))UnityEvent_3__ctor_m977F48E7B446FA00AE2DB8F68B71E2033313739A_gshared)(__this, method);
}
// System.Void Facebook.WitAi.TTS.Events.TTSClipDownloadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadEvent__ctor_m694A3C68F52C95AE27B3F845E4B256ABCA336E9F (TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.TTS.Events.TTSClipDownloadErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadErrorEvent__ctor_mB6859844451E940DA30D32F632629AF4F118EB8F (TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void UnityEvent_1__ctor_m06BC82994273E61B2B7D073B846884C909901B6A (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5B5E4691EB2AA6652BAEF9571F18FB5E9DBCBA0A*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Facebook.WitAi.TTS.Events.TTSClipErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipErrorEvent__ctor_m85859DDB4F888F6C4B5E3E3E8EF980BF8E3E6A9D (TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* __this, const RuntimeMethod* method) ;
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
// Facebook.WitAi.TTS.TTSService Facebook.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_m30A13F7E66E232116645837B52BABC7B6EB7919F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_mE147C77154A41307F480ADC82501AAD959465EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mFBAD312C057DCD8CBE56B07A0A2D2D5EC05F9158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* V_0 = NULL;
	Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* G_B4_0 = NULL;
	TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* G_B4_1 = NULL;
	Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* G_B3_0 = NULL;
	TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* G_B3_1 = NULL;
	{
		// if (_instance == null)
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0 = ((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// TTSService[] services = Resources.FindObjectsOfTypeAll<TTSService>();
		TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_mE147C77154A41307F480ADC82501AAD959465EF6(Resources_FindObjectsOfTypeAll_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_mE147C77154A41307F480ADC82501AAD959465EF6_RuntimeMethod_var);
		V_0 = L_2;
		// if (services != null)
		TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// _instance = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		TTSServiceU5BU5D_t5381633CFF67FAF2576DFE49FB03B6D84A6DF140* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var);
		Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* L_5 = ((U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9* L_7 = ((U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* L_8 = (Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52*)il2cpp_codegen_object_new(Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Predicate_1__ctor_mA432163F7860ABB231F2D184ECC977434B5A1BF7(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mFBAD312C057DCD8CBE56B07A0A2D2D5EC05F9158_RuntimeMethod_var), NULL);
		Predicate_1_t14EEEFB61FBE6BA3BF8E16F5C4D1AA87D5E8AC52* L_9 = L_8;
		((U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0036:
	{
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_10;
		L_10 = Array_Find_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_m30A13F7E66E232116645837B52BABC7B6EB7919F(G_B4_1, G_B4_0, Array_Find_TisTTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_m30A13F7E66E232116645837B52BABC7B6EB7919F_RuntimeMethod_var);
		((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4), (void*)L_10);
	}

IL_0040:
	{
		// return _instance;
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_11 = ((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4;
		return L_11;
	}
}
// System.String Facebook.WitAi.TTS.TTSService::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetInvalidError_m91001E7570CE63FB297AAF2FEBCB707159757AA3 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebHandler == null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return "Web Handler Missing";
		return _stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB;
	}

IL_000e:
	{
		// if (VoiceProvider == null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// return "Voice Provider Missing";
		return _stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9;
	}

IL_001c:
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// Facebook.WitAi.TTS.Events.TTSServiceEvents Facebook.WitAi.TTS.TTSService::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_0 = __this->____events_5;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Awake_m4D3AB87C1F76D1C4842585700FDA033985584422 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// _delegates = false;
		__this->____delegates_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnEnable_m67505DD5B789E62A4C81860A41549D08C3223365 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string validError = GetInvalidError();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Facebook.WitAi.TTS.TTSService::GetInvalidError() */, __this);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// VLog.W(validError);
		String_t* L_3 = V_0;
		VLog_W_mDE8D258C754E170A0BD99D4E5041CC0CEF9E645C(L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDisable_m5CF514E1B7A129F68796750148610D2BC593B23B (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	{
		// RemoveDelegates();
		VirtualActionInvoker0::Invoke(13 /* System.Void Facebook.WitAi.TTS.TTSService::RemoveDelegates() */, __this);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::AddDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_AddDelegates_m281E296136E4669EC810C38FE5D164447CE63C8B (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamBegin_m0F72BA1CB1E085E21764EF778988BB14F11F6385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamCancel_m890D6D96308198CDB9E751F2F483F6FAADF71C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamError_mABE1088C2B6EB9510A61127EBC50BCF7497BF3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamReady_mBD9BADE3481ED6182217220E0865B346063968DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadError_m38D3B9F9312B9CFBC958610CD30FDC492BBFE695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadSuccess_m924957A95BB1E5286384B1F30EAE7D3C04736D1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamReady_m427CFD05C37F97ECB308BB1C6D7586CE07D71B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mC98DD737DD6481563C2DFA6EE4E0DF841516F55F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_delegates)
		bool L_0 = __this->____delegates_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _delegates = true;
		__this->____delegates_6 = (bool)1;
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// RuntimeCacheHandler.OnClipAdded.AddListener(OnRuntimeClipAdded);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_2);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_3;
		L_3 = InterfaceFuncInvoker0< TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipAdded() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_2);
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_4 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_3, L_4, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// RuntimeCacheHandler.OnClipRemoved.AddListener(OnRuntimeClipRemoved);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_5);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_6;
		L_6 = InterfaceFuncInvoker0< TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* >::Invoke(2 /* Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_5);
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_7 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_7, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_6, L_7, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
	}

IL_0052:
	{
		// if (DiskCacheHandler != null)
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_8)
		{
			goto IL_00e1;
		}
	}
	{
		// DiskCacheHandler.DiskStreamEvents.OnStreamBegin.AddListener(OnDiskStreamBegin);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_9);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_10;
		L_10 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_11 = L_10->___OnStreamBegin_0;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_12 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_12, __this, (intptr_t)((void*)TTSService_OnDiskStreamBegin_m0F72BA1CB1E085E21764EF778988BB14F11F6385_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_11, L_12, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamCancel.AddListener(OnDiskStreamCancel);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_13);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_14;
		L_14 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_15 = L_14->___OnStreamCancel_2;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_16 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_16, __this, (intptr_t)((void*)TTSService_OnDiskStreamCancel_m890D6D96308198CDB9E751F2F483F6FAADF71C24_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_15, L_16, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamReady.AddListener(OnDiskStreamReady);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_17);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_18;
		L_18 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_19 = L_18->___OnStreamReady_1;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_20 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_20, __this, (intptr_t)((void*)TTSService_OnDiskStreamReady_mBD9BADE3481ED6182217220E0865B346063968DA_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_19, L_20, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamError.AddListener(OnDiskStreamError);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_21);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_22;
		L_22 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_23 = L_22->___OnStreamError_3;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_24 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_24, __this, (intptr_t)((void*)TTSService_OnDiskStreamError_mABE1088C2B6EB9510A61127EBC50BCF7497BF3E1_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA(L_23, L_24, UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var);
	}

IL_00e1:
	{
		// if (WebHandler != null)
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		if (!L_25)
		{
			goto IL_01f4;
		}
	}
	{
		// WebHandler.WebStreamEvents.OnStreamBegin.AddListener(OnWebStreamBegin);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_26);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_27;
		L_27 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_28 = L_27->___OnStreamBegin_0;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_29 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_29, __this, (intptr_t)((void*)TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_28, L_29, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamCancel.AddListener(OnWebStreamCancel);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_30);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_31;
		L_31 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_32 = L_31->___OnStreamCancel_2;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_33 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_33, __this, (intptr_t)((void*)TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_32, L_33, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamReady.AddListener(OnWebStreamReady);
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_34);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_35;
		L_35 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_36 = L_35->___OnStreamReady_1;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_37 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_37, __this, (intptr_t)((void*)TTSService_OnWebStreamReady_m427CFD05C37F97ECB308BB1C6D7586CE07D71B48_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_36, L_37, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamError.AddListener(OnWebStreamError);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_38);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_39;
		L_39 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_40 = L_39->___OnStreamError_3;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_41 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_41, __this, (intptr_t)((void*)TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA(L_40, L_41, UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadBegin.AddListener(OnWebDownloadBegin);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_42);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_43;
		L_43 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_44 = L_43->___OnDownloadBegin_0;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_45 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_45, __this, (intptr_t)((void*)TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA(L_44, L_45, UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadCancel.AddListener(OnWebDownloadCancel);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_46);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_47;
		L_47 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_48 = L_47->___OnDownloadCancel_2;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_49 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_49, __this, (intptr_t)((void*)TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA(L_48, L_49, UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadSuccess.AddListener(OnWebDownloadSuccess);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_50);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_51;
		L_51 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_52 = L_51->___OnDownloadSuccess_1;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_53 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_53, __this, (intptr_t)((void*)TTSService_OnWebDownloadSuccess_m924957A95BB1E5286384B1F30EAE7D3C04736D1F_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA(L_52, L_53, UnityEvent_2_AddListener_mDAEDF221A598D39C9D907829F37AACE63D9607AA_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadError.AddListener(OnWebDownloadError);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_54);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_55;
		L_55 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_56 = L_55->___OnDownloadError_3;
		UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3* L_57 = (UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3*)il2cpp_codegen_object_new(UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_3__ctor_m2F341CF594D6A6BD63DE4ADF5C967032EEA9C1DA(L_57, __this, (intptr_t)((void*)TTSService_OnWebDownloadError_m38D3B9F9312B9CFBC958610CD30FDC492BBFE695_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		UnityEvent_3_AddListener_mC98DD737DD6481563C2DFA6EE4E0DF841516F55F(L_56, L_57, UnityEvent_3_AddListener_mC98DD737DD6481563C2DFA6EE4E0DF841516F55F_RuntimeMethod_var);
	}

IL_01f4:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::RemoveDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_RemoveDelegates_m16D9BB438B56738D362AFBBDDF485766A3F43D68 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamBegin_m0F72BA1CB1E085E21764EF778988BB14F11F6385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamCancel_m890D6D96308198CDB9E751F2F483F6FAADF71C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamError_mABE1088C2B6EB9510A61127EBC50BCF7497BF3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamReady_mBD9BADE3481ED6182217220E0865B346063968DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadError_m38D3B9F9312B9CFBC958610CD30FDC492BBFE695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadSuccess_m924957A95BB1E5286384B1F30EAE7D3C04736D1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamReady_m427CFD05C37F97ECB308BB1C6D7586CE07D71B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_RemoveListener_m90876C834CD955A903DE77E301E22F443406A107_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_delegates)
		bool L_0 = __this->____delegates_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _delegates = false;
		__this->____delegates_6 = (bool)0;
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// RuntimeCacheHandler.OnClipAdded.RemoveListener(OnRuntimeClipAdded);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_2);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_3;
		L_3 = InterfaceFuncInvoker0< TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipAdded() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_2);
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_4 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), NULL);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_3, L_4, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// RuntimeCacheHandler.OnClipRemoved.RemoveListener(OnRuntimeClipRemoved);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_5);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_6;
		L_6 = InterfaceFuncInvoker0< TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* >::Invoke(2 /* Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_5);
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_7 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_7, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_6, L_7, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
	}

IL_0052:
	{
		// if (DiskCacheHandler != null)
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_8)
		{
			goto IL_00e1;
		}
	}
	{
		// DiskCacheHandler.DiskStreamEvents.OnStreamBegin.RemoveListener(OnDiskStreamBegin);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_9);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_10;
		L_10 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_11 = L_10->___OnStreamBegin_0;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_12 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_12, __this, (intptr_t)((void*)TTSService_OnDiskStreamBegin_m0F72BA1CB1E085E21764EF778988BB14F11F6385_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_11, L_12, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamCancel.RemoveListener(OnDiskStreamCancel);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_13);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_14;
		L_14 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_15 = L_14->___OnStreamCancel_2;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_16 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_16, __this, (intptr_t)((void*)TTSService_OnDiskStreamCancel_m890D6D96308198CDB9E751F2F483F6FAADF71C24_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_15, L_16, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamReady.RemoveListener(OnDiskStreamReady);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_17);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_18;
		L_18 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_19 = L_18->___OnStreamReady_1;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_20 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_20, __this, (intptr_t)((void*)TTSService_OnDiskStreamReady_mBD9BADE3481ED6182217220E0865B346063968DA_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_19, L_20, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamError.RemoveListener(OnDiskStreamError);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_21);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_22;
		L_22 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_23 = L_22->___OnStreamError_3;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_24 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_24, __this, (intptr_t)((void*)TTSService_OnDiskStreamError_mABE1088C2B6EB9510A61127EBC50BCF7497BF3E1_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858(L_23, L_24, UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var);
	}

IL_00e1:
	{
		// if (WebHandler != null)
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		if (!L_25)
		{
			goto IL_01f4;
		}
	}
	{
		// WebHandler.WebStreamEvents.OnStreamBegin.RemoveListener(OnWebStreamBegin);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_26);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_27;
		L_27 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_28 = L_27->___OnStreamBegin_0;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_29 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_29, __this, (intptr_t)((void*)TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_28, L_29, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamCancel.RemoveListener(OnWebStreamCancel);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_30);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_31;
		L_31 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_32 = L_31->___OnStreamCancel_2;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_33 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_33, __this, (intptr_t)((void*)TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_32, L_33, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamReady.RemoveListener(OnWebStreamReady);
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_34);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_35;
		L_35 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_36 = L_35->___OnStreamReady_1;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_37 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_37, __this, (intptr_t)((void*)TTSService_OnWebStreamReady_m427CFD05C37F97ECB308BB1C6D7586CE07D71B48_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_36, L_37, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamError.RemoveListener(OnWebStreamError);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_38);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_39;
		L_39 = InterfaceFuncInvoker0< TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* >::Invoke(0 /* Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_40 = L_39->___OnStreamError_3;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_41 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_41, __this, (intptr_t)((void*)TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858(L_40, L_41, UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadBegin.RemoveListener(OnWebDownloadBegin);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_42);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_43;
		L_43 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_44 = L_43->___OnDownloadBegin_0;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_45 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_45, __this, (intptr_t)((void*)TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858(L_44, L_45, UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadCancel.RemoveListener(OnWebDownloadCancel);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_46);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_47;
		L_47 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_48 = L_47->___OnDownloadCancel_2;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_49 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_49, __this, (intptr_t)((void*)TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858(L_48, L_49, UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadSuccess.RemoveListener(OnWebDownloadSuccess);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_50);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_51;
		L_51 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_52 = L_51->___OnDownloadSuccess_1;
		UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7* L_53 = (UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7*)il2cpp_codegen_object_new(UnityAction_2_tDF70DBB24B815B02F4C6227A23B31109C3342AA7_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_2__ctor_mDF0DE3E79BB80E7A468A9B58A69A418AE90161E5(L_53, __this, (intptr_t)((void*)TTSService_OnWebDownloadSuccess_m924957A95BB1E5286384B1F30EAE7D3C04736D1F_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858(L_52, L_53, UnityEvent_2_RemoveListener_m400539EF61F883413664A0703F2133A08F40D858_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadError.RemoveListener(OnWebDownloadError);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_54);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_55;
		L_55 = InterfaceFuncInvoker0< TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* >::Invoke(5 /* Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_56 = L_55->___OnDownloadError_3;
		UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3* L_57 = (UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3*)il2cpp_codegen_object_new(UnityAction_3_t9C617A628CBDC0D49ACA19A9E9C438DD0549A1B3_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_3__ctor_m2F341CF594D6A6BD63DE4ADF5C967032EEA9C1DA(L_57, __this, (intptr_t)((void*)TTSService_OnWebDownloadError_m38D3B9F9312B9CFBC958610CD30FDC492BBFE695_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		UnityEvent_3_RemoveListener_m90876C834CD955A903DE77E301E22F443406A107(L_56, L_57, UnityEvent_3_RemoveListener_m90876C834CD955A903DE77E301E22F443406A107_RuntimeMethod_var);
	}

IL_01f4:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDestroy_m2C71659BDE4398F26DDEF5227D39DB7E59055403 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == this)
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0 = ((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// _instance = null;
		((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4 = (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD_il2cpp_TypeInfo_var))->____instance_4), (void*)(TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD*)NULL);
	}

IL_0013:
	{
		// UnloadAll();
		TTSService_UnloadAll_m90B79B7B1D03F27D2950612CB8551921ACDC69DC(__this, NULL);
		// }
		return;
	}
}
// System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetClipLog_mFC69E5969C50EAC9848758E505608CEC43BB31FF (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___logMessage0, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_t853A7011F61767B6242ABD20BABA104D61CD047D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA937C899247696B6565665BE3BD09607F49A2042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t* G_B4_2 = NULL;
	{
		// StringBuilder builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.AppendLine(logMessage);
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___logMessage0;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, L_2, NULL);
		// if (clipData != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData1;
		if (!L_4)
		{
			goto IL_00ae;
		}
	}
	{
		// builder.AppendLine($"Voice: {(clipData.voiceSettings == null ? "Default" : clipData.voiceSettings.settingsID)}");
		StringBuilder_t* L_5 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_6 = ___clipData1;
		NullCheck(L_6);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_7 = L_6->___voiceSettings_3;
		G_B2_0 = _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
		G_B2_1 = L_5;
		if (!L_7)
		{
			G_B3_0 = _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
			G_B3_1 = L_5;
			goto IL_002f;
		}
	}
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_8 = ___clipData1;
		NullCheck(L_8);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_9 = L_8->___voiceSettings_3;
		NullCheck(L_9);
		String_t* L_10 = L_9->___settingsID_1;
		G_B4_0 = L_10;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0034;
	}

IL_002f:
	{
		G_B4_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0034:
	{
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B4_2, L_11, NULL);
		// builder.AppendLine($"Text: {clipData.textToSpeak}");
		StringBuilder_t* L_13 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_14 = ___clipData1;
		NullCheck(L_14);
		String_t* L_15 = L_14->___textToSpeak_0;
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE, L_15, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_13, L_16, NULL);
		// builder.AppendLine($"ID: {clipData.clipID}");
		StringBuilder_t* L_18 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_19 = ___clipData1;
		NullCheck(L_19);
		String_t* L_20 = L_19->___clipID_1;
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA937C899247696B6565665BE3BD09607F49A2042, L_20, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_18, L_21, NULL);
		// TTSDiskCacheLocation cacheLocation = TTSDiskCacheLocation.Stream;
		V_1 = 0;
		// if (DiskCacheHandler != null)
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// TTSDiskCacheSettings settings = clipData.diskCacheSettings;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_24 = ___clipData1;
		NullCheck(L_24);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_25 = L_24->___diskCacheSettings_4;
		V_2 = L_25;
		// if (settings == null)
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_26 = V_2;
		if (L_26)
		{
			goto IL_008d;
		}
	}
	{
		// settings = DiskCacheHandler.DiskCacheDefaultSettings;
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_27);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_28;
		L_28 = InterfaceFuncInvoker0< TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(2 /* Facebook.WitAi.TTS.Data.TTSDiskCacheSettings Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskCacheDefaultSettings() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_27);
		V_2 = L_28;
	}

IL_008d:
	{
		// if (settings != null)
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_29 = V_2;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// cacheLocation = settings.DiskCacheLocation;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = L_30->___DiskCacheLocation_0;
		V_1 = L_31;
	}

IL_0097:
	{
		// builder.AppendLine($"Cache: {cacheLocation}");
		StringBuilder_t* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(TTSDiskCacheLocation_t853A7011F61767B6242ABD20BABA104D61CD047D_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973, L_35, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_32, L_36, NULL);
	}

IL_00ae:
	{
		// return builder.ToString();
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		return L_39;
	}
}
// System.String Facebook.WitAi.TTS.TTSService::GetClipID(System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetClipID_m6F5C20ED9A9161703FD6EFF9BE14551CBCFD0C1D (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// StringBuilder uniqueID = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// if (VoiceProvider != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// Dictionary<string, string> data = VoiceProvider.EncodeVoiceSettings(voiceSettings);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_3 = ___voiceSettings1;
		NullCheck(L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = InterfaceFuncInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider::EncodeVoiceSettings(Facebook.WitAi.TTS.Data.TTSVoiceSettings) */, ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		// foreach (var key in data.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_1;
		NullCheck(L_5);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_6;
		L_6 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_5, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_6);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_7;
		L_7 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_6, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_2), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_0029_1:
			{
				// foreach (var key in data.Keys)
				String_t* L_8;
				L_8 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_2), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_3 = L_8;
				// string keyClean = data[key].ToLower().Replace(CLIP_ID_DELIM, "");
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = V_1;
				String_t* L_10 = V_3;
				NullCheck(L_9);
				String_t* L_11;
				L_11 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_9, L_10, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_11);
				String_t* L_12;
				L_12 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_11, NULL);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				V_4 = L_13;
				// uniqueID.Append(keyClean);
				StringBuilder_t* L_14 = V_0;
				String_t* L_15 = V_4;
				NullCheck(L_14);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
				// uniqueID.Append(CLIP_ID_DELIM);
				StringBuilder_t* L_17 = V_0;
				NullCheck(L_17);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
			}

IL_0063_1:
			{
				// foreach (var key in data.Keys)
				bool L_19;
				L_19 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_2), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// uniqueID.Append(textToSpeak.ToLower());
		StringBuilder_t* L_20 = V_0;
		String_t* L_21 = ___textToSpeak0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_21, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_22, NULL);
		// return GetSha256Hash(CLIP_HASH, uniqueID.ToString());
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_24 = __this->___CLIP_HASH_8;
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		String_t* L_27;
		L_27 = TTSService_GetSha256Hash_mF63CF282ECF724FF6505A3752110FA6D04E23579(__this, L_24, L_26, NULL);
		return L_27;
	}
}
// System.String Facebook.WitAi.TTS.TTSService::GetSha256Hash(System.Security.Cryptography.SHA256,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetSha256Hash_mF63CF282ECF724FF6505A3752110FA6D04E23579 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___shaHash0, String_t* ___input1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// byte[] data = shaHash.ComputeHash(Encoding.UTF8.GetBytes(input));
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_0 = ___shaHash0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_2 = ___input1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_3, NULL);
		V_0 = L_4;
		// StringBuilder sBuilder = new StringBuilder();
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_5, NULL);
		V_1 = L_5;
		// for (int i = 0; i < data.Length; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		// sBuilder.Append(data[i].ToString("x2"));
		StringBuilder_t* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_9, NULL);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// return sBuilder.ToString();
		StringBuilder_t* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_CreateClipData_mCC5A088994F7A8527C5F4735989E0C813CEAB0C3 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* V_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B12_1 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B12_2 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B11_1 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B11_2 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B13_0 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B13_1 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B13_2 = NULL;
	{
		// if (voiceSettings == null && VoiceProvider != null)
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_0 = ___voiceSettings2;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// voiceSettings = VoiceProvider.VoiceDefaultSettings;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_2);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_3;
		L_3 = InterfaceFuncInvoker0< TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* >::Invoke(0 /* Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_VoiceDefaultSettings() */, ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var, L_2);
		___voiceSettings2 = L_3;
	}

IL_0018:
	{
		// if (diskCacheSettings == null && DiskCacheHandler != null)
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_4 = ___diskCacheSettings3;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// diskCacheSettings = DiskCacheHandler.DiskCacheDefaultSettings;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_6);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_7;
		L_7 = InterfaceFuncInvoker0< TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(2 /* Facebook.WitAi.TTS.Data.TTSDiskCacheSettings Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskCacheDefaultSettings() */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_6);
		___diskCacheSettings3 = L_7;
	}

IL_0031:
	{
		// if (string.IsNullOrEmpty(clipID))
		String_t* L_8 = ___clipID1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// clipID = GetClipID(textToSpeak, voiceSettings);
		String_t* L_10 = ___textToSpeak0;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_11 = ___voiceSettings2;
		String_t* L_12;
		L_12 = VirtualFuncInvoker2< String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* >::Invoke(16 /* System.String Facebook.WitAi.TTS.TTSService::GetClipID(System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings) */, __this, L_10, L_11);
		___clipID1 = L_12;
	}

IL_0043:
	{
		// TTSClipData clipData = GetRuntimeCachedClip(clipID);
		String_t* L_13 = ___clipID1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_14;
		L_14 = TTSService_GetRuntimeCachedClip_m7BBFA9662907394F5336A3BD9EFBE63F5980B1DA(__this, L_13, NULL);
		V_0 = L_14;
		// if (clipData != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = V_0;
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		// return clipData;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_16 = V_0;
		return L_16;
	}

IL_0050:
	{
		// clipData = new TTSClipData()
		// {
		//     clipID = clipID,
		//     textToSpeak = textToSpeak,
		//     voiceSettings = voiceSettings,
		//     diskCacheSettings = diskCacheSettings,
		//     loadState = TTSClipLoadState.Unloaded,
		//     loadProgress = 0f,
		//     queryParameters = VoiceProvider?.EncodeVoiceSettings(voiceSettings)
		// };
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_17 = (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)il2cpp_codegen_object_new(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		TTSClipData__ctor_m7C5F22000ABCAB8F122DB2BF11595A286E393368(L_17, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_18 = L_17;
		String_t* L_19 = ___clipID1;
		NullCheck(L_18);
		L_18->___clipID_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___clipID_1), (void*)L_19);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_20 = L_18;
		String_t* L_21 = ___textToSpeak0;
		NullCheck(L_20);
		L_20->___textToSpeak_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___textToSpeak_0), (void*)L_21);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_22 = L_20;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_23 = ___voiceSettings2;
		NullCheck(L_22);
		L_22->___voiceSettings_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___voiceSettings_3), (void*)L_23);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_24 = L_22;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_25 = ___diskCacheSettings3;
		NullCheck(L_24);
		L_24->___diskCacheSettings_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___diskCacheSettings_4), (void*)L_25);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_26 = L_24;
		NullCheck(L_26);
		L_26->___loadState_7 = 0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_27 = L_26;
		NullCheck(L_27);
		L_27->___loadProgress_8 = (0.0f);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_28 = L_27;
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		RuntimeObject* L_30 = L_29;
		G_B11_0 = L_30;
		G_B11_1 = L_28;
		G_B11_2 = L_28;
		if (L_30)
		{
			G_B12_0 = L_30;
			G_B12_1 = L_28;
			G_B12_2 = L_28;
			goto IL_0092;
		}
	}
	{
		G_B13_0 = ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		goto IL_0098;
	}

IL_0092:
	{
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_31 = ___voiceSettings2;
		NullCheck(G_B12_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32;
		L_32 = InterfaceFuncInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider::EncodeVoiceSettings(Facebook.WitAi.TTS.Data.TTSVoiceSettings) */, ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var, G_B12_0, L_31);
		G_B13_0 = L_32;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_0098:
	{
		NullCheck(G_B13_1);
		G_B13_1->___queryParameters_5 = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___queryParameters_5), (void*)G_B13_0);
		V_0 = G_B13_2;
		// return clipData;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_33 = V_0;
		return L_33;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::SetClipLoadState(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_SetClipLoadState_m20B26313E37F3B7F2BB52EF4654356A6F1DFCE8E (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, int32_t ___loadState1, const RuntimeMethod* method) 
{
	Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74* G_B2_0 = NULL;
	Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74* G_B1_0 = NULL;
	{
		// clipData.loadState = loadState;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		int32_t L_1 = ___loadState1;
		NullCheck(L_0);
		L_0->___loadState_7 = L_1;
		// clipData.onStateChange?.Invoke(clipData, clipData.loadState);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_2);
		Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74* L_3 = L_2->___onStateChange_9;
		Action_2_tAA1C06C8D23E06C5329910C9A69D830DE24FDD74* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_6 = ___clipData0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___loadState_7;
		NullCheck(G_B2_0);
		Action_2_Invoke_m04CB138F2E5BFD7E2F7DD47D766DD51BD86FEB5C_inline(G_B2_0, L_5, L_7, NULL);
		// }
		return;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_Load_m519A35EB0B2F42126BD053FECA2E298B78BDD526 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* ___onStreamReady1, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, null, null, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_1 = ___onStreamReady1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2;
		L_2 = VirtualFuncInvoker5< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* >::Invoke(19 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, (TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*)NULL, (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*)NULL, L_1);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_Load_mDEB1145354AD6E8C5526474A766EFD43CCF136FA (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* ___onStreamReady2, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, string presetVoiceId, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), null, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455(__this, L_1, NULL);
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_3 = ___onStreamReady2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4;
		L_4 = VirtualFuncInvoker5< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* >::Invoke(19 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_2, (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*)NULL, L_3);
		return L_4;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_Load_m8FE2F54C9B9F05A7DC08CF80ECA61559EBC67437 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings2, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* ___onStreamReady3, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, string presetVoiceId, TTSDiskCacheSettings diskCacheSettings, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), diskCacheSettings, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455(__this, L_1, NULL);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_3 = ___diskCacheSettings2;
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_4 = ___onStreamReady3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5;
		L_5 = VirtualFuncInvoker5< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* >::Invoke(19 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_2, L_3, L_4);
		return L_5;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_Load_m47732298D0610E4C73982EB0107BE736AE57DF8A (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings1, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings2, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* ___onStreamReady3, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, TTSVoiceSettings voiceSettings, TTSDiskCacheSettings diskCacheSettings, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, voiceSettings, diskCacheSettings, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_1 = ___voiceSettings1;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_2 = ___diskCacheSettings2;
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_3 = ___onStreamReady3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4;
		L_4 = VirtualFuncInvoker5< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* >::Invoke(19 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_1, L_2, L_3);
		return L_4;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_Load_m8D096F80DA50A1198943DBC8A1A921C564A363BA (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* ___onStreamReady4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m99928E1F2B162041FD4A9B97C2109A5511A807C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mC6986DFE9D64E2E70A09BFFC13027613B2587BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_mAD3ED337AF17390239B7A22243625D6204595DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mACF312205C963BFA8109098A53B4E20B8CF542F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_m05451A0844CD8DF8D6F774B7B9B30595A7CEDD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* V_0 = NULL;
	Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* G_B3_0 = NULL;
	Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_0 = (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_m3EC242B9449233D438284F27ACBE92D4664F4B83(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_1 = V_0;
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_2 = ___onStreamReady4;
		NullCheck(L_1);
		L_1->___onStreamReady_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onStreamReady_0), (void*)L_2);
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		// AddDelegates();
		VirtualActionInvoker0::Invoke(12 /* System.Void Facebook.WitAi.TTS.TTSService::AddDelegates() */, __this);
		// TTSClipData clipData = CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings);
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_4 = V_0;
		String_t* L_5 = ___textToSpeak0;
		String_t* L_6 = ___clipID1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_7 = ___voiceSettings2;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_8 = ___diskCacheSettings3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9;
		L_9 = VirtualFuncInvoker4< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(17 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_5, L_6, L_7, L_8);
		NullCheck(L_4);
		L_4->___clipData_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___clipData_1), (void*)L_9);
		// if (clipData == null)
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = L_10->___clipData_1;
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		// VLog.E("No clip provided");
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(_stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C, NULL);
		// onStreamReady?.Invoke(clipData, "No clip provided");
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_12 = V_0;
		NullCheck(L_12);
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_13 = L_12->___onStreamReady_0;
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_004a;
		}
	}
	{
		goto IL_005a;
	}

IL_004a:
	{
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_15 = V_0;
		NullCheck(L_15);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_16 = L_15->___clipData_1;
		NullCheck(G_B3_0);
		Action_2_Invoke_mE7F840CB53F1F6B008B4626F4555B0C20917B4FA_inline(G_B3_0, L_16, _stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C, NULL);
	}

IL_005a:
	{
		// return null;
		return (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
	}

IL_005c:
	{
		// if (clipData.loadState != TTSClipLoadState.Unloaded)
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_17 = V_0;
		NullCheck(L_17);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_18 = L_17->___clipData_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___loadState_7;
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		// if (onStreamReady != null)
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_20 = V_0;
		NullCheck(L_20);
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_21 = L_20->___onStreamReady_0;
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// if (clipData.loadState == TTSClipLoadState.Preparing)
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_22 = V_0;
		NullCheck(L_22);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_23 = L_22->___clipData_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->___loadState_7;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00a8;
		}
	}
	{
		// clipData.onPlaybackReady += (e) => onStreamReady(clipData, e);
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_26 = L_25->___clipData_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_27 = L_26;
		NullCheck(L_27);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_28 = L_27->___onPlaybackReady_10;
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_29 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_30 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mACF312205C963BFA8109098A53B4E20B8CF542F9_RuntimeMethod_var), NULL);
		Delegate_t* L_31;
		L_31 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_28, L_30, NULL);
		NullCheck(L_27);
		L_27->___onPlaybackReady_10 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_31, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___onPlaybackReady_10), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_31, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		goto IL_00c1;
	}

IL_00a8:
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData,
		//     clipData.loadState == TTSClipLoadState.Loaded ? string.Empty : "Error")));
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_32 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m99928E1F2B162041FD4A9B97C2109A5511A807C1_RuntimeMethod_var), NULL);
		RuntimeObject* L_34;
		L_34 = TTSService_CallAfterAMoment_m03F6421DBD973A75A352F0CE0D810DD1F5788765(__this, L_33, NULL);
		CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* L_35;
		L_35 = CoroutineUtility_StartCoroutine_mB06C8EE1DC30AF93C6513CEC927A53ECE5628657(L_34, (bool)0, NULL);
	}

IL_00c1:
	{
		// return clipData;
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_36 = V_0;
		NullCheck(L_36);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_37 = L_36->___clipData_1;
		return L_37;
	}

IL_00c8:
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_38)
		{
			goto IL_0103;
		}
	}
	{
		// if (!RuntimeCacheHandler.AddClip(clipData))
		RuntimeObject* L_39;
		L_39 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_40 = V_0;
		NullCheck(L_40);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_41 = L_40->___clipData_1;
		NullCheck(L_39);
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(6 /* System.Boolean Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::AddClip(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_39, L_41);
		if (L_42)
		{
			goto IL_010f;
		}
	}
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData, "Could not add to runtime cache")));
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_43 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mC6986DFE9D64E2E70A09BFFC13027613B2587BE9_RuntimeMethod_var), NULL);
		RuntimeObject* L_45;
		L_45 = TTSService_CallAfterAMoment_m03F6421DBD973A75A352F0CE0D810DD1F5788765(__this, L_44, NULL);
		CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* L_46;
		L_46 = CoroutineUtility_StartCoroutine_mB06C8EE1DC30AF93C6513CEC927A53ECE5628657(L_45, (bool)0, NULL);
		// return clipData;
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_47 = V_0;
		NullCheck(L_47);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_48 = L_47->___clipData_1;
		return L_48;
	}

IL_0103:
	{
		// OnLoadBegin(clipData);
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_49 = V_0;
		NullCheck(L_49);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_50 = L_49->___clipData_1;
		TTSService_OnLoadBegin_mEF23BE71AAF97F03FDD9466AD35CC930364A9AA5(__this, L_50, NULL);
	}

IL_010f:
	{
		// clipData.onPlaybackReady += (error) => onStreamReady(clipData, error);
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_51 = V_0;
		NullCheck(L_51);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_52 = L_51->___clipData_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_53 = L_52;
		NullCheck(L_53);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_54 = L_53->___onPlaybackReady_10;
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_55 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_56 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_56, L_55, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_m05451A0844CD8DF8D6F774B7B9B30595A7CEDD73_RuntimeMethod_var), NULL);
		Delegate_t* L_57;
		L_57 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_54, L_56, NULL);
		NullCheck(L_53);
		L_53->___onPlaybackReady_10 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_57, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_53->___onPlaybackReady_10), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_57, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() =>
		// {
		//     // Check for invalid text
		//     string invalidError = WebHandler.IsTextValid(clipData.textToSpeak);
		//     if (!string.IsNullOrEmpty(invalidError))
		//     {
		//         OnWebStreamError(clipData, invalidError);
		//         return;
		//     }
		// 
		//     // If should cache to disk, attempt to do so
		//     if (ShouldCacheToDisk(clipData))
		//     {
		//         // Download was canceled before starting
		//         if (clipData.loadState != TTSClipLoadState.Preparing)
		//         {
		//             string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		//             OnWebDownloadBegin(clipData, downloadPath);
		//             OnWebDownloadCancel(clipData, downloadPath);
		//             OnWebStreamBegin(clipData);
		//             OnWebStreamCancel(clipData);
		//             return;
		//         }
		// 
		//         // Download
		//         DownloadToDiskCache(clipData, (clipData2, downloadPath, error) =>
		//         {
		//             // Download was canceled before starting
		//             if (string.Equals(error, CANCEL_WARNING))
		//             {
		//                 OnWebStreamBegin(clipData);
		//                 OnWebStreamCancel(clipData);
		//                 return;
		//             }
		// 
		//             // Success
		//             if (string.IsNullOrEmpty(error))
		//             {
		//                 DiskCacheHandler?.StreamFromDiskCache(clipData);
		//             }
		//             // Failed
		//             else
		//             {
		//                 WebHandler?.RequestStreamFromWeb(clipData);
		//             }
		//         });
		//     }
		//     // Simply stream from the web
		//     else
		//     {
		//         // Stream was canceled before starting
		//         if (clipData.loadState != TTSClipLoadState.Preparing)
		//         {
		//             OnWebStreamBegin(clipData);
		//             OnWebStreamCancel(clipData);
		//             return;
		//         }
		// 
		//         // Stream
		//         WebHandler?.RequestStreamFromWeb(clipData);
		//     }
		// }));
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_58 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_59 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_59, L_58, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_mAD3ED337AF17390239B7A22243625D6204595DF9_RuntimeMethod_var), NULL);
		RuntimeObject* L_60;
		L_60 = TTSService_CallAfterAMoment_m03F6421DBD973A75A352F0CE0D810DD1F5788765(__this, L_59, NULL);
		CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* L_61;
		L_61 = CoroutineUtility_StartCoroutine_mB06C8EE1DC30AF93C6513CEC927A53ECE5628657(L_60, (bool)0, NULL);
		// return clipData;
		U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* L_62 = V_0;
		NullCheck(L_62);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_63 = L_62->___clipData_1;
		return L_63;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.TTS.TTSService::CallAfterAMoment(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSService_CallAfterAMoment_m03F6421DBD973A75A352F0CE0D810DD1F5788765 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* L_0 = (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5*)il2cpp_codegen_object_new(U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCallAfterAMomentU3Ed__35__ctor_m0CFB66F4266B7879A143646E4A139700AAB440BD(L_0, 0, NULL);
		U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___call0;
		NullCheck(L_1);
		L_1->___call_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___call_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnLoadBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnLoadBegin_mEF23BE71AAF97F03FDD9466AD35CC930364A9AA5 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B2_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B1_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B4_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B3_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Preparing);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, int32_t >::Invoke(18 /* System.Void Facebook.WitAi.TTS.TTSService::SetClipLoadState(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 1);
		// VLog.D(GetClipLog("Load Clip", clipData));
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, _stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117, L_1);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_2, NULL);
		// Events?.OnClipCreated?.Invoke(clipData);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_3;
		L_3 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_5 = G_B2_0->___OnClipCreated_0;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = ___clipData0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B4_0, L_7, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnDiskStreamBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamBegin_m0F72BA1CB1E085E21764EF778988BB14F11F6385 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamBegin(TTSClipData clipData) => OnStreamBegin(clipData, true);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnStreamBegin_m2FA4A6714C77A6350FDEFE222A46F86D018A9630(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamBegin(TTSClipData clipData) => OnStreamBegin(clipData, false);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnStreamBegin_m2FA4A6714C77A6350FDEFE222A46F86D018A9630(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamBegin(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamBegin_m2FA4A6714C77A6350FDEFE222A46F86D018A9630 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B2_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B3_1 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B5_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B4_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B7_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B6_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B9_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B8_0 = NULL;
	{
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Begin", clipData));
		bool L_0 = ___fromDisk1;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_0, _stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(G_B3_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, G_B3_1, L_1, L_2);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_3, NULL);
		// Events?.Stream?.OnStreamBegin?.Invoke(clipData);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_4;
		L_4 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		NullCheck(G_B5_0);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_6 = G_B5_0->___Stream_2;
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_7 = L_6;
		G_B6_0 = L_7;
		if (L_7)
		{
			G_B7_0 = L_7;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_8 = G_B7_0->___OnStreamBegin_0;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_9 = L_8;
		G_B8_0 = L_9;
		if (L_9)
		{
			G_B9_0 = L_9;
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0044:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_10 = ___clipData0;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B9_0, L_10, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnDiskStreamReady(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamReady_mBD9BADE3481ED6182217220E0865B346063968DA (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamReady(TTSClipData clipData) => OnStreamReady(clipData, true);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnStreamReady_mE8179F78A0EF73F0CAD99A051E94A161CA98C666(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamReady(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamReady_m427CFD05C37F97ECB308BB1C6D7586CE07D71B48 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamReady(TTSClipData clipData) => OnStreamReady(clipData, false);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnStreamReady_mE8179F78A0EF73F0CAD99A051E94A161CA98C666(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamReady(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamReady_mE8179F78A0EF73F0CAD99A051E94A161CA98C666 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B5_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B8_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B9_1 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B11_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B10_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B13_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B12_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B15_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B14_0 = NULL;
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// RuntimeCacheHandler.OnClipRemoved.RemoveListener(OnRuntimeClipRemoved);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_1);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* >::Invoke(2 /* Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_1);
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_3 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_3, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_2, L_3, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		// bool failed = !RuntimeCacheHandler.AddClip(clipData);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(6 /* System.Boolean Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::AddClip(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_4, L_5);
		// RuntimeCacheHandler.OnClipRemoved.AddListener(OnRuntimeClipRemoved);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_7);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_8;
		L_8 = InterfaceFuncInvoker0< TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* >::Invoke(2 /* Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_7);
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_9 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_8, L_9, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// if (failed)
		if (!((((int32_t)L_6) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0068;
		}
	}
	{
		// OnStreamError(clipData, "Removed from runtime cache due to file size", fromDisk);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_10 = ___clipData0;
		bool L_11 = ___fromDisk1;
		TTSService_OnStreamError_m8E6425704C039CBAF2EF775410928FA1DE4029D5(__this, L_10, _stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD, L_11, NULL);
		// OnRuntimeClipRemoved(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12 = ___clipData0;
		VirtualActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(21 /* System.Void Facebook.WitAi.TTS.TTSService::OnRuntimeClipRemoved(Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_12);
		// return;
		return;
	}

IL_0068:
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Loaded);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, int32_t >::Invoke(18 /* System.Void Facebook.WitAi.TTS.TTSService::SetClipLoadState(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_13, 2);
		// clipData.onPlaybackReady?.Invoke(string.Empty);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_14 = ___clipData0;
		NullCheck(L_14);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_15 = L_14->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_16 = L_15;
		G_B4_0 = L_16;
		if (L_16)
		{
			G_B5_0 = L_16;
			goto IL_007c;
		}
	}
	{
		goto IL_0086;
	}

IL_007c:
	{
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B5_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B5_0, L_17, NULL);
	}

IL_0086:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_18 = ___clipData0;
		NullCheck(L_18);
		L_18->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Ready", clipData));
		bool L_19 = ___fromDisk1;
		G_B7_0 = __this;
		if (L_19)
		{
			G_B8_0 = __this;
			goto IL_0098;
		}
	}
	{
		G_B9_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B9_1 = G_B7_0;
		goto IL_009d;
	}

IL_0098:
	{
		G_B9_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B9_1 = G_B8_0;
	}

IL_009d:
	{
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B9_0, _stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_21 = ___clipData0;
		NullCheck(G_B9_1);
		String_t* L_22;
		L_22 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, G_B9_1, L_20, L_21);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_22, NULL);
		// Events?.Stream?.OnStreamReady?.Invoke(clipData);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_23;
		L_23 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_24 = L_23;
		G_B10_0 = L_24;
		if (L_24)
		{
			G_B11_0 = L_24;
			goto IL_00bd;
		}
	}
	{
		return;
	}

IL_00bd:
	{
		NullCheck(G_B11_0);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_25 = G_B11_0->___Stream_2;
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_26 = L_25;
		G_B12_0 = L_26;
		if (L_26)
		{
			G_B13_0 = L_26;
			goto IL_00c7;
		}
	}
	{
		return;
	}

IL_00c7:
	{
		NullCheck(G_B13_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_27 = G_B13_0->___OnStreamReady_1;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_28 = L_27;
		G_B14_0 = L_28;
		if (L_28)
		{
			G_B15_0 = L_28;
			goto IL_00d1;
		}
	}
	{
		return;
	}

IL_00d1:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_29 = ___clipData0;
		NullCheck(G_B15_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B15_0, L_29, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnDiskStreamCancel(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamCancel_m890D6D96308198CDB9E751F2F483F6FAADF71C24 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamCancel(TTSClipData clipData) => OnStreamCancel(clipData, true);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnStreamCancel_m0BA986779E377C58705BA74A0CED42C72CA494AF(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamCancel(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamCancel(TTSClipData clipData) => OnStreamCancel(clipData, false);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnStreamCancel_m0BA986779E377C58705BA74A0CED42C72CA494AF(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamCancel(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamCancel_m0BA986779E377C58705BA74A0CED42C72CA494AF (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B5_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B6_1 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B8_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B7_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B10_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B9_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B12_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B11_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Error);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, int32_t >::Invoke(18 /* System.Void Facebook.WitAi.TTS.TTSService::SetClipLoadState(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 3);
		// clipData.onPlaybackReady?.Invoke(CANCEL_WARNING);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0014;
		}
	}
	{
		goto IL_001e;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
	}

IL_001e:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		NullCheck(L_4);
		L_4->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Canceled", clipData));
		bool L_5 = ___fromDisk1;
		G_B4_0 = __this;
		if (L_5)
		{
			G_B5_0 = __this;
			goto IL_0030;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0030:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B6_0, _stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = ___clipData0;
		NullCheck(G_B6_1);
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_6, L_7);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_8, NULL);
		// Events?.Stream?.OnStreamCancel?.Invoke(clipData);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_9;
		L_9 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0056;
		}
	}
	{
		goto IL_0072;
	}

IL_0056:
	{
		NullCheck(G_B8_0);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_11 = G_B8_0->___Stream_2;
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_0061;
		}
	}
	{
		goto IL_0072;
	}

IL_0061:
	{
		NullCheck(G_B10_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_13 = G_B10_0->___OnStreamCancel_2;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_006c;
		}
	}
	{
		goto IL_0072;
	}

IL_006c:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = ___clipData0;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B12_0, L_15, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
	}

IL_0072:
	{
		// Unload(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_16 = ___clipData0;
		TTSService_Unload_m788AE39AD5F1CC97D9268F9CC471DC747F92993A(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnDiskStreamError(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamError_mABE1088C2B6EB9510A61127EBC50BCF7497BF3E1 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamError(TTSClipData clipData, string error) => OnStreamError(clipData, error, true);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		String_t* L_1 = ___error1;
		TTSService_OnStreamError_m8E6425704C039CBAF2EF775410928FA1DE4029D5(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebStreamError(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamError(TTSClipData clipData, string error) => OnStreamError(clipData, error, false);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		String_t* L_1 = ___error1;
		TTSService_OnStreamError_m8E6425704C039CBAF2EF775410928FA1DE4029D5(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnStreamError(Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamError_m8E6425704C039CBAF2EF775410928FA1DE4029D5 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, bool ___fromDisk2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B5_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B6_1 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B8_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B7_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B10_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B9_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B12_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B11_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Error);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, int32_t >::Invoke(18 /* System.Void Facebook.WitAi.TTS.TTSService::SetClipLoadState(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 3);
		// clipData.onPlaybackReady?.Invoke(error);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0014;
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		String_t* L_4 = ___error1;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_4, NULL);
	}

IL_001a:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		NullCheck(L_5);
		L_5->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.E(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Error\nError: {error}", clipData));
		bool L_6 = ___fromDisk2;
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_002c;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0031;
	}

IL_002c:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0031:
	{
		String_t* L_7 = ___error1;
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B6_0, _stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD, L_7, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = ___clipData0;
		NullCheck(G_B6_1);
		String_t* L_10;
		L_10 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_8, L_9);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_10, NULL);
		// Events?.Stream?.OnStreamError?.Invoke(clipData, error);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_11;
		L_11 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_0053;
		}
	}
	{
		goto IL_0070;
	}

IL_0053:
	{
		NullCheck(G_B8_0);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_13 = G_B8_0->___Stream_2;
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_005e;
		}
	}
	{
		goto IL_0070;
	}

IL_005e:
	{
		NullCheck(G_B10_0);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_15 = G_B10_0->___OnStreamError_3;
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_16 = L_15;
		G_B11_0 = L_16;
		if (L_16)
		{
			G_B12_0 = L_16;
			goto IL_0069;
		}
	}
	{
		goto IL_0070;
	}

IL_0069:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_17 = ___clipData0;
		String_t* L_18 = ___error1;
		NullCheck(G_B12_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B12_0, L_17, L_18, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
	}

IL_0070:
	{
		// Unload(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_19 = ___clipData0;
		TTSService_Unload_m788AE39AD5F1CC97D9268F9CC471DC747F92993A(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m90B79B7B1D03F27D2950612CB8551921ACDC69DC (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* V_0 = NULL;
	TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* V_1 = NULL;
	TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* V_2 = NULL;
	int32_t V_3 = 0;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* V_4 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* G_B3_0 = NULL;
	{
		// TTSClipData[] clips = RuntimeCacheHandler?.GetClips();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* >::Invoke(4 /* Facebook.WitAi.TTS.Data.TTSClipData[] Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClips() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// if (clips == null)
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// TTSClipData[] copy = new TTSClipData[clips.Length];
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_4 = V_0;
		NullCheck(L_4);
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_5 = (TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33*)(TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33*)SZArrayNew(TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		// clips.CopyTo(copy, 0);
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_6 = V_0;
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_7 = V_1;
		NullCheck((RuntimeArray*)L_6);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_6, (RuntimeArray*)L_7, 0, NULL);
		// foreach (var clip in copy)
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_8 = V_1;
		V_2 = L_8;
		V_3 = 0;
		goto IL_003f;
	}

IL_002e:
	{
		// foreach (var clip in copy)
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		// Unload(clip);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = V_4;
		TTSService_Unload_m788AE39AD5F1CC97D9268F9CC471DC747F92993A(__this, L_13, NULL);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003f:
	{
		// foreach (var clip in copy)
		int32_t L_15 = V_3;
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::Unload(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Unload_m788AE39AD5F1CC97D9268F9CC471DC747F92993A (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// RuntimeCacheHandler.RemoveClip(clipData.clipID);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::RemoveClip(System.String) */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, L_1, L_3);
		return;
	}

IL_001a:
	{
		// OnUnloadBegin(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		TTSService_OnUnloadBegin_m295A418029FB7CE4A7B250C7B0D65C6F012524C3(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnUnloadBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnUnloadBegin_m295A418029FB7CE4A7B250C7B0D65C6F012524C3 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B14_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B13_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B16_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B15_0 = NULL;
	{
		// if (clipData.loadState == TTSClipLoadState.Preparing)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___loadState_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		// WebHandler?.CancelWebStream(clipData);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0015;
		}
	}
	{
		goto IL_001c;
	}

IL_0015:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		NullCheck(G_B3_0);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(4 /* System.Boolean Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::CancelWebStream(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, G_B3_0, L_4);
	}

IL_001c:
	{
		// WebHandler?.CancelWebDownload(clipData, GetDiskCachePath(clipData.textToSpeak, clipData.clipID, clipData.voiceSettings, clipData.diskCacheSettings));
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		RuntimeObject* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0028;
		}
	}
	{
		goto IL_004d;
	}

IL_0028:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_8 = ___clipData0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = ___clipData0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___textToSpeak_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = ___clipData0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___clipID_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = ___clipData0;
		NullCheck(L_13);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_14 = L_13->___voiceSettings_3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = ___clipData0;
		NullCheck(L_15);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_16 = L_15->___diskCacheSettings_4;
		String_t* L_17;
		L_17 = TTSService_GetDiskCachePath_m3C99E181DA4B30F07D914D667E970F3AAA8BE650(__this, L_10, L_12, L_14, L_16, NULL);
		NullCheck(G_B6_0);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t* >::Invoke(8 /* System.Boolean Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::CancelWebDownload(Facebook.WitAi.TTS.Data.TTSClipData,System.String) */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, G_B6_0, L_8, L_17);
	}

IL_004d:
	{
		// DiskCacheHandler?.CancelDiskCacheStream(clipData);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		RuntimeObject* L_20 = L_19;
		G_B8_0 = L_20;
		if (L_20)
		{
			G_B9_0 = L_20;
			goto IL_0059;
		}
	}
	{
		goto IL_007a;
	}

IL_0059:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_21 = ___clipData0;
		NullCheck(G_B9_0);
		InterfaceActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(7 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::CancelDiskCacheStream(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, G_B9_0, L_21);
		goto IL_007a;
	}

IL_0061:
	{
		// else if (clipData.clip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_22 = ___clipData0;
		NullCheck(L_22);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = L_22->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_007a;
		}
	}
	{
		// MonoBehaviour.DestroyImmediate(clipData.clip);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_25 = ___clipData0;
		NullCheck(L_25);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26 = L_25->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_26, NULL);
	}

IL_007a:
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Unloaded);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_27 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, int32_t >::Invoke(18 /* System.Void Facebook.WitAi.TTS.TTSService::SetClipLoadState(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_27, 0);
		// VLog.D(GetClipLog($"Unload Clip", clipData));
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_28 = ___clipData0;
		String_t* L_29;
		L_29 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, _stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84, L_28);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_29, NULL);
		// Events?.OnClipUnloaded?.Invoke(clipData);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_30;
		L_30 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_31 = L_30;
		G_B13_0 = L_31;
		if (L_31)
		{
			G_B14_0 = L_31;
			goto IL_009e;
		}
	}
	{
		return;
	}

IL_009e:
	{
		NullCheck(G_B14_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_32 = G_B14_0->___OnClipUnloaded_1;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_33 = L_32;
		G_B15_0 = L_33;
		if (L_33)
		{
			G_B16_0 = L_33;
			goto IL_00a8;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_34 = ___clipData0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B16_0, L_34, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::GetRuntimeCachedClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_GetRuntimeCachedClip_m7BBFA9662907394F5336A3BD9EFBE63F5980B1DA (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___clipID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public TTSClipData GetRuntimeCachedClip(string clipID) => RuntimeCacheHandler?.GetClip(clipID);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
	}

IL_000c:
	{
		String_t* L_2 = ___clipID0;
		NullCheck(G_B2_0);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3;
		L_3 = InterfaceFuncInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t* >::Invoke(5 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClip(System.String) */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, G_B2_0, L_2);
		return L_3;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData[] Facebook.WitAi.TTS.TTSService::GetAllRuntimeCachedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* TTSService_GetAllRuntimeCachedClips_mE21B47506A69757F1AF31925FD05BFC14069697F (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public TTSClipData[] GetAllRuntimeCachedClips() => RuntimeCacheHandler?.GetClips();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* >::Invoke(4 /* Facebook.WitAi.TTS.Data.TTSClipData[] Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClips() */, ITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnRuntimeClipAdded(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnRuntimeClipAdded_mD4A2D7A62DEDEB8661DDD3EE2C9204F69466C07A (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnRuntimeClipAdded(TTSClipData clipData) => OnLoadBegin(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnLoadBegin_mEF23BE71AAF97F03FDD9466AD35CC930364A9AA5(__this, L_0, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnRuntimeClipRemoved(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnRuntimeClipRemoved_m53E1C2A92257E3F61C26B346F66B1C10BA46572F (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnRuntimeClipRemoved(TTSClipData clipData) => OnUnloadBegin(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSService_OnUnloadBegin_m295A418029FB7CE4A7B250C7B0D65C6F012524C3(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.TTSService::ShouldCacheToDisk(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSService_ShouldCacheToDisk_mF9799C2D67960DD11CA622236A218DDC6E5CAC92 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DiskCacheHandler != null && DiskCacheHandler.ShouldCacheToDisk(clipData);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(4 /* System.Boolean Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::ShouldCacheToDisk(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.String Facebook.WitAi.TTS.TTSService::GetDiskCachePath(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetDiskCachePath_m3C99E181DA4B30F07D914D667E970F3AAA8BE650 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// DiskCacheHandler?.GetDiskCachePath(CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000c:
	{
		String_t* L_2 = ___textToSpeak0;
		String_t* L_3 = ___clipID1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_4 = ___voiceSettings2;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_5 = ___diskCacheSettings3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_6;
		L_6 = VirtualFuncInvoker4< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(17 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_2, L_3, L_4, L_5);
		NullCheck(G_B2_0);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(3 /* System.String Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, G_B2_0, L_6);
		return L_7;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_DownloadToDiskCache_m175F1086B953B650CEF58C4850DCC8C02ACCD6EC (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete1, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, null, null, onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_1 = ___onDownloadComplete1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2;
		L_2 = TTSService_DownloadToDiskCache_mB3FBB6A68F11059719CA0CBD9999ABD195827989(__this, L_0, (String_t*)NULL, (TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*)NULL, (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*)NULL, L_1, NULL);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_DownloadToDiskCache_m3BB2BCCFFF371BDF8EA3F971C09C511D96E19EEA (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete2, const RuntimeMethod* method) 
{
	{
		// Action<TTSClipData, string, string> onDownloadComplete = null) => DownloadToDiskCache(textToSpeak, null,
		// GetPresetVoiceSettings(presetVoiceId), null, onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455(__this, L_1, NULL);
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_3 = ___onDownloadComplete2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4;
		L_4 = TTSService_DownloadToDiskCache_mB3FBB6A68F11059719CA0CBD9999ABD195827989(__this, L_0, (String_t*)NULL, L_2, (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*)NULL, L_3, NULL);
		return L_4;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_DownloadToDiskCache_mF715502FF33D024BF26BB26E706EE97FC2DE2296 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings2, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete3, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), diskCacheSettings,
		//     onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455(__this, L_1, NULL);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_3 = ___diskCacheSettings2;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_4 = ___onDownloadComplete3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5;
		L_5 = TTSService_DownloadToDiskCache_mB3FBB6A68F11059719CA0CBD9999ABD195827989(__this, L_0, (String_t*)NULL, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_DownloadToDiskCache_m6A32D42E53118A32040E3A4041C8D34B4B6E4C5E (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings1, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings2, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete3, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, voiceSettings, diskCacheSettings, onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_1 = ___voiceSettings1;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_2 = ___diskCacheSettings2;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_3 = ___onDownloadComplete3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4;
		L_4 = TTSService_DownloadToDiskCache_mB3FBB6A68F11059719CA0CBD9999ABD195827989(__this, L_0, (String_t*)NULL, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSService_DownloadToDiskCache_mB3FBB6A68F11059719CA0CBD9999ABD195827989 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete4, const RuntimeMethod* method) 
{
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* V_0 = NULL;
	{
		// TTSClipData clipData = CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___clipID1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2 = ___voiceSettings2;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_3 = ___diskCacheSettings3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4;
		L_4 = VirtualFuncInvoker4< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(17 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		// DownloadToDiskCache(clipData, onDownloadComplete);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = V_0;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_6 = ___onDownloadComplete4;
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* >::Invoke(22 /* System.Void Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(Facebook.WitAi.TTS.Data.TTSClipData,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>) */, __this, L_5, L_6);
		// return clipData;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = V_0;
		return L_7;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(Facebook.WitAi.TTS.Data.TTSClipData,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_DownloadToDiskCache_m1C504BC3C21FEA3B1CCA01607F7071BB451BDE44 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* ___onDownloadComplete1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_mDF4E759C25A703524DC1818716D7AACEFB31E503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_0 = (U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass63_0__ctor_mE9BB3380CC7BDA8D531B0483D7BA2FD96918FAFB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_2 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = ___clipData0;
		NullCheck(L_2);
		L_2->___clipData_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_2), (void*)L_3);
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_4 = V_0;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_5 = ___onDownloadComplete1;
		NullCheck(L_4);
		L_4->___onDownloadComplete_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_3), (void*)L_5);
		// AddDelegates();
		VirtualActionInvoker0::Invoke(12 /* System.Void Facebook.WitAi.TTS.TTSService::AddDelegates() */, __this);
		// string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = L_8->___clipData_2;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(3 /* System.String Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_7, L_9);
		NullCheck(L_6);
		L_6->___downloadPath_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___downloadPath_1), (void*)L_10);
		// DiskCacheHandler.CheckCachedToDisk(clipData, (clip, found) =>
		// {
		//     // Cache checked
		//     VLog.D(GetClipLog($"Disk Cache {(found ? "Found" : "Missing")}\nPath: {downloadPath}", clipData));
		// 
		//     // Already downloaded, return successful
		//     if (found)
		//     {
		//         onDownloadComplete?.Invoke(clipData, downloadPath, string.Empty);
		//         return;
		//     }
		// 
		//     // Preload selected but not in disk cache, return an error
		//     if (Application.isPlaying && clipData.diskCacheSettings.DiskCacheLocation == TTSDiskCacheLocation.Preload)
		//     {
		//         onDownloadComplete?.Invoke(clipData, downloadPath, "File is not Preloaded");
		//         return;
		//     }
		// 
		//     // Add download completion callback
		//     clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		// 
		//     // Download to cache
		//     WebHandler.RequestDownloadFromWeb(clipData, downloadPath);
		// });
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_12 = V_0;
		NullCheck(L_12);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = L_12->___clipData_2;
		U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* L_14 = V_0;
		Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* L_15 = (Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC*)il2cpp_codegen_object_new(Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_2__ctor_m36F0FE03049EC0952863B0AF092FDF9BAC0CF082(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_mDF4E759C25A703524DC1818716D7AACEFB31E503_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* >::Invoke(5 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::CheckCachedToDisk(Facebook.WitAi.TTS.Data.TTSClipData,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean>) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_11, L_13, L_15);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebDownloadBegin(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105B80D12DB6276478E269600E49F476237FA089);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B2_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B1_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B4_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B3_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B6_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B5_0 = NULL;
	{
		// VLog.D(GetClipLog($"Download Clip - Begin\nPath: {downloadPath}", clipData));
		String_t* L_0 = ___downloadPath1;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral105B80D12DB6276478E269600E49F476237FA089, L_0, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_1, L_2);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_3, NULL);
		// Events?.Download?.OnDownloadBegin?.Invoke(clipData, downloadPath);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_4;
		L_4 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		NullCheck(G_B2_0);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_6 = G_B2_0->___Download_3;
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		NullCheck(G_B4_0);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_8 = G_B4_0->___OnDownloadBegin_0;
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_10 = ___clipData0;
		String_t* L_11 = ___downloadPath1;
		NullCheck(G_B6_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B6_0, L_10, L_11, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebDownloadSuccess(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadSuccess_m924957A95BB1E5286384B1F30EAE7D3C04736D1F (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B5_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B4_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B7_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B6_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B9_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(string.Empty);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		goto IL_0016;
	}

IL_000c:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
	}

IL_0016:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		NullCheck(L_4);
		L_4->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"Download Clip - Success\nPath: {downloadPath}", clipData));
		String_t* L_5 = ___downloadPath1;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9, L_5, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = ___clipData0;
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_6, L_7);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_8, NULL);
		// Events?.Download?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_9;
		L_9 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_11 = G_B5_0->___Download_3;
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_13 = G_B7_0->___OnDownloadSuccess_1;
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = ___clipData0;
		String_t* L_16 = ___downloadPath1;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B9_0, L_15, L_16, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebDownloadCancel(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B5_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B4_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B7_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B6_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B9_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(CANCEL_WARNING);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		goto IL_0016;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
	}

IL_0016:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = ___clipData0;
		NullCheck(L_3);
		L_3->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"Download Clip - Canceled\nPath: {downloadPath}", clipData));
		String_t* L_4 = ___downloadPath1;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1, L_4, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_6 = ___clipData0;
		String_t* L_7;
		L_7 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_5, L_6);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_7, NULL);
		// Events?.Download?.OnDownloadCancel?.Invoke(clipData, downloadPath);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_8;
		L_8 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_10 = G_B5_0->___Download_3;
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_11 = L_10;
		G_B6_0 = L_11;
		if (L_11)
		{
			G_B7_0 = L_11;
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_12 = G_B7_0->___OnDownloadCancel_2;
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_13 = L_12;
		G_B8_0 = L_13;
		if (L_13)
		{
			G_B9_0 = L_13;
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_14 = ___clipData0;
		String_t* L_15 = ___downloadPath1;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B9_0, L_14, L_15, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::OnWebDownloadError(Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadError_m38D3B9F9312B9CFBC958610CD30FDC492BBFE695 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, String_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B5_0 = NULL;
	TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* G_B4_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B7_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B6_0 = NULL;
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* G_B9_0 = NULL;
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(error);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_3 = ___error2;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
	}

IL_0012:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		NullCheck(L_4);
		L_4->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.E(GetClipLog($"Download Clip - Failed\nPath: {downloadPath}", clipData));
		String_t* L_5 = ___downloadPath1;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91, L_5, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = ___clipData0;
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_6, L_7);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_8, NULL);
		// Events?.Download?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_9;
		L_9 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(__this, NULL);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_11 = G_B5_0->___Download_3;
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_13 = G_B7_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = ___clipData0;
		String_t* L_16 = ___downloadPath1;
		String_t* L_17 = ___error2;
		NullCheck(G_B9_0);
		UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B(G_B9_0, L_15, L_16, L_17, UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var);
		// }
		return;
	}
}
// Facebook.WitAi.TTS.Data.TTSVoiceSettings[] Facebook.WitAi.TTS.TTSService::GetAllPresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* TTSService_GetAllPresetVoiceSettings_m19CC8680702DE88A73401EE7C733F7338D09BB4C (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public TTSVoiceSettings[] GetAllPresetVoiceSettings() => VoiceProvider?.PresetVoiceSettings;
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* L_2;
		L_2 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* >::Invoke(1 /* Facebook.WitAi.TTS.Data.TTSVoiceSettings[] Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.TTSService::GetPresetVoiceSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455 (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, String_t* ___presetVoiceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisTTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104_m477E4DC0A6BA52F28C5CDF1496D3E9F336F2B23E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mA142AB3AA507E747D6277C8D4738E4D2291E2747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* L_0 = (U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass69_0__ctor_m093F59084A28A2475F56E3A231C1396D5A35C39F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* L_1 = V_0;
		String_t* L_2 = ___presetVoiceId0;
		NullCheck(L_1);
		L_1->___presetVoiceId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___presetVoiceId_0), (void*)L_2);
		// if (VoiceProvider == null || VoiceProvider.PresetVoiceSettings == null)
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_4);
		TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* L_5;
		L_5 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* >::Invoke(1 /* Facebook.WitAi.TTS.Data.TTSVoiceSettings[] Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		// return null;
		return (TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*)NULL;
	}

IL_0024:
	{
		// return Array.Find(VoiceProvider.PresetVoiceSettings, (v) => string.Equals(v.settingsID, presetVoiceId, StringComparison.CurrentCultureIgnoreCase));
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_6);
		TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* L_7;
		L_7 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* >::Invoke(1 /* Facebook.WitAi.TTS.Data.TTSVoiceSettings[] Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_t9DFD1292E5864DED26C99606CB335554574F1299_il2cpp_TypeInfo_var, L_6);
		U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* L_8 = V_0;
		Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC* L_9 = (Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC*)il2cpp_codegen_object_new(Predicate_1_t1188C524B3424B59A0DDB8ABB6B1800A91DBB3CC_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Predicate_1__ctor_m5203FAABCE77244BD62CD785C1DB8EBFDEB4B859(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mA142AB3AA507E747D6277C8D4738E4D2291E2747_RuntimeMethod_var), NULL);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_10;
		L_10 = Array_Find_TisTTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104_m477E4DC0A6BA52F28C5CDF1496D3E9F336F2B23E(L_7, L_9, Array_Find_TisTTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104_m477E4DC0A6BA52F28C5CDF1496D3E9F336F2B23E_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService__ctor_mF5BC0E9DE19B4FEE2B5184A6FE377CF19816073A (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private TTSServiceEvents _events = new TTSServiceEvents();
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_0 = (TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB*)il2cpp_codegen_object_new(TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSServiceEvents__ctor_m3887C7D2504FB73D0E6E2642DDBD9E1EEB3C21D9(L_0, NULL);
		__this->____events_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_5), (void*)L_0);
		// private readonly SHA256 CLIP_HASH = SHA256.Create();
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_1;
		L_1 = SHA256_Create_mCF8D7EB52BAB85B20EAE61668D40DDF0CE3EC2E8(NULL);
		__this->___CLIP_HASH_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CLIP_HASH_8), (void*)L_1);
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
// System.Void Facebook.WitAi.TTS.TTSService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m243F6B9A343B57FC161CA63894D177B4FCCC1C08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9* L_0 = (U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9*)il2cpp_codegen_object_new(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m40F969DADEDDA6C67D4A594A4EC3BEBCA9BA8F1C(L_0, NULL);
		((U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m40F969DADEDDA6C67D4A594A4EC3BEBCA9BA8F1C (U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.TTSService/<>c::<get_Instance>b__1_0(Facebook.WitAi.TTS.TTSService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mFBAD312C057DCD8CBE56B07A0A2D2D5EC05F9158 (U3CU3Ec_tD7E6838F5F8C3D5446B4CA375457E7949F8ACAE9* __this, TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* ___o0, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _instance = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0 = ___o0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B((&V_0), NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3EC242B9449233D438284F27ACBE92D4664F4B83 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mACF312205C963BFA8109098A53B4E20B8CF542F9 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, String_t* ___e0, const RuntimeMethod* method) 
{
	{
		// clipData.onPlaybackReady += (e) => onStreamReady(clipData, e);
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_0 = __this->___onStreamReady_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->___clipData_1;
		String_t* L_2 = ___e0;
		NullCheck(L_0);
		Action_2_Invoke_mE7F840CB53F1F6B008B4626F4555B0C20917B4FA_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m99928E1F2B162041FD4A9B97C2109A5511A807C1 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B2_0 = NULL;
	Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* G_B2_1 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B1_0 = NULL;
	Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B3_1 = NULL;
	Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* G_B3_2 = NULL;
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData,
		//     clipData.loadState == TTSClipLoadState.Loaded ? string.Empty : "Error")));
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_0 = __this->___onStreamReady_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->___clipData_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___loadState_7;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0026;
	}

IL_0021:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0026:
	{
		NullCheck(G_B3_2);
		Action_2_Invoke_mE7F840CB53F1F6B008B4626F4555B0C20917B4FA_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mC6986DFE9D64E2E70A09BFFC13027613B2587BE9 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData, "Could not add to runtime cache")));
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_0 = __this->___onStreamReady_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->___clipData_1;
		NullCheck(L_0);
		Action_2_Invoke_mE7F840CB53F1F6B008B4626F4555B0C20917B4FA_inline(L_0, L_1, _stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_m05451A0844CD8DF8D6F774B7B9B30595A7CEDD73 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	{
		// clipData.onPlaybackReady += (error) => onStreamReady(clipData, error);
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_0 = __this->___onStreamReady_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->___clipData_1;
		String_t* L_2 = ___error0;
		NullCheck(L_0);
		Action_2_Invoke_mE7F840CB53F1F6B008B4626F4555B0C20917B4FA_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_mAD3ED337AF17390239B7A22243625D6204595DF9 (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t3D676E8D072895C382459BE5575CBA308018765C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m3DC21A71DF0AA64B211CE49FFCB83BA254FCB2BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* V_2 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* G_B7_0 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B7_1 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B7_2 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* G_B6_0 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B6_1 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B6_2 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// string invalidError = WebHandler.IsTextValid(clipData.textToSpeak);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0 = __this->___U3CU3E4__this_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, L_0);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___textToSpeak_0;
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::IsTextValid(System.String) */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_1, L_3);
		V_0 = L_4;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// OnWebStreamError(clipData, invalidError);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_7 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_8 = __this->___clipData_1;
		String_t* L_9 = V_0;
		NullCheck(L_7);
		TTSService_OnWebStreamError_mD74BC8852A3641342B1D7887AF51A369957E913D(L_7, L_8, L_9, NULL);
		// return;
		return;
	}

IL_0037:
	{
		// if (ShouldCacheToDisk(clipData))
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_10 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = __this->___clipData_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = TTSService_ShouldCacheToDisk_mF9799C2D67960DD11CA622236A218DDC6E5CAC92(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_00ea;
		}
	}
	{
		// if (clipData.loadState != TTSClipLoadState.Preparing)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = __this->___clipData_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___loadState_7;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		// string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, L_15);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_17 = __this->___clipData_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(3 /* System.String Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, L_16, L_17);
		V_1 = L_18;
		// OnWebDownloadBegin(clipData, downloadPath);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_19 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_20 = __this->___clipData_1;
		String_t* L_21 = V_1;
		NullCheck(L_19);
		TTSService_OnWebDownloadBegin_m58EF6BD457DD964F649E7D55C4F7764266FEA7F6(L_19, L_20, L_21, NULL);
		// OnWebDownloadCancel(clipData, downloadPath);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_22 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_23 = __this->___clipData_1;
		String_t* L_24 = V_1;
		NullCheck(L_22);
		TTSService_OnWebDownloadCancel_m2BBD36777376BDD4D35F62F889C3094AB993D855(L_22, L_23, L_24, NULL);
		// OnWebStreamBegin(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_25 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_26 = __this->___clipData_1;
		NullCheck(L_25);
		TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268(L_25, L_26, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_27 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_28 = __this->___clipData_1;
		NullCheck(L_27);
		TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F(L_27, L_28, NULL);
		// return;
		return;
	}

IL_00b9:
	{
		// DownloadToDiskCache(clipData, (clipData2, downloadPath, error) =>
		// {
		//     // Download was canceled before starting
		//     if (string.Equals(error, CANCEL_WARNING))
		//     {
		//         OnWebStreamBegin(clipData);
		//         OnWebStreamCancel(clipData);
		//         return;
		//     }
		// 
		//     // Success
		//     if (string.IsNullOrEmpty(error))
		//     {
		//         DiskCacheHandler?.StreamFromDiskCache(clipData);
		//     }
		//     // Failed
		//     else
		//     {
		//         WebHandler?.RequestStreamFromWeb(clipData);
		//     }
		// });
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_29 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_30 = __this->___clipData_1;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_31 = __this->___U3CU3E9__5_3;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_32 = L_31;
		G_B6_0 = L_32;
		G_B6_1 = L_30;
		G_B6_2 = L_29;
		if (L_32)
		{
			G_B7_0 = L_32;
			G_B7_1 = L_30;
			G_B7_2 = L_29;
			goto IL_00e4;
		}
	}
	{
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_33 = (Action_3_t3D676E8D072895C382459BE5575CBA308018765C*)il2cpp_codegen_object_new(Action_3_t3D676E8D072895C382459BE5575CBA308018765C_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_3__ctor_m0D903FD5BC01BE67CB73857563CE2532E8ADDA80(L_33, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m3DC21A71DF0AA64B211CE49FFCB83BA254FCB2BE_RuntimeMethod_var), NULL);
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_34 = L_33;
		V_2 = L_34;
		__this->___U3CU3E9__5_3 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__5_3), (void*)L_34);
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_35 = V_2;
		G_B7_0 = L_35;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_00e4:
	{
		NullCheck(G_B7_2);
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, Action_3_t3D676E8D072895C382459BE5575CBA308018765C* >::Invoke(22 /* System.Void Facebook.WitAi.TTS.TTSService::DownloadToDiskCache(Facebook.WitAi.TTS.Data.TTSClipData,System.Action`3<Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String>) */, G_B7_2, G_B7_1, G_B7_0);
		return;
	}

IL_00ea:
	{
		// if (clipData.loadState != TTSClipLoadState.Preparing)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_36 = __this->___clipData_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->___loadState_7;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		// OnWebStreamBegin(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_38 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_39 = __this->___clipData_1;
		NullCheck(L_38);
		TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268(L_38, L_39, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_40 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_41 = __this->___clipData_1;
		NullCheck(L_40);
		TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F(L_40, L_41, NULL);
		// return;
		return;
	}

IL_011b:
	{
		// WebHandler?.RequestStreamFromWeb(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_42 = __this->___U3CU3E4__this_2;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, L_42);
		RuntimeObject* L_44 = L_43;
		G_B11_0 = L_44;
		if (L_44)
		{
			G_B12_0 = L_44;
			goto IL_012b;
		}
	}
	{
		return;
	}

IL_012b:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_45 = __this->___clipData_1;
		NullCheck(G_B12_0);
		InterfaceActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(3 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::RequestStreamFromWeb(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, G_B12_0, L_45);
		// }));
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__5(Facebook.WitAi.TTS.Data.TTSClipData,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m3DC21A71DF0AA64B211CE49FFCB83BA254FCB2BE (U3CU3Ec__DisplayClass34_0_tBE5E9AC9B9B5BEF3DA803D2BD078C69916212A2C* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData20, String_t* ___downloadPath1, String_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// if (string.Equals(error, CANCEL_WARNING))
		String_t* L_0 = ___error2;
		bool L_1;
		L_1 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// OnWebStreamBegin(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_2 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = __this->___clipData_1;
		NullCheck(L_2);
		TTSService_OnWebStreamBegin_mB034109D046E0717E6F8259573E00DD749AC1268(L_2, L_3, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_4 = __this->___U3CU3E4__this_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = __this->___clipData_1;
		NullCheck(L_4);
		TTSService_OnWebStreamCancel_mE6114CA226904393D551C1CEBB1AB66A0252EC6F(L_4, L_5, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// if (string.IsNullOrEmpty(error))
		String_t* L_6 = ___error2;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// DiskCacheHandler?.StreamFromDiskCache(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.TTSService::get_DiskCacheHandler() */, L_8);
		RuntimeObject* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = __this->___clipData_1;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(6 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::StreamFromDiskCache(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_il2cpp_TypeInfo_var, G_B5_0, L_11);
		return;
	}

IL_0054:
	{
		// WebHandler?.RequestStreamFromWeb(clipData);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, L_12);
		RuntimeObject* L_14 = L_13;
		G_B7_0 = L_14;
		if (L_14)
		{
			G_B8_0 = L_14;
			goto IL_0064;
		}
	}
	{
		return;
	}

IL_0064:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = __this->___clipData_1;
		NullCheck(G_B8_0);
		InterfaceActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(3 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::RequestStreamFromWeb(Facebook.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, G_B8_0, L_15);
		// });
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
// System.Void Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35__ctor_m0CFB66F4266B7879A143646E4A139700AAB440BD (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35_System_IDisposable_Dispose_m2A79F68DB7D6B9ABEA8416706A03C7312B3444B2 (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallAfterAMomentU3Ed__35_MoveNext_mB9977CA8A51D71B5AD810607065E6242FF5CCF3E (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0056;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_005d;
	}

IL_0046:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005d:
	{
		// call();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___call_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallAfterAMomentU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65D234E3725D6C05A0411922A781C76D719E5E59 (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m8F7DD45A08BDD1A3409B8558F3A753C568ED73A3 (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m8F7DD45A08BDD1A3409B8558F3A753C568ED73A3_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_get_Current_mCBA0A6C971E65880C6FA28A4E076638D0193E9CF (U3CCallAfterAMomentU3Ed__35_tCF1746A499729B29B9AD0617D69008FB3B6477A5* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mE9BB3380CC7BDA8D531B0483D7BA2FD96918FAFB (U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<DownloadToDiskCache>b__0(Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_mDF4E759C25A703524DC1818716D7AACEFB31E503 (U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clip0, bool ___found1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m33CF2D29C3BDF03758E2FD8E92893DA0E2679A6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* G_B3_2 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* G_B6_0 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* G_B5_0 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* G_B11_0 = NULL;
	Action_3_t3D676E8D072895C382459BE5575CBA308018765C* G_B10_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B14_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B14_1 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B14_2 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_1 = NULL;
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* G_B13_2 = NULL;
	{
		// VLog.D(GetClipLog($"Disk Cache {(found ? "Found" : "Missing")}\nPath: {downloadPath}", clipData));
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0 = __this->___U3CU3E4__this_0;
		bool L_1 = ___found1;
		G_B1_0 = _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		String_t* L_2 = __this->___downloadPath_1;
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_1, G_B3_0, _stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676, L_2, NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = __this->___clipData_2;
		NullCheck(G_B3_2);
		String_t* L_5;
		L_5 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.String Facebook.WitAi.TTS.TTSService::GetClipLog(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, G_B3_2, L_3, L_4);
		VLog_D_mB93B884473E587E9499E06C6C620A7F1AAEB6196(L_5, NULL);
		// if (found)
		bool L_6 = ___found1;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// onDownloadComplete?.Invoke(clipData, downloadPath, string.Empty);
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_7 = __this->___onDownloadComplete_3;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = __this->___clipData_2;
		String_t* L_10 = __this->___downloadPath_1;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B6_0);
		Action_3_Invoke_mF256D0A572644A7C694F8A5C9AD0F1295999A8C8_inline(G_B6_0, L_9, L_10, L_11, NULL);
		// return;
		return;
	}

IL_005f:
	{
		// if (Application.isPlaying && clipData.diskCacheSettings.DiskCacheLocation == TTSDiskCacheLocation.Preload)
		bool L_12;
		L_12 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = __this->___clipData_2;
		NullCheck(L_13);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_14 = L_13->___diskCacheSettings_4;
		NullCheck(L_14);
		int32_t L_15 = L_14->___DiskCacheLocation_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// onDownloadComplete?.Invoke(clipData, downloadPath, "File is not Preloaded");
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_16 = __this->___onDownloadComplete_3;
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_17 = L_16;
		G_B10_0 = L_17;
		if (L_17)
		{
			G_B11_0 = L_17;
			goto IL_0084;
		}
	}
	{
		return;
	}

IL_0084:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_18 = __this->___clipData_2;
		String_t* L_19 = __this->___downloadPath_1;
		NullCheck(G_B11_0);
		Action_3_Invoke_mF256D0A572644A7C694F8A5C9AD0F1295999A8C8_inline(G_B11_0, L_18, L_19, _stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7, NULL);
		// return;
		return;
	}

IL_009b:
	{
		// clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_20 = __this->___clipData_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_21 = L_20;
		NullCheck(L_21);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_22 = L_21->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_23 = __this->___U3CU3E9__1_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_24 = L_23;
		G_B13_0 = L_24;
		G_B13_1 = L_22;
		G_B13_2 = L_21;
		if (L_24)
		{
			G_B14_0 = L_24;
			G_B14_1 = L_22;
			G_B14_2 = L_21;
			goto IL_00c6;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_25 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_25, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m33CF2D29C3BDF03758E2FD8E92893DA0E2679A6F_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = L_25;
		V_0 = L_26;
		__this->___U3CU3E9__1_4 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_4), (void*)L_26);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = V_0;
		G_B14_0 = L_27;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00c6:
	{
		Delegate_t* L_28;
		L_28 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(G_B14_1, G_B14_0, NULL);
		NullCheck(G_B14_2);
		G_B14_2->___onDownloadComplete_11 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_28, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_2->___onDownloadComplete_11), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_28, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// WebHandler.RequestDownloadFromWeb(clipData, downloadPath);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_29 = __this->___U3CU3E4__this_0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.TTSService::get_WebHandler() */, L_29);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_31 = __this->___clipData_2;
		String_t* L_32 = __this->___downloadPath_1;
		NullCheck(L_30);
		InterfaceActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t* >::Invoke(7 /* System.Void Facebook.WitAi.TTS.Interfaces.ITTSWebHandler::RequestDownloadFromWeb(Facebook.WitAi.TTS.Data.TTSClipData,System.String) */, ITTSWebHandler_tEDD3335B6EE482C173262A68A9D7877FC51A813C_il2cpp_TypeInfo_var, L_30, L_31, L_32);
		// });
		return;
	}
}
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<DownloadToDiskCache>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m33CF2D29C3BDF03758E2FD8E92893DA0E2679A6F (U3CU3Ec__DisplayClass63_0_t31DB488276494601168BF9CC7FDF988D507CAF97* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	{
		// clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		Action_3_t3D676E8D072895C382459BE5575CBA308018765C* L_0 = __this->___onDownloadComplete_3;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->___clipData_2;
		String_t* L_2 = __this->___downloadPath_1;
		String_t* L_3 = ___error0;
		NullCheck(L_0);
		Action_3_Invoke_mF256D0A572644A7C694F8A5C9AD0F1295999A8C8_inline(L_0, L_1, L_2, L_3, NULL);
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
// System.Void Facebook.WitAi.TTS.TTSService/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m093F59084A28A2475F56E3A231C1396D5A35C39F (U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.TTSService/<>c__DisplayClass69_0::<GetPresetVoiceSettings>b__0(Facebook.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mA142AB3AA507E747D6277C8D4738E4D2291E2747 (U3CU3Ec__DisplayClass69_0_t6C47A615318FBC258ED534229FD8C0E1589D274B* __this, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___v0, const RuntimeMethod* method) 
{
	{
		// return Array.Find(VoiceProvider.PresetVoiceSettings, (v) => string.Equals(v.settingsID, presetVoiceId, StringComparison.CurrentCultureIgnoreCase));
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___settingsID_1;
		String_t* L_2 = __this->___presetVoiceId_0;
		bool L_3;
		L_3 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_1, L_2, 1, NULL);
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
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeakerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEvent__ctor_mD7AC0BC4D4D5B1C4DF17235D14F30F353824117C (TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m5E06ABFB25D8BF888C80BC3E1CACF5EE68899683_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m5E06ABFB25D8BF888C80BC3E1CACF5EE68899683(__this, UnityEvent_2__ctor_m5E06ABFB25D8BF888C80BC3E1CACF5EE68899683_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEvents__ctor_m7B9DB804885E0DB30BD848206A0E0E959EA5C5EB (TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* __this, const RuntimeMethod* method) 
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
// Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* TTSSpeaker_get_VoiceSettings_m346C2FB15246AEE6BFE2B511FC44840741FCF6B6 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// public TTSVoiceSettings VoiceSettings => TTSService.Instance.GetPresetVoiceSettings(presetVoiceID);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0;
		L_0 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		String_t* L_1 = __this->___presetVoiceID_4;
		NullCheck(L_0);
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mEA8C55D9E98E091455788019372988F225405455(L_0, L_1, NULL);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Utilities.TTSSpeakerEvents Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_0 = __this->____events_6;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Awake_m2515AAEE4FC9F571ED1675281594519E99157B01 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___AudioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// AudioSource = gameObject.GetComponentInChildren<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F(L_2, GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var);
		__this->___AudioSource_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioSource_5), (void*)L_3);
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___AudioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// AudioSource = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_6, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___AudioSource_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioSource_5), (void*)L_7);
	}

IL_003e:
	{
		// AudioSource.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___AudioSource_5;
		NullCheck(L_8);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_8, (bool)0, NULL);
		// TTSService.Instance.Events.OnClipUnloaded.AddListener(OnClipUnload);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_9;
		L_9 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		NullCheck(L_9);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_10;
		L_10 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(L_9, NULL);
		NullCheck(L_10);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_11 = L_10->___OnClipUnloaded_1;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_12 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_12, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D(L_11, L_12, UnityEvent_1_AddListener_m684B902E2F5D75FBEA85E93AFCC290FAD385FC1D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnDestroy_m50EC4E014208A44D2F5B5256FC86705811A4A71D (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		VirtualActionInvoker0::Invoke(11 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, __this);
		// if (TTSService.Instance != null)
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_0;
		L_0 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// TTSService.Instance.Events.OnClipUnloaded.RemoveListener(OnClipUnload);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_2;
		L_2 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		NullCheck(L_2);
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_3;
		L_3 = TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline(L_2, NULL);
		NullCheck(L_3);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_4 = L_3->___OnClipUnloaded_1;
		UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628* L_5 = (UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628*)il2cpp_codegen_object_new(UnityAction_1_tA4388BD7C512BAEF590BB05A8472AC54BD919628_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m799453A504A1384BA523032A47B14D501BD1150F(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA(L_4, L_5, UnityEvent_1_RemoveListener_mEBA310FA17BD5388CE44E8CC6FF5ED3E4D13B7EA_RuntimeMethod_var);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnClipUnload(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnClipUnload_m26A50E94E3C0FB030EBE8367481BDC9705FBE099 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// if (clipData == _loadingClip)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->____loadingClip_8;
		if ((!(((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_0) == ((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		// OnLoadAbort();
		VirtualActionInvoker0::Invoke(14 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnLoadAbort() */, __this);
		return;
	}

IL_0010:
	{
		// else if (clipData == _lastClip)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = __this->____lastClip_10;
		if ((!(((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_2) == ((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		// OnPlaybackCancel();
		VirtualActionInvoker0::Invoke(18 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel() */, __this);
		// _lastClip = null;
		__this->____lastClip_10 = (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastClip_10), (void*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::IsClipSame(System.String,Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_IsClipSame_m68837EC8F50AF084000F96314D5F63262317B6AC (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, String_t* ___clipID0, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData1, const RuntimeMethod* method) 
{
	{
		// if (clipData == null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (!string.Equals(clipID, clipData.clipID, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_1 = ___clipID0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		bool L_4;
		L_4 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_1, L_3, 1, NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_mB0A07FD6722A912CBA96B847FC69A645A29003FD (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSpeaking => _speaking;
		bool L_0 = __this->____speaking_7;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_mDB24D315CE4E7026AEB71BE9F2968E1D11C44A03 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, String_t* ___format0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		// if (textsToSpeak == null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___textsToSpeak1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// object[] objects = new object[textsToSpeak.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___textsToSpeak1;
		NullCheck(L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_0 = L_2;
		// textsToSpeak.CopyTo(objects, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___textsToSpeak1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck((RuntimeArray*)L_3);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_3, (RuntimeArray*)L_4, 0, NULL);
		// Speak(string.Format(format, objects));
		String_t* L_5 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_5, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String) */, __this, L_7);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m177FC3CD12387224300812B1DB08234709304BB1 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, String_t* ___textToSpeak0, const RuntimeMethod* method) 
{
	{
		// public virtual void Speak(string textToSpeak) => Speak(textToSpeak, (TTSDiskCacheSettings)null);
		String_t* L_0 = ___textToSpeak0;
		VirtualActionInvoker2< String_t*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(10 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_0, (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*)NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m80B79228528678DCC73E4A8185E5102F2A369780 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, String_t* ___textToSpeak0, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160);
		s_Il2CppMethodInitialized = true;
	}
	TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// TTSVoiceSettings voiceSettings = VoiceSettings;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_0;
		L_0 = TTSSpeaker_get_VoiceSettings_m346C2FB15246AEE6BFE2B511FC44840741FCF6B6(__this, NULL);
		V_0 = L_0;
		// if (voiceSettings == null)
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// VLog.E($"No voice found with preset id: {presetVoiceID}");
		String_t* L_2 = __this->___presetVoiceID_4;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160, L_2, NULL);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_3, NULL);
		// return;
		return;
	}

IL_0020:
	{
		// if (string.IsNullOrEmpty(textToSpeak))
		String_t* L_4 = ___textToSpeak0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// VLog.E("No text to speak provided");
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(_stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// string newClipID = TTSService.Instance.GetClipID(textToSpeak, voiceSettings);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_6;
		L_6 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		String_t* L_7 = ___textToSpeak0;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_8 = V_0;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = VirtualFuncInvoker2< String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* >::Invoke(16 /* System.String Facebook.WitAi.TTS.TTSService::GetClipID(System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings) */, L_6, L_7, L_8);
		V_1 = L_9;
		// if (_loadingClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_10 = __this->____loadingClip_8;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// if (IsClipSame(newClipID, _loadingClip))
		String_t* L_11 = V_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12 = __this->____loadingClip_8;
		bool L_13;
		L_13 = VirtualFuncInvoker2< bool, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(7 /* System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::IsClipSame(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_11, L_12);
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		// TTSService.Instance.GetRuntimeCachedClip(_loadingClip.clipID);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_14;
		L_14 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = __this->____loadingClip_8;
		NullCheck(L_15);
		String_t* L_16 = L_15->___clipID_1;
		NullCheck(L_14);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_17;
		L_17 = TTSService_GetRuntimeCachedClip_m7BBFA9662907394F5336A3BD9EFBE63F5980B1DA(L_14, L_16, NULL);
		// return;
		return;
	}

IL_006e:
	{
		// OnLoadAbort();
		VirtualActionInvoker0::Invoke(14 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnLoadAbort() */, __this);
	}

IL_0074:
	{
		// if (IsClipSame(newClipID, _lastClip))
		String_t* L_18 = V_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_19 = __this->____lastClip_10;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, String_t*, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(7 /* System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::IsClipSame(System.String,Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_18, L_19);
		if (!L_20)
		{
			goto IL_00a6;
		}
	}
	{
		// TTSService.Instance.GetRuntimeCachedClip(_lastClip.clipID);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_21;
		L_21 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_22 = __this->____lastClip_10;
		NullCheck(L_22);
		String_t* L_23 = L_22->___clipID_1;
		NullCheck(L_21);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_24;
		L_24 = TTSService_GetRuntimeCachedClip_m7BBFA9662907394F5336A3BD9EFBE63F5980B1DA(L_21, L_23, NULL);
		// OnPlaybackBegin(_lastClip);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_25 = __this->____lastClip_10;
		VirtualActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin(Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_25);
		// return;
		return;
	}

IL_00a6:
	{
		// OnLoadBegin(textToSpeak, newClipID, voiceSettings, diskCacheSettings);
		String_t* L_26 = ___textToSpeak0;
		String_t* L_27 = V_1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_28 = V_0;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_29 = ___diskCacheSettings1;
		VirtualActionInvoker4< String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* >::Invoke(12 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnLoadBegin(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_26, L_27, L_28, L_29);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Stop_mC0378EB018BCFCE4CE843F789BD640CAA428C289 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// if (_loadingClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->____loadingClip_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// TTSService.Instance.Unload(_loadingClip);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_1;
		L_1 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->____loadingClip_8;
		NullCheck(L_1);
		TTSService_Unload_m788AE39AD5F1CC97D9268F9CC471DC747F92993A(L_1, L_2, NULL);
	}

IL_0018:
	{
		// if (IsSpeaking)
		bool L_3;
		L_3 = TTSSpeaker_get_IsSpeaking_mB0A07FD6722A912CBA96B847FC69A645A29003FD_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (_lastClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = __this->____lastClip_10;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___AudioSource_5;
		NullCheck(L_5);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_5, NULL);
	}

IL_0033:
	{
		// OnPlaybackCancel();
		VirtualActionInvoker0::Invoke(18 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel() */, __this);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m03DFCD1DC786DCD1A0AB06B995FEEB372268D5F9 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLoading => _loadingClip != null;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->____loadingClip_8;
		return (bool)((!(((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnLoadBegin(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadBegin_m16A62A44F8328EAD20FEC9A80D120565240CA025 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings2, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* ___diskCacheSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B2_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B1_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B4_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B3_0 = NULL;
	{
		// Events?.OnClipLoadBegin?.Invoke(this, textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_0;
		L_0 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_001e;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_2 = G_B2_0->___OnClipLoadBegin_0;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_001e;
	}

IL_0017:
	{
		String_t* L_4 = ___textToSpeak0;
		NullCheck(G_B4_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B4_0, __this, L_4, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
	}

IL_001e:
	{
		// _loadingClip = TTSService.Instance.Load(textToSpeak, clipID, voiceSettings, diskCacheSettings, OnLoadComplete);
		TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* L_5;
		L_5 = TTSService_get_Instance_m52F06F86F78A142DB6C5C9A60715F0B469B1D789(NULL);
		String_t* L_6 = ___textToSpeak0;
		String_t* L_7 = ___clipID1;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_8 = ___voiceSettings2;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_9 = ___diskCacheSettings3;
		Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* L_10 = (Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7*)il2cpp_codegen_object_new(Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_2__ctor_mCC51F5408B1D4CCA203CAF1B14AB6B5A53A2CB03(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		NullCheck(L_5);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11;
		L_11 = VirtualFuncInvoker5< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t*, String_t*, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104*, TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*, Action_2_tF56816C741F0999A39A6C5D18F41288D9974F9F7* >::Invoke(19 /* Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.TTSService::Load(System.String,System.String,Facebook.WitAi.TTS.Data.TTSVoiceSettings,Facebook.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.String>) */, L_5, L_6, L_7, L_8, L_9, L_10);
		__this->____loadingClip_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingClip_8), (void*)L_11);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnLoadComplete(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadComplete_mA4D1D137B4182C24F00B0DE5A1655A628D98FBEE (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BC654B648FE77FA6112E8E3C960B5541CD4AE4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7023D9BCF916A7AA90A336FA9CB4F43A2CA9CD64);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B5_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B4_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B7_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B6_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B11_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B10_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B13_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B12_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B16_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B15_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B18_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B17_0 = NULL;
	{
		// if (clipData != _loadingClip)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->____loadingClip_8;
		if ((((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_0) == ((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _loadingClip = null;
		__this->____loadingClip_8 = (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingClip_8), (void*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL);
		// if (!string.IsNullOrEmpty(error))
		String_t* L_2 = ___error1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_004b;
		}
	}
	{
		// VLog.E($"Load Clip - Failed\n{error}");
		String_t* L_4 = ___error1;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5BC654B648FE77FA6112E8E3C960B5541CD4AE4E, L_4, NULL);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_5, NULL);
		// Events?.OnClipLoadFailed?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_6;
		L_6 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		NullCheck(G_B5_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_8 = G_B5_0->___OnClipLoadFailed_1;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_9 = L_8;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_10 = ___clipData0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___textToSpeak_0;
		NullCheck(G_B7_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B7_0, __this, L_11, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		// return;
		return;
	}

IL_004b:
	{
		// if (clipData.clip == null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12 = ___clipData0;
		NullCheck(L_12);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = L_12->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		// VLog.E($"Load Clip - Failed\nNo clip returned");
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(_stringLiteral7023D9BCF916A7AA90A336FA9CB4F43A2CA9CD64, NULL);
		// Events?.OnClipLoadFailed?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_15;
		L_15 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_16 = L_15;
		G_B10_0 = L_16;
		if (L_16)
		{
			G_B11_0 = L_16;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		NullCheck(G_B11_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_17 = G_B11_0->___OnClipLoadFailed_1;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_18 = L_17;
		G_B12_0 = L_18;
		if (L_18)
		{
			G_B13_0 = L_18;
			goto IL_0078;
		}
	}
	{
		return;
	}

IL_0078:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_19 = ___clipData0;
		NullCheck(L_19);
		String_t* L_20 = L_19->___textToSpeak_0;
		NullCheck(G_B13_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B13_0, __this, L_20, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		// return;
		return;
	}

IL_0085:
	{
		// Events?.OnClipLoadSuccess?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_21;
		L_21 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_22 = L_21;
		G_B15_0 = L_22;
		if (L_22)
		{
			G_B16_0 = L_22;
			goto IL_0091;
		}
	}
	{
		goto IL_00a8;
	}

IL_0091:
	{
		NullCheck(G_B16_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_23 = G_B16_0->___OnClipLoadSuccess_2;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_24 = L_23;
		G_B17_0 = L_24;
		if (L_24)
		{
			G_B18_0 = L_24;
			goto IL_009c;
		}
	}
	{
		goto IL_00a8;
	}

IL_009c:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_25 = ___clipData0;
		NullCheck(L_25);
		String_t* L_26 = L_25->___textToSpeak_0;
		NullCheck(G_B18_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B18_0, __this, L_26, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
	}

IL_00a8:
	{
		// OnPlaybackBegin(clipData);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_27 = ___clipData0;
		VirtualActionInvoker1< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* >::Invoke(15 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin(Facebook.WitAi.TTS.Data.TTSClipData) */, __this, L_27);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnLoadAbort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadAbort_m15715A398267444D9FEE072AB3CF02D7D0A0396B (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B3_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B2_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B5_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B4_0 = NULL;
	{
		// if (_loadingClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->____loadingClip_8;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// Events?.OnClipLoadAbort?.Invoke(this, _loadingClip.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_1;
		L_1 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0030;
	}

IL_0014:
	{
		NullCheck(G_B3_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_3 = G_B3_0->___OnClipLoadAbort_3;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001f;
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = __this->____loadingClip_8;
		NullCheck(L_5);
		String_t* L_6 = L_5->___textToSpeak_0;
		NullCheck(G_B5_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B5_0, __this, L_6, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
	}

IL_0030:
	{
		// _loadingClip = null;
		__this->____loadingClip_8 = (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingClip_8), (void*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackBegin_m982E8268BE102254817003F26F2FEF6AAC91CD5C (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C01923136530AB3D466B01CE56D524D05E3FAF);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B8_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B7_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B10_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B9_0 = NULL;
	{
		// OnPlaybackCancel();
		VirtualActionInvoker0::Invoke(18 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel() */, __this);
		// if (clipData != _lastClip && _lastClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->____lastClip_10;
		if ((((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_0) == ((RuntimeObject*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->____lastClip_10;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// _lastClip = null;
		__this->____lastClip_10 = (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastClip_10), (void*)(TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL);
	}

IL_001e:
	{
		// _lastClip = clipData;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = ___clipData0;
		__this->____lastClip_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastClip_10), (void*)L_3);
		// if (_lastClip == null || _lastClip.clip == null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = __this->____lastClip_10;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = __this->____lastClip_10;
		NullCheck(L_5);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = L_5->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}

IL_0040:
	{
		// VLog.E("Clip destroyed prior to playback");
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(_stringLiteral49C01923136530AB3D466B01CE56D524D05E3FAF, NULL);
		// return;
		return;
	}

IL_004b:
	{
		// _speaking = true;
		__this->____speaking_7 = (bool)1;
		// Events?.OnStartSpeaking?.Invoke(this, _lastClip.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_8;
		L_8 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_9 = L_8;
		G_B7_0 = L_9;
		if (L_9)
		{
			G_B8_0 = L_9;
			goto IL_005e;
		}
	}
	{
		goto IL_007a;
	}

IL_005e:
	{
		NullCheck(G_B8_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_10 = G_B8_0->___OnStartSpeaking_4;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_11 = L_10;
		G_B9_0 = L_11;
		if (L_11)
		{
			G_B10_0 = L_11;
			goto IL_0069;
		}
	}
	{
		goto IL_007a;
	}

IL_0069:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12 = __this->____lastClip_10;
		NullCheck(L_12);
		String_t* L_13 = L_12->___textToSpeak_0;
		NullCheck(G_B10_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B10_0, __this, L_13, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
	}

IL_007a:
	{
		// AudioSource.PlayOneShot(_lastClip.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___AudioSource_5;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = __this->____lastClip_10;
		NullCheck(L_15);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = L_15->___clip_6;
		NullCheck(L_14);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_14, L_16, NULL);
		// _player = StartCoroutine(OnPlaybackWait());
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.IEnumerator Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackWait() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18;
		L_18 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_17, NULL);
		__this->____player_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_9), (void*)L_18);
		// }
		return;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_OnPlaybackWait_m4A01075ABA3262B713F803DCBB8FF24335F0A6BF (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* L_0 = (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286*)il2cpp_codegen_object_new(U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnPlaybackWaitU3Ed__27__ctor_m14F342CBC8B88A2721AD3E9F1659A57F07566848(L_0, 0, NULL);
		U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackComplete_m091C3710374153F21CBB5D7B122EA72DB4531E5F (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B5_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B4_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B7_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B6_0 = NULL;
	{
		// if (!_speaking)
		bool L_0 = __this->____speaking_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _speaking = false;
		__this->____speaking_7 = (bool)0;
		// _player = null;
		__this->____player_9 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_9), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// if (_lastClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = __this->____lastClip_10;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// Events?.OnFinishedSpeaking?.Invoke(this, _lastClip.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_2;
		L_2 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		NullCheck(G_B5_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_4 = G_B5_0->___OnFinishedSpeaking_5;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_6 = __this->____lastClip_10;
		NullCheck(L_6);
		String_t* L_7 = L_6->___textToSpeak_0;
		NullCheck(G_B7_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B7_0, __this, L_7, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackCancel_m1FC1E1E35696094A4A077CFEE00EF5CC927EDEA8 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B7_0 = NULL;
	TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* G_B6_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B9_0 = NULL;
	TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* G_B8_0 = NULL;
	{
		// if (!_speaking)
		bool L_0 = __this->____speaking_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _speaking = false;
		__this->____speaking_7 = (bool)0;
		// if (_player != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____player_9;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// StopCoroutine(_player);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->____player_9;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_2, NULL);
		// _player = null;
		__this->____player_9 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_9), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_002b:
	{
		// if (_lastClip != null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = __this->____lastClip_10;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// Events?.OnCancelledSpeaking?.Invoke(this, _lastClip.textToSpeak);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_4;
		L_4 = TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline(__this, NULL);
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		NullCheck(G_B7_0);
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_6 = G_B7_0->___OnCancelledSpeaking_6;
		TTSSpeakerEvent_tEB8DB818E814F3091A82D372A8795E824044D852* L_7 = L_6;
		G_B8_0 = L_7;
		if (L_7)
		{
			G_B9_0 = L_7;
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_8 = __this->____lastClip_10;
		NullCheck(L_8);
		String_t* L_9 = L_8->___textToSpeak_0;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627(G_B9_0, __this, L_9, UnityEvent_2_Invoke_m1DA2EF457EDA02310578FB853C4C5FC506760627_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker__ctor_mA343AEA24A07CD29DFE9BEA2BA4A7F5CDBEB2E14 (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPlaybackWaitU3Ed__27__ctor_m14F342CBC8B88A2721AD3E9F1659A57F07566848 (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPlaybackWaitU3Ed__27_System_IDisposable_Dispose_m402E4EAA38E97D9DEA7548047029E244D9629F72 (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnPlaybackWaitU3Ed__27_MoveNext_m1FB9676EDD7490B197A3368A8EFB4F5B0A7B0E6E (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_lastClip.clip.length);
		TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* L_4 = V_1;
		NullCheck(L_4);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = L_4->____lastClip_10;
		NullCheck(L_5);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = L_5->___clip_6;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_6, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnPlaybackComplete();
		TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* L_9 = V_1;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(17 /* System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete() */, L_9);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnPlaybackWaitU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m87C4C0A6A1B7405DD5D01ABB5C0070F1796CB203 (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPlaybackWaitU3Ed__27_System_Collections_IEnumerator_Reset_m4AC90E697803D6096B493CBD4B83E110D52369AB (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnPlaybackWaitU3Ed__27_System_Collections_IEnumerator_Reset_m4AC90E697803D6096B493CBD4B83E110D52369AB_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.TTS.Utilities.TTSSpeaker/<OnPlaybackWait>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnPlaybackWaitU3Ed__27_System_Collections_IEnumerator_get_Current_m16ADF47AAAFD50B26807211B1D883EA61FB4CFFE (U3COnPlaybackWaitU3Ed__27_t1D05BF7B41DAA81FB69D9C982664E591BE122286* __this, const RuntimeMethod* method) 
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
// System.String Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::GetFinalUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceUnityRequest_GetFinalUrl_mA714897378C2FD6EDE74BF56EF1D042F4D105E9A (String_t* ___fileUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC567FA2104A52A4FABA4DF88810B08F561D7726A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = fileUrl;
		String_t* L_0 = ___fileUrl0;
		V_0 = L_0;
		// if (!Regex.IsMatch(result, "(http:|https:|file:|jar:).*"))
		String_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Regex_IsMatch_m967E98137B140DFD845C5E1699D1BC8EF08CC76C(L_1, _stringLiteralC567FA2104A52A4FABA4DF88810B08F561D7726A, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// result = $"file://{result}";
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_3, NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		// return result;
		String_t* L_5 = V_0;
		return L_5;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestFile(System.String,System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestFile_m37116BF0CCBF61D1D3A506D6D98CFD533A491B7A (String_t* ___fileUrl0, Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* ___onFileLoaded1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static VoiceUnityRequest RequestFile(string fileUrl, Action<string, UnityWebRequest> onFileLoaded) => RequestFile(fileUrl, null, onFileLoaded);
		String_t* L_0 = ___fileUrl0;
		Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* L_1 = ___onFileLoaded1;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_2;
		L_2 = VoiceUnityRequest_RequestFile_m17E794FEA076C565C072C3DA07EC80A6B9931158(L_0, (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*)NULL, L_1, NULL);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestFile(System.String,System.Action`2<System.String,System.Single>,System.Action`2<System.String,UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestFile_m17E794FEA076C565C072C3DA07EC80A6B9931158 (String_t* ___fileUrl0, Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onFileProgress1, Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* ___onFileLoaded2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__0_m11C17558E0994B70F078FB937ED27C4977B23072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__1_m62A06C0F7C1E2A471405E9E66C0B6C34664C65E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_0 = (U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m4118BB91F95F14A229CC25784E135D46F0BA9519(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_1 = V_0;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_2 = ___onFileProgress1;
		NullCheck(L_1);
		L_1->___onFileProgress_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onFileProgress_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_3 = V_0;
		String_t* L_4 = ___fileUrl0;
		NullCheck(L_3);
		L_3->___fileUrl_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___fileUrl_1), (void*)L_4);
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_5 = V_0;
		Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* L_6 = ___onFileLoaded2;
		NullCheck(L_5);
		L_5->___onFileLoaded_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___onFileLoaded_2), (void*)L_6);
		// UnityWebRequest request = UnityWebRequest.Get(GetFinalUrl(fileUrl));
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___fileUrl_1;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = VoiceUnityRequest_GetFinalUrl_mA714897378C2FD6EDE74BF56EF1D042F4D105E9A(L_8, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10;
		L_10 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_9, NULL);
		// return Request(request, (p) => onFileProgress?.Invoke(fileUrl, p), (r) => onFileLoaded?.Invoke(fileUrl, r));
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_11 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_12 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__0_m11C17558E0994B70F078FB937ED27C4977B23072_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* L_13 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_14 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__1_m62A06C0F7C1E2A471405E9E66C0B6C34664C65E5_RuntimeMethod_var), NULL);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_15;
		L_15 = VoiceUnityRequest_Request_m18E16E1268684B1A58C7FB0C49DDC142FC4125CC(L_10, L_12, L_14, NULL);
		return L_15;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestHeaders(System.String,System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestHeaders_m847790186B4474397BE29ABCA73CE83EE3CDB1F6 (String_t* ___fileUrl0, Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* ___onHeadersObtained1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CRequestHeadersU3Eb__0_m5E01FB94E2FED7B4D2F5ABE8AEADD4AA70E7EECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* L_0 = (U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m79D7E030BCB7C9FDF104764C004965137DE2C480(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* L_1 = V_0;
		String_t* L_2 = ___fileUrl0;
		NullCheck(L_1);
		L_1->___fileUrl_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fileUrl_0), (void*)L_2);
		U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* L_3 = V_0;
		Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* L_4 = ___onHeadersObtained1;
		NullCheck(L_3);
		L_3->___onHeadersObtained_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onHeadersObtained_1), (void*)L_4);
		// UnityWebRequest request = UnityWebRequest.Head(GetFinalUrl(fileUrl));
		U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___fileUrl_0;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = VoiceUnityRequest_GetFinalUrl_mA714897378C2FD6EDE74BF56EF1D042F4D105E9A(L_6, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8;
		L_8 = UnityWebRequest_Head_m679E92E76E5D9FE0F998D9B2F9C961C28BB898F2(L_7, NULL);
		// return Request(request, null, (response) =>
		// {
		//     // Headers dictionary if possible
		//     Dictionary<string, string> headers = null;
		//     // Log error if applicable
		//     if (!string.IsNullOrEmpty(response.error))
		//     {
		//         VLog.W($"Header Failure\nError: {response.error}\nUrl: {fileUrl}");
		//     }
		//     // Set headers & log error if failure
		//     else
		//     {
		//         headers = response.GetResponseHeaders();
		//         if (headers == null)
		//         {
		//             VLog.W($"No headers found\nUrl: {fileUrl}");
		//         }
		//     }
		//     // Return original file url with headers if possible
		//     onHeadersObtained?.Invoke(fileUrl, headers);
		// });
		U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* L_9 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_10 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CRequestHeadersU3Eb__0_m5E01FB94E2FED7B4D2F5ABE8AEADD4AA70E7EECE_RuntimeMethod_var), NULL);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_11;
		L_11 = VoiceUnityRequest_Request_m18E16E1268684B1A58C7FB0C49DDC142FC4125CC(L_8, (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL, L_10, NULL);
		return L_11;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::CheckFileExists(System.String,System.Action`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_CheckFileExists_m93A29856F76D90B9C95339E1089B513859ABCC9D (String_t* ___filePath0, Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ___onFileExistDetermined1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t2399F3C34C43EB392520F878CA121755E120498E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__0_m8DFB20D7A300E9BE5A389E3A8BD0DE0A462E8CE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__2_mB87FF84130C4E0402BCA9C2383E8E9C1FC01B465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CCheckFileExistsU3Eb__1_mB714384976C91B8FBE2ECAA61839D54FB13B12CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* V_0 = NULL;
	bool V_1 = false;
	U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* V_2 = NULL;
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B6_0 = NULL;
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_0 = (U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m967D04D5730970725C0E30B3CDEC488F4C74F303(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_1 = V_0;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_2 = ___onFileExistDetermined1;
		NullCheck(L_1);
		L_1->___onFileExistDetermined_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onFileExistDetermined_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_3 = V_0;
		String_t* L_4 = ___filePath0;
		NullCheck(L_3);
		L_3->___filePath_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___filePath_1), (void*)L_4);
		// if (filePath.StartsWith("http"))
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___filePath_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_6, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// return RequestHeaders(filePath, (url, headers) => onFileExistDetermined?.Invoke(filePath, headers != null));
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___filePath_1;
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_10 = V_0;
		Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* L_11 = (Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E*)il2cpp_codegen_object_new(Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_2__ctor_m8873DE82DD22859718FDB7145D76A08D7D55C19F(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__0_m8DFB20D7A300E9BE5A389E3A8BD0DE0A462E8CE9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_12;
		L_12 = VoiceUnityRequest_RequestHeaders_m847790186B4474397BE29ABCA73CE83EE3CDB1F6(L_9, L_11, NULL);
		return L_12;
	}

IL_003e:
	{
		// if (filePath.StartsWith("jar"))
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___filePath_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_14, _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A, NULL);
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_16 = (U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		U3CU3Ec__DisplayClass4_1__ctor_m111FA9F876F82B1D75BBEDF7205721E5CCA08850(L_16, NULL);
		V_2 = L_16;
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_17 = V_2;
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_18 = V_0;
		NullCheck(L_17);
		L_17->___CSU24U3CU3E8__locals1_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___CSU24U3CU3E8__locals1_1), (void*)L_18);
		// VoiceUnityRequest request = null;
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_19 = V_2;
		NullCheck(L_19);
		L_19->___request_0 = (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___request_0), (void*)(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)NULL);
		// request = RequestFile(filePath, (url, progress) =>
		// {
		//     // Stop as early as possible
		//     if (progress > 0f && progress < 1f && request != null)
		//     {
		//         request.Unload();
		//         request = null;
		//         onFileExistDetermined?.Invoke(filePath, true);
		//     }
		// }, (url, response) =>
		// {
		//     // If getting here, most likely failed but double check anyway
		//     onFileExistDetermined?.Invoke(filePath, string.IsNullOrEmpty(response.error));
		// });
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_20 = V_2;
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_21 = V_2;
		NullCheck(L_21);
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_22 = L_21->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_22);
		String_t* L_23 = L_22->___filePath_1;
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_24 = V_2;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_25 = (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*)il2cpp_codegen_object_new(Action_2_t2399F3C34C43EB392520F878CA121755E120498E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_2__ctor_m7F62303F36F46A731A6332E89B736901F4B3B48F(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass4_1_U3CCheckFileExistsU3Eb__1_mB714384976C91B8FBE2ECAA61839D54FB13B12CE_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_26 = V_2;
		NullCheck(L_26);
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_27 = L_26->___CSU24U3CU3E8__locals1_1;
		Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* L_28 = (Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79*)il2cpp_codegen_object_new(Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_2__ctor_mD2447C52D0207322B2D4ADD3190279B8895158BB(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__2_mB87FF84130C4E0402BCA9C2383E8E9C1FC01B465_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_29;
		L_29 = VoiceUnityRequest_RequestFile_m17E794FEA076C565C072C3DA07EC80A6B9931158(L_23, L_25, L_28, NULL);
		NullCheck(L_20);
		L_20->___request_0 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___request_0), (void*)L_29);
		// return request;
		U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* L_30 = V_2;
		NullCheck(L_30);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_31 = L_30->___request_0;
		return L_31;
	}

IL_009e:
	{
		// bool found = File.Exists(filePath);
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = L_32->___filePath_1;
		bool L_34;
		L_34 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_33, NULL);
		V_1 = L_34;
		// onFileExistDetermined?.Invoke(filePath, found);
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_35 = V_0;
		NullCheck(L_35);
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_36 = L_35->___onFileExistDetermined_0;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_37 = L_36;
		G_B5_0 = L_37;
		if (L_37)
		{
			G_B6_0 = L_37;
			goto IL_00b6;
		}
	}
	{
		goto IL_00c2;
	}

IL_00b6:
	{
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = L_38->___filePath_1;
		bool L_40 = V_1;
		NullCheck(G_B6_0);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(G_B6_0, L_39, L_40, NULL);
	}

IL_00c2:
	{
		// return null;
		return (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)NULL;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestAudioClip(System.String,System.Action`3<System.String,UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestAudioClip_mBD0D7550178B8EEB46253E429CEBD2982C8E04D4 (String_t* ___audioUrl0, Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestAudioClip(audioUrl, AudioType.UNKNOWN, null, onAudioClipReady);
		String_t* L_0 = ___audioUrl0;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_1 = ___onAudioClipReady1;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_2;
		L_2 = VoiceUnityRequest_RequestAudioClip_mDB80F5E89A8BF8BD722E30B996E5AC9939CDBC43(L_0, 0, (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*)NULL, L_1, NULL);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestAudioClip(System.String,System.Action`2<System.String,System.Single>,System.Action`3<System.String,UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestAudioClip_m7E47FD040499A4DC1946D521CB0537C7CEBD1AC1 (String_t* ___audioUrl0, Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onAudioClipProgress1, Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action<string, AudioClip, string> onAudioClipReady) => RequestAudioClip(audioUrl, AudioType.UNKNOWN,
		// onAudioClipProgress, onAudioClipReady);
		String_t* L_0 = ___audioUrl0;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_1 = ___onAudioClipProgress1;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_2 = ___onAudioClipReady2;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_3;
		L_3 = VoiceUnityRequest_RequestAudioClip_mDB80F5E89A8BF8BD722E30B996E5AC9939CDBC43(L_0, 0, L_1, L_2, NULL);
		return L_3;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestAudioClip(System.String,UnityEngine.AudioType,System.Action`3<System.String,UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestAudioClip_mA9734587011E9BE8C38683D51FDC5C6D09E0BFB6 (String_t* ___audioUrl0, int32_t ___audioType1, Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestAudioClip(audioUrl, audioType, null, onAudioClipReady);
		String_t* L_0 = ___audioUrl0;
		int32_t L_1 = ___audioType1;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_2 = ___onAudioClipReady2;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_3;
		L_3 = VoiceUnityRequest_RequestAudioClip_mDB80F5E89A8BF8BD722E30B996E5AC9939CDBC43(L_0, L_1, (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*)NULL, L_2, NULL);
		return L_3;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::RequestAudioClip(System.String,UnityEngine.AudioType,System.Action`2<System.String,System.Single>,System.Action`3<System.String,UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_RequestAudioClip_mDB80F5E89A8BF8BD722E30B996E5AC9939CDBC43 (String_t* ___audioUrl0, int32_t ___audioType1, Action_2_t2399F3C34C43EB392520F878CA121755E120498E* ___onAudioClipProgress2, Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* ___onAudioClipReady3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisAudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_mBF741BA29A25B0F49730557F32687450D0080C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__0_mFA7220BBDB1801D069F75031707FCDBC85DBCFE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__1_m5482CEF064071E7ACC1369982200643ADCE9F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2FFE95110A9382EE479E1DB659AEDC06132997);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* V_0 = NULL;
	String_t* V_1 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B4_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_0 = (U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mE3B03AD1B088DB80B9022DFA7EC39ADCADB684D7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_1 = V_0;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_2 = ___onAudioClipProgress2;
		NullCheck(L_1);
		L_1->___onAudioClipProgress_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onAudioClipProgress_0), (void*)L_2);
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_3 = V_0;
		String_t* L_4 = ___audioUrl0;
		NullCheck(L_3);
		L_3->___audioUrl_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___audioUrl_1), (void*)L_4);
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_5 = V_0;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_6 = ___onAudioClipReady3;
		NullCheck(L_5);
		L_5->___onAudioClipReady_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___onAudioClipReady_2), (void*)L_6);
		// if (audioType == AudioType.UNKNOWN)
		int32_t L_7 = ___audioType1;
		if (L_7)
		{
			goto IL_0069;
		}
	}
	{
		// string audioExt = Path.GetExtension(audioUrl).Replace(".", "");
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___audioUrl_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_10, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_1 = L_11;
		// if (!Enum.TryParse(audioExt, true, out audioType))
		String_t* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Enum_TryParse_TisAudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_mBF741BA29A25B0F49730557F32687450D0080C6C(L_12, (bool)1, (&___audioType1), Enum_TryParse_TisAudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_mBF741BA29A25B0F49730557F32687450D0080C6C_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		// onAudioClipReady?.Invoke(audioUrl, null, $"Unknown audio type\nExtension: {audioExt}");
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_14 = V_0;
		NullCheck(L_14);
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_15 = L_14->___onAudioClipReady_2;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_16 = L_15;
		G_B3_0 = L_16;
		if (L_16)
		{
			G_B4_0 = L_16;
			goto IL_0050;
		}
	}
	{
		goto IL_0067;
	}

IL_0050:
	{
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->___audioUrl_1;
		String_t* L_19 = V_1;
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0A2FFE95110A9382EE479E1DB659AEDC06132997, L_19, NULL);
		NullCheck(G_B4_0);
		Action_3_Invoke_mF6530D95C77F956A1746870B7F60069FBE32E836_inline(G_B4_0, L_18, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, L_20, NULL);
	}

IL_0067:
	{
		// return null;
		return (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)NULL;
	}

IL_0069:
	{
		// UnityWebRequest request = UnityWebRequestMultimedia.GetAudioClip(GetFinalUrl(audioUrl), audioType);
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->___audioUrl_1;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = VoiceUnityRequest_GetFinalUrl_mA714897378C2FD6EDE74BF56EF1D042F4D105E9A(L_22, NULL);
		int32_t L_24 = ___audioType1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25;
		L_25 = UnityWebRequestMultimedia_GetAudioClip_m15C8E07AD1A9AB041ACB9A76225B10422ECA6697(L_23, L_24, NULL);
		// ((DownloadHandlerAudioClip)request.downloadHandler).streamAudio = true;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = L_25;
		NullCheck(L_26);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_27;
		L_27 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_26, NULL);
		NullCheck(((DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*)CastclassSealed((RuntimeObject*)L_27, DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var)));
		DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30(((DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*)CastclassSealed((RuntimeObject*)L_27, DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var)), (bool)1, NULL);
		// return Request(request, (p) => onAudioClipProgress?.Invoke(audioUrl, p), (r) =>
		// {
		//     // Error
		//     #if UNITY_2020_1_OR_NEWER
		//     if (r.result != UnityWebRequest.Result.Success)
		//     #else
		//     if (r.isHttpError)
		//     #endif
		//     {
		//         onAudioClipReady?.Invoke(audioUrl, null, r.error);
		//     }
		//     // Handler
		//     else
		//     {
		//         // Get clip
		//         AudioClip clip = null;
		//         try
		//         {
		//             clip = DownloadHandlerAudioClip.GetContent(r);
		//         }
		//         catch (Exception exception)
		//         {
		//             onAudioClipReady?.Invoke(audioUrl, null, $"Failed to decode audio clip\n{exception.ToString()}");
		//             return;
		//         }
		//         // Still missing
		//         if (clip == null)
		//         {
		//             onAudioClipReady?.Invoke(audioUrl, null, "Failed to decode audio clip");
		//         }
		//         // Success
		//         else
		//         {
		//             clip.name = Path.GetFileNameWithoutExtension(audioUrl);
		//             onAudioClipReady?.Invoke(audioUrl, clip, string.Empty);
		//         }
		//     }
		// });
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_28 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_29 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__0_mFA7220BBDB1801D069F75031707FCDBC85DBCFE6_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* L_30 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_31 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__1_m5482CEF064071E7ACC1369982200643ADCE9F057_RuntimeMethod_var), NULL);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_32;
		L_32 = VoiceUnityRequest_Request_m18E16E1268684B1A58C7FB0C49DDC142FC4125CC(L_26, L_29, L_31, NULL);
		return L_32;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Request(UnityEngine.Networking.UnityWebRequest,System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_Request_m6DFB3A28DD5E73256D3AFAD3C0FC1CC090BBE1ED (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___onComplete1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static VoiceUnityRequest Request(UnityWebRequest request, Action<UnityWebRequest> onComplete) => Request(request, null, onComplete);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_1 = ___onComplete1;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_2;
		L_2 = VoiceUnityRequest_Request_m18E16E1268684B1A58C7FB0C49DDC142FC4125CC(L_0, (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL, L_1, NULL);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Utilities.VoiceUnityRequest Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Request(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* VoiceUnityRequest_Request_m18E16E1268684B1A58C7FB0C49DDC142FC4125CC (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityRequest0, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress1, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___onComplete2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VoiceUnityRequest request = new VoiceUnityRequest();
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_0 = (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)il2cpp_codegen_object_new(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VoiceUnityRequest__ctor_mD125A64CDCDBE0A904EF4F76F89BDE3EFBA08C51(L_0, NULL);
		// request.Setup(unityRequest, onProgress, onComplete);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_1 = L_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___unityRequest0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___onProgress1;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_4 = ___onComplete2;
		NullCheck(L_1);
		VirtualActionInvoker3< UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* >::Invoke(4 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Setup(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>) */, L_1, L_2, L_3, L_4);
		// return request;
		return L_1;
	}
}
// System.Boolean Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::get_IsTransmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceUnityRequest_get_IsTransmitting_m761141869405A3DCEE2D5B4D96086807E1176EE3 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsTransmitting => _transmitting;
		bool L_0 = __this->____transmitting_3;
		return L_0;
	}
}
// System.Single Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoiceUnityRequest_get_Progress_m7E973B4B454BCD60FC74E827E432B748667A0B1E (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	{
		// public float Progress => _progress;
		float L_0 = __this->____progress_4;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Setup(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest_Setup_mEA68DCDF5F99D206370655AD9BEBEB2D339E0611 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___newRequest0, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___newProgress1, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___newComplete2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____request_5;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _request = newRequest;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = ___newRequest0;
		__this->____request_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_5), (void*)L_1);
		// _onProgress = newProgress;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = ___newProgress1;
		__this->____onProgress_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onProgress_6), (void*)L_2);
		// _onComplete = newComplete;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_3 = ___newComplete2;
		__this->____onComplete_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onComplete_7), (void*)L_3);
		// _transmitting = false;
		__this->____transmitting_3 = (bool)0;
		// _progress = 0f;
		__this->____progress_4 = (0.0f);
		// if (newRequest.timeout <= 0)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___newRequest0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnityWebRequest_get_timeout_mE7983CCB87576C0BF53D22A6BC79AC5191BB4927(L_4, NULL);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// newRequest.timeout = Timeout;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = ___newRequest0;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		int32_t L_7 = ((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->___Timeout_2;
		NullCheck(L_6);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_6, L_7, NULL);
	}

IL_0044:
	{
		// _coroutine = CoroutineUtility.StartCoroutine(PerformUpdate());
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IEnumerator Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::PerformUpdate() */, __this);
		CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* L_9;
		L_9 = CoroutineUtility_StartCoroutine_mB06C8EE1DC30AF93C6513CEC927A53ECE5628657(L_8, (bool)0, NULL);
		__this->____coroutine_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coroutine_8), (void*)L_9);
		// }
		return;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::PerformUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceUnityRequest_PerformUpdate_m11FF514582594C720B42B6EDF7E6C71CB8A7DFA3 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* L_0 = (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4*)il2cpp_codegen_object_new(U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPerformUpdateU3Ed__25__ctor_m05B2BDA7D478AB75860F7DF5E330877DEE9C6AAF(L_0, 0, NULL);
		U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest_Begin_m96D0ADD2375E53DF92DCF525883B7765E272D6C7 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B2_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B1_0 = NULL;
	{
		// _transmitting = true;
		__this->____transmitting_3 = (bool)1;
		// _progress = 0f;
		__this->____progress_4 = (0.0f);
		// _onProgress?.Invoke(_progress);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->____onProgress_6;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		goto IL_0029;
	}

IL_001e:
	{
		float L_2 = __this->____progress_4;
		NullCheck(G_B2_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B2_0, L_2, NULL);
	}

IL_0029:
	{
		// _request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->____request_5;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4;
		L_4 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_3, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest_Complete_m18F0B3D7163737ED9B8D36E67983B5FA4B4DD34D (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B5_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B4_0 = NULL;
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* G_B8_0 = NULL;
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* G_B7_0 = NULL;
	{
		// if (_transmitting && _request != null && _request.isDone)
		bool L_0 = __this->____transmitting_3;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->____request_5;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____request_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_2, NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// _progress = 1f;
		__this->____progress_4 = (1.0f);
		// _onProgress?.Invoke(_progress);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_4 = __this->____onProgress_6;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0034;
		}
	}
	{
		goto IL_003f;
	}

IL_0034:
	{
		float L_6 = __this->____progress_4;
		NullCheck(G_B5_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B5_0, L_6, NULL);
	}

IL_003f:
	{
		// _onComplete?.Invoke(_request);
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_7 = __this->____onComplete_7;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_8 = L_7;
		G_B7_0 = L_8;
		if (L_8)
		{
			G_B8_0 = L_8;
			goto IL_004b;
		}
	}
	{
		goto IL_0056;
	}

IL_004b:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->____request_5;
		NullCheck(G_B8_0);
		Action_1_Invoke_m2E790BB44663BD4EAAA462F9539D3DCDE112377C_inline(G_B8_0, L_9, NULL);
	}

IL_0056:
	{
		// Unload();
		VirtualActionInvoker0::Invoke(8 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Unload() */, __this);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest_Unload_m7303BEBD960982F599F65E6DA99A2BDC70753516 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_coroutine != null)
		CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* L_0 = __this->____coroutine_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _coroutine.CoroutineCancel();
		CoroutinePerformer_t4817D17E59F38DA4EBE8A6618B780513B4DD0E6B* L_2 = __this->____coroutine_8;
		NullCheck(L_2);
		CoroutinePerformer_CoroutineCancel_mA3B5FE5A3595D03B0715C32FF1AE551589708731(L_2, NULL);
	}

IL_0019:
	{
		// if (_transmitting)
		bool L_3 = __this->____transmitting_3;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// _transmitting = false;
		__this->____transmitting_3 = (bool)0;
		// _requestCount--;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		int32_t L_4 = ((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->____requestCount_1;
		((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->____requestCount_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0034:
	{
		// _onProgress = null;
		__this->____onProgress_6 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onProgress_6), (void*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL);
		// _onComplete = null;
		__this->____onComplete_7 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onComplete_7), (void*)(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)NULL);
		// if (_request != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->____request_5;
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		// _request.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->____request_5;
		NullCheck(L_6);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_6, NULL);
		// _request = null;
		__this->____request_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_5), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest__ctor_mD125A64CDCDBE0A904EF4F76F89BDE3EFBA08C51 (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest__cctor_mB19DE8E94E44A2FFF67B0A541D56D1EC4F1BA324 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int _requestCount = 0;
		((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->____requestCount_1 = 0;
		// public static int Timeout = 5;
		((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->___Timeout_2 = 5;
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
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4118BB91F95F14A229CC25784E135D46F0BA9519 (U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::<RequestFile>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__0_m11C17558E0994B70F078FB937ED27C4977B23072 (U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* __this, float ___p0, const RuntimeMethod* method) 
{
	Action_2_t2399F3C34C43EB392520F878CA121755E120498E* G_B2_0 = NULL;
	Action_2_t2399F3C34C43EB392520F878CA121755E120498E* G_B1_0 = NULL;
	{
		// return Request(request, (p) => onFileProgress?.Invoke(fileUrl, p), (r) => onFileLoaded?.Invoke(fileUrl, r));
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_0 = __this->___onFileProgress_0;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = __this->___fileUrl_1;
		float L_3 = ___p0;
		NullCheck(G_B2_0);
		Action_2_Invoke_m4394ACFFC2C8D7A7D849C0781B4212454875DBC2_inline(G_B2_0, L_2, L_3, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass2_0::<RequestFile>b__1(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CRequestFileU3Eb__1_m62A06C0F7C1E2A471405E9E66C0B6C34664C65E5 (U3CU3Ec__DisplayClass2_0_t011D49A548FD5843B88C51FA31636DB008498EF0* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___r0, const RuntimeMethod* method) 
{
	Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* G_B2_0 = NULL;
	Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* G_B1_0 = NULL;
	{
		// return Request(request, (p) => onFileProgress?.Invoke(fileUrl, p), (r) => onFileLoaded?.Invoke(fileUrl, r));
		Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* L_0 = __this->___onFileLoaded_2;
		Action_2_t6D44B605F825F1EC3D360F12EB725042462A0D79* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = __this->___fileUrl_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ___r0;
		NullCheck(G_B2_0);
		Action_2_Invoke_mFCDFF41277810F0799BD361C2E8E56B310F3B0E7_inline(G_B2_0, L_2, L_3, NULL);
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
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m79D7E030BCB7C9FDF104764C004965137DE2C480 (U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass3_0::<RequestHeaders>b__0(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CRequestHeadersU3Eb__0_m5E01FB94E2FED7B4D2F5ABE8AEADD4AA70E7EECE (U3CU3Ec__DisplayClass3_0_t035C337CCC28127E6FC1B907A19DE57A9C7AEDAD* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1639CF105315D420AFDD8C8BD886E05FA950557B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349AAE44F6B2A33FF1E13B6095ECA68746040DBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508047DA9D9EFA48BC101D66AB6D436C084F77C);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* G_B6_0 = NULL;
	Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* G_B5_0 = NULL;
	{
		// Dictionary<string, string> headers = null;
		V_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		// if (!string.IsNullOrEmpty(response.error))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___response0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		// VLog.W($"Header Failure\nError: {response.error}\nUrl: {fileUrl}");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ___response0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_3, NULL);
		String_t* L_5 = __this->___fileUrl_0;
		String_t* L_6;
		L_6 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral1639CF105315D420AFDD8C8BD886E05FA950557B, L_4, _stringLiteral7508047DA9D9EFA48BC101D66AB6D436C084F77C, L_5, NULL);
		VLog_W_mDE8D258C754E170A0BD99D4E5041CC0CEF9E645C(L_6, NULL);
		goto IL_0050;
	}

IL_0031:
	{
		// headers = response.GetResponseHeaders();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = ___response0;
		NullCheck(L_7);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8;
		L_8 = UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF(L_7, NULL);
		V_0 = L_8;
		// if (headers == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = V_0;
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// VLog.W($"No headers found\nUrl: {fileUrl}");
		String_t* L_10 = __this->___fileUrl_0;
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral349AAE44F6B2A33FF1E13B6095ECA68746040DBA, L_10, NULL);
		VLog_W_mDE8D258C754E170A0BD99D4E5041CC0CEF9E645C(L_11, NULL);
	}

IL_0050:
	{
		// onHeadersObtained?.Invoke(fileUrl, headers);
		Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* L_12 = __this->___onHeadersObtained_1;
		Action_2_t6097D539C475E92ADBE761FF3D88F10F1C26693E* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_005b;
		}
	}
	{
		return;
	}

IL_005b:
	{
		String_t* L_14 = __this->___fileUrl_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_0;
		NullCheck(G_B6_0);
		Action_2_Invoke_mD0107A6968AE9937D1C508BBB1825CEDFAD8CF28_inline(G_B6_0, L_14, L_15, NULL);
		// });
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
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m967D04D5730970725C0E30B3CDEC488F4C74F303 (U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0::<CheckFileExists>b__0(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__0_m8DFB20D7A300E9BE5A389E3A8BD0DE0A462E8CE9 (U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers1, const RuntimeMethod* method) 
{
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B2_0 = NULL;
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B1_0 = NULL;
	{
		// return RequestHeaders(filePath, (url, headers) => onFileExistDetermined?.Invoke(filePath, headers != null));
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_0 = __this->___onFileExistDetermined_0;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = __this->___filePath_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___headers1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(G_B2_0, L_2, (bool)((!(((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_0::<CheckFileExists>b__2(System.String,UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCheckFileExistsU3Eb__2_mB87FF84130C4E0402BCA9C2383E8E9C1FC01B465 (U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* __this, String_t* ___url0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___response1, const RuntimeMethod* method) 
{
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B2_0 = NULL;
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B1_0 = NULL;
	{
		// onFileExistDetermined?.Invoke(filePath, string.IsNullOrEmpty(response.error));
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_0 = __this->___onFileExistDetermined_0;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = __this->___filePath_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ___response1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		NullCheck(G_B2_0);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(G_B2_0, L_2, L_5, NULL);
		// });
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
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m111FA9F876F82B1D75BBEDF7205721E5CCA08850 (U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass4_1::<CheckFileExists>b__1(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CCheckFileExistsU3Eb__1_mB714384976C91B8FBE2ECAA61839D54FB13B12CE (U3CU3Ec__DisplayClass4_1_tEC3BC2580EE5EB5B3D186473BCD6443767222DA9* __this, String_t* ___url0, float ___progress1, const RuntimeMethod* method) 
{
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B5_0 = NULL;
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B4_0 = NULL;
	{
		// if (progress > 0f && progress < 1f && request != null)
		float L_0 = ___progress1;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		float L_1 = ___progress1;
		if ((!(((float)L_1) < ((float)(1.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_2 = __this->___request_0;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// request.Unload();
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_3 = __this->___request_0;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(8 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Unload() */, L_3);
		// request = null;
		__this->___request_0 = (VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___request_0), (void*)(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667*)NULL);
		// onFileExistDetermined?.Invoke(filePath, true);
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_5 = L_4->___onFileExistDetermined_0;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		U3CU3Ec__DisplayClass4_0_t487233FD8B69ED7B5D6B00F447915A099ED08970* L_7 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___filePath_1;
		NullCheck(G_B5_0);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(G_B5_0, L_8, (bool)1, NULL);
	}

IL_004b:
	{
		// }, (url, response) =>
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
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mE3B03AD1B088DB80B9022DFA7EC39ADCADB684D7 (U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::<RequestAudioClip>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__0_mFA7220BBDB1801D069F75031707FCDBC85DBCFE6 (U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* __this, float ___p0, const RuntimeMethod* method) 
{
	Action_2_t2399F3C34C43EB392520F878CA121755E120498E* G_B2_0 = NULL;
	Action_2_t2399F3C34C43EB392520F878CA121755E120498E* G_B1_0 = NULL;
	{
		// return Request(request, (p) => onAudioClipProgress?.Invoke(audioUrl, p), (r) =>
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_0 = __this->___onAudioClipProgress_0;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = __this->___audioUrl_1;
		float L_3 = ___p0;
		NullCheck(G_B2_0);
		Action_2_Invoke_m4394ACFFC2C8D7A7D849C0781B4212454875DBC2_inline(G_B2_0, L_2, L_3, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<>c__DisplayClass8_0::<RequestAudioClip>b__1(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CRequestAudioClipU3Eb__1_m5482CEF064071E7ACC1369982200643ADCE9F057 (U3CU3Ec__DisplayClass8_0_t5CD439CCEE6143D6E50ACC9102F4F030C965E33B* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD940B5E3E33ECDE4809B7014CF8207A0152C7767);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B3_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B2_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B8_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B7_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B13_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B12_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B16_0 = NULL;
	Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* G_B15_0 = NULL;
	{
		// if (r.result != UnityWebRequest.Result.Success)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___r0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		// onAudioClipReady?.Invoke(audioUrl, null, r.error);
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_2 = __this->___onAudioClipReady_2;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		String_t* L_4 = __this->___audioUrl_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___r0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_5, NULL);
		NullCheck(G_B3_0);
		Action_3_Invoke_mF6530D95C77F956A1746870B7F60069FBE32E836_inline(G_B3_0, L_4, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, L_6, NULL);
		return;
	}

IL_0027:
	{
		// AudioClip clip = null;
		V_0 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
	}
	try
	{// begin try (depth: 1)
		// clip = DownloadHandlerAudioClip.GetContent(r);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = ___r0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8;
		L_8 = DownloadHandlerAudioClip_GetContent_m31675D53AAC8820812A3CE0207E93E1333979F0B(L_7, NULL);
		V_0 = L_8;
		// }
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{// begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// onAudioClipReady?.Invoke(audioUrl, null, $"Failed to decode audio clip\n{exception.ToString()}");
			Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_9 = __this->___onAudioClipReady_2;
			Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_003f;
			}
		}
		{
			goto IL_005b;
		}

IL_003f:
		{
			String_t* L_11 = __this->___audioUrl_1;
			Exception_t* L_12 = V_1;
			NullCheck(L_12);
			String_t* L_13;
			L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
			String_t* L_14;
			L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74E3FA38770254166118D359A4E4DE7FC6B8718D)), L_13, NULL);
			NullCheck(G_B8_0);
			Action_3_Invoke_mF6530D95C77F956A1746870B7F60069FBE32E836_inline(G_B8_0, L_11, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, L_14, NULL);
		}

IL_005b:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00b0;
		}
	}// end catch (depth: 1)

IL_005d:
	{
		// if (clip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		// onAudioClipReady?.Invoke(audioUrl, null, "Failed to decode audio clip");
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_17 = __this->___onAudioClipReady_2;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_18 = L_17;
		G_B12_0 = L_18;
		if (L_18)
		{
			G_B13_0 = L_18;
			goto IL_0071;
		}
	}
	{
		return;
	}

IL_0071:
	{
		String_t* L_19 = __this->___audioUrl_1;
		NullCheck(G_B13_0);
		Action_3_Invoke_mF6530D95C77F956A1746870B7F60069FBE32E836_inline(G_B13_0, L_19, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, _stringLiteralD940B5E3E33ECDE4809B7014CF8207A0152C7767, NULL);
		return;
	}

IL_0083:
	{
		// clip.name = Path.GetFileNameWithoutExtension(audioUrl);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20 = V_0;
		String_t* L_21 = __this->___audioUrl_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_21, NULL);
		NullCheck(L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_20, L_22, NULL);
		// onAudioClipReady?.Invoke(audioUrl, clip, string.Empty);
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_23 = __this->___onAudioClipReady_2;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_24 = L_23;
		G_B15_0 = L_24;
		if (L_24)
		{
			G_B16_0 = L_24;
			goto IL_009f;
		}
	}
	{
		return;
	}

IL_009f:
	{
		String_t* L_25 = __this->___audioUrl_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26 = V_0;
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B16_0);
		Action_3_Invoke_mF6530D95C77F956A1746870B7F60069FBE32E836_inline(G_B16_0, L_25, L_26, L_27, NULL);
	}

IL_00b0:
	{
		// });
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
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformUpdateU3Ed__25__ctor_m05B2BDA7D478AB75860F7DF5E330877DEE9C6AAF (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformUpdateU3Ed__25_System_IDisposable_Dispose_m2F24DE43B838CE5E9589F11A53E6A88C50DA0A33 (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformUpdateU3Ed__25_MoveNext_mB735B989AE9D06A13346F9AD57067764DD036603 (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* V_1 = NULL;
	float V_2 = 0.0f;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B11_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B10_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_009e;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!_transmitting)
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->____transmitting_3;
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		// if (_requestCount < REQUEST_MAX)
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		int32_t L_6 = ((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->____requestCount_1;
		if ((((int32_t)L_6) >= ((int32_t)2)))
		{
			goto IL_009e;
		}
	}
	{
		// _requestCount++;
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		int32_t L_7 = ((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->____requestCount_1;
		((VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_StaticFields*)il2cpp_codegen_static_fields_for(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var))->____requestCount_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// Begin();
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_8 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(6 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Begin() */, L_8);
		goto IL_009e;
	}

IL_005b:
	{
		// float newProgress = Mathf.Max(_request.downloadProgress, _request.uploadProgress);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_9 = V_1;
		NullCheck(L_9);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = L_9->____request_5;
		NullCheck(L_10);
		float L_11;
		L_11 = UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1(L_10, NULL);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_12 = V_1;
		NullCheck(L_12);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = L_12->____request_5;
		NullCheck(L_13);
		float L_14;
		L_14 = UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95(L_13, NULL);
		float L_15;
		L_15 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_11, L_14, NULL);
		V_2 = L_15;
		// if (_progress != newProgress)
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->____progress_4;
		float L_18 = V_2;
		if ((((float)L_17) == ((float)L_18)))
		{
			goto IL_009e;
		}
	}
	{
		// _progress = newProgress;
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_19 = V_1;
		float L_20 = V_2;
		NullCheck(L_19);
		L_19->____progress_4 = L_20;
		// _onProgress?.Invoke(_progress);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_21 = V_1;
		NullCheck(L_21);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_22 = L_21->____onProgress_6;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_23 = L_22;
		G_B10_0 = L_23;
		if (L_23)
		{
			G_B11_0 = L_23;
			goto IL_0093;
		}
	}
	{
		goto IL_009e;
	}

IL_0093:
	{
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->____progress_4;
		NullCheck(G_B11_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B11_0, L_25, NULL);
	}

IL_009e:
	{
		// while (_request != null && !_request.isDone)
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_26 = V_1;
		NullCheck(L_26);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = L_26->____request_5;
		if (!L_27)
		{
			goto IL_00b6;
		}
	}
	{
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_28 = V_1;
		NullCheck(L_28);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = L_28->____request_5;
		NullCheck(L_29);
		bool L_30;
		L_30 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_29, NULL);
		if (!L_30)
		{
			goto IL_0020;
		}
	}

IL_00b6:
	{
		// Complete();
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_31 = V_1;
		NullCheck(L_31);
		VirtualActionInvoker0::Invoke(7 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Complete() */, L_31);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPerformUpdateU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m766C64114C24F308CAF7F611D28773E441691867 (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformUpdateU3Ed__25_System_Collections_IEnumerator_Reset_m7AADF144F4E2462E7353F50AD25FECE405675F75 (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformUpdateU3Ed__25_System_Collections_IEnumerator_Reset_m7AADF144F4E2462E7353F50AD25FECE405675F75_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.TTS.Utilities.VoiceUnityRequest/<PerformUpdate>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPerformUpdateU3Ed__25_System_Collections_IEnumerator_get_Current_mB50B94A3B72021F858988E0CCD93AF99982C3C93 (U3CPerformUpdateU3Ed__25_t1B1211BA3A3476A29332ED2D02BD7D49132E5DC4* __this, const RuntimeMethod* method) 
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
// System.String Facebook.WitAi.TTS.Utilities.WitUnityRequest::IsTextValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_IsTextValid_m02744507C9001684EE7E7FF005F5180D7FA227FD (String_t* ___textToSpeak0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB217444EAC4744C203410B8BAF3DB3D0DE0EB57A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(textToSpeak))
		String_t* L_0 = ___textToSpeak0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return "No text provided";
		return _stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9;
	}

IL_000e:
	{
		// if (textToSpeak.Length > WitUnityRequest.TTS_MAX_SIZE)
		String_t* L_2 = ___textToSpeak0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)140))))
		{
			goto IL_0030;
		}
	}
	{
		// return $"Text must be less than {WitUnityRequest.TTS_MAX_SIZE} characters";
		int32_t L_4 = ((int32_t)140);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB217444EAC4744C203410B8BAF3DB3D0DE0EB57A, L_5, NULL);
		return L_6;
	}

IL_0030:
	{
		// return string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_7;
	}
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTSStream(Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Single>,System.Action`2<UnityEngine.AudioClip,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTSStream_mB62C85290F30CDC18188E8375EBBB18BD98DA73E (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, String_t* ___textToSpeak1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress3, Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* ___onClipReady4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRequestTTSStreamU3Eb__4_0_mF7877CE783FCFE0BE2F182B84F542003B1E15366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CRequestTTSStreamU3Eb__1_m860C1F2277E461A604D4535F77C72A69A79C0F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* V_0 = NULL;
	Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* G_B2_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* G_B2_3 = NULL;
	Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* G_B1_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* G_B1_3 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* L_0 = (U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m81A2FD77A34847CA40728300699E3D3F9E953A50(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* L_1 = V_0;
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_2 = ___onClipReady4;
		NullCheck(L_1);
		L_1->___onClipReady_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onClipReady_0), (void*)L_2);
		// return RequestTTS(configuration, textToSpeak, data, (response, uri) =>
		// {
		//     DownloadHandlerAudioClip streamHandler = new DownloadHandlerAudioClip(uri, TTSAudioType);
		//     streamHandler.compressed = true;
		//     streamHandler.streamAudio = true;
		//     response.downloadHandler = streamHandler;
		//     response.disposeDownloadHandlerOnDispose = true;
		// }, onProgress, (response, error) =>
		// {
		//     // Failed
		//     if (!string.IsNullOrEmpty(error))
		//     {
		//         onClipReady?.Invoke(null, error);
		//     }
		//     // Success
		//     else
		//     {
		//         // Get clip
		//         AudioClip clip = null;
		//         try
		//         {
		//             clip = DownloadHandlerAudioClip.GetContent(response);
		//         }
		//         catch (Exception exception)
		//         {
		//             // Exception
		//             onClipReady?.Invoke(null, $"Failed to decode audio clip\n{exception.ToString()}");
		//             return;
		//         }
		// 
		//         // Not found
		//         if (clip == null)
		//         {
		//             onClipReady?.Invoke(null, "Failed to decode audio clip");
		//         }
		//         // Success
		//         else
		//         {
		//             clip.name = "TTS_CLIP";
		//             onClipReady?.Invoke(clip, string.Empty);
		//         }
		//     }
		// });
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_3 = ___configuration0;
		String_t* L_4 = ___textToSpeak1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ___data2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var);
		Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* L_6 = ((U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_4;
		G_B1_3 = L_3;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_4;
			G_B2_3 = L_3;
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var);
		U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA* L_8 = ((U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* L_9 = (Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05*)il2cpp_codegen_object_new(Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_m7CB7EAF34F1B7120E147C5F9248DAE9C4BF5339E(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CRequestTTSStreamU3Eb__4_0_mF7877CE783FCFE0BE2F182B84F542003B1E15366_RuntimeMethod_var), NULL);
		Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* L_10 = L_9;
		((U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0030:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_11 = ___onProgress3;
		U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* L_12 = V_0;
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_13 = (Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225*)il2cpp_codegen_object_new(Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_2__ctor_m0041464CD160274EAF8E42389935E33A0A71E0D1(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CRequestTTSStreamU3Eb__1_m860C1F2277E461A604D4535F77C72A69A79C0F98_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_14;
		L_14 = WitUnityRequest_RequestTTS_m8121EEDEFF0BFF704AEEC96044D2166279A8BBB5(G_B2_3, G_B2_2, G_B2_1, G_B2_0, L_11, L_13, NULL);
		return L_14;
	}
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTSDownload(System.String,Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Single>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTSDownload_mEAE9BE782718AC02F044914E3FEB304BF5D9B27B (String_t* ___downloadPath0, WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration1, String_t* ___textToSpeak2, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data3, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__0_m598B490F306521B90EB7031390DF738874B95984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__1_mF36CDE53CE312407BB5A292BF34260704437CCED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F67EDD17F502E8BE5C9CE81D80F4F4BC64E79B1);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_0 = (U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mDFD2BB45CBC11933F6DA571E3DEF790A53F5AA0E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_1 = V_0;
		String_t* L_2 = ___downloadPath0;
		NullCheck(L_1);
		L_1->___downloadPath_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___downloadPath_1), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_3 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___onDownloadComplete5;
		NullCheck(L_3);
		L_3->___onDownloadComplete_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onDownloadComplete_2), (void*)L_4);
		// string tempDownloadPath = downloadPath + ".tmp";
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_5 = V_0;
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___downloadPath_1;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, _stringLiteral2F67EDD17F502E8BE5C9CE81D80F4F4BC64E79B1, NULL);
		NullCheck(L_5);
		L_5->___tempDownloadPath_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___tempDownloadPath_0), (void*)L_8);
	}
	try
	{// begin try (depth: 1)
		{
			// if (File.Exists(tempDownloadPath))
			U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = L_9->___tempDownloadPath_0;
			bool L_11;
			L_11 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_10, NULL);
			if (!L_11)
			{
				goto IL_0043_1;
			}
		}
		{
			// File.Delete(tempDownloadPath);
			U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_12 = V_0;
			NullCheck(L_12);
			String_t* L_13 = L_12->___tempDownloadPath_0;
			File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_13, NULL);
		}

IL_0043_1:
		{
			// }
			goto IL_005e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0045:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VLog.E($"Deleting Temp File Failed\nPath: {tempDownloadPath}\n{e}");
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___tempDownloadPath_0;
		Exception_t* L_16 = V_1;
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC50E73367A371A2A214A0D87A032D8DA07B07DA)), L_15, L_16, NULL);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_17, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_005e:
	{
		// return RequestTTS(configuration, textToSpeak, data, (response, uri) =>
		// {
		//     DownloadHandlerFile fileHandler = new DownloadHandlerFile(tempDownloadPath, true);
		//     response.downloadHandler = fileHandler;
		//     response.disposeDownloadHandlerOnDispose = true;
		// }, onProgress, (response, error) =>
		// {
		//     // If file found
		//     try
		//     {
		//         if (File.Exists(tempDownloadPath))
		//         {
		//             // For error, remove
		//             if (!string.IsNullOrEmpty(error))
		//             {
		//                 File.Delete(tempDownloadPath);
		//             }
		//             // For success, move to final path
		//             else
		//             {
		//                 File.Move(tempDownloadPath, downloadPath);
		//             }
		//         }
		//     }
		//     catch (Exception e)
		//     {
		//         VLog.E($"Moving File Failed\nFrom: {tempDownloadPath}\nTo: {downloadPath}\n{e}");
		//     }
		//     onDownloadComplete?.Invoke(error);
		// });
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_18 = ___configuration1;
		String_t* L_19 = ___textToSpeak2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = ___data3;
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_21 = V_0;
		Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* L_22 = (Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05*)il2cpp_codegen_object_new(Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_2__ctor_m7CB7EAF34F1B7120E147C5F9248DAE9C4BF5339E(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__0_m598B490F306521B90EB7031390DF738874B95984_RuntimeMethod_var), NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_23 = ___onProgress4;
		U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* L_24 = V_0;
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_25 = (Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225*)il2cpp_codegen_object_new(Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_2__ctor_m0041464CD160274EAF8E42389935E33A0A71E0D1(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__1_mF36CDE53CE312407BB5A292BF34260704437CCED_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_26;
		L_26 = WitUnityRequest_RequestTTS_m8121EEDEFF0BFF704AEEC96044D2166279A8BBB5(L_18, L_19, L_20, L_22, L_23, L_25, NULL);
		return L_26;
	}
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTS(Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`2<UnityEngine.Networking.UnityWebRequest,System.Uri>,System.Action`1<System.Single>,System.Action`2<UnityEngine.Networking.UnityWebRequest,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTS_m8121EEDEFF0BFF704AEEC96044D2166279A8BBB5 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, String_t* ___textToSpeak1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___data2, Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* ___onSetup3, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress4, Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* ___onComplete5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CRequestTTSU3Eb__0_mAEF2B87F9AA1E3A11E5A6E499F78C14D320209B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6326FFB8548BB1176646EDEDE926CB5DA9106026);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69A4B52D76FD413D44C178C9B1C353D678388583);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC32F77CB3EA50F6385017E3FB6CDE22EB44CE60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	String_t* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_5 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* G_B3_0 = NULL;
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* G_B2_0 = NULL;
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* G_B8_0 = NULL;
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* G_B7_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* L_0 = (U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mB8698DFE77DBDAF723823DD09C8D61A6242100A9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* L_1 = V_0;
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_2 = ___onComplete5;
		NullCheck(L_1);
		L_1->___onComplete_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onComplete_0), (void*)L_2);
		// if (configuration == null)
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_3 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// onComplete?.Invoke(null, "TTS Request Failed\nNo wit configuration provided");
		U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* L_5 = V_0;
		NullCheck(L_5);
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_6 = L_5->___onComplete_0;
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0023;
		}
	}
	{
		goto IL_002e;
	}

IL_0023:
	{
		NullCheck(G_B3_0);
		Action_2_Invoke_m6E13A504EA45031706B2163D2D8037AE21241180_inline(G_B3_0, (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL, _stringLiteral6326FFB8548BB1176646EDEDE926CB5DA9106026, NULL);
	}

IL_002e:
	{
		// return null;
		return (WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB*)NULL;
	}

IL_0030:
	{
		// string textError = IsTextValid(textToSpeak);
		String_t* L_8 = ___textToSpeak1;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = WitUnityRequest_IsTextValid_m02744507C9001684EE7E7FF005F5180D7FA227FD(L_8, NULL);
		V_1 = L_9;
		// if (!string.IsNullOrEmpty(textError))
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_10, NULL);
		if (L_11)
		{
			goto IL_005e;
		}
	}
	{
		// onComplete?.Invoke(null, $"TTS Request Failed\n{textError}");
		U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* L_12 = V_0;
		NullCheck(L_12);
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_13 = L_12->___onComplete_0;
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_14 = L_13;
		G_B7_0 = L_14;
		if (L_14)
		{
			G_B8_0 = L_14;
			goto IL_004b;
		}
	}
	{
		goto IL_005c;
	}

IL_004b:
	{
		String_t* L_15 = V_1;
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral69A4B52D76FD413D44C178C9B1C353D678388583, L_15, NULL);
		NullCheck(G_B8_0);
		Action_2_Invoke_m6E13A504EA45031706B2163D2D8037AE21241180_inline(G_B8_0, (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL, L_16, NULL);
	}

IL_005c:
	{
		// return null;
		return (WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB*)NULL;
	}

IL_005e:
	{
		// Uri ttsUri = GetUri(configuration, WIT_ENDPOINT_TTS, null);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_17 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_18;
		L_18 = WitUnityRequest_GetUri_m5F5BC2F4890F2FCC70B1D57787184D7F15AF442C(L_17, _stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		V_2 = L_18;
		// data["q"] = textToSpeak;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = ___data2;
		String_t* L_20 = ___textToSpeak1;
		NullCheck(L_19);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_19, _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140, L_20, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// string ttsJson = string.Empty;
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_21;
		// foreach (var key in data.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = ___data2;
		NullCheck(L_22);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_23;
		L_23 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_22, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_23);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_24;
		L_24 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_23, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_6 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_6), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f0_1;
			}

IL_008c_1:
			{
				// foreach (var key in data.Keys)
				String_t* L_25;
				L_25 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_6), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_7 = L_25;
				// if (!string.IsNullOrEmpty(ttsJson))
				String_t* L_26 = V_3;
				bool L_27;
				L_27 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_26, NULL);
				if (L_27)
				{
					goto IL_00a9_1;
				}
			}
			{
				// ttsJson += ",";
				String_t* L_28 = V_3;
				String_t* L_29;
				L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_28, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_3 = L_29;
			}

IL_00a9_1:
			{
				// ttsJson += $"\"{key}\":\"{data[key].Replace("\"", "\\\"")}\"";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
				String_t* L_32 = V_3;
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_32);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
				String_t* L_35 = V_7;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_35);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_35);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = ___data2;
				String_t* L_39 = V_7;
				NullCheck(L_38);
				String_t* L_40;
				L_40 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_38, L_39, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_40);
				String_t* L_41;
				L_41 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_40, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
				NullCheck(L_37);
				ArrayElementTypeCheck (L_37, L_41);
				(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_41);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_37;
				NullCheck(L_42);
				ArrayElementTypeCheck (L_42, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_42)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				String_t* L_43;
				L_43 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_42, NULL);
				V_3 = L_43;
			}

IL_00f0_1:
			{
				// foreach (var key in data.Keys)
				bool L_44;
				L_44 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_6), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_008c_1;
				}
			}
			{
				goto IL_0109;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0109:
	{
		// ttsJson = "{" + ttsJson + "}";
		String_t* L_45 = V_3;
		String_t* L_46;
		L_46 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_45, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_3 = L_46;
		// byte[] jsonBytes = Encoding.UTF8.GetBytes(ttsJson);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_47;
		L_47 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_48 = V_3;
		NullCheck(L_47);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_47, L_48);
		V_4 = L_49;
		// UnityWebRequest request = new UnityWebRequest(ttsUri, UnityWebRequest.kHttpVerbPOST);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_50 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_51 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		UnityWebRequest__ctor_m357B5E7078790E0CEF7259D76512B031F37F2DEA(L_51, L_50, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		V_5 = L_51;
		// request.SetRequestHeader("Content-type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_52 = V_5;
		NullCheck(L_52);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_52, _stringLiteralBC32F77CB3EA50F6385017E3FB6CDE22EB44CE60, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// request.SetRequestHeader("Accept", $"audio/{TTSAudioType.ToString().ToLower()}");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Il2CppFakeBox<int32_t> L_54(AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var, (&((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___TTSAudioType_9));
		String_t* L_55;
		L_55 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_54), NULL);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_55, NULL);
		String_t* L_57;
		L_57 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4, L_56, NULL);
		NullCheck(L_53);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_53, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, L_57, NULL);
		// request.uploadHandler = new UploadHandlerRaw(jsonBytes);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_58 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_4;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_60 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_60, L_59, NULL);
		NullCheck(L_58);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_58, L_60, NULL);
		// onSetup(request, ttsUri);
		Action_2_tF05BAC4D9A7C89F75F50FBEA8F0DD25A51041A05* L_61 = ___onSetup3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_62 = V_5;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_63 = V_2;
		NullCheck(L_61);
		Action_2_Invoke_m675C3FAB041A118F74193C11653C834F7AE67E74_inline(L_61, L_62, L_63, NULL);
		// return RequestWit(configuration, request, onProgress, (r) =>
		// {
		//     // Error
		//     if (!string.IsNullOrEmpty(r.error))
		//     {
		//         onComplete?.Invoke(null, r.error);
		//     }
		//     // Handler
		//     else
		//     {
		//         onComplete.Invoke(r, r.error);
		//     }
		// });
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_64 = ___configuration0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_65 = V_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_66 = ___onProgress4;
		U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* L_67 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_68 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_68, L_67, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CRequestTTSU3Eb__0_mAEF2B87F9AA1E3A11E5A6E499F78C14D320209B6_RuntimeMethod_var), NULL);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_69;
		L_69 = WitUnityRequest_RequestWit_mE467FF2EC59DC46AD93426BBD7EE446A507D1FFE(L_64, L_65, L_66, L_68, NULL);
		return L_69;
	}
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestTTSVoices(Facebook.WitAi.Data.Configuration.WitConfiguration,System.Action`1<System.Single>,System.Action`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestTTSVoices_mAAE314FE1AF09988CFB3C81AEFAE66B8EBD45FC7 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress1, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___onComplete2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CRequestTTSVoicesU3Eb__0_m0D2CD5062DB115A45909FEA9DD165B278D5889E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6326FFB8548BB1176646EDEDE926CB5DA9106026);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC32F77CB3EA50F6385017E3FB6CDE22EB44CE60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A78E48BD288467843E179246A4E0BBB2D2ED9D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* G_B3_0 = NULL;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* L_0 = (U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m42B743E923F2C6AA186A652360B76E96574E38EE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* L_1 = V_0;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_2 = ___onComplete2;
		NullCheck(L_1);
		L_1->___onComplete_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onComplete_0), (void*)L_2);
		// if (configuration == null)
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_3 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// onComplete?.Invoke(null, "TTS Request Failed\nNo wit configuration provided");
		U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* L_5 = V_0;
		NullCheck(L_5);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_6 = L_5->___onComplete_0;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0022;
		}
	}
	{
		goto IL_002d;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(G_B3_0, (String_t*)NULL, _stringLiteral6326FFB8548BB1176646EDEDE926CB5DA9106026, NULL);
	}

IL_002d:
	{
		// return null;
		return (WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB*)NULL;
	}

IL_002f:
	{
		// Uri ttsUri = GetUri(configuration, WIT_ENDPOINT_TTS_VOICES, null);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_8 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9;
		L_9 = WitUnityRequest_GetUri_m5F5BC2F4890F2FCC70B1D57787184D7F15AF442C(L_8, _stringLiteralD6A78E48BD288467843E179246A4E0BBB2D2ED9D, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		// UnityWebRequest request = UnityWebRequest.Get(ttsUri);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10;
		L_10 = UnityWebRequest_Get_mDC47D7545DA4A2EC763C81C0A149E39CD059BF38(L_9, NULL);
		V_1 = L_10;
		// request.SetRequestHeader("Content-type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = V_1;
		NullCheck(L_11);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_11, _stringLiteralBC32F77CB3EA50F6385017E3FB6CDE22EB44CE60, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// return RequestWit(configuration, request, onProgress, (r) =>
		// {
		//     // Error
		//     if (!string.IsNullOrEmpty(r.error))
		//     {
		//         onComplete?.Invoke(null, r.error);
		//     }
		//     // Handler
		//     else
		//     {
		//         onComplete.Invoke(r.downloadHandler.text, r.error);
		//     }
		// });
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_12 = ___configuration0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_14 = ___onProgress1;
		U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* L_15 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_16 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CRequestTTSVoicesU3Eb__0_m0D2CD5062DB115A45909FEA9DD165B278D5889E0_RuntimeMethod_var), NULL);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_17;
		L_17 = WitUnityRequest_RequestWit_mE467FF2EC59DC46AD93426BBD7EE446A507D1FFE(L_12, L_13, L_14, L_16, NULL);
		return L_17;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::add_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.Uri>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_add_OnProvideCustomUri_m8B664838E45EC55AA24318B88488FDA77E7BCFEC (Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* V_0 = NULL;
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* V_1 = NULL;
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_0 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomUri_13;
		V_0 = L_0;
	}

IL_0006:
	{
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_1 = V_0;
		V_1 = L_1;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_2 = V_1;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*)Castclass((RuntimeObject*)L_4, Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_5 = V_2;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_6 = V_1;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_7;
		L_7 = InterlockedCompareExchangeImpl<Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*>((&((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomUri_13), L_5, L_6);
		V_0 = L_7;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_8 = V_0;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_9 = V_1;
		if ((!(((RuntimeObject*)(Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*)L_8) == ((RuntimeObject*)(Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::remove_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.Uri>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_remove_OnProvideCustomUri_m583A99E248AA60F1C37B37489203A40F79BEAB7C (Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* V_0 = NULL;
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* V_1 = NULL;
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_0 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomUri_13;
		V_0 = L_0;
	}

IL_0006:
	{
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_1 = V_0;
		V_1 = L_1;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_2 = V_1;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*)Castclass((RuntimeObject*)L_4, Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_5 = V_2;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_6 = V_1;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_7;
		L_7 = InterlockedCompareExchangeImpl<Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*>((&((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomUri_13), L_5, L_6);
		V_0 = L_7;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_8 = V_0;
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_9 = V_1;
		if ((!(((RuntimeObject*)(Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*)L_8) == ((RuntimeObject*)(Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::add_OnProvideCustomHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_add_OnProvideCustomHeaders_m2E77CAEF7076A786190A197B0B8027F870F2ECF4 (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* V_0 = NULL;
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* V_1 = NULL;
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomHeaders_14;
		V_0 = L_0;
	}

IL_0006:
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_1 = V_0;
		V_1 = L_1;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_2 = V_1;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)Castclass((RuntimeObject*)L_4, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_5 = V_2;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_6 = V_1;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_7;
		L_7 = InterlockedCompareExchangeImpl<Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*>((&((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomHeaders_14), L_5, L_6);
		V_0 = L_7;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_8 = V_0;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_9 = V_1;
		if ((!(((RuntimeObject*)(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)L_8) == ((RuntimeObject*)(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::remove_OnProvideCustomHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_remove_OnProvideCustomHeaders_mA7ED5B432165BBAFA877BC198E86A8DCA08A069E (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* V_0 = NULL;
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* V_1 = NULL;
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomHeaders_14;
		V_0 = L_0;
	}

IL_0006:
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_1 = V_0;
		V_1 = L_1;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_2 = V_1;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)Castclass((RuntimeObject*)L_4, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_5 = V_2;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_6 = V_1;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_7;
		L_7 = InterlockedCompareExchangeImpl<Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*>((&((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomHeaders_14), L_5, L_6);
		V_0 = L_7;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_8 = V_0;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_9 = V_1;
		if ((!(((RuntimeObject*)(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)L_8) == ((RuntimeObject*)(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Uri Facebook.WitAi.TTS.Utilities.WitUnityRequest::GetUri(Facebook.WitAi.Data.Configuration.WitConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* WitUnityRequest_GetUri_m5F5BC2F4890F2FCC70B1D57787184D7F15AF442C (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, String_t* ___path1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral109F24FE754618B6711730BF8202FE3DD259F9A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* V_0 = NULL;
	WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* V_1 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* V_5 = NULL;
	{
		// UriBuilder uriBuilder = new UriBuilder();
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_0 = (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*)il2cpp_codegen_object_new(UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27(L_0, NULL);
		V_0 = L_0;
		// var endpointConfig = WitEndpointConfig.GetEndpointConfig(configuration);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_1 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_2;
		L_2 = WitEndpointConfig_GetEndpointConfig_m5E94C5612BD7D2C869888BABB0F51720ADD873DE(L_1, NULL);
		V_1 = L_2;
		// uriBuilder.Scheme = endpointConfig.UriScheme;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_3 = V_0;
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = WitEndpointConfig_get_UriScheme_m86831992A6AD745AC3A5020DEE48643B7E84C793(L_4, NULL);
		NullCheck(L_3);
		UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA(L_3, L_5, NULL);
		// uriBuilder.Host = endpointConfig.Authority;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_6 = V_0;
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = WitEndpointConfig_get_Authority_mF4F20B3CA37A69AB5D003F2D618BBF6496B7C583(L_7, NULL);
		NullCheck(L_6);
		UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930(L_6, L_8, NULL);
		// if (endpointConfig.Port > 0)
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = WitEndpointConfig_get_Port_m9FCE8AFC43BD2C735DC50D75B70CDDD604437403(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// uriBuilder.Port = endpointConfig.Port;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_11 = V_0;
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = WitEndpointConfig_get_Port_m9FCE8AFC43BD2C735DC50D75B70CDDD604437403(L_12, NULL);
		NullCheck(L_11);
		UriBuilder_set_Port_mC6C31D266AA5790B8ED038C31489BCC2DE55DE3D(L_11, L_13, NULL);
	}

IL_003a:
	{
		// uriBuilder.Path = path;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_14 = V_0;
		String_t* L_15 = ___path1;
		NullCheck(L_14);
		UriBuilder_set_Path_mD17EF197B4A8A764682938B468B647DAE716E9D0(L_14, L_15, NULL);
		// uriBuilder.Query = $"v={endpointConfig.WitApiVersion}";
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_16 = V_0;
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = WitEndpointConfig_get_WitApiVersion_m63158C60ECC4C89A6B6ED9F87C64394DD19C587C(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral109F24FE754618B6711730BF8202FE3DD259F9A5, L_18, NULL);
		NullCheck(L_16);
		UriBuilder_set_Query_m1B7AB6F65BBAC94C07681D79F2A8DBDB15E844ED(L_16, L_19, NULL);
		// if (queryParams != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = ___queryParams2;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		// foreach (string key in queryParams.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = ___queryParams2;
		NullCheck(L_21);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_22;
		L_22 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_21, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_22);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_23;
		L_23 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_22, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_2 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_2), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b6_1;
			}

IL_0068_1:
			{
				// foreach (string key in queryParams.Keys)
				String_t* L_24;
				L_24 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_2), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_3 = L_24;
				// string val = Uri.EscapeDataString(queryParams[key]);
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = ___queryParams2;
				String_t* L_26 = V_3;
				NullCheck(L_25);
				String_t* L_27;
				L_27 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_25, L_26, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
				String_t* L_28;
				L_28 = Uri_EscapeDataString_m0D32DB5F61DFFE1E4F61EE513E3419F9DA8F773E(L_27, NULL);
				V_4 = L_28;
				// uriBuilder.Query += $"&{key}={val}";
				UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_29 = V_0;
				V_5 = L_29;
				UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_30 = V_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
				UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_33 = V_5;
				NullCheck(L_33);
				String_t* L_34;
				L_34 = UriBuilder_get_Query_m905F5864CB1B5D09FD81F29B148541DFB353F78E_inline(L_33, NULL);
				NullCheck(L_32);
				ArrayElementTypeCheck (L_32, L_34);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_34);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_32;
				NullCheck(L_35);
				ArrayElementTypeCheck (L_35, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
				(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
				String_t* L_37 = V_3;
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, L_37);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_37);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_36;
				NullCheck(L_38);
				ArrayElementTypeCheck (L_38, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
				(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
				String_t* L_40 = V_4;
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, L_40);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_40);
				String_t* L_41;
				L_41 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_39, NULL);
				NullCheck(L_30);
				UriBuilder_set_Query_m1B7AB6F65BBAC94C07681D79F2A8DBDB15E844ED(L_30, L_41, NULL);
			}

IL_00b6_1:
			{
				// foreach (string key in queryParams.Keys)
				bool L_42;
				L_42 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_2), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0068_1;
				}
			}
			{
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		// if (OnProvideCustomUri != null)
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_43 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomUri_13;
		if (!L_43)
		{
			goto IL_00e2;
		}
	}
	{
		// return OnProvideCustomUri(uriBuilder);
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* L_44 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomUri_13;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_45 = V_0;
		NullCheck(L_44);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_46;
		L_46 = Func_2_Invoke_mACFAAC0F1C413E05EE9F08167B8A3A89C28905B7_inline(L_44, L_45, NULL);
		return L_46;
	}

IL_00e2:
	{
		// return uriBuilder.Uri;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_47 = V_0;
		NullCheck(L_47);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_48;
		L_48 = UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1(L_47, NULL);
		return L_48;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::ApplyHeaders(Facebook.WitAi.Data.Configuration.WitConfiguration,UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_ApplyHeaders_mC124BE78658725BA7EB3A63913A97D7B12702783 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityRequest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		s_Il2CppMethodInitialized = true;
	}
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* V_0 = NULL;
	int32_t V_1 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_2 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B2_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B3_1 = NULL;
	{
		// unityRequest.SetRequestHeader("Authorization", GetAuthorization(configuration));
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___unityRequest1;
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_1 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WitUnityRequest_GetAuthorization_m91CEABF16CFF6D62B8B7FA5B10A381019C67E05D(L_1, NULL);
		NullCheck(L_0);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_0, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_2, NULL);
		// unityRequest.SetRequestHeader("User-Agent", WitRequest.GetUserAgent(configuration));
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ___unityRequest1;
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_4 = ___configuration0;
		String_t* L_5;
		L_5 = WitRequest_GetUserAgent_m1DCBBFDFC1D44FBC00996A9A12A87468A3B9882B(L_4, NULL);
		NullCheck(L_3);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_3, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_5, NULL);
		// unityRequest.timeout = configuration ? Mathf.CeilToInt(configuration.timeoutMS / 1000f) : 10;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = ___unityRequest1;
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_7 = ___configuration0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		G_B1_0 = L_6;
		if (L_8)
		{
			G_B2_0 = L_6;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = ((int32_t)10);
		G_B3_1 = G_B1_0;
		goto IL_0041;
	}

IL_002f:
	{
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_9 = ___configuration0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___timeoutMS_7;
		int32_t L_11;
		L_11 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)(((float)L_10)/(1000.0f))), NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_0041:
	{
		NullCheck(G_B3_1);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(G_B3_1, G_B3_0, NULL);
		// if (OnProvideCustomHeaders != null)
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_12 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomHeaders_14;
		if (!L_12)
		{
			goto IL_00b7;
		}
	}
	{
		// foreach (Func<Dictionary<string, string>> del in OnProvideCustomHeaders.GetInvocationList())
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_13 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___OnProvideCustomHeaders_14;
		NullCheck(L_13);
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_14;
		L_14 = VirtualFuncInvoker0< DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* >::Invoke(10 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_13);
		V_0 = L_14;
		V_1 = 0;
		goto IL_00b1;
	}

IL_005c:
	{
		// foreach (Func<Dictionary<string, string>> del in OnProvideCustomHeaders.GetInvocationList())
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Delegate_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		// Dictionary<string, string> customHeaders = del();
		NullCheck(((Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)Castclass((RuntimeObject*)L_18, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var)));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19;
		L_19 = Func_1_Invoke_m627232433A84B3B05747AAE47C120BEEC8E62720_inline(((Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)Castclass((RuntimeObject*)L_18, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_19;
		// if (customHeaders != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ad;
		}
	}
	{
		// foreach (var key in customHeaders.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_2;
		NullCheck(L_21);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_22;
		L_22 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_21, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_22);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_23;
		L_23 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_22, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_3 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_3), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0094_1;
			}

IL_007b_1:
			{
				// foreach (var key in customHeaders.Keys)
				String_t* L_24;
				L_24 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_3), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_4 = L_24;
				// unityRequest.SetRequestHeader(key, customHeaders[key]);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = ___unityRequest1;
				String_t* L_26 = V_4;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = V_2;
				String_t* L_28 = V_4;
				NullCheck(L_27);
				String_t* L_29;
				L_29 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_27, L_28, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_25);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_25, L_26, L_29, NULL);
			}

IL_0094_1:
			{
				// foreach (var key in customHeaders.Keys)
				bool L_30;
				L_30 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_3), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_007b_1;
				}
			}
			{
				goto IL_00ad;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ad:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b1:
	{
		// foreach (Func<Dictionary<string, string>> del in OnProvideCustomHeaders.GetInvocationList())
		int32_t L_32 = V_1;
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_005c;
		}
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.String Facebook.WitAi.TTS.Utilities.WitUnityRequest::GetAuthorization(Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_GetAuthorization_m91CEABF16CFF6D62B8B7FA5B10A381019C67E05D (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"Bearer {configuration.clientAccessToken.Trim()}";
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_0 = ___configuration0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___clientAccessToken_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_2, NULL);
		return L_3;
	}
}
// Facebook.WitAi.TTS.Utilities.WitUnityRequest Facebook.WitAi.TTS.Utilities.WitUnityRequest::RequestWit(Facebook.WitAi.Data.Configuration.WitConfiguration,UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* WitUnityRequest_RequestWit_mE467FF2EC59DC46AD93426BBD7EE446A507D1FFE (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration0, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___unityRequest1, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress2, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___onComplete3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WitUnityRequest request = new WitUnityRequest();
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_0 = (WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB*)il2cpp_codegen_object_new(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitUnityRequest__ctor_m2B2AED2013077B86B7E6E81516F404528A62D630(L_0, NULL);
		// ApplyHeaders(configuration, unityRequest);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_1 = ___configuration0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___unityRequest1;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		WitUnityRequest_ApplyHeaders_mC124BE78658725BA7EB3A63913A97D7B12702783(L_1, L_2, NULL);
		// request.Setup(unityRequest, onProgress, onComplete);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_3 = L_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___unityRequest1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = ___onProgress2;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_6 = ___onComplete3;
		NullCheck(L_3);
		VirtualActionInvoker3< UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* >::Invoke(4 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Setup(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.Single>,System.Action`1<UnityEngine.Networking.UnityWebRequest>) */, L_3, L_4, L_5, L_6);
		// return request;
		return L_3;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest__ctor_m2B2AED2013077B86B7E6E81516F404528A62D630 (WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest__ctor_mD125A64CDCDBE0A904EF4F76F89BDE3EFBA08C51(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest__cctor_m023636C8896B482C56CE1D4512146B69FD67FDFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AudioType TTSAudioType = AudioType.WAV;
		((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___TTSAudioType_9 = ((int32_t)20);
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
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m81A2FD77A34847CA40728300699E3D3F9E953A50 (U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass4_0::<RequestTTSStream>b__1(UnityEngine.Networking.UnityWebRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CRequestTTSStreamU3Eb__1_m860C1F2277E461A604D4535F77C72A69A79C0F98 (U3CU3Ec__DisplayClass4_0_t62F0ED25BA993DAB01118F520A24855D9BE6300F* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83EF01182FDC054BBC22CD6E76CEF5F369050A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD940B5E3E33ECDE4809B7014CF8207A0152C7767);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B3_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B2_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B8_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B7_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B13_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B12_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B16_0 = NULL;
	Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* G_B15_0 = NULL;
	{
		// if (!string.IsNullOrEmpty(error))
		String_t* L_0 = ___error1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// onClipReady?.Invoke(null, error);
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_2 = __this->___onClipReady_0;
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		String_t* L_4 = ___error1;
		NullCheck(G_B3_0);
		Action_2_Invoke_mC2EC2468C63DEAE014449CE4E047C35ED364BD57_inline(G_B3_0, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, L_4, NULL);
		return;
	}

IL_001b:
	{
		// AudioClip clip = null;
		V_0 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
	}
	try
	{// begin try (depth: 1)
		// clip = DownloadHandlerAudioClip.GetContent(response);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___response0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6;
		L_6 = DownloadHandlerAudioClip_GetContent_m31675D53AAC8820812A3CE0207E93E1333979F0B(L_5, NULL);
		V_0 = L_6;
		// }
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// onClipReady?.Invoke(null, $"Failed to decode audio clip\n{exception.ToString()}");
			Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_7 = __this->___onClipReady_0;
			Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_8 = L_7;
			G_B7_0 = L_8;
			if (L_8)
			{
				G_B8_0 = L_8;
				goto IL_0033;
			}
		}
		{
			goto IL_0049;
		}

IL_0033:
		{
			Exception_t* L_9 = V_1;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
			String_t* L_11;
			L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74E3FA38770254166118D359A4E4DE7FC6B8718D)), L_10, NULL);
			NullCheck(G_B8_0);
			Action_2_Invoke_mC2EC2468C63DEAE014449CE4E047C35ED364BD57_inline(G_B8_0, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, L_11, NULL);
		}

IL_0049:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_008c;
		}
	}// end catch (depth: 1)

IL_004b:
	{
		// if (clip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		// onClipReady?.Invoke(null, "Failed to decode audio clip");
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_14 = __this->___onClipReady_0;
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_15 = L_14;
		G_B12_0 = L_15;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		NullCheck(G_B13_0);
		Action_2_Invoke_mC2EC2468C63DEAE014449CE4E047C35ED364BD57_inline(G_B13_0, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, _stringLiteralD940B5E3E33ECDE4809B7014CF8207A0152C7767, NULL);
		return;
	}

IL_006b:
	{
		// clip.name = "TTS_CLIP";
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = V_0;
		NullCheck(L_16);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_16, _stringLiteral83EF01182FDC054BBC22CD6E76CEF5F369050A7B, NULL);
		// onClipReady?.Invoke(clip, string.Empty);
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_17 = __this->___onClipReady_0;
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_18 = L_17;
		G_B15_0 = L_18;
		if (L_18)
		{
			G_B16_0 = L_18;
			goto IL_0081;
		}
	}
	{
		return;
	}

IL_0081:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = V_0;
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B16_0);
		Action_2_Invoke_mC2EC2468C63DEAE014449CE4E047C35ED364BD57_inline(G_B16_0, L_19, L_20, NULL);
	}

IL_008c:
	{
		// });
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
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7C7395338241F940365398FD44BECB16D93329E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA* L_0 = (U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA*)il2cpp_codegen_object_new(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m483499969CA0B5034A1AEBF56AF3A4A1F11BE732(L_0, NULL);
		((U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m483499969CA0B5034A1AEBF56AF3A4A1F11BE732 (U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c::<RequestTTSStream>b__4_0(UnityEngine.Networking.UnityWebRequest,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRequestTTSStreamU3Eb__4_0_mF7877CE783FCFE0BE2F182B84F542003B1E15366 (U3CU3Ec_tF5B0D3478E7059E4E18B1DC584822E030D2BB6EA* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___response0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* V_0 = NULL;
	{
		// DownloadHandlerAudioClip streamHandler = new DownloadHandlerAudioClip(uri, TTSAudioType);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri1;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		int32_t L_1 = ((WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_StaticFields*)il2cpp_codegen_static_fields_for(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var))->___TTSAudioType_9;
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_2 = (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*)il2cpp_codegen_object_new(DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DownloadHandlerAudioClip__ctor_mFF61AA21FD2F3655A0E5DE811467FD7A2426592F(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// streamHandler.compressed = true;
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_3 = V_0;
		NullCheck(L_3);
		DownloadHandlerAudioClip_set_compressed_m212FF53AE2E93AC9029E459101F95E51155359A5(L_3, (bool)1, NULL);
		// streamHandler.streamAudio = true;
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_4 = V_0;
		NullCheck(L_4);
		DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30(L_4, (bool)1, NULL);
		// response.downloadHandler = streamHandler;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___response0;
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_6 = V_0;
		NullCheck(L_5);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_5, L_6, NULL);
		// response.disposeDownloadHandlerOnDispose = true;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = ___response0;
		NullCheck(L_7);
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline(L_7, (bool)1, NULL);
		// }, onProgress, (response, error) =>
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
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mDFD2BB45CBC11933F6DA571E3DEF790A53F5AA0E (U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::<RequestTTSDownload>b__0(UnityEngine.Networking.UnityWebRequest,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__0_m598B490F306521B90EB7031390DF738874B95984 (U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___response0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902* V_0 = NULL;
	{
		// DownloadHandlerFile fileHandler = new DownloadHandlerFile(tempDownloadPath, true);
		String_t* L_0 = __this->___tempDownloadPath_0;
		DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902* L_1 = (DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902*)il2cpp_codegen_object_new(DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DownloadHandlerFile__ctor_m366A8B9559EAFF17D2E33DC0FBE13756C344E0EB(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		// response.downloadHandler = fileHandler;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___response0;
		DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902* L_3 = V_0;
		NullCheck(L_2);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_2, L_3, NULL);
		// response.disposeDownloadHandlerOnDispose = true;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___response0;
		NullCheck(L_4);
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline(L_4, (bool)1, NULL);
		// }, onProgress, (response, error) =>
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass5_0::<RequestTTSDownload>b__1(UnityEngine.Networking.UnityWebRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CRequestTTSDownloadU3Eb__1_mF36CDE53CE312407BB5A292BF34260704437CCED (U3CU3Ec__DisplayClass5_0_t884D6ED6F2F12CCD6E0C9ABC94A04BEE2BA4A5D1* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B8_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B7_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// if (File.Exists(tempDownloadPath))
			String_t* L_0 = __this->___tempDownloadPath_0;
			bool L_1;
			L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
			if (!L_1)
			{
				goto IL_0033_1;
			}
		}
		{
			// if (!string.IsNullOrEmpty(error))
			String_t* L_2 = ___error1;
			bool L_3;
			L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
			if (L_3)
			{
				goto IL_0022_1;
			}
		}
		{
			// File.Delete(tempDownloadPath);
			String_t* L_4 = __this->___tempDownloadPath_0;
			File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_4, NULL);
			goto IL_0033_1;
		}

IL_0022_1:
		{
			// File.Move(tempDownloadPath, downloadPath);
			String_t* L_5 = __this->___tempDownloadPath_0;
			String_t* L_6 = __this->___downloadPath_1;
			File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF(L_5, L_6, NULL);
		}

IL_0033_1:
		{
			// }
			goto IL_0054;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VLog.E($"Moving File Failed\nFrom: {tempDownloadPath}\nTo: {downloadPath}\n{e}");
		String_t* L_7 = __this->___tempDownloadPath_0;
		String_t* L_8 = __this->___downloadPath_1;
		Exception_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0CEA85C7135768ECC5156FEFBAB7BC2717C26009)), L_7, L_8, L_9, NULL);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_10, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0054;
	}// end catch (depth: 1)

IL_0054:
	{
		// onDownloadComplete?.Invoke(error);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_11 = __this->___onDownloadComplete_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		String_t* L_13 = ___error1;
		NullCheck(G_B8_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B8_0, L_13, NULL);
		// });
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
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB8698DFE77DBDAF723823DD09C8D61A6242100A9 (U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass6_0::<RequestTTS>b__0(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CRequestTTSU3Eb__0_mAEF2B87F9AA1E3A11E5A6E499F78C14D320209B6 (U3CU3Ec__DisplayClass6_0_tCAFBF3E959AFA07043E18FBDA82BC657AF645DE2* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___r0, const RuntimeMethod* method) 
{
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* G_B3_0 = NULL;
	Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* G_B2_0 = NULL;
	{
		// if (!string.IsNullOrEmpty(r.error))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// onComplete?.Invoke(null, r.error);
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_3 = __this->___onComplete_0;
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___r0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_5, NULL);
		NullCheck(G_B3_0);
		Action_2_Invoke_m6E13A504EA45031706B2163D2D8037AE21241180_inline(G_B3_0, (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL, L_6, NULL);
		return;
	}

IL_0025:
	{
		// onComplete.Invoke(r, r.error);
		Action_2_t61D5FB717E1180DC61ED95B7FFB34D6807D59225* L_7 = __this->___onComplete_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = ___r0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = ___r0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_9, NULL);
		NullCheck(L_7);
		Action_2_Invoke_m6E13A504EA45031706B2163D2D8037AE21241180_inline(L_7, L_8, L_10, NULL);
		// });
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
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m42B743E923F2C6AA186A652360B76E96574E38EE (U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Utilities.WitUnityRequest/<>c__DisplayClass8_0::<RequestTTSVoices>b__0(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CRequestTTSVoicesU3Eb__0_m0D2CD5062DB115A45909FEA9DD165B278D5889E0 (U3CU3Ec__DisplayClass8_0_tA508ED650A58E25A18495E6C05CAC071F65CD8AA* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___r0, const RuntimeMethod* method) 
{
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* G_B3_0 = NULL;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* G_B2_0 = NULL;
	{
		// if (!string.IsNullOrEmpty(r.error))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// onComplete?.Invoke(null, r.error);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_3 = __this->___onComplete_0;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___r0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_5, NULL);
		NullCheck(G_B3_0);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(G_B3_0, (String_t*)NULL, L_6, NULL);
		return;
	}

IL_0025:
	{
		// onComplete.Invoke(r.downloadHandler.text, r.error);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_7 = __this->___onComplete_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = ___r0;
		NullCheck(L_8);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_9;
		L_9 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_9, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = ___r0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_11, NULL);
		NullCheck(L_7);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_7, L_10, L_12, NULL);
		// });
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
// System.String Facebook.WitAi.TTS.Integrations.TTSDiskCache::get_DiskPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_mEC41B5632A4A43EADC79C286CC1B8029B117736B (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) 
{
	{
		// public string DiskPath => _diskPath;
		String_t* L_0 = __this->____diskPath_4;
		return L_0;
	}
}
// Facebook.WitAi.TTS.Data.TTSDiskCacheSettings Facebook.WitAi.TTS.Integrations.TTSDiskCache::get_DiskCacheDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* TTSDiskCache_get_DiskCacheDefaultSettings_mC782C19BCCFB6FA1EF3F19C6BCD63DD0FCCCF424 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDiskCacheSettings DiskCacheDefaultSettings => _defaultSettings;
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_0 = __this->____defaultSettings_5;
		return L_0;
	}
}
// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Integrations.TTSDiskCache::get_DiskStreamEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) 
{
	{
		// get => _events;
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = __this->____events_6;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::set_DiskStreamEvents(Facebook.WitAi.TTS.Events.TTSStreamEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_set_DiskStreamEvents_mF0D680F629A274123FEEFB612F1EBBC6A171510A (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _events = value; }
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = ___value0;
		__this->____events_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_0);
		// set { _events = value; }
		return;
	}
}
// System.String Facebook.WitAi.TTS.Integrations.TTSDiskCache::GetDiskCachePath(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_GetDiskCachePath_mD42007E533848636889003ABEC77CA505DB027D6 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_t853A7011F61767B6242ABD20BABA104D61CD047D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if (!ShouldCacheToDisk(clipData))
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		bool L_1;
		L_1 = TTSDiskCache_ShouldCacheToDisk_mE0A8A5B4C325BE6D1DBF2CBAC3029A3C8DA51C72(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000f:
	{
		// TTSDiskCacheLocation location = clipData.diskCacheSettings.DiskCacheLocation;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = ___clipData0;
		NullCheck(L_3);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_4 = L_3->___diskCacheSettings_4;
		NullCheck(L_4);
		int32_t L_5 = L_4->___DiskCacheLocation_0;
		V_0 = L_5;
		// string directory = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_6;
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_004d;
	}

IL_0037:
	{
		// directory = Application.persistentDataPath;
		String_t* L_8;
		L_8 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		V_1 = L_8;
		// break;
		goto IL_004d;
	}

IL_003f:
	{
		// directory = Application.temporaryCachePath;
		String_t* L_9;
		L_9 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		V_1 = L_9;
		// break;
		goto IL_004d;
	}

IL_0047:
	{
		// directory = Application.streamingAssetsPath;
		String_t* L_10;
		L_10 = Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD(NULL);
		V_1 = L_10;
	}

IL_004d:
	{
		// if (string.IsNullOrEmpty(directory))
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Empty;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_13;
	}

IL_005b:
	{
		// directory = Path.Combine(directory, DiskPath);
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = TTSDiskCache_get_DiskPath_mEC41B5632A4A43EADC79C286CC1B8029B117736B_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_14, L_15, NULL);
		V_1 = L_16;
		// if (location != TTSDiskCacheLocation.Preload || !Application.isPlaying)
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_18;
		L_18 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_18)
		{
			goto IL_0098;
		}
	}

IL_0073:
	{
		// if (!IOUtility.CreateDirectory(directory, true))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = IOUtility_CreateDirectory_m604E82A4436E7C0BDEE72CD06AC332587C8093D4(L_19, (bool)1, NULL);
		if (L_20)
		{
			goto IL_0098;
		}
	}
	{
		// VLog.E($"Failed to create tts directory\nPath: {directory}\nLocation: {location}");
		String_t* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(TTSDiskCacheLocation_t853A7011F61767B6242ABD20BABA104D61CD047D_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F, L_21, L_24, NULL);
		VLog_E_m2641400EBABD7A38536B1BA0F2673692AF5D8829(L_25, NULL);
		// return string.Empty;
		String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_26;
	}

IL_0098:
	{
		// return Path.Combine(directory, clipData.clipID + "." + clipData.audioType.ToString().ToLower());
		String_t* L_27 = V_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_28 = ___clipData0;
		NullCheck(L_28);
		String_t* L_29 = L_28->___clipID_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_30 = ___clipData0;
		NullCheck(L_30);
		int32_t* L_31 = (&L_30->___audioType_2);
		Il2CppFakeBox<int32_t> L_32(AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var, L_31);
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_32), NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_33, NULL);
		String_t* L_35;
		L_35 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_29, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_27, L_35, NULL);
		return L_36;
	}
}
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSDiskCache::ShouldCacheToDisk(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSDiskCache_ShouldCacheToDisk_mE0A8A5B4C325BE6D1DBF2CBAC3029A3C8DA51C72 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	{
		// return clipData != null && clipData.diskCacheSettings.DiskCacheLocation != TTSDiskCacheLocation.Stream && !string.IsNullOrEmpty(clipData.clipID);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_2 = L_1->___diskCacheSettings_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DiskCacheLocation_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___clipID_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::CheckCachedToDisk(Facebook.WitAi.TTS.Data.TTSClipData,System.Action`2<Facebook.WitAi.TTS.Data.TTSClipData,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_CheckCachedToDisk_mEDFC46DA0A6D207ADAAF7804ACAEE6BF8CA0B94F (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* ___onCheckComplete1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m64F34AEFA8EA6EEE16DE4A3317F23D49A0B07D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* V_0 = NULL;
	String_t* V_1 = NULL;
	VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* V_2 = NULL;
	Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* G_B3_0 = NULL;
	Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_0 = (U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m9DCF41D3B28B183296A7A289881D25D5313BE1CE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_2 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = ___clipData0;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_4 = V_0;
		Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* L_5 = ___onCheckComplete1;
		NullCheck(L_4);
		L_4->___onCheckComplete_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onCheckComplete_2), (void*)L_5);
		// string cachePath = GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_6 = V_0;
		NullCheck(L_6);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = L_6->___clipData_1;
		String_t* L_8;
		L_8 = TTSDiskCache_GetDiskCachePath_mD42007E533848636889003ABEC77CA505DB027D6(__this, L_7, NULL);
		V_1 = L_8;
		// if (string.IsNullOrEmpty(cachePath))
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// onCheckComplete?.Invoke(clipData, false);
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_11 = V_0;
		NullCheck(L_11);
		Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* L_12 = L_11->___onCheckComplete_2;
		Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_14 = V_0;
		NullCheck(L_14);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = L_14->___clipData_1;
		NullCheck(G_B3_0);
		Action_2_Invoke_m8510BACA4CC1BD4B729544E6A1693FA3B99E5DB7_inline(G_B3_0, L_15, (bool)0, NULL);
		// return;
		return;
	}

IL_0048:
	{
		// VoiceUnityRequest request =
		//     VoiceUnityRequest.CheckFileExists(cachePath, (path, success) =>
		//     {
		//         // Remove
		//         if (_streamRequests.ContainsKey(clipData.clipID))
		//         {
		//             _streamRequests.Remove(clipData.clipID);
		//         }
		//         // Complete
		//         onCheckComplete(clipData, success);
		//     });
		String_t* L_16 = V_1;
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_17 = V_0;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_18 = (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*)il2cpp_codegen_object_new(Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_2__ctor_m8D65B66B6B7CDF2C70A408F47BE85DB9B70CBDCF(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m64F34AEFA8EA6EEE16DE4A3317F23D49A0B07D61_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_19;
		L_19 = VoiceUnityRequest_CheckFileExists_m93A29856F76D90B9C95339E1089B513859ABCC9D(L_16, L_18, NULL);
		V_2 = L_19;
		// if (request != null)
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_20 = V_2;
		if (!L_20)
		{
			goto IL_0075;
		}
	}
	{
		// _streamRequests[clipData.clipID] = request;
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_21 = __this->____streamRequests_7;
		U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* L_22 = V_0;
		NullCheck(L_22);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_23 = L_22->___clipData_1;
		NullCheck(L_23);
		String_t* L_24 = L_23->___clipID_1;
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_25 = V_2;
		NullCheck(L_21);
		Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C(L_21, L_24, L_25, Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C_RuntimeMethod_var);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::StreamFromDiskCache(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_StreamFromDiskCache_m9F55A64C40402CE8B3FBD960BB88A1099358DCD2 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t2399F3C34C43EB392520F878CA121755E120498E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m3A3F3525E74CC8ACBDB7CEC9A628D8B71C038FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m7FDEBA08B24FD40C5FAA73AE1BF245DE9404D0D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* V_0 = NULL;
	String_t* V_1 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B2_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B1_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B4_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_0 = (U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m50C08A7EA18A76F72A25F12B56AB03137D2737D8(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_1 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_1);
		L_1->___clipData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipData_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// DiskStreamEvents?.OnStreamBegin?.Invoke(clipData);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_4;
		L_4 = TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0020;
		}
	}
	{
		goto IL_0036;
	}

IL_0020:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_6 = G_B2_0->___OnStreamBegin_0;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002b;
		}
	}
	{
		goto IL_0036;
	}

IL_002b:
	{
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = L_8->___clipData_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B4_0, L_9, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
	}

IL_0036:
	{
		// string filePath = GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = L_10->___clipData_0;
		String_t* L_12;
		L_12 = TTSDiskCache_GetDiskCachePath_mD42007E533848636889003ABEC77CA505DB027D6(__this, L_11, NULL);
		V_1 = L_12;
		// _streamRequests[clipData.clipID] = VoiceUnityRequest.RequestAudioClip(filePath, (path, progress) => clipData.loadProgress = progress, (path, clip, error) =>
		// {
		//     // Apply clip
		//     clipData.clip = clip;
		//     // Call on complete
		//     OnStreamComplete(clipData, error);
		// });
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_13 = __this->____streamRequests_7;
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_14 = V_0;
		NullCheck(L_14);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = L_14->___clipData_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->___clipID_1;
		String_t* L_17 = V_1;
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_18 = V_0;
		Action_2_t2399F3C34C43EB392520F878CA121755E120498E* L_19 = (Action_2_t2399F3C34C43EB392520F878CA121755E120498E*)il2cpp_codegen_object_new(Action_2_t2399F3C34C43EB392520F878CA121755E120498E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_2__ctor_m7F62303F36F46A731A6332E89B736901F4B3B48F(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m3A3F3525E74CC8ACBDB7CEC9A628D8B71C038FD6_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* L_20 = V_0;
		Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A* L_21 = (Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A*)il2cpp_codegen_object_new(Action_3_tC05340C461C32EDEB7FAB6978DB3F0CAEB59889A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_3__ctor_mCB64C93CACD091692FD0C45E61A2C7C89374FA0E(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m7FDEBA08B24FD40C5FAA73AE1BF245DE9404D0D7_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667_il2cpp_TypeInfo_var);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_22;
		L_22 = VoiceUnityRequest_RequestAudioClip_m7E47FD040499A4DC1946D521CB0537C7CEBD1AC1(L_17, L_19, L_21, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C(L_13, L_16, L_22, Dictionary_2_set_Item_m5F5DBF1769BFE71B4E3FBE4483724642AA36052C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::CancelDiskCacheStream(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_CancelDiskCacheStream_mBBF88DD7B027ED453BD90A23C58FCE2C56BA32CB (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA4B7C76FE615E7BDD325C2B88382D8D1DED531E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* V_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B6_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B5_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B8_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B7_0 = NULL;
	{
		// if (!_streamRequests.ContainsKey(clipData.clipID))
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_0 = __this->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A(L_0, L_2, Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// VoiceUnityRequest request = _streamRequests[clipData.clipID];
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_4 = __this->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_7;
		L_7 = Dictionary_2_get_Item_mA4B7C76FE615E7BDD325C2B88382D8D1DED531E7(L_4, L_6, Dictionary_2_get_Item_mA4B7C76FE615E7BDD325C2B88382D8D1DED531E7_RuntimeMethod_var);
		V_0 = L_7;
		// _streamRequests.Remove(clipData.clipID);
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_8 = __this->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = ___clipData0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027(L_8, L_10, Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var);
		// if (request != null)
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		// request.Unload();
		VoiceUnityRequest_t3DF45C52C20B393D59A2AFE57B3B66AD4A207667* L_13 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(8 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Unload() */, L_13);
	}

IL_0041:
	{
		// DiskStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_14;
		L_14 = TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_004c;
		}
	}
	{
		return;
	}

IL_004c:
	{
		NullCheck(G_B6_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_16 = G_B6_0->___OnStreamCancel_2;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_17 = L_16;
		G_B7_0 = L_17;
		if (L_17)
		{
			G_B8_0 = L_17;
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0056:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_18 = ___clipData0;
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B8_0, L_18, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::OnStreamComplete(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_OnStreamComplete_m060E4EB1C969D2744C58ECBBD2A47C49C09D86EE (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B5_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B4_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B7_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B6_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B10_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B9_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B12_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B11_0 = NULL;
	{
		// if (!_streamRequests.ContainsKey(clipData.clipID))
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_0 = __this->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A(L_0, L_2, Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// _streamRequests.Remove(clipData.clipID);
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_4 = __this->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027(L_4, L_6, Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var);
		// if (!string.IsNullOrEmpty(error))
		String_t* L_8 = ___error1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		// DiskStreamEvents?.OnStreamError?.Invoke(clipData, error);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_10;
		L_10 = TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		NullCheck(G_B5_0);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_12 = G_B5_0->___OnStreamError_3;
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_13 = L_12;
		G_B6_0 = L_13;
		if (L_13)
		{
			G_B7_0 = L_13;
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_14 = ___clipData0;
		String_t* L_15 = ___error1;
		NullCheck(G_B7_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B7_0, L_14, L_15, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		return;
	}

IL_004b:
	{
		// DiskStreamEvents?.OnStreamReady?.Invoke(clipData);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_16;
		L_16 = TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_17 = L_16;
		G_B9_0 = L_17;
		if (L_17)
		{
			G_B10_0 = L_17;
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0056:
	{
		NullCheck(G_B10_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_18 = G_B10_0->___OnStreamReady_1;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_19 = L_18;
		G_B11_0 = L_19;
		if (L_19)
		{
			G_B12_0 = L_19;
			goto IL_0060;
		}
	}
	{
		return;
	}

IL_0060:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_20 = ___clipData0;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B12_0, L_20, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache__ctor_m3920EBFC523C09CC69C33AAC601CDAB4839CE528 (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m52404A5B8D47E59803815968C1E7DB9B5AF53DF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _diskPath = "TTS/";
		__this->____diskPath_4 = _stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskPath_4), (void*)_stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D);
		// [SerializeField] private TTSDiskCacheSettings _defaultSettings = new TTSDiskCacheSettings();
		TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* L_0 = (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65*)il2cpp_codegen_object_new(TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSDiskCacheSettings__ctor_mAF425C2DFE8E383E562E18689CA6E1229BDFD2D7(L_0, NULL);
		__this->____defaultSettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultSettings_5), (void*)L_0);
		// [SerializeField] private TTSStreamEvents _events = new TTSStreamEvents();
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_1 = (TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31*)il2cpp_codegen_object_new(TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSStreamEvents__ctor_m4954D3331A8F779424CDD520F9D7CFBAC366E75D(L_1, NULL);
		__this->____events_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_1);
		// private Dictionary<string, VoiceUnityRequest> _streamRequests = new Dictionary<string, VoiceUnityRequest>();
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_2 = (Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E*)il2cpp_codegen_object_new(Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m52404A5B8D47E59803815968C1E7DB9B5AF53DF5(L_2, Dictionary_2__ctor_m52404A5B8D47E59803815968C1E7DB9B5AF53DF5_RuntimeMethod_var);
		__this->____streamRequests_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamRequests_7), (void*)L_2);
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
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9DCF41D3B28B183296A7A289881D25D5313BE1CE (U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::<CheckCachedToDisk>b__0(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m64F34AEFA8EA6EEE16DE4A3317F23D49A0B07D61 (U3CU3Ec__DisplayClass13_0_t5CD9FED48CB71400A1BE9DC455541B4B6406B07C* __this, String_t* ___path0, bool ___success1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_streamRequests.ContainsKey(clipData.clipID))
		TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_1 = L_0->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A(L_1, L_3, Dictionary_2_ContainsKey_m02EACB0E097F1689D55AC39A6F6B55E5C526E88A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// _streamRequests.Remove(clipData.clipID);
		TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		Dictionary_2_tE20F3CB1D1CE66D66DE6D557A25B524AC039525E* L_6 = L_5->____streamRequests_7;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7 = __this->___clipData_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___clipID_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027(L_6, L_8, Dictionary_2_Remove_mE3947A246EAC6F866335AF3B29E48698291DB027_RuntimeMethod_var);
	}

IL_0039:
	{
		// onCheckComplete(clipData, success);
		Action_2_t337C7E6A1E8509476DE20BBD4020FB47DAA87DBC* L_10 = __this->___onCheckComplete_2;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = __this->___clipData_1;
		bool L_12 = ___success1;
		NullCheck(L_10);
		Action_2_Invoke_m8510BACA4CC1BD4B729544E6A1693FA3B99E5DB7_inline(L_10, L_11, L_12, NULL);
		// });
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
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m50C08A7EA18A76F72A25F12B56AB03137D2737D8 (U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<StreamFromDiskCache>b__0(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m3A3F3525E74CC8ACBDB7CEC9A628D8B71C038FD6 (U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* __this, String_t* ___path0, float ___progress1, const RuntimeMethod* method) 
{
	{
		// _streamRequests[clipData.clipID] = VoiceUnityRequest.RequestAudioClip(filePath, (path, progress) => clipData.loadProgress = progress, (path, clip, error) =>
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->___clipData_0;
		float L_1 = ___progress1;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<StreamFromDiskCache>b__1(System.String,UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m7FDEBA08B24FD40C5FAA73AE1BF245DE9404D0D7 (U3CU3Ec__DisplayClass14_0_t7260869463BE181EB8F4712A2A969C0A082A166E* __this, String_t* ___path0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, String_t* ___error2, const RuntimeMethod* method) 
{
	{
		// clipData.clip = clip;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->___clipData_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip1;
		NullCheck(L_0);
		L_0->___clip_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___clip_6), (void*)L_1);
		// OnStreamComplete(clipData, error);
		TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* L_2 = __this->___U3CU3E4__this_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_3 = __this->___clipData_0;
		String_t* L_4 = ___error2;
		NullCheck(L_2);
		VirtualActionInvoker2< TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*, String_t* >::Invoke(12 /* System.Void Facebook.WitAi.TTS.Integrations.TTSDiskCache::OnStreamComplete(Facebook.WitAi.TTS.Data.TTSClipData,System.String) */, L_2, L_3, L_4);
		// });
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
// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipAdded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* TTSRuntimeCache_get_OnClipAdded_m72DD3BD5194AD0CB1D8040A7E14486742CC08B58 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = __this->___U3COnClipAddedU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::set_OnClipAdded(Facebook.WitAi.TTS.Events.TTSClipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_set_OnClipAdded_m8BFB679ABB5CC2CFA82AC0E08C267EB7373DB1C1 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = ___value0;
		__this->___U3COnClipAddedU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipAddedU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Facebook.WitAi.TTS.Events.TTSClipEvent Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* TTSRuntimeCache_get_OnClipRemoved_mF538BEEF98ED44EE07C8FE9BA0AD79D275329DCF (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = __this->___U3COnClipRemovedU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::set_OnClipRemoved(Facebook.WitAi.TTS.Events.TTSClipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_set_OnClipRemoved_mB5863AA9C1258E372AF7E6BCFA76E7034441075C (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = ___value0;
		__this->___U3COnClipRemovedU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipRemovedU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData[] Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* TTSRuntimeCache_GetClips_m5C6AF29A3610B015B7D51B5721FB9523BB94DBA3 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m3726F85275C4AEC5E131D3235A97E95CD1AB1DD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_m1DEE63117869715E42B6B7CAAFEF35C5A2FDDC8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipData[] GetClips() => _clips.Values.ToArray();
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_0 = __this->____clips_10;
		NullCheck(L_0);
		ValueCollection_t7E5C565B83017703251B47439DD3D79734904801* L_1;
		L_1 = Dictionary_2_get_Values_m3726F85275C4AEC5E131D3235A97E95CD1AB1DD2(L_0, Dictionary_2_get_Values_m3726F85275C4AEC5E131D3235A97E95CD1AB1DD2_RuntimeMethod_var);
		TTSClipDataU5BU5D_t6836B00DB73A6435DCB0773A276FC2C047095A33* L_2;
		L_2 = Enumerable_ToArray_TisTTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_m1DEE63117869715E42B6B7CAAFEF35C5A2FDDC8E(L_1, Enumerable_ToArray_TisTTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15_m1DEE63117869715E42B6B7CAAFEF35C5A2FDDC8E_RuntimeMethod_var);
		return L_2;
	}
}
// Facebook.WitAi.TTS.Data.TTSClipData Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::GetClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* TTSRuntimeCache_GetClip_m9BE0549C1DD833C3A7376B112785923220886A66 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, String_t* ___clipID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!_clips.ContainsKey(clipID))
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_0 = __this->____clips_10;
		String_t* L_1 = ___clipID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B(L_0, L_1, Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15*)NULL;
	}

IL_0010:
	{
		// int clipIndex = _clipOrder.IndexOf(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->____clipOrder_11;
		String_t* L_4 = ___clipID0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->____clipOrder_11;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_6, L_7, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// _clipOrder.Add(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____clipOrder_11;
		String_t* L_9 = ___clipID0;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return _clips[clipID];
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_10 = __this->____clips_10;
		String_t* L_11 = ___clipID0;
		NullCheck(L_10);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12;
		L_12 = Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38(L_10, L_11, Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::AddClip(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_AddClip_m643C556460A3C62FEB841EB845EB845A188858E4 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA9A99F5A6C9786D97FE519A60D110EBE65060250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B12_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B11_0 = NULL;
	{
		// if (clipData == null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = ___clipData0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// bool wasAdded = true;
		V_0 = (bool)1;
		// int clipIndex = _clipOrder.IndexOf(clipData.clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->____clipOrder_11;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_1, L_3, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_4;
		// if (clipIndex != -1)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_002b;
		}
	}
	{
		// wasAdded = false;
		V_0 = (bool)0;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->____clipOrder_11;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_6, L_7, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
	}

IL_002b:
	{
		// _clips[clipData.clipID] = clipData;
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_8 = __this->____clips_10;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = ___clipData0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = ___clipData0;
		NullCheck(L_8);
		Dictionary_2_set_Item_mA9A99F5A6C9786D97FE519A60D110EBE65060250(L_8, L_10, L_11, Dictionary_2_set_Item_mA9A99F5A6C9786D97FE519A60D110EBE65060250_RuntimeMethod_var);
		// _clipOrder.Add(clipData.clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->____clipOrder_11;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_13 = ___clipData0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___clipID_1;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0062;
	}

IL_0050:
	{
		// RemoveClip(_clipOrder[0]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->____clipOrder_11;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		TTSRuntimeCache_RemoveClip_mD300393D693EB9C1C2C9F282C4F68FD0C6E1A80F(__this, L_16, NULL);
	}

IL_0062:
	{
		// while (IsCacheFull() && _clipOrder.Count > 0)
		bool L_17;
		L_17 = TTSRuntimeCache_IsCacheFull_m93B46E7F407BA7C88F5A60AD8DDECB1FF0016A0A(__this, NULL);
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = __this->____clipOrder_11;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_18, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}

IL_0078:
	{
		// if (wasAdded && _clips.Keys.Count > 0)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_21 = __this->____clips_10;
		NullCheck(L_21);
		KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* L_22;
		L_22 = Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A(L_21, Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B(L_22, KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B_RuntimeMethod_var);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		// OnClipAdded?.Invoke(clipData);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_24;
		L_24 = TTSRuntimeCache_get_OnClipAdded_m72DD3BD5194AD0CB1D8040A7E14486742CC08B58_inline(__this, NULL);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_25 = L_24;
		G_B11_0 = L_25;
		if (L_25)
		{
			G_B12_0 = L_25;
			goto IL_009a;
		}
	}
	{
		goto IL_00a0;
	}

IL_009a:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_26 = ___clipData0;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B12_0, L_26, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
	}

IL_00a0:
	{
		// return _clips.Keys.Count > 0;
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_27 = __this->____clips_10;
		NullCheck(L_27);
		KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* L_28;
		L_28 = Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A(L_27, Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A_RuntimeMethod_var);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B(L_28, KeyCollection_get_Count_m2863447F5A8669ECCFB939B72BB8C1DB928D954B_RuntimeMethod_var);
		return (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::RemoveClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_RemoveClip_mD300393D693EB9C1C2C9F282C4F68FD0C6E1A80F (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, String_t* ___clipID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD6E9F3B1C7D9B46F2CA85BAFB2FC72147CDE4232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* V_0 = NULL;
	int32_t V_1 = 0;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B4_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B3_0 = NULL;
	{
		// if (!_clips.ContainsKey(clipID))
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_0 = __this->____clips_10;
		String_t* L_1 = ___clipID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B(L_0, L_1, Dictionary_2_ContainsKey_m0776511FEAEE2FF6AA7EF601D125D37D6D44ED1B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// TTSClipData clipData = _clips[clipID];
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_3 = __this->____clips_10;
		String_t* L_4 = ___clipID0;
		NullCheck(L_3);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5;
		L_5 = Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38(L_3, L_4, Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var);
		V_0 = L_5;
		// _clips.Remove(clipID);
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_6 = __this->____clips_10;
		String_t* L_7 = ___clipID0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_mD6E9F3B1C7D9B46F2CA85BAFB2FC72147CDE4232(L_6, L_7, Dictionary_2_Remove_mD6E9F3B1C7D9B46F2CA85BAFB2FC72147CDE4232_RuntimeMethod_var);
		// int clipIndex = _clipOrder.IndexOf(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->____clipOrder_11;
		String_t* L_10 = ___clipID0;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_9, L_10, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_11;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->____clipOrder_11;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_12, L_13, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// OnClipRemoved?.Invoke(clipData);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_14;
		L_14 = TTSRuntimeCache_get_OnClipRemoved_mF538BEEF98ED44EE07C8FE9BA0AD79D275329DCF_inline(__this, NULL);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_15 = L_14;
		G_B3_0 = L_15;
		if (L_15)
		{
			G_B4_0 = L_15;
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_16 = V_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B4_0, L_16, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::IsCacheFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_IsCacheFull_m93B46E7F407BA7C88F5A60AD8DDECB1FF0016A0A (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ClipLimit && _clipOrder.Count > ClipCapacity)
		bool L_0 = __this->___ClipLimit_4;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->____clipOrder_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_3 = __this->___ClipCapacity_5;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// if (RamLimit && GetCacheDiskSize() > RamCapacity)
		bool L_4 = __this->___RamLimit_6;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_5;
		L_5 = TTSRuntimeCache_GetCacheDiskSize_mA3FDE1C0D41BE3D680F0F19F25CE76233BD46375(__this, NULL);
		int32_t L_6 = __this->___RamCapacity_7;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::GetCacheDiskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSRuntimeCache_GetCacheDiskSize_mA3FDE1C0D41BE3D680F0F19F25CE76233BD46375 (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE5ABDE826C6B7E02D026E21F1452DF7D553E5696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC1B365E009BA9697D6E1A96A88BFE8AA24366112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m58D05EAD9953F5A5DDEFD0F7BD37CEF18462B87F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m80871A06C0FE5DB09B22970F1A40627263B00FD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// long total = 0;
		V_0 = ((int64_t)0);
		// foreach (var key in _clips.Keys)
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_0 = __this->____clips_10;
		NullCheck(L_0);
		KeyCollection_t9B19072B6550A4FED279F9AB63258A436B224227* L_1;
		L_1 = Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A(L_0, Dictionary_2_get_Keys_m5947B25B15BE61299C2C7CA7A3C4ED8AA616CF3A_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t17A07BCF7B360063D7401626B45E176230AC62BB L_2;
		L_2 = KeyCollection_GetEnumerator_m80871A06C0FE5DB09B22970F1A40627263B00FD9(L_1, KeyCollection_GetEnumerator_m80871A06C0FE5DB09B22970F1A40627263B00FD9_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE5ABDE826C6B7E02D026E21F1452DF7D553E5696((&V_1), Enumerator_Dispose_mE5ABDE826C6B7E02D026E21F1452DF7D553E5696_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0016_1:
			{
				// foreach (var key in _clips.Keys)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m58D05EAD9953F5A5DDEFD0F7BD37CEF18462B87F_inline((&V_1), Enumerator_get_Current_m58D05EAD9953F5A5DDEFD0F7BD37CEF18462B87F_RuntimeMethod_var);
				V_2 = L_3;
				// total += GetClipBytes(_clips[key].clip);
				int64_t L_4 = V_0;
				Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_5 = __this->____clips_10;
				String_t* L_6 = V_2;
				NullCheck(L_5);
				TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_7;
				L_7 = Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38(L_5, L_6, Dictionary_2_get_Item_m4BB9AD7A7C2A9BC5894027D80713A5B4030EAC38_RuntimeMethod_var);
				NullCheck(L_7);
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___clip_6;
				int64_t L_9;
				L_9 = TTSRuntimeCache_GetClipBytes_m24DCFFE9AD856FD6FECECDEF73F7BA2F88732E38(L_8, NULL);
				V_0 = ((int64_t)il2cpp_codegen_add(L_4, L_9));
			}

IL_0037_1:
			{
				// foreach (var key in _clips.Keys)
				bool L_10;
				L_10 = Enumerator_MoveNext_mC1B365E009BA9697D6E1A96A88BFE8AA24366112((&V_1), Enumerator_MoveNext_mC1B365E009BA9697D6E1A96A88BFE8AA24366112_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return (int)(total / (long)1024) + 1;
		int64_t L_11 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)(L_11/((int64_t)((int32_t)1024))))), 1));
	}
}
// System.Int64 Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::GetClipBytes(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TTSRuntimeCache_GetClipBytes_m24DCFFE9AD856FD6FECECDEF73F7BA2F88732E38 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return 0;
		return ((int64_t)0);
	}

IL_000c:
	{
		// return ((clip.samples * clip.channels) * 2);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___clip0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_2, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___clip0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_4, NULL);
		return ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_3, L_5)), 2)));
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSRuntimeCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache__ctor_m7DBCFB7E0C457EC34CFC30A8A2D66060D22349EE (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8A5BA57F8A1C9C470C3AF070172EF2F57FE8AA10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool ClipLimit = true;
		__this->___ClipLimit_4 = (bool)1;
		// [Min(1)] public int ClipCapacity = 20;
		__this->___ClipCapacity_5 = ((int32_t)20);
		// public bool RamLimit = true;
		__this->___RamLimit_6 = (bool)1;
		// [Min(1)] public int RamCapacity = 32768;
		__this->___RamCapacity_7 = ((int32_t)32768);
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_0, NULL);
		__this->___U3COnClipAddedU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipAddedU3Ek__BackingField_8), (void*)L_0);
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_1 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_1, NULL);
		__this->___U3COnClipRemovedU3Ek__BackingField_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipRemovedU3Ek__BackingField_9), (void*)L_1);
		// private Dictionary<string, TTSClipData> _clips = new Dictionary<string, TTSClipData>();
		Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E* L_2 = (Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E*)il2cpp_codegen_object_new(Dictionary_2_t990D03CABDAD684BC4582D5C7EAEA22924A4609E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m8A5BA57F8A1C9C470C3AF070172EF2F57FE8AA10(L_2, Dictionary_2__ctor_m8A5BA57F8A1C9C470C3AF070172EF2F57FE8AA10_RuntimeMethod_var);
		__this->____clips_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clips_10), (void*)L_2);
		// private List<string> _clipOrder = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____clipOrder_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clipOrder_11), (void*)L_3);
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
// System.Void Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWitVoiceSettings__ctor_mBF6418094FCA593E90521488C962A68D78170AF9 (TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string voice = DEFAULT_VOICE;
		__this->___voice_4 = _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voice_4), (void*)_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		// public string style = DEFAULT_STYLE;
		__this->___style_5 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___style_5), (void*)_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		// public int speed = 100;
		__this->___speed_6 = ((int32_t)100);
		// public int pitch = 100;
		__this->___pitch_7 = ((int32_t)100);
		// public int gain = 50;
		__this->___gain_8 = ((int32_t)50);
		TTSVoiceSettings__ctor_m3AB6290B24923DCC159B80B43C1299D4CA55CCF6(__this, NULL);
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
// Conversion methods for marshalling of: Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshal_pinvoke(const TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568& unmarshaled, TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_pinvoke& marshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshal_pinvoke_back(const TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_pinvoke& marshaled, TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568& unmarshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshal_pinvoke_cleanup(TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshal_com(const TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568& unmarshaled, TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_com& marshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshal_com_back(const TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_com& marshaled, TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568& unmarshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Facebook.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshal_com_cleanup(TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568_marshaled_com& marshaled)
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
// Facebook.WitAi.TTS.Interfaces.ITTSVoiceProvider Facebook.WitAi.TTS.Integrations.TTSWit::get_VoiceProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_VoiceProvider_m606F778D806D6CC3B86BD3AE9DB0A2BADA936860 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public override ITTSVoiceProvider VoiceProvider => this;
		return __this;
	}
}
// Facebook.WitAi.TTS.Interfaces.ITTSWebHandler Facebook.WitAi.TTS.Integrations.TTSWit::get_WebHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_WebHandler_mD62AEDD8875B7D8E42584EB57ABD7D6C1C80C9C0 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public override ITTSWebHandler WebHandler => this;
		return __this;
	}
}
// Facebook.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Facebook.WitAi.TTS.Integrations.TTSWit::get_RuntimeCacheHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_RuntimeCacheHandler_m6AF6EAC29BFE8D6F2EC088CF0A39F1AE4C56C292 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_m1E68C07D07D07A6D90D420DEB2A30E01C9C7861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_runtimeCache == null)
		RuntimeObject* L_0 = __this->____runtimeCache_10;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _runtimeCache = gameObject.GetComponent<ITTSRuntimeCacheHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_m1E68C07D07D07A6D90D420DEB2A30E01C9C7861E(L_1, GameObject_GetComponent_TisITTSRuntimeCacheHandler_t7C323625239BA331C75B466065FA581F7473CA2B_m1E68C07D07D07A6D90D420DEB2A30E01C9C7861E_RuntimeMethod_var);
		__this->____runtimeCache_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeCache_10), (void*)L_2);
	}

IL_0019:
	{
		// return _runtimeCache;
		RuntimeObject* L_3 = __this->____runtimeCache_10;
		return L_3;
	}
}
// Facebook.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Facebook.WitAi.TTS.Integrations.TTSWit::get_DiskCacheHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_DiskCacheHandler_m08B7DEFA8D08D09A76FF51A3699B30625F512B00 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_mB61423632BA71692700EF81F421AFED94688C049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_diskCache == null)
		RuntimeObject* L_0 = __this->____diskCache_11;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _diskCache = gameObject.GetComponent<ITTSDiskCacheHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_mB61423632BA71692700EF81F421AFED94688C049(L_1, GameObject_GetComponent_TisITTSDiskCacheHandler_t3675C58E5026AC3B28C1316716FBAF3678BF04B1_mB61423632BA71692700EF81F421AFED94688C049_RuntimeMethod_var);
		__this->____diskCache_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskCache_11), (void*)L_2);
	}

IL_0019:
	{
		// return _diskCache;
		RuntimeObject* L_3 = __this->____diskCache_11;
		return L_3;
	}
}
// Facebook.WitAi.TTS.Events.TTSStreamEvents Facebook.WitAi.TTS.Integrations.TTSWit::get_WebStreamEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = __this->___U3CWebStreamEventsU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit::set_WebStreamEvents(Facebook.WitAi.TTS.Events.TTSStreamEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_set_WebStreamEvents_m4856A3499A376ADEB1E5F0D03F00586CA5A3CD21 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = ___value0;
		__this->___U3CWebStreamEventsU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebStreamEventsU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Facebook.WitAi.TTS.Integrations.TTSWit::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_GetInvalidError_m087DD04412E3A31DCFA6868E1359501B5F50A4B7 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B1000C31CF4895724E513340B19C099E04353C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string invalidError = base.GetInvalidError();
		String_t* L_0;
		L_0 = TTSService_GetInvalidError_m91001E7570CE63FB297AAF2FEBCB707159757AA3(__this, NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return invalidError;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// if (RequestSettings.configuration == null)
		TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568* L_4 = (&__this->___RequestSettings_12);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_5 = L_4->___configuration_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return "No WitConfiguration Set";
		return _stringLiteralC2B1000C31CF4895724E513340B19C099E04353C;
	}

IL_002a:
	{
		// if (string.IsNullOrEmpty(RequestSettings.configuration.clientAccessToken))
		TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568* L_7 = (&__this->___RequestSettings_12);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_8 = L_7->___configuration_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___clientAccessToken_6;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		// return "No WitConfiguration Client Token";
		return _stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1;
	}

IL_0047:
	{
		// return string.Empty;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_11;
	}
}
// System.String Facebook.WitAi.TTS.Integrations.TTSWit::IsTextValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsTextValid_mEAAE361E95FB1E00E2216735F6FBA87AFB474FF1 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, String_t* ___textToSpeak0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string IsTextValid(string textToSpeak) => WitUnityRequest.IsTextValid(textToSpeak);
		String_t* L_0 = ___textToSpeak0;
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = WitUnityRequest_IsTextValid_m02744507C9001684EE7E7FF005F5180D7FA227FD(L_0, NULL);
		return L_1;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit::RequestStreamFromWeb(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_RequestStreamFromWeb_m6E37BF38D9AF4536E481F419719E145DB42CA3AC (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mABBFBCC5E36FEEBC915B4A95986F6F448A50E40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_mEE65F1B2511B0CFC5685D1D8AA6AC4B9D41D16A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* V_0 = NULL;
	String_t* V_1 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B2_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B1_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B4_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B3_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B8_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B7_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B10_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_0 = (U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m1FAD6C425C98C8BD6A55521CA7A28B40383B76C2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_1 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_1);
		L_1->___clipData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipData_0), (void*)L_2);
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// WebStreamEvents?.OnStreamBegin?.Invoke(clipData);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_4;
		L_4 = TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0020;
		}
	}
	{
		goto IL_0036;
	}

IL_0020:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_6 = G_B2_0->___OnStreamBegin_0;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002b;
		}
	}
	{
		goto IL_0036;
	}

IL_002b:
	{
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = L_8->___clipData_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B4_0, L_9, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
	}

IL_0036:
	{
		// string validError = IsRequestValid(clipData, RequestSettings.configuration);
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = L_10->___clipData_0;
		TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568* L_12 = (&__this->___RequestSettings_12);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_13 = L_12->___configuration_0;
		String_t* L_14;
		L_14 = TTSWit_IsRequestValid_m5C392FBD420452C712323611FA20792845EAD384(__this, L_11, L_13, NULL);
		V_1 = L_14;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_15, NULL);
		if (L_16)
		{
			goto IL_0078;
		}
	}
	{
		// WebStreamEvents?.OnStreamError?.Invoke(clipData, validError);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_17;
		L_17 = TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_18 = L_17;
		G_B7_0 = L_18;
		if (L_18)
		{
			G_B8_0 = L_18;
			goto IL_0061;
		}
	}
	{
		return;
	}

IL_0061:
	{
		NullCheck(G_B8_0);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_19 = G_B8_0->___OnStreamError_3;
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_20 = L_19;
		G_B9_0 = L_20;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_006b;
		}
	}
	{
		return;
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_21 = V_0;
		NullCheck(L_21);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_22 = L_21->___clipData_0;
		String_t* L_23 = V_1;
		NullCheck(G_B10_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B10_0, L_22, L_23, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		// return;
		return;
	}

IL_0078:
	{
		// if (_webStreams.ContainsKey(clipData.clipID))
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_24 = __this->____webStreams_14;
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_26 = L_25->___clipData_0;
		NullCheck(L_26);
		String_t* L_27 = L_26->___clipID_1;
		NullCheck(L_24);
		bool L_28;
		L_28 = Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B(L_24, L_27, Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_009d;
		}
	}
	{
		// CancelWebStream(clipData);
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_29 = V_0;
		NullCheck(L_29);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_30 = L_29->___clipData_0;
		bool L_31;
		L_31 = TTSWit_CancelWebStream_mFA70C7368E3CB6505EBB7B03946A369DCA891118(__this, L_30, NULL);
	}

IL_009d:
	{
		// _webStreams[clipData.clipID] = WitUnityRequest.RequestTTSStream(RequestSettings.configuration,
		//     clipData.textToSpeak, clipData.queryParameters,
		//     (progress) => clipData.loadProgress = progress,
		//     (clip, error) =>
		//     {
		//         _webStreams.Remove(clipData.clipID);
		//         clipData.clip = clip;
		//         if (string.IsNullOrEmpty(error))
		//         {
		//             WebStreamEvents?.OnStreamReady?.Invoke(clipData);
		//         }
		//         else
		//         {
		//             WebStreamEvents?.OnStreamError?.Invoke(clipData, error);
		//         }
		//     });
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_32 = __this->____webStreams_14;
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_33 = V_0;
		NullCheck(L_33);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_34 = L_33->___clipData_0;
		NullCheck(L_34);
		String_t* L_35 = L_34->___clipID_1;
		TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568* L_36 = (&__this->___RequestSettings_12);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_37 = L_36->___configuration_0;
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_38 = V_0;
		NullCheck(L_38);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_39 = L_38->___clipData_0;
		NullCheck(L_39);
		String_t* L_40 = L_39->___textToSpeak_0;
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_41 = V_0;
		NullCheck(L_41);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_42 = L_41->___clipData_0;
		NullCheck(L_42);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = L_42->___queryParameters_5;
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_44 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_45 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mABBFBCC5E36FEEBC915B4A95986F6F448A50E40C_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* L_46 = V_0;
		Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA* L_47 = (Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA*)il2cpp_codegen_object_new(Action_2_t8047B0DE55BAFAB827BDFF9D13CC898D96A972BA_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Action_2__ctor_mF733309DE658768D4F1A71EEBAEBF2B0F9A06592(L_47, L_46, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_mEE65F1B2511B0CFC5685D1D8AA6AC4B9D41D16A1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_48;
		L_48 = WitUnityRequest_RequestTTSStream_mB62C85290F30CDC18188E8375EBBB18BD98DA73E(L_37, L_40, L_43, L_45, L_47, NULL);
		NullCheck(L_32);
		Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02(L_32, L_35, L_48, Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSWit::CancelWebStream(Facebook.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebStream_mFA70C7368E3CB6505EBB7B03946A369DCA891118 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* G_B4_0 = NULL;
	WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* G_B3_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B7_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B6_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B9_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B8_0 = NULL;
	{
		// if (!_webStreams.ContainsKey(clipData.clipID))
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_0 = __this->____webStreams_14;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B(L_0, L_2, Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// WitUnityRequest request = _webStreams[clipData.clipID];
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_4 = __this->____webStreams_14;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_7;
		L_7 = Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0(L_4, L_6, Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0_RuntimeMethod_var);
		// _webStreams.Remove(clipData.clipID);
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_8 = __this->____webStreams_14;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = ___clipData0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380(L_8, L_10, Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		// request?.Unload();
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_12 = L_7;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Unload() */, G_B4_0);
	}

IL_0043:
	{
		// WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_13;
		L_13 = TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline(__this, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_004f;
		}
	}
	{
		goto IL_0060;
	}

IL_004f:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_15 = G_B7_0->___OnStreamCancel_2;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_005a;
		}
	}
	{
		goto IL_0060;
	}

IL_005a:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_17 = ___clipData0;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B9_0, L_17, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
	}

IL_0060:
	{
		// return true;
		return (bool)1;
	}
}
// Facebook.WitAi.TTS.Events.TTSDownloadEvents Facebook.WitAi.TTS.Integrations.TTSWit::get_WebDownloadEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_0 = __this->___U3CWebDownloadEventsU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit::set_WebDownloadEvents(Facebook.WitAi.TTS.Events.TTSDownloadEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_set_WebDownloadEvents_mBA7BC57249FFA8D1EFAC942ECB986124C7727F6A (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_0 = ___value0;
		__this->___U3CWebDownloadEventsU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebDownloadEventsU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit::RequestDownloadFromWeb(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_RequestDownloadFromWeb_m3C646204F5813F91E6B01062BB29F3547CEC5D9F (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_m81CA877CE5F59809D9CDCF95125CAD9CD8CEE827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_m6E8A1B8A19B1E69668B96F749CDA35138F8305B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* V_0 = NULL;
	String_t* V_1 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B2_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B1_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B4_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B3_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B8_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B7_0 = NULL;
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* G_B10_0 = NULL;
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_0 = (U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass25_0__ctor_m87AB19A35ADCA2586AE6414DDB927966D871AC2A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_1 = V_0;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = ___clipData0;
		NullCheck(L_1);
		L_1->___clipData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipData_0), (void*)L_2);
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_4 = V_0;
		String_t* L_5 = ___downloadPath1;
		NullCheck(L_4);
		L_4->___downloadPath_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___downloadPath_2), (void*)L_5);
		// WebDownloadEvents?.OnDownloadBegin?.Invoke(clipData, downloadPath);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_6;
		L_6 = TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline(__this, NULL);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0027;
		}
	}
	{
		goto IL_0043;
	}

IL_0027:
	{
		NullCheck(G_B2_0);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_8 = G_B2_0->___OnDownloadBegin_0;
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0032;
		}
	}
	{
		goto IL_0043;
	}

IL_0032:
	{
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_11 = L_10->___clipData_0;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___downloadPath_2;
		NullCheck(G_B4_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B4_0, L_11, L_13, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
	}

IL_0043:
	{
		// string validError = IsRequestValid(clipData, RequestSettings.configuration);
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_14 = V_0;
		NullCheck(L_14);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_15 = L_14->___clipData_0;
		TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568* L_16 = (&__this->___RequestSettings_12);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_17 = L_16->___configuration_0;
		String_t* L_18;
		L_18 = TTSWit_IsRequestValid_m5C392FBD420452C712323611FA20792845EAD384(__this, L_15, L_17, NULL);
		V_1 = L_18;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_19, NULL);
		if (L_20)
		{
			goto IL_008b;
		}
	}
	{
		// WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, validError);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_21;
		L_21 = TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline(__this, NULL);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_22 = L_21;
		G_B7_0 = L_22;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		NullCheck(G_B8_0);
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_23 = G_B8_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_24 = L_23;
		G_B9_0 = L_24;
		if (L_24)
		{
			G_B10_0 = L_24;
			goto IL_0078;
		}
	}
	{
		return;
	}

IL_0078:
	{
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_26 = L_25->___clipData_0;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___downloadPath_2;
		String_t* L_29 = V_1;
		NullCheck(G_B10_0);
		UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B(G_B10_0, L_26, L_28, L_29, UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var);
		// return;
		return;
	}

IL_008b:
	{
		// if (_webDownloads.ContainsKey(clipData.clipID))
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_30 = __this->____webDownloads_16;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_31 = V_0;
		NullCheck(L_31);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_32 = L_31->___clipData_0;
		NullCheck(L_32);
		String_t* L_33 = L_32->___clipID_1;
		NullCheck(L_30);
		bool L_34;
		L_34 = Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B(L_30, L_33, Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_00b6;
		}
	}
	{
		// CancelWebDownload(clipData, downloadPath);
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_35 = V_0;
		NullCheck(L_35);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_36 = L_35->___clipData_0;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = L_37->___downloadPath_2;
		bool L_39;
		L_39 = TTSWit_CancelWebDownload_m401641275F17DFB2A26CE3AAC417F2A05D5BA8E6(__this, L_36, L_38, NULL);
	}

IL_00b6:
	{
		// _webDownloads[clipData.clipID] = WitUnityRequest.RequestTTSDownload(downloadPath,
		//     RequestSettings.configuration, clipData.textToSpeak, clipData.queryParameters,
		//     (progress) => clipData.loadProgress = progress,
		//     (error) =>
		//     {
		//         _webDownloads.Remove(clipData.clipID);
		//         if (string.IsNullOrEmpty(error))
		//         {
		//             WebDownloadEvents?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		//         }
		//         else
		//         {
		//             WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		//         }
		//     });
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_40 = __this->____webDownloads_16;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_41 = V_0;
		NullCheck(L_41);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_42 = L_41->___clipData_0;
		NullCheck(L_42);
		String_t* L_43 = L_42->___clipID_1;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45 = L_44->___downloadPath_2;
		TTSWitRequestSettings_t50192ADEF13A03061FDA9A501F37C3EC15379568* L_46 = (&__this->___RequestSettings_12);
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_47 = L_46->___configuration_0;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_48 = V_0;
		NullCheck(L_48);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_49 = L_48->___clipData_0;
		NullCheck(L_49);
		String_t* L_50 = L_49->___textToSpeak_0;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_51 = V_0;
		NullCheck(L_51);
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_52 = L_51->___clipData_0;
		NullCheck(L_52);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = L_52->___queryParameters_5;
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_54 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_55 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_55, L_54, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_m81CA877CE5F59809D9CDCF95125CAD9CD8CEE827_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* L_56 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_57 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_57, L_56, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_m6E8A1B8A19B1E69668B96F749CDA35138F8305B1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB_il2cpp_TypeInfo_var);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_58;
		L_58 = WitUnityRequest_RequestTTSDownload_mEAE9BE782718AC02F044914E3FEB304BF5D9B27B(L_45, L_47, L_50, L_53, L_55, L_57, NULL);
		NullCheck(L_40);
		Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02(L_40, L_43, L_58, Dictionary_2_set_Item_m9510A2F93792DC0E4CDC85D7D79E11C7EA449B02_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.TTS.Integrations.TTSWit::CancelWebDownload(Facebook.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebDownload_m401641275F17DFB2A26CE3AAC417F2A05D5BA8E6 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* G_B4_0 = NULL;
	WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* G_B3_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B7_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B6_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B9_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B8_0 = NULL;
	{
		// if (!_webDownloads.ContainsKey(clipData.clipID))
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_0 = __this->____webDownloads_16;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B(L_0, L_2, Dictionary_2_ContainsKey_m5444ADA3EE0CC22E02C33B9CBFB73FB48D047D4B_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// WitUnityRequest request = _webDownloads[clipData.clipID];
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_4 = __this->____webDownloads_16;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = ___clipData0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_7;
		L_7 = Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0(L_4, L_6, Dictionary_2_get_Item_m8C896BDF8106F9A0442AD7E2B8242DBD59BA60E0_RuntimeMethod_var);
		// _webDownloads.Remove(clipData.clipID);
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_8 = __this->____webDownloads_16;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_9 = ___clipData0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380(L_8, L_10, Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		// request?.Unload();
		WitUnityRequest_t040B0FFC28A096A5F91C425A5BAEE4D344550BBB* L_12 = L_7;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void Facebook.WitAi.TTS.Utilities.VoiceUnityRequest::Unload() */, G_B4_0);
	}

IL_0043:
	{
		// WebDownloadEvents?.OnDownloadCancel?.Invoke(clipData, downloadPath);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_13;
		L_13 = TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline(__this, NULL);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_004f;
		}
	}
	{
		goto IL_0061;
	}

IL_004f:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_15 = G_B7_0->___OnDownloadCancel_2;
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_005a;
		}
	}
	{
		goto IL_0061;
	}

IL_005a:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_17 = ___clipData0;
		String_t* L_18 = ___downloadPath1;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B9_0, L_17, L_18, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
	}

IL_0061:
	{
		// return true;
		return (bool)1;
	}
}
// Facebook.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Facebook.WitAi.TTS.Integrations.TTSWit::get_PresetWitVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* TTSWit_get_PresetWitVoiceSettings_mD5AEDBC0811E48B25EA72D009D1FE93B4693340A (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public TTSWitVoiceSettings[] PresetWitVoiceSettings => _presetVoiceSettings;
		TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* L_0 = __this->____presetVoiceSettings_17;
		return L_0;
	}
}
// Facebook.WitAi.TTS.Data.TTSVoiceSettings[] Facebook.WitAi.TTS.Integrations.TTSWit::get_PresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* TTSWit_get_PresetVoiceSettings_m81E93241097E5AA437DE61C02974A7D6D9D59C93 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* V_0 = NULL;
	{
		// if (_presetVoiceSettings == null || _presetVoiceSettings.Length == 0)
		TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* L_0 = __this->____presetVoiceSettings_17;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* L_1 = __this->____presetVoiceSettings_17;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0025;
		}
	}

IL_0011:
	{
		// _presetVoiceSettings = new TTSWitVoiceSettings[] { new TTSWitVoiceSettings() };
		TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* L_2 = (TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6*)(TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6*)SZArrayNew(TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6_il2cpp_TypeInfo_var, (uint32_t)1);
		TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* L_3 = L_2;
		TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923* L_4 = (TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923*)il2cpp_codegen_object_new(TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TTSWitVoiceSettings__ctor_mBF6418094FCA593E90521488C962A68D78170AF9(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (TTSWitVoiceSettings_tD16F3E5CDE4E44A8926A0D01329A4D974A91C923*)L_4);
		__this->____presetVoiceSettings_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____presetVoiceSettings_17), (void*)L_3);
	}

IL_0025:
	{
		// return _presetVoiceSettings;
		TTSWitVoiceSettingsU5BU5D_t8A5984357D11EF11AC448661E008D9AEF32DD8D6* L_5 = __this->____presetVoiceSettings_17;
		V_0 = (TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91*)L_5;
		TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* L_6 = V_0;
		return L_6;
	}
}
// Facebook.WitAi.TTS.Data.TTSVoiceSettings Facebook.WitAi.TTS.Integrations.TTSWit::get_VoiceDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* TTSWit_get_VoiceDefaultSettings_m98F6E5CA091EF66DBD138602A58A327FD3D75EB5 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public TTSVoiceSettings VoiceDefaultSettings => PresetVoiceSettings[0];
		TTSVoiceSettingsU5BU5D_tD5376A79EF5ADF8E6DFBCEA747970C68F275FC91* L_0;
		L_0 = TTSWit_get_PresetVoiceSettings_m81E93241097E5AA437DE61C02974A7D6D9D59C93(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.TTS.Integrations.TTSWit::EncodeVoiceSettings(Facebook.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* TTSWit_EncodeVoiceSettings_mF701754895CE3CF13F57C4332581466A8F402C2B (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* ___voiceSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m3432BF0E9BB88F8FD553E61A2216F1052D21A79C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// Dictionary<string, string> parameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if (voiceSettings != null)
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_1 = ___voiceSettings0;
		if (!L_1)
		{
			goto IL_010c;
		}
	}
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_2 = ___voiceSettings0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_4;
		L_4 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_3, NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00a5;
	}

IL_001f:
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (!string.Equals(field.Name, SETTINGS_KEY, StringComparison.CurrentCultureIgnoreCase))
		FieldInfo_t* L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		bool L_11;
		L_11 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_10, _stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21, 1, NULL);
		if (L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// object fieldVal = field.GetValue(voiceSettings);
		FieldInfo_t* L_12 = V_3;
		TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* L_13 = ___voiceSettings0;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_12, L_13);
		V_4 = L_14;
		// RangeAttribute range = field.GetCustomAttribute<RangeAttribute>();
		FieldInfo_t* L_15 = V_3;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m3432BF0E9BB88F8FD553E61A2216F1052D21A79C(L_15, CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m3432BF0E9BB88F8FD553E61A2216F1052D21A79C_RuntimeMethod_var);
		V_5 = L_16;
		// if (range != null && field.FieldType == typeof(int))
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_17 = V_5;
		if (!L_17)
		{
			goto IL_008e;
		}
	}
	{
		FieldInfo_t* L_18 = V_3;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_008e;
		}
	}
	{
		// int oldFloat = (int) fieldVal;
		RuntimeObject* L_23 = V_4;
		// int newFloat = Mathf.Clamp(oldFloat, (int)range.min, (int)range.max);
		int32_t L_24 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_23, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_25 = V_5;
		NullCheck(L_25);
		float L_26 = L_25->___min_0;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_27 = V_5;
		NullCheck(L_27);
		float L_28 = L_27->___max_1;
		int32_t L_29;
		L_29 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_24, il2cpp_codegen_cast_double_to_int<int32_t>(L_26), il2cpp_codegen_cast_double_to_int<int32_t>(L_28), NULL);
		V_6 = L_29;
		// if (oldFloat != newFloat)
		int32_t L_30 = V_6;
		if ((((int32_t)L_24) == ((int32_t)L_30)))
		{
			goto IL_008e;
		}
	}
	{
		// fieldVal = newFloat;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		V_4 = L_33;
	}

IL_008e:
	{
		// parameters[field.Name] = fieldVal.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = V_0;
		FieldInfo_t* L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		RuntimeObject* L_37 = V_4;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		NullCheck(L_34);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_34, L_36, L_38, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_00a1:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a5:
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		int32_t L_40 = V_2;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (!parameters.ContainsKey(VOICE_KEY) || string.IsNullOrEmpty(parameters[VOICE_KEY]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = V_0;
		NullCheck(L_42);
		bool L_43;
		L_43 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_42, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_44, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_46;
		L_46 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_45, NULL);
		if (!L_46)
		{
			goto IL_00dd;
		}
	}

IL_00cd:
	{
		// parameters[VOICE_KEY] = TTSWitVoiceSettings.DEFAULT_VOICE;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47 = V_0;
		NullCheck(L_47);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_47, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_00dd:
	{
		// if (!parameters.ContainsKey(STYLE_KEY) || string.IsNullOrEmpty(parameters[STYLE_KEY]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = V_0;
		NullCheck(L_48);
		bool L_49;
		L_49 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_48, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_00fc;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_50, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_52;
		L_52 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_51, NULL);
		if (!L_52)
		{
			goto IL_010c;
		}
	}

IL_00fc:
	{
		// parameters[STYLE_KEY] = TTSWitVoiceSettings.DEFAULT_STYLE;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = V_0;
		NullCheck(L_53);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_53, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_010c:
	{
		// return parameters;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_54 = V_0;
		return L_54;
	}
}
// System.String Facebook.WitAi.TTS.Integrations.TTSWit::IsRequestValid(Facebook.WitAi.TTS.Data.TTSClipData,Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsRequestValid_m5C392FBD420452C712323611FA20792845EAD384 (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* ___clipData0, WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___configuration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string invalidError = GetInvalidError();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Facebook.WitAi.TTS.TTSService::GetInvalidError() */, __this);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return invalidError;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// if (clipData == null)
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_4 = ___clipData0;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return "No clip data provided";
		return _stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE;
	}

IL_001a:
	{
		// return string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_5;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit__ctor_m08517D9F181FBA44EC2D5223FF1AEB5B9C98B5FE (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = (TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31*)il2cpp_codegen_object_new(TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSStreamEvents__ctor_m4954D3331A8F779424CDD520F9D7CFBAC366E75D(L_0, NULL);
		__this->___U3CWebStreamEventsU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebStreamEventsU3Ek__BackingField_13), (void*)L_0);
		// private Dictionary<string, WitUnityRequest> _webStreams = new Dictionary<string, WitUnityRequest>();
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_1 = (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*)il2cpp_codegen_object_new(Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072(L_1, Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072_RuntimeMethod_var);
		__this->____webStreams_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webStreams_14), (void*)L_1);
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_2 = (TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651*)il2cpp_codegen_object_new(TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSDownloadEvents__ctor_m4430343E222FF5B892CD63206A07836871BDF105(L_2, NULL);
		__this->___U3CWebDownloadEventsU3Ek__BackingField_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebDownloadEventsU3Ek__BackingField_15), (void*)L_2);
		// private Dictionary<string, WitUnityRequest> _webDownloads = new Dictionary<string, WitUnityRequest>();
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_3 = (Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD*)il2cpp_codegen_object_new(Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072(L_3, Dictionary_2__ctor_m079E10ADC88D5DC4937F9058085116DB81100072_RuntimeMethod_var);
		__this->____webDownloads_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webDownloads_16), (void*)L_3);
		TTSService__ctor_mF5BC0E9DE19B4FEE2B5184A6FE377CF19816073A(__this, NULL);
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
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m1FAD6C425C98C8BD6A55521CA7A28B40383B76C2 (U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<RequestStreamFromWeb>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mABBFBCC5E36FEEBC915B4A95986F6F448A50E40C (U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// (progress) => clipData.loadProgress = progress,
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->___clipData_0;
		float L_1 = ___progress0;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<RequestStreamFromWeb>b__1(UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_mEE65F1B2511B0CFC5685D1D8AA6AC4B9D41D16A1 (U3CU3Ec__DisplayClass18_0_t0C5C53A9B482BCF5C0A182F57D43016FAA76C961* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B3_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B2_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B5_0 = NULL;
	TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* G_B4_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B8_0 = NULL;
	TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* G_B7_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B10_0 = NULL;
	TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* G_B9_0 = NULL;
	{
		// _webStreams.Remove(clipData.clipID);
		TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_1 = L_0->____webStreams_14;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->___clipData_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380(L_1, L_3, Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		// clipData.clip = clip;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_5 = __this->___clipData_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = ___clip0;
		NullCheck(L_5);
		L_5->___clip_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___clip_6), (void*)L_6);
		// if (string.IsNullOrEmpty(error))
		String_t* L_7 = ___error1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// WebStreamEvents?.OnStreamReady?.Invoke(clipData);
		TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* L_9 = __this->___U3CU3E4__this_1;
		NullCheck(L_9);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_10;
		L_10 = TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline(L_9, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		NullCheck(G_B3_0);
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_12 = G_B3_0->___OnStreamReady_1;
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_13 = L_12;
		G_B4_0 = L_13;
		if (L_13)
		{
			G_B5_0 = L_13;
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_14 = __this->___clipData_0;
		NullCheck(G_B5_0);
		UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F(G_B5_0, L_14, UnityEvent_1_Invoke_mD90A6021A328509247240B4E5DB48C34499C296F_RuntimeMethod_var);
		return;
	}

IL_0056:
	{
		// WebStreamEvents?.OnStreamError?.Invoke(clipData, error);
		TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* L_15 = __this->___U3CU3E4__this_1;
		NullCheck(L_15);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_16;
		L_16 = TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline(L_15, NULL);
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_17 = L_16;
		G_B7_0 = L_17;
		if (L_17)
		{
			G_B8_0 = L_17;
			goto IL_0066;
		}
	}
	{
		return;
	}

IL_0066:
	{
		NullCheck(G_B8_0);
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_18 = G_B8_0->___OnStreamError_3;
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0070;
		}
	}
	{
		return;
	}

IL_0070:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_20 = __this->___clipData_0;
		String_t* L_21 = ___error1;
		NullCheck(G_B10_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B10_0, L_20, L_21, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		// });
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
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m87AB19A35ADCA2586AE6414DDB927966D871AC2A (U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<RequestDownloadFromWeb>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_m81CA877CE5F59809D9CDCF95125CAD9CD8CEE827 (U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// (progress) => clipData.loadProgress = progress,
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_0 = __this->___clipData_0;
		float L_1 = ___progress0;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
		return;
	}
}
// System.Void Facebook.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<RequestDownloadFromWeb>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_m6E8A1B8A19B1E69668B96F749CDA35138F8305B1 (U3CU3Ec__DisplayClass25_0_t59793E4A99EDF155A2F689D93E53FF6C82AD9394* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B3_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B2_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B5_0 = NULL;
	TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* G_B4_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B8_0 = NULL;
	TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* G_B7_0 = NULL;
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* G_B10_0 = NULL;
	TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* G_B9_0 = NULL;
	{
		// _webDownloads.Remove(clipData.clipID);
		TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		Dictionary_2_t59E9859D2FE74804BF1FCB732BF397448AA890DD* L_1 = L_0->____webDownloads_16;
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_2 = __this->___clipData_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380(L_1, L_3, Dictionary_2_Remove_mD0B475F712D911BBA9FE1307C8762C8A4BDCC380_RuntimeMethod_var);
		// if (string.IsNullOrEmpty(error))
		String_t* L_5 = ___error0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// WebDownloadEvents?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* L_7 = __this->___U3CU3E4__this_1;
		NullCheck(L_7);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_8;
		L_8 = TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline(L_7, NULL);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		NullCheck(G_B3_0);
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_10 = G_B3_0->___OnDownloadSuccess_1;
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_12 = __this->___clipData_0;
		String_t* L_13 = __this->___downloadPath_2;
		NullCheck(G_B5_0);
		UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C(G_B5_0, L_12, L_13, UnityEvent_2_Invoke_mAAED6276E43EFA4050BD22E8CB37FBC70357F10C_RuntimeMethod_var);
		return;
	}

IL_0050:
	{
		// WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* L_14 = __this->___U3CU3E4__this_1;
		NullCheck(L_14);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_15;
		L_15 = TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline(L_14, NULL);
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_16 = L_15;
		G_B7_0 = L_16;
		if (L_16)
		{
			G_B8_0 = L_16;
			goto IL_0060;
		}
	}
	{
		return;
	}

IL_0060:
	{
		NullCheck(G_B8_0);
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_17 = G_B8_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_18 = L_17;
		G_B9_0 = L_18;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_006a:
	{
		TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* L_19 = __this->___clipData_0;
		String_t* L_20 = __this->___downloadPath_2;
		String_t* L_21 = ___error0;
		NullCheck(G_B10_0);
		UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B(G_B10_0, L_19, L_20, L_21, UnityEvent_3_Invoke_m39B65AA5B3BC9CAAC39B7AB275B35D3D8FF0486B_RuntimeMethod_var);
		// });
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
// System.Void Facebook.WitAi.TTS.Events.TTSClipDownloadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadEvent__ctor_m694A3C68F52C95AE27B3F845E4B256ABCA336E9F (TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96(__this, UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.TTS.Events.TTSClipDownloadErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadErrorEvent__ctor_mB6859844451E940DA30D32F632629AF4F118EB8F (TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m68DA004144A6FAC2EF4B2391126211708DE83ECE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m68DA004144A6FAC2EF4B2391126211708DE83ECE(__this, UnityEvent_3__ctor_m68DA004144A6FAC2EF4B2391126211708DE83ECE_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.TTS.Events.TTSDownloadEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDownloadEvents__ctor_m4430343E222FF5B892CD63206A07836871BDF105 (TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipDownloadEvent OnDownloadBegin = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_0 = (TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipDownloadEvent__ctor_m694A3C68F52C95AE27B3F845E4B256ABCA336E9F(L_0, NULL);
		__this->___OnDownloadBegin_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadBegin_0), (void*)L_0);
		// public TTSClipDownloadEvent OnDownloadSuccess = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_1 = (TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipDownloadEvent__ctor_m694A3C68F52C95AE27B3F845E4B256ABCA336E9F(L_1, NULL);
		__this->___OnDownloadSuccess_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadSuccess_1), (void*)L_1);
		// public TTSClipDownloadEvent OnDownloadCancel = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF* L_2 = (TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t6D60F8720410424E8B3BD0414B111A4DE4B8C9FF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSClipDownloadEvent__ctor_m694A3C68F52C95AE27B3F845E4B256ABCA336E9F(L_2, NULL);
		__this->___OnDownloadCancel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadCancel_2), (void*)L_2);
		// public TTSClipDownloadErrorEvent OnDownloadError = new TTSClipDownloadErrorEvent();
		TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A* L_3 = (TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A*)il2cpp_codegen_object_new(TTSClipDownloadErrorEvent_tAD4E808AE69E47F93993A084DE8AD05D8707CB6A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSClipDownloadErrorEvent__ctor_mB6859844451E940DA30D32F632629AF4F118EB8F(L_3, NULL);
		__this->___OnDownloadError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadError_3), (void*)L_3);
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
// System.Void Facebook.WitAi.TTS.Events.TTSServiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceEvents__ctor_m3887C7D2504FB73D0E6E2642DDBD9E1EEB3C21D9 (TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipEvent OnClipCreated  = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_0, NULL);
		__this->___OnClipCreated_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnClipCreated_0), (void*)L_0);
		// public TTSClipEvent OnClipUnloaded  = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_1 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_1, NULL);
		__this->___OnClipUnloaded_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnClipUnloaded_1), (void*)L_1);
		// public TTSStreamEvents Stream = new TTSStreamEvents();
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_2 = (TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31*)il2cpp_codegen_object_new(TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSStreamEvents__ctor_m4954D3331A8F779424CDD520F9D7CFBAC366E75D(L_2, NULL);
		__this->___Stream_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_2), (void*)L_2);
		// public TTSDownloadEvents Download = new TTSDownloadEvents();
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_3 = (TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651*)il2cpp_codegen_object_new(TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSDownloadEvents__ctor_m4430343E222FF5B892CD63206A07836871BDF105(L_3, NULL);
		__this->___Download_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Download_3), (void*)L_3);
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
// System.Void Facebook.WitAi.TTS.Events.TTSClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453 (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m06BC82994273E61B2B7D073B846884C909901B6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m06BC82994273E61B2B7D073B846884C909901B6A(__this, UnityEvent_1__ctor_m06BC82994273E61B2B7D073B846884C909901B6A_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.TTS.Events.TTSClipErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipErrorEvent__ctor_m85859DDB4F888F6C4B5E3E3E8EF980BF8E3E6A9D (TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96(__this, UnityEvent_2__ctor_m1A7C3B87486E45BC7EC882192E739C19866ADA96_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.TTS.Events.TTSStreamEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamEvents__ctor_m4954D3331A8F779424CDD520F9D7CFBAC366E75D (TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipEvent OnStreamBegin = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_0, NULL);
		__this->___OnStreamBegin_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamBegin_0), (void*)L_0);
		// public TTSClipEvent OnStreamReady = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_1 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_1, NULL);
		__this->___OnStreamReady_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamReady_1), (void*)L_1);
		// public TTSClipEvent OnStreamCancel = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_2 = (TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945*)il2cpp_codegen_object_new(TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSClipEvent__ctor_m11C5CF9C742DD56E9F9D8487E75F9F284C80B453(L_2, NULL);
		__this->___OnStreamCancel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamCancel_2), (void*)L_2);
		// public TTSClipErrorEvent OnStreamError = new TTSClipErrorEvent();
		TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD* L_3 = (TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD*)il2cpp_codegen_object_new(TTSClipErrorEvent_t1F678B87FC5E2F3857B7C788AC2E21C08E859ADD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSClipErrorEvent__ctor_m85859DDB4F888F6C4B5E3E3E8EF980BF8E3E6A9D(L_3, NULL);
		__this->___OnStreamError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamError_3), (void*)L_3);
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
// System.Void Facebook.WitAi.TTS.Data.TTSClipData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipData__ctor_m7C5F22000ABCAB8F122DB2BF11595A286E393368 (TTSClipData_tB4B9D63544628BE855EE0A8DE00FB24F96ABFC15* __this, const RuntimeMethod* method) 
{
	{
		// public AudioType audioType = AudioType.WAV; // Default
		__this->___audioType_2 = ((int32_t)20);
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
// System.Void Facebook.WitAi.TTS.Data.TTSDiskCacheSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCacheSettings__ctor_mAF425C2DFE8E383E562E18689CA6E1229BDFD2D7 (TTSDiskCacheSettings_t86D87C4E19B0732ACB766A7BAB355CBEBBB6CE65* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.TTS.Data.TTSVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSVoiceSettings__ctor_m3AB6290B24923DCC159B80B43C1299D4CA55CCF6 (TTSVoiceSettings_tDDB57D2B757AFE51188759CB14536163C2AF3104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string settingsID = DEFAULT_ID;
		__this->___settingsID_1 = _stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settingsID_1), (void*)_stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* TTSService_get_Events_m98892810A0ADE99063C206960F02B517971460B5_inline (TTSService_t95F3B85E7005C6D10BE5A8C288A69C2A368393FD* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_tF0569B77D502A5989A86FDCC803D8514413312CB* L_0 = __this->____events_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_mB0A07FD6722A912CBA96B847FC69A645A29003FD_inline (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSpeaking => _speaking;
		bool L_0 = __this->____speaking_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* TTSSpeaker_get_Events_m1BEE573B52A140339E2D8031027D81398EF6DCC9_inline (TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_tD08CD2AFB0C82B37BB8960692419965CA1C21862* L_0 = __this->____events_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriBuilder_get_Query_m905F5864CB1B5D09FD81F29B148541DFB353F78E_inline (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____query_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_mEC41B5632A4A43EADC79C286CC1B8029B117736B_inline (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) 
{
	{
		// public string DiskPath => _diskPath;
		String_t* L_0 = __this->____diskPath_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* TTSDiskCache_get_DiskStreamEvents_mE9CC2FF9A4D04CD8630636FD58A9F8868A10AAB3_inline (TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* __this, const RuntimeMethod* method) 
{
	{
		// get => _events;
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = __this->____events_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* TTSRuntimeCache_get_OnClipAdded_m72DD3BD5194AD0CB1D8040A7E14486742CC08B58_inline (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = __this->___U3COnClipAddedU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* TTSRuntimeCache_get_OnClipRemoved_mF538BEEF98ED44EE07C8FE9BA0AD79D275329DCF_inline (TTSRuntimeCache_tC6E3A8AA7A1883F46D504F1587FE7A7ABA1913FF* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_tAFC07C961D5C469E592F3AD3CE61C10216BCE945* L_0 = __this->___U3COnClipRemovedU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* TTSWit_get_WebStreamEvents_mADA2CBF7F85798C0FE926BA07EB9A7E0C3BFF5C6_inline (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_tAE6509A4B7B25E2EF374CEC43CEB8BD41D953D31* L_0 = __this->___U3CWebStreamEventsU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* TTSWit_get_WebDownloadEvents_mEB2A3740BD4EEB2BF7E02C2028687912BE491908_inline (TTSWit_t785F9500F7B7E1D2E87B38C9256A50AF8E86C08B* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tD7E9F83376F5BED441EC0454F45E2291D397F651* L_0 = __this->___U3CWebDownloadEventsU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mAFC1A6B82DBD3B488FF63EE80C4D280D6979260F_gshared_inline (Action_2_t4A5313D1C1FEF099C0E5969104BDE957CD82CF22* __this, RuntimeObject* ___arg10, float ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
