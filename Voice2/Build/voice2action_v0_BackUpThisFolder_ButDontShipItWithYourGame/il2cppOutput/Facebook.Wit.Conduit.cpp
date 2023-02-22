#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270;
// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.InvocationContext>
struct IEnumerable_1_tFC242248222E2BFEFB8A3590DF317D8CCEC1AE72;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.ManifestParameter>
struct IEnumerable_1_tA39C719F0C595057889DEC3643FE8E2920E6A3CF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t8E50A30565DC033F3BDF1627DA5A9C930C1E0DB9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct KeyCollection_t3D461826AE05B2B3A89404EC7E6F665305E64E04;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>[]
struct EntryU5BU5D_tDDB025EC327A1C10DD190006B95D6E196E234236;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Meta.Conduit.InvocationContext[]
struct InvocationContextU5BU5D_t2378E79B73F3F5B1B15AB21DB4C415F5DE15021C;
// Meta.Conduit.ManifestAction[]
struct ManifestActionU5BU5D_tDCD43E29651580260D9CC754BEBD74CA1ABFD4A8;
// Meta.Conduit.ManifestEntity[]
struct ManifestEntityU5BU5D_t66B86E2F59108842811F459B050BDC2258C84D38;
// Meta.Conduit.ManifestParameter[]
struct ManifestParameterU5BU5D_t20A01355C25FF185C3C2BFBA957E7115C260855E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03;
// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tC0D41F8C1603EA3F11136E091BD02A4750CD51FB;
// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD;
// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF;
// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tFA871D9874C03C6B6FAFF07518614608268A05ED;
// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65;
// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274;
// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t762B3E7D2DA1201E5678485D344611A85532EB82;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Meta.Conduit.IInstanceResolver
struct IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0;
// Meta.Conduit.IManifestLoader
struct IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3;
// Meta.Conduit.InvocationContext
struct InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05;
// Meta.Conduit.Manifest
struct Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF;
// Meta.Conduit.ManifestAction
struct ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056;
// Meta.Conduit.ManifestEntity
struct ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938;
// Meta.Conduit.ManifestLoader
struct ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263;
// Meta.Conduit.ManifestParameter
struct ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Meta.Conduit.ParameterProvider
struct ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E;
// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t42DACB4F4802D1C2C7DF762E704AE40CFB0B1957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t73A696B3FD14CEB9054963740E9AEDD059B29DB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral022184FDCAF79E398879AD81666844068AE208D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53;
IL2CPP_EXTERN_C String_t* _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E;
IL2CPP_EXTERN_C String_t* _stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83;
IL2CPP_EXTERN_C String_t* _stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B;
IL2CPP_EXTERN_C String_t* _stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67;
IL2CPP_EXTERN_C String_t* _stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7;
IL2CPP_EXTERN_C String_t* _stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499;
IL2CPP_EXTERN_C String_t* _stringLiteralBF7EFBD8BC034142848E4C19607C01A22400D9AE;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786;
IL2CPP_EXTERN_C String_t* _stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B;
IL2CPP_EXTERN_C String_t* _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896;
IL2CPP_EXTERN_C String_t* _stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m424DB02493F0C7BF66E721CF2C536B0AB22C4971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m167216DA4A56D16696360355AF3632745D927349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m904ABB1B7212F9F3907D147D888B8BF0E7F123CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_mB6F1E52919EE246C01881B21C2DD08AA0C17FA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mEE217EF238E954BAC5D52F2F4728D0B5EE7E418F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m4D14576527FB8957BB3BFF0CF8AD36031F9CFB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterProvider_GetSpecializedParameter_m178B6D8BE1EE989169B2584631E6D1CD9DC309C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB96A7823FBEF3C71ABF18039B87DB520DFFF4ADE 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDDB025EC327A1C10DD190006B95D6E196E234236* ____entries_1;
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
	KeyCollection_t3D461826AE05B2B3A89404EC7E6F665305E64E04* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InvocationContextU5BU5D_t2378E79B73F3F5B1B15AB21DB4C415F5DE15021C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InvocationContextU5BU5D_t2378E79B73F3F5B1B15AB21DB4C415F5DE15021C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestActionU5BU5D_tDCD43E29651580260D9CC754BEBD74CA1ABFD4A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestActionU5BU5D_tDCD43E29651580260D9CC754BEBD74CA1ABFD4A8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestEntityU5BU5D_t66B86E2F59108842811F459B050BDC2258C84D38* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestEntityU5BU5D_t66B86E2F59108842811F459B050BDC2258C84D38* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestParameterU5BU5D_t20A01355C25FF185C3C2BFBA957E7115C260855E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestParameterU5BU5D_t20A01355C25FF185C3C2BFBA957E7115C260855E* ___s_emptyArray_5;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD  : public RuntimeObject
{
	// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::manifest
	Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* ___manifest_0;
	// Meta.Conduit.IManifestLoader Meta.Conduit.ConduitDispatcher::manifestLoader
	RuntimeObject* ___manifestLoader_1;
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcher::instanceResolver
	RuntimeObject* ___instanceResolver_2;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcher::parameterProvider
	RuntimeObject* ___parameterProvider_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ConduitDispatcher::parameterToRoleMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterToRoleMap_4;
};

// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF  : public RuntimeObject
{
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcherFactory::instanceResolver
	RuntimeObject* ___instanceResolver_1;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcherFactory::parameterProvider
	RuntimeObject* ___parameterProvider_2;
};

struct ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields
{
	// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::instance
	RuntimeObject* ___instance_0;
};

// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274  : public RuntimeObject
{
};

struct ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields
{
	// System.Text.RegularExpressions.Regex Meta.Conduit.ConduitUtilities::UnderscoreSplitter
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___UnderscoreSplitter_0;
};

// Meta.Conduit.InvocationContext
struct InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05  : public RuntimeObject
{
	// System.Type Meta.Conduit.InvocationContext::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_0;
	// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::<MethodInfo>k__BackingField
	MethodInfo_t* ___U3CMethodInfoU3Ek__BackingField_1;
	// System.Single Meta.Conduit.InvocationContext::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_2;
	// System.Single Meta.Conduit.InvocationContext::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Boolean Meta.Conduit.InvocationContext::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_4;
};

// Meta.Conduit.Manifest
struct Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF  : public RuntimeObject
{
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::methodLookup
	Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* ___methodLookup_5;
};

// Meta.Conduit.ManifestAction
struct ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestAction::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestAction::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::<Parameters>k__BackingField
	List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ___U3CParametersU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_4;
};

// Meta.Conduit.ManifestEntity
struct ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestEntity::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestEntity::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestEntity::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::<Values>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CValuesU3Ek__BackingField_3;
};

// Meta.Conduit.ManifestLoader
struct ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263  : public RuntimeObject
{
};

// Meta.Conduit.ManifestParameter
struct ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestParameter::name
	String_t* ___name_0;
	// System.String Meta.Conduit.ManifestParameter::<InternalName>k__BackingField
	String_t* ___U3CInternalNameU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedName>k__BackingField
	String_t* ___U3CQualifiedNameU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestParameter::<TypeAssembly>k__BackingField
	String_t* ___U3CTypeAssemblyU3Ek__BackingField_3;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedTypeName>k__BackingField
	String_t* ___U3CQualifiedTypeNameU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Meta.Conduit.ParameterProvider
struct ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Meta.Conduit.ParameterProvider::ActualParameters
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___ActualParameters_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ParameterProvider::parameterToRoleMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterToRoleMap_1;
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

// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E  : public RuntimeObject
{
	// Meta.Conduit.ConduitDispatcher Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::<>4__this
	ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* ___U3CU3E4__this_0;
	// System.Single Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::confidence
	float ___confidence_1;
	// System.Boolean Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::partial
	bool ___partial_2;
};

// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD  : public RuntimeObject
{
};

struct U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields
{
	// Meta.Conduit.Manifest/<>c Meta.Conduit.Manifest/<>c::<>9
	U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> Meta.Conduit.Manifest/<>c::<>9__22_0
	Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* ___U3CU3E9__22_0_1;
	// System.Comparison`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest/<>c::<>9__22_1
	Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* ___U3CU3E9__22_1_2;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>
struct Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>
struct Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>
struct Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Meta.Conduit.ConduitActionAttribute::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_0;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_1;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_5;
	// System.Boolean Meta.Conduit.ConduitActionAttribute::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_6;
};

// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tC0D41F8C1603EA3F11136E091BD02A4750CD51FB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tFA871D9874C03C6B6FAFF07518614608268A05ED  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_0;
};

// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String[] Meta.Conduit.ConduitValueAttribute::<Aliases>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CAliasesU3Ek__BackingField_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
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
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m72E17986C0E4F0913195057E9273765758C467BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_m0CD6596651DC38B7105658D8C0AACE248F533301_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T Meta.Wit.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_mC69E61B5F54A9A76CF8EEC5497D6343EFBC13DAC_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::GetEnumerator()
inline Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07 (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C (*) (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::Dispose()
inline void Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60 (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::get_Current()
inline ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_inline (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C* __this, const RuntimeMethod* method)
{
	return ((  ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* (*) (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::GetEnumerator()
inline Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::Dispose()
inline void Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9 (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::get_Current()
inline ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_inline (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7* __this, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* (*) (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::MoveNext()
inline bool Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499 (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::MoveNext()
inline bool Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m79AA7580B95FDA470E3A01B9889FA3F022E9F6E9 (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Manifest_GetInvocationContexts_mD55F56E02DC319F285D9416971B166E6E73994E1 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___actionId0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEDFA0DFCCFE4035E3234B9D2DAA75EE9A6BF679F (Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_mB6F1E52919EE246C01881B21C2DD08AA0C17FA5B (RuntimeObject* ___source0, Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m904ABB1B7212F9F3907D147D888B8BF0E7F123CA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4EB50A8D85414DB2DF89BD0200D31D2A6DC97026 (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m424DB02493F0C7BF66E721CF2C536B0AB22C4971 (RuntimeObject* ___source0, Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m72E17986C0E4F0913195057E9273765758C467BA_gshared)(___source0, ___predicate1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_mC6DF421521703AC270FF5A020986E656134A5ADA (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ConduitDispatcher_ResolveInvocationContexts_mD0AC7CD27CD75770525ECA273CB330464604C1CD (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___actionId0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::get_Count()
inline int32_t List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_inline (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::GetEnumerator()
inline Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931 (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::Dispose()
inline void Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::get_Current()
inline InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_inline (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF* __this, const RuntimeMethod* method)
{
	return ((  InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* (*) (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_m2FA25297950DBE77F729F6E0D9EE448D63612427 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___invocationContext0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::MoveNext()
inline bool Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitDispatcher::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_CompatibleInvocationContext_m717CADD9569EC6713412E9DC5063B85433E79794 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___invocationContext0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mE8C2E5D19E871C4E0B98ECDDF40DBA686D2A8DD7 (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m7B2AC7A1BAF471994493C5550D26A54569D8CCEA (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, RuntimeObject* ___parameterProvider2, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m8E802C10B5A591BEA61FC00EA8E4AF398D815A90 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::.ctor()
inline void List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752 (List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::.ctor()
inline void List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496 (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Count()
inline int32_t List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_inline (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Item(System.Int32)
inline ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73 (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mA605A28A04232563F51674827C52C17447DE686F (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, int32_t ___callConvention3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types4, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___modifiers5, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m519FAA352D30200AF8DD4163E27161C2E7EE8FBF (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, MethodInfo_t* ___value0, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::.ctor()
inline void List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19 (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, String_t* ___key0, List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, String_t*, List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Item(TKey)
inline List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Add(T)
inline void List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_inline (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Values()
inline ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m432DB5C28CB7298129A6B0F1DB39BA9E8CAD62B0 (Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mEE217EF238E954BAC5D52F2F4728D0B5EE7E418F (RuntimeObject* ___source0, Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Comparison`1<Meta.Conduit.InvocationContext>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m11C7DD22C1DA71649A92EBEA62081415CB2C004C (Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E8534585ABCD4490AB269E0D350DB556F3D91FE (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::.ctor()
inline void List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mC26F1EE6632BEADDF6581680E6FADDEBC44E83FE (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* ___other0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.ManifestParameter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m167216DA4A56D16696360355AF3632745D927349 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m0CD6596651DC38B7105658D8C0AACE248F533301_gshared)(___first0, ___second1, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m0CD6596651DC38B7105658D8C0AACE248F533301_gshared)(___first0, ___second1, method);
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m63E5B6F11C9814DB0C9E37E81C8F9215CF3D4AA8 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* ___other0, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// T Meta.Wit.LitJson.JsonMapper::ToObject<Meta.Conduit.Manifest>(System.String)
inline Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m4D14576527FB8957BB3BFF0CF8AD36031F9CFB16 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_mC69E61B5F54A9A76CF8EEC5497D6343EFBC13DAC_gshared)(___json0, method);
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_mDACF464DC967E398A7800236196F942E02E57A56 (String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_mCBB6851B7DB3A7CBF0568C4BA28AE610ACB7BDBA (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* ___other0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585 (Type_t* ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m6017C38CD5EA925943B6E047F20CE06E1807D033 (RuntimeObject* ___value0, Type_t* ___conversionType1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
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
// System.String Meta.Conduit.ConduitActionAttribute::get_Intent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitActionAttribute_get_Intent_m2F96664442FFDC4188F3E45A38AD331AF14B32EC (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = __this->___U3CIntentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CIntentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitActionAttribute_get_Aliases_m75C075213E8379372BC37E8622E4A9C049D2A162 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_m7353E812531486B3FEDE0622F5BBDFC15C6D987F (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___intent0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline(__this, L_0, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___aliases1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5((RuntimeObject*)L_1, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.Single,System.Single,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_mB92ABE3B1A9F49CDC910BDE97C75B406B5F4991D (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___intent0, float ___minConfidence1, float ___maxConfidence2, bool ___validatePartial3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", float minConfidence = DEFAULT_MIN_CONFIDENCE, float maxConfidence = DEFAULT_MAX_CONFIDENCE, bool validatePartial = false, params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline(__this, L_0, NULL);
		// this.MinConfidence = minConfidence;
		float L_1 = ___minConfidence1;
		ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F_inline(__this, L_1, NULL);
		// this.MaxConfidence = maxConfidence;
		float L_2 = ___maxConfidence2;
		ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6_inline(__this, L_2, NULL);
		// this.ValidatePartial = validatePartial;
		bool L_3 = ___validatePartial3;
		ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA_inline(__this, L_3, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___aliases4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5;
		L_5 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5((RuntimeObject*)L_4, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline(__this, L_5, NULL);
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
// System.Void Meta.Conduit.ConduitAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitAssemblyAttribute__ctor_m1B6CFE5146E27E41961BAB3A8A886FF3113EB6C3 (ConduitAssemblyAttribute_tC0D41F8C1603EA3F11136E091BD02A4750CD51FB* __this, const RuntimeMethod* method) 
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
// System.Void Meta.Conduit.ConduitEntityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitEntityAttribute__ctor_m9AB1E4FB626B83A1E7381265B66D8F77BAB5ABC9 (ConduitEntityAttribute_tFA871D9874C03C6B6FAFF07518614608268A05ED* __this, const RuntimeMethod* method) 
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
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_m840EB05478421C32916B87FDB370FAC78329995E (ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___aliases0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5((RuntimeObject*)L_0, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_0), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitParameterAttribute_get_Aliases_mAD7972C7B85BF1DD564D93A6BC8973DA87A00A80 (ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_0;
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
// System.Void Meta.Conduit.ConduitValueAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitValueAttribute__ctor_m4A6C3BAA971B99F9CD5E1D53530FC825B376F990 (ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases0, const RuntimeMethod* method) 
{
	{
		// public ConduitValueAttribute(params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Aliases = aliases;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___aliases0;
		__this->___U3CAliasesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.String[] Meta.Conduit.ConduitValueAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ConduitValueAttribute_get_Aliases_mDA75B136D7EA66557B34D2BEB3564617A39C56D7 (ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Aliases { get; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CAliasesU3Ek__BackingField_0;
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
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m7B2AC7A1BAF471994493C5550D26A54569D8CCEA (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, RuntimeObject* ___parameterProvider2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, string> parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___parameterToRoleMap_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterToRoleMap_4), (void*)L_0);
		// public ConduitDispatcher(IManifestLoader manifestLoader, IInstanceResolver instanceResolver, IParameterProvider parameterProvider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.manifestLoader = manifestLoader;
		RuntimeObject* L_1 = ___manifestLoader0;
		__this->___manifestLoader_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manifestLoader_1), (void*)L_1);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_2 = ___instanceResolver1;
		__this->___instanceResolver_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceResolver_2), (void*)L_2);
		// this.parameterProvider = parameterProvider;
		RuntimeObject* L_3 = ___parameterProvider2;
		__this->___parameterProvider_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterProvider_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_Initialize_mC3B84B3EE71E816BED54F79ADE3833F3CD48A457 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___manifestFilePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* V_2 = NULL;
	{
		// if (this.manifest != null)
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_0 = __this->___manifest_0;
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
		// manifest = this.manifestLoader.LoadManifest(manifestFilePath);
		RuntimeObject* L_1 = __this->___manifestLoader_1;
		String_t* L_2 = ___manifestFilePath0;
		NullCheck(L_1);
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_3;
		L_3 = InterfaceFuncInvoker1< Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF*, String_t* >::Invoke(0 /* Meta.Conduit.Manifest Meta.Conduit.IManifestLoader::LoadManifest(System.String) */, IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8_il2cpp_TypeInfo_var, L_1, L_2);
		__this->___manifest_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manifest_0), (void*)L_3);
		// if (manifest == null)
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_4 = __this->___manifest_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// foreach (var action in manifest.Actions)
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_5 = __this->___manifest_0;
		NullCheck(L_5);
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_6;
		L_6 = Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline(L_5, NULL);
		NullCheck(L_6);
		Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C L_7;
		L_7 = List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07(L_6, List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60((&V_0), Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0096_1;
			}

IL_0037_1:
			{
				// foreach (var action in manifest.Actions)
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_8;
				L_8 = Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_inline((&V_0), Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
				// foreach (var parameter in action.Parameters)
				NullCheck(L_8);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_9;
				L_9 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_8, NULL);
				NullCheck(L_9);
				Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 L_10;
				L_10 = List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C(L_9, List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C_RuntimeMethod_var);
				V_1 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0088_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9((&V_1), Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_007d_2;
					}

IL_004b_2:
					{
						// foreach (var parameter in action.Parameters)
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_11;
						L_11 = Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_inline((&V_1), Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_RuntimeMethod_var);
						V_2 = L_11;
						// if (!parameterToRoleMap.ContainsKey(parameter.InternalName))
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = __this->___parameterToRoleMap_4;
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_13 = V_2;
						NullCheck(L_13);
						String_t* L_14;
						L_14 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(L_13, NULL);
						NullCheck(L_12);
						bool L_15;
						L_15 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_12, L_14, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
						if (L_15)
						{
							goto IL_007d_2;
						}
					}
					{
						// parameterToRoleMap.Add(parameter.InternalName, parameter.QualifiedName);
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = __this->___parameterToRoleMap_4;
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_17 = V_2;
						NullCheck(L_17);
						String_t* L_18;
						L_18 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(L_17, NULL);
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_19 = V_2;
						NullCheck(L_19);
						String_t* L_20;
						L_20 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(L_19, NULL);
						NullCheck(L_16);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_16, L_18, L_20, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
					}

IL_007d_2:
					{
						// foreach (var parameter in action.Parameters)
						bool L_21;
						L_21 = Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499((&V_1), Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_004b_2;
						}
					}
					{
						goto IL_0096_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0096_1:
			{
				// foreach (var action in manifest.Actions)
				bool L_22;
				L_22 = Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F((&V_0), Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ConduitDispatcher_ResolveInvocationContexts_mD0AC7CD27CD75770525ECA273CB330464604C1CD (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___actionId0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m904ABB1B7212F9F3907D147D888B8BF0E7F123CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_mB6F1E52919EE246C01881B21C2DD08AA0C17FA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_0 = (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m79AA7580B95FDA470E3A01B9889FA3F022E9F6E9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_2 = V_0;
		float L_3 = ___confidence1;
		NullCheck(L_2);
		L_2->___confidence_1 = L_3;
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_4 = V_0;
		bool L_5 = ___partial2;
		NullCheck(L_4);
		L_4->___partial_2 = L_5;
		// var invocationContexts = manifest.GetInvocationContexts(actionId);
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_6 = __this->___manifest_0;
		String_t* L_7 = ___actionId0;
		NullCheck(L_6);
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_8;
		L_8 = Manifest_GetInvocationContexts_mD55F56E02DC319F285D9416971B166E6E73994E1(L_6, L_7, NULL);
		// return invocationContexts.Where(context => this.CompatibleInvocationContext(context, confidence, partial)).ToList();
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_9 = V_0;
		Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664* L_10 = (Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664*)il2cpp_codegen_object_new(Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mEDFA0DFCCFE4035E3234B9D2DAA75EE9A6BF679F(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725_RuntimeMethod_var), NULL);
		RuntimeObject* L_11;
		L_11 = Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_mB6F1E52919EE246C01881B21C2DD08AA0C17FA5B(L_8, L_10, Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_mB6F1E52919EE246C01881B21C2DD08AA0C17FA5B_RuntimeMethod_var);
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_12;
		L_12 = Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m904ABB1B7212F9F3907D147D888B8BF0E7F123CA(L_11, Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m904ABB1B7212F9F3907D147D888B8BF0E7F123CA_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_CompatibleInvocationContext_m717CADD9569EC6713412E9DC5063B85433E79794 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___invocationContext0, float ___confidence1, bool ___partial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m424DB02493F0C7BF66E721CF2C536B0AB22C4971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	{
		// var parameters = invocationContext.MethodInfo.GetParameters();
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_0 = ___invocationContext0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_0, NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		// if (invocationContext.ValidatePartial != partial)
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_3 = ___invocationContext0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5_inline(L_3, NULL);
		bool L_5 = ___partial2;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// else if (invocationContext.MinConfidence > confidence || confidence > invocationContext.MaxConfidence)
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_6 = ___invocationContext0;
		NullCheck(L_6);
		float L_7;
		L_7 = InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4_inline(L_6, NULL);
		float L_8 = ___confidence1;
		if ((((float)L_7) > ((float)L_8)))
		{
			goto IL_0029;
		}
	}
	{
		float L_9 = ___confidence1;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_10 = ___invocationContext0;
		NullCheck(L_10);
		float L_11;
		L_11 = InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17_inline(L_10, NULL);
		if ((!(((float)L_9) > ((float)L_11))))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// else if (!parameters.All(parameter => this.parameterProvider.ContainsParameter(parameter)))
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = V_0;
		Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* L_13 = (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*)il2cpp_codegen_object_new(Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m4EB50A8D85414DB2DF89BD0200D31D2A6DC97026(L_13, __this, (intptr_t)((void*)ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D_RuntimeMethod_var), NULL);
		bool L_14;
		L_14 = Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m424DB02493F0C7BF66E721CF2C536B0AB22C4971((RuntimeObject*)L_12, L_13, Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m424DB02493F0C7BF66E721CF2C536B0AB22C4971_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogError($"Failed to find execution context for {invocationContext.MethodInfo.Name}. Parameters could not be matched");
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_15 = ___invocationContext0;
		NullCheck(L_15);
		MethodInfo_t* L_16;
		L_16 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7, L_17, _stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_18, NULL);
		// return false;
		return (bool)0;
	}

IL_0060:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeAction(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeAction_mF2EBA80C82323CA2D3FBF2A9CD1C30CA61D34A20 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___actionId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters1, float ___confidence2, bool ___partial3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!manifest.ContainsAction(actionId))
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_0 = __this->___manifest_0;
		String_t* L_1 = ___actionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Manifest_ContainsAction_mC6DF421521703AC270FF5A020986E656134A5ADA(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// this.parameterProvider.Populate(parameters, this.parameterToRoleMap);
		RuntimeObject* L_3 = __this->___parameterProvider_3;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___parameters1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = __this->___parameterToRoleMap_4;
		NullCheck(L_3);
		InterfaceActionInvoker2< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(0 /* System.Void Meta.Conduit.IParameterProvider::Populate(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// var invocationContexts = this.ResolveInvocationContexts(actionId, confidence, partial);
		String_t* L_6 = ___actionId0;
		float L_7 = ___confidence2;
		bool L_8 = ___partial3;
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_9;
		L_9 = ConduitDispatcher_ResolveInvocationContexts_mD0AC7CD27CD75770525ECA273CB330464604C1CD(__this, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// if (invocationContexts.Count < 1)
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_inline(L_10, List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// var allSucceeded = true;
		V_1 = (bool)1;
		// foreach (var invocationContext in invocationContexts)
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_12 = V_0;
		NullCheck(L_12);
		Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF L_13;
		L_13 = List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931(L_12, List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931_RuntimeMethod_var);
		V_2 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B((&V_2), Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0043_1:
			{
				// foreach (var invocationContext in invocationContexts)
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_14;
				L_14 = Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_inline((&V_2), Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_RuntimeMethod_var);
				V_3 = L_14;
			}
			try
			{// begin try (depth: 2)
				{
					// if (!this.InvokeMethod(invocationContext))
					InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_15 = V_3;
					bool L_16;
					L_16 = ConduitDispatcher_InvokeMethod_m2FA25297950DBE77F729F6E0D9EE448D63612427(__this, L_15, NULL);
					if (L_16)
					{
						goto IL_0056_2;
					}
				}
				{
					// allSucceeded = false;
					V_1 = (bool)0;
				}

IL_0056_2:
				{
					// }
					goto IL_007a_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0058_1;
				}
				throw e;
			}

CATCH_0058_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Debug.LogError($"Failed to invoke {invocationContext.MethodInfo.Name}. {e}");
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_17 = V_3;
				NullCheck(L_17);
				MethodInfo_t* L_18;
				L_18 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
				Exception_t* L_20 = V_4;
				String_t* L_21;
				L_21 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53)), L_19, L_20, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_21, NULL);
				// allSucceeded = false;
				V_1 = (bool)0;
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_007a_1;
			}// end catch (depth: 2)

IL_007a_1:
			{
				// foreach (var invocationContext in invocationContexts)
				bool L_22;
				L_22 = Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C((&V_2), Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// return allSucceeded;
		bool L_23 = V_1;
		return L_23;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_m2FA25297950DBE77F729F6E0D9EE448D63612427 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___invocationContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var method = invocationContext.MethodInfo;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_0 = ___invocationContext0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_0, NULL);
		V_0 = L_1;
		// var formalParametersInfo = method.GetParameters();
		MethodInfo_t* L_2 = V_0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_1 = L_3;
		// var parameterObjects = new object[formalParametersInfo.Length];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = V_1;
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_2 = L_5;
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		V_3 = 0;
		goto IL_0064;
	}

IL_001b:
	{
		// if (!parameterProvider.ContainsParameter(formalParametersInfo[i]))
		RuntimeObject* L_6 = __this->___parameterProvider_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7 = V_1;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(1 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_6, L_10);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"Failed to find parameter {formalParametersInfo[i].Name} while invoking {method.Name}");
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_15);
		MethodInfo_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0, L_16, _stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_19, NULL);
		// return false;
		return (bool)0;
	}

IL_004f:
	{
		// parameterObjects[i] = parameterProvider.GetParameterValue(formalParametersInfo[i]);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_2;
		int32_t L_21 = V_3;
		RuntimeObject* L_22 = __this->___parameterProvider_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_23 = V_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(2 /* System.Object Meta.Conduit.IParameterProvider::GetParameterValue(System.Reflection.ParameterInfo) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_22, L_26);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_27);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject*)L_27);
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0064:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_29 = V_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_30 = V_1;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// if (method.IsStatic)
		MethodInfo_t* L_31 = V_0;
		NullCheck(L_31);
		bool L_32;
		L_32 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_31, NULL);
		if (!L_32)
		{
			goto IL_00a2;
		}
	}
	try
	{// begin try (depth: 1)
		// method.Invoke(null, parameterObjects.ToArray());
		MethodInfo_t* L_33 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35;
		L_35 = Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924((RuntimeObject*)L_34, Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var);
		NullCheck(L_33);
		RuntimeObject* L_36;
		L_36 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_33, NULL, L_35, NULL);
		// }
		goto IL_00a0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"Failed to invoke static method {method.Name}. {e}");
		MethodInfo_t* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		Exception_t* L_39 = V_4;
		String_t* L_40;
		L_40 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9)), L_38, L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_40, NULL);
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0113;
	}// end catch (depth: 1)

IL_00a0:
	{
		// return true;
		return (bool)1;
	}

IL_00a2:
	{
		// var allSucceeded = true;
		V_6 = (bool)1;
		// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
		RuntimeObject* L_41 = __this->___instanceResolver_2;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_42 = ___invocationContext0;
		NullCheck(L_42);
		Type_t* L_43;
		L_43 = InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0_inline(L_42, NULL);
		NullCheck(L_41);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<System.Object> Meta.Conduit.IInstanceResolver::GetObjectsOfType(System.Type) */, IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0_il2cpp_TypeInfo_var, L_41, L_43);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var, L_44);
		V_7 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0104:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_46 = V_7;
					if (!L_46)
					{
						goto IL_010f;
					}
				}
				{
					RuntimeObject* L_47 = V_7;
					NullCheck(L_47);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_47);
				}

IL_010f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f9_1;
			}

IL_00bf_1:
			{
				// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
				RuntimeObject* L_48 = V_7;
				NullCheck(L_48);
				RuntimeObject* L_49;
				L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var, L_48);
				V_8 = L_49;
			}
			try
			{// begin try (depth: 2)
				// method.Invoke(obj, parameterObjects.ToArray());
				MethodInfo_t* L_50 = V_0;
				RuntimeObject* L_51 = V_8;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53;
				L_53 = Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924((RuntimeObject*)L_52, Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var);
				NullCheck(L_50);
				RuntimeObject* L_54;
				L_54 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_50, L_51, L_53, NULL);
				// }
				goto IL_00f9_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00d9_1;
				}
				throw e;
			}

CATCH_00d9_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Debug.LogError($"Failed to invoke method {method.Name}. {e} on {obj}");
				MethodInfo_t* L_55 = V_0;
				NullCheck(L_55);
				String_t* L_56;
				L_56 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_55);
				Exception_t* L_57 = V_9;
				RuntimeObject* L_58 = V_8;
				String_t* L_59;
				L_59 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC)), L_56, L_57, L_58, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_59, NULL);
				// allSucceeded = false;
				V_6 = (bool)0;
				// continue;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00f9_1;
			}// end catch (depth: 2)

IL_00f9_1:
			{
				// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
				RuntimeObject* L_60 = V_7;
				NullCheck(L_60);
				bool L_61;
				L_61 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_60);
				if (L_61)
				{
					goto IL_00bf_1;
				}
			}
			{
				goto IL_0110;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0110:
	{
		// return allSucceeded;
		bool L_62 = V_6;
		return L_62;
	}

IL_0113:
	{
		// }
		bool L_63 = V_5;
		return L_63;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::<CompatibleInvocationContext>b__8_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___parameter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// else if (!parameters.All(parameter => this.parameterProvider.ContainsParameter(parameter)))
		RuntimeObject* L_0 = __this->___parameterProvider_3;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___parameter0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(1 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m79AA7580B95FDA470E3A01B9889FA3F022E9F6E9 (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::<ResolveInvocationContexts>b__0(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725 (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___context0, const RuntimeMethod* method) 
{
	{
		// return invocationContexts.Where(context => this.CompatibleInvocationContext(context, confidence, partial)).ToList();
		ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* L_0 = __this->___U3CU3E4__this_0;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_1 = ___context0;
		float L_2 = __this->___confidence_1;
		bool L_3 = __this->___partial_2;
		NullCheck(L_0);
		bool L_4;
		L_4 = ConduitDispatcher_CompatibleInvocationContext_m717CADD9569EC6713412E9DC5063B85433E79794(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Meta.Conduit.ConduitDispatcherFactory::.ctor(Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcherFactory__ctor_m78F277075B4DD567BC44D472104A2542EF6A003B (ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF* __this, RuntimeObject* ___instanceResolver0, RuntimeObject* ___parameterProvider1, const RuntimeMethod* method) 
{
	{
		// public ConduitDispatcherFactory(IInstanceResolver instanceResolver, IParameterProvider parameterProvider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_0 = ___instanceResolver0;
		__this->___instanceResolver_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceResolver_1), (void*)L_0);
		// this.parameterProvider = parameterProvider;
		RuntimeObject* L_1 = ___parameterProvider1;
		__this->___parameterProvider_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterProvider_2), (void*)L_1);
		// }
		return;
	}
}
// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::GetDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConduitDispatcherFactory_GetDispatcher_m149BF5389491BC19D2176AB1FACA7A8E822F31A6 (ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return instance = instance ??
		//                   new ConduitDispatcher(new ManifestLoader(), this.instanceResolver,
		//                       this.parameterProvider);
		RuntimeObject* L_0 = ((ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var))->___instance_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* L_2 = (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263*)il2cpp_codegen_object_new(ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ManifestLoader__ctor_mE8C2E5D19E871C4E0B98ECDDF40DBA686D2A8DD7(L_2, NULL);
		RuntimeObject* L_3 = __this->___instanceResolver_1;
		RuntimeObject* L_4 = __this->___parameterProvider_2;
		ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* L_5 = (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD*)il2cpp_codegen_object_new(ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConduitDispatcher__ctor_m7B2AC7A1BAF471994493C5550D26A54569D8CCEA(L_5, L_2, L_3, L_4, NULL);
		G_B2_0 = ((RuntimeObject*)(L_5));
	}

IL_001f:
	{
		RuntimeObject* L_6 = G_B2_0;
		((ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var))->___instance_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var))->___instance_0), (void*)L_6);
		return L_6;
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
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_mDACF464DC967E398A7800236196F942E02E57A56 (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnderscoreSplitter.Replace(input, "_$1");
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0;
		String_t* L_1 = ___input0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Regex_Replace_m8E802C10B5A591BEA61FC00EA8E4AF398D815A90(L_0, L_1, _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E, NULL);
		return L_2;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__ctor_m2BDFE9777FD2612F75902C79565535E98E163B8C (ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__cctor_m8AA57F5797CDD0C333E0DF185C2BD85F15F71DD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Regex UnderscoreSplitter = new Regex("(\\B[A-Z])", RegexOptions.Compiled);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896, 8, NULL);
		((ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0), (void*)L_0);
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
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodInfoU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, MethodInfo_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = ___value0;
		__this->___U3CMethodInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m519FAA352D30200AF8DD4163E27161C2E7EE8FBF (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = (1.0f);
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
// System.Void Meta.Conduit.Manifest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest__ctor_mA4CD4F6095449DDDD070C87D6DF100B0AE63034F (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* L_0 = (List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935*)il2cpp_codegen_object_new(List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752(L_0, List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752_RuntimeMethod_var);
		__this->___U3CEntitiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntitiesU3Ek__BackingField_3), (void*)L_0);
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_1 = (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2*)il2cpp_codegen_object_new(List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496(L_1, List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496_RuntimeMethod_var);
		__this->___U3CActionsU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionsU3Ek__BackingField_4), (void*)L_1);
		// private readonly Dictionary<string, List<InvocationContext>> methodLookup =
		//     new Dictionary<string, List<InvocationContext>>(StringComparer.OrdinalIgnoreCase);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline(NULL);
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_3 = (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*)il2cpp_codegen_object_new(Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7(L_3, L_2, Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7_RuntimeMethod_var);
		__this->___methodLookup_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodLookup_5), (void*)L_3);
		// public Manifest() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public Manifest() { }
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_ID_m0A3F9096ABC76B2D71CDEC1361835AC417D5C988 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_ID_mF477619E3546CA0BDF51808F7FECF35B38517FD2 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Version_mAE12E778FD90F93912A6619372926C3F9CBE0A2B (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; set; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Version_m696BA6732D2254DDB8F522DB794A02E5675F9462 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Version { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Domain_m8A2572D50639AAC7541FC6FE2572F398EFAC0C23 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Domain_m3FBF3D8A2F25DEC982D4FBB4C2F89209B2F8043B (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* Manifest_get_Entities_mEF938AEACB2917DF0BC606E8DEC2918BDF1DA9B2 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* L_0 = __this->___U3CEntitiesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Entities(System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Entities_m72AC1B8CE052846FA24A01A43C08130EA3B9F532 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* L_0 = ___value0;
		__this->___U3CEntitiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntitiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0 = __this->___U3CActionsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Actions(System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Actions_mCA16BB22E827D71AD72D10F0B1BF8215B21A2D03 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0 = ___value0;
		__this->___U3CActionsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mEE217EF238E954BAC5D52F2F4728D0B5EE7E418F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t42DACB4F4802D1C2C7DF762E704AE40CFB0B1957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Type_t* V_6 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_7 = NULL;
	MethodInfo_t* V_8 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_9 = NULL;
	ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* V_10 = NULL;
	InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* V_11 = NULL;
	int32_t V_12 = 0;
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* V_13 = NULL;
	String_t* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* G_B21_0 = NULL;
	ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* G_B21_1 = NULL;
	Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* G_B20_0 = NULL;
	ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* G_B20_1 = NULL;
	Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* G_B25_0 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* G_B25_1 = NULL;
	Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* G_B24_0 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* G_B24_1 = NULL;
	{
		// var resolvedAll = true;
		V_0 = (bool)1;
		// foreach (var action in this.Actions)
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0;
		L_0 = Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C L_1;
		L_1 = List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07(L_0, List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0209:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60((&V_1), Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01fb_1;
			}

IL_0013_1:
			{
				// foreach (var action in this.Actions)
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_2;
				L_2 = Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_inline((&V_1), Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
				V_2 = L_2;
				// var lastPeriod = action.ID.LastIndexOf('.');
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_3 = V_2;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_3, NULL);
				NullCheck(L_4);
				int32_t L_5;
				L_5 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_4, ((int32_t)46), NULL);
				V_3 = L_5;
				// if (lastPeriod <= 0)
				int32_t L_6 = V_3;
				if ((((int32_t)L_6) > ((int32_t)0)))
				{
					goto IL_0049_1;
				}
			}
			{
				// Debug.LogError($"Invalid Action ID: {action.ID}");
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_7, NULL);
				String_t* L_9;
				L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_9, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_01fb_1;
			}

IL_0049_1:
			{
				// var typeName = action.ID.Substring(0, lastPeriod);
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_10 = V_2;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_10, NULL);
				int32_t L_12 = V_3;
				NullCheck(L_11);
				String_t* L_13;
				L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, 0, L_12, NULL);
				// var qualifiedTypeName = $"{typeName},{action.Assembly}";
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_14 = V_2;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(L_14, NULL);
				String_t* L_16;
				L_16 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_13, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_15, NULL);
				V_4 = L_16;
				// var method = action.ID.Substring(lastPeriod + 1);
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_17 = V_2;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_17, NULL);
				int32_t L_19 = V_3;
				NullCheck(L_18);
				String_t* L_20;
				L_20 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_18, ((int32_t)il2cpp_codegen_add(L_19, 1)), NULL);
				V_5 = L_20;
				// var targetType = Type.GetType(qualifiedTypeName);
				String_t* L_21 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = il2cpp_codegen_get_type(L_21, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var);
				V_6 = L_22;
				// if (targetType == null)
				Type_t* L_23 = V_6;
				bool L_24;
				L_24 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_23, (Type_t*)NULL, NULL);
				if (!L_24)
				{
					goto IL_00a3_1;
				}
			}
			{
				// Debug.LogError($"Failed to resolve type: {qualifiedTypeName}");
				String_t* L_25 = V_4;
				String_t* L_26;
				L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_25, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_26, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_01fb_1;
			}

IL_00a3_1:
			{
				// var types = new Type[action.Parameters.Count];
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_27 = V_2;
				NullCheck(L_27);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_28;
				L_28 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_27, NULL);
				NullCheck(L_28);
				int32_t L_29;
				L_29 = List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_inline(L_28, List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_30 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)L_29);
				V_7 = L_30;
				// for (var i = 0; i < action.Parameters.Count; i++)
				V_12 = 0;
				goto IL_00f5_1;
			}

IL_00ba_1:
			{
				// var manifestParameter = action.Parameters[i];
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_31 = V_2;
				NullCheck(L_31);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_32;
				L_32 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_31, NULL);
				int32_t L_33 = V_12;
				NullCheck(L_32);
				ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_34;
				L_34 = List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73(L_32, L_33, List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73_RuntimeMethod_var);
				V_13 = L_34;
				// var fullTypeName = $"{manifestParameter.QualifiedTypeName},{manifestParameter.TypeAssembly}";
				ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_35 = V_13;
				NullCheck(L_35);
				String_t* L_36;
				L_36 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(L_35, NULL);
				ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_37 = V_13;
				NullCheck(L_37);
				String_t* L_38;
				L_38 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(L_37, NULL);
				String_t* L_39;
				L_39 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_36, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_38, NULL);
				V_14 = L_39;
				// types[i] = Type.GetType(fullTypeName);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = V_7;
				int32_t L_41 = V_12;
				String_t* L_42 = V_14;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = il2cpp_codegen_get_type(L_42, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var);
				NullCheck(L_40);
				ArrayElementTypeCheck (L_40, L_43);
				(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Type_t*)L_43);
				// for (var i = 0; i < action.Parameters.Count; i++)
				int32_t L_44 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_44, 1));
			}

IL_00f5_1:
			{
				// for (var i = 0; i < action.Parameters.Count; i++)
				int32_t L_45 = V_12;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_46 = V_2;
				NullCheck(L_46);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_47;
				L_47 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_46, NULL);
				NullCheck(L_47);
				int32_t L_48;
				L_48 = List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_inline(L_47, List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var);
				if ((((int32_t)L_45) < ((int32_t)L_48)))
				{
					goto IL_00ba_1;
				}
			}
			{
				// var targetMethod = targetType.GetMethod(method,
				//     BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static, null, CallingConventions.Any,
				//     types, null);
				Type_t* L_49 = V_6;
				String_t* L_50 = V_5;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_51 = V_7;
				NullCheck(L_49);
				MethodInfo_t* L_52;
				L_52 = Type_GetMethod_mA605A28A04232563F51674827C52C17447DE686F(L_49, L_50, ((int32_t)28), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, 3, L_51, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
				V_8 = L_52;
				// if (targetMethod == null)
				MethodInfo_t* L_53 = V_8;
				bool L_54;
				L_54 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_53, (MethodInfo_t*)NULL, NULL);
				if (!L_54)
				{
					goto IL_013d_1;
				}
			}
			{
				// Debug.LogError($"Failed to resolve method {method}.");
				String_t* L_55 = V_5;
				String_t* L_56;
				L_56 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB, L_55, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_56, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_01fb_1;
			}

IL_013d_1:
			{
				// var attributes = targetMethod.GetCustomAttributes(typeof(ConduitActionAttribute), false);
				MethodInfo_t* L_57 = V_8;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
				NullCheck(L_57);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60;
				L_60 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_57, L_59, (bool)0);
				V_9 = L_60;
				// if (attributes.Length == 0)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = V_9;
				NullCheck(L_61);
				if ((((RuntimeArray*)L_61)->max_length))
				{
					goto IL_016e_1;
				}
			}
			{
				// Debug.LogError($"{targetMethod} - Did not have expected Conduit attribute");
				MethodInfo_t* L_62 = V_8;
				String_t* L_63;
				L_63 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A, L_62, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_63, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_01fb_1;
			}

IL_016e_1:
			{
				// var actionAttribute = attributes.First() as ConduitActionAttribute;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_9;
				RuntimeObject* L_65;
				L_65 = Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A((RuntimeObject*)L_64, Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_RuntimeMethod_var);
				V_10 = ((ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03*)IsInstClass((RuntimeObject*)L_65, ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_il2cpp_TypeInfo_var));
				// var invocationContext = new InvocationContext()
				// {
				//     Type = targetType,
				//     MethodInfo = targetMethod,
				//     MinConfidence = actionAttribute.MinConfidence,
				//     MaxConfidence = actionAttribute.MaxConfidence,
				//     ValidatePartial = actionAttribute.ValidatePartial
				// };
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_66 = (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05*)il2cpp_codegen_object_new(InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_il2cpp_TypeInfo_var);
				NullCheck(L_66);
				InvocationContext__ctor_m519FAA352D30200AF8DD4163E27161C2E7EE8FBF(L_66, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_67 = L_66;
				Type_t* L_68 = V_6;
				NullCheck(L_67);
				InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2_inline(L_67, L_68, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_69 = L_67;
				MethodInfo_t* L_70 = V_8;
				NullCheck(L_69);
				InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD_inline(L_69, L_70, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_71 = L_69;
				ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* L_72 = V_10;
				NullCheck(L_72);
				float L_73;
				L_73 = ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593_inline(L_72, NULL);
				NullCheck(L_71);
				InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A_inline(L_71, L_73, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_74 = L_71;
				ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* L_75 = V_10;
				NullCheck(L_75);
				float L_76;
				L_76 = ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4_inline(L_75, NULL);
				NullCheck(L_74);
				InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B_inline(L_74, L_76, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_77 = L_74;
				ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* L_78 = V_10;
				NullCheck(L_78);
				bool L_79;
				L_79 = ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C_inline(L_78, NULL);
				NullCheck(L_77);
				InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151_inline(L_77, L_79, NULL);
				V_11 = L_77;
				// if (!this.methodLookup.ContainsKey(action.Name))
				Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_80 = __this->___methodLookup_5;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_81 = V_2;
				NullCheck(L_81);
				String_t* L_82;
				L_82 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_81, NULL);
				NullCheck(L_80);
				bool L_83;
				L_83 = Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05(L_80, L_82, Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
				if (L_83)
				{
					goto IL_01e3_1;
				}
			}
			{
				// this.methodLookup.Add(action.Name, new List<InvocationContext>());
				Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_84 = __this->___methodLookup_5;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_85 = V_2;
				NullCheck(L_85);
				String_t* L_86;
				L_86 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_85, NULL);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_87 = (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*)il2cpp_codegen_object_new(List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_il2cpp_TypeInfo_var);
				NullCheck(L_87);
				List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19(L_87, List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19_RuntimeMethod_var);
				NullCheck(L_84);
				Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3(L_84, L_86, L_87, Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3_RuntimeMethod_var);
			}

IL_01e3_1:
			{
				// this.methodLookup[action.Name].Add(invocationContext);
				Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_88 = __this->___methodLookup_5;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_89 = V_2;
				NullCheck(L_89);
				String_t* L_90;
				L_90 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_89, NULL);
				NullCheck(L_88);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_91;
				L_91 = Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2(L_88, L_90, Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_92 = V_11;
				NullCheck(L_91);
				List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_inline(L_91, L_92, List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_RuntimeMethod_var);
			}

IL_01fb_1:
			{
				// foreach (var action in this.Actions)
				bool L_93;
				L_93 = Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F((&V_1), Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
				if (L_93)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0217;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0217:
	{
		// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
		//              invocationContext.Count > 1))
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_94 = __this->___methodLookup_5;
		NullCheck(L_94);
		ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* L_95;
		L_95 = Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162(L_94, Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_96 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1;
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_97 = L_96;
		G_B20_0 = L_97;
		G_B20_1 = L_95;
		if (L_97)
		{
			G_B21_0 = L_97;
			G_B21_1 = L_95;
			goto IL_0241;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* L_98 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_99 = (Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270*)il2cpp_codegen_object_new(Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		Func_2__ctor_m432DB5C28CB7298129A6B0F1DB39BA9E8CAD62B0(L_99, L_98, (intptr_t)((void*)U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097_RuntimeMethod_var), NULL);
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_100 = L_99;
		((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1), (void*)L_100);
		G_B21_0 = L_100;
		G_B21_1 = G_B20_1;
	}

IL_0241:
	{
		RuntimeObject* L_101;
		L_101 = Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mEE217EF238E954BAC5D52F2F4728D0B5EE7E418F(G_B21_1, G_B21_0, Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mEE217EF238E954BAC5D52F2F4728D0B5EE7E418F_RuntimeMethod_var);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator() */, IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45_il2cpp_TypeInfo_var, L_101);
		V_15 = L_102;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0285:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_103 = V_15;
					if (!L_103)
					{
						goto IL_0290;
					}
				}
				{
					RuntimeObject* L_104 = V_15;
					NullCheck(L_104);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_104);
				}

IL_0290:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_027a_1;
			}

IL_024f_1:
			{
				// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_105 = V_15;
				NullCheck(L_105);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_106;
				L_106 = InterfaceFuncInvoker0< List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current() */, IEnumerator_1_t42DACB4F4802D1C2C7DF762E704AE40CFB0B1957_il2cpp_TypeInfo_var, L_105);
				// invocationContext.Sort((one, two) =>
				//     two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_107 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_2;
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_108 = L_107;
				G_B24_0 = L_108;
				G_B24_1 = L_106;
				if (L_108)
				{
					G_B25_0 = L_108;
					G_B25_1 = L_106;
					goto IL_0275_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
				U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* L_109 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_110 = (Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31*)il2cpp_codegen_object_new(Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31_il2cpp_TypeInfo_var);
				NullCheck(L_110);
				Comparison_1__ctor_m11C7DD22C1DA71649A92EBEA62081415CB2C004C(L_110, L_109, (intptr_t)((void*)U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143_RuntimeMethod_var), NULL);
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_111 = L_110;
				((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_2 = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_2), (void*)L_111);
				G_B25_0 = L_111;
				G_B25_1 = G_B24_1;
			}

IL_0275_1:
			{
				NullCheck(G_B25_1);
				List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F(G_B25_1, G_B25_0, List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F_RuntimeMethod_var);
			}

IL_027a_1:
			{
				// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_112 = V_15;
				NullCheck(L_112);
				bool L_113;
				L_113 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_112);
				if (L_113)
				{
					goto IL_024f_1;
				}
			}
			{
				goto IL_0291;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0291:
	{
		// return resolvedAll;
		bool L_114 = V_0;
		return L_114;
	}
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_mC6DF421521703AC270FF5A020986E656134A5ADA (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.methodLookup.ContainsKey(action);
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_0 = __this->___methodLookup_5;
		String_t* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05(L_0, L_1, Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Manifest_GetInvocationContexts_mD55F56E02DC319F285D9416971B166E6E73994E1 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___actionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.methodLookup[actionId];
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_0 = __this->___methodLookup_5;
		String_t* L_1 = ___actionId0;
		NullCheck(L_0);
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_2;
		L_2 = Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2(L_0, L_1, Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
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
// System.Void Meta.Conduit.Manifest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDF83326D0111EEEBD9AB2263E3BCD8BE8CA6723F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* L_0 = (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD*)il2cpp_codegen_object_new(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0E8534585ABCD4490AB269E0D350DB556F3D91FE(L_0, NULL);
		((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E8534585ABCD4490AB269E0D350DB556F3D91FE (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest/<>c::<ResolveActions>b__22_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097 (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ___invocationContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invocationContext.Count > 1))
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_0 = ___invocationContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_inline(L_0, List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Meta.Conduit.Manifest/<>c::<ResolveActions>b__22_1(Meta.Conduit.InvocationContext,Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143 (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___one0, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___two1, const RuntimeMethod* method) 
{
	{
		// two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_0 = ___two1;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_0, NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		NullCheck(L_2);
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_3 = ___one0;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_3, NULL);
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length))));
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
// System.Void Meta.Conduit.ManifestAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction__ctor_m406A3E3CB03CF6A304E5248E4934C727B82EBEB7 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*)il2cpp_codegen_object_new(List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE(L_0, List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE_RuntimeMethod_var);
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_4), (void*)L_1);
		// public ManifestAction() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestAction() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_ID_m94AE5F1C628A7C7ECFF09A42D13BEEC11400E0A4 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Assembly_mD0EA127C575BD7F40830AD655372AB4FADA47EA9 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAssemblyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAssemblyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Name_m85B1DBDFF1E6E615715BA72BCA43D97C69CAE969 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Parameters_m4AD720908CE992D19479CFEAE8A4A8BC57A22E8C (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_DeclaringTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_DeclaringTypeName_mFEA041F27226F59D39257BEBA5F44E324C3B7340 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string DeclaringTypeName => ID.Substring(0, ID.LastIndexOf('.'));
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		String_t* L_1;
		L_1 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_1, ((int32_t)46), NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, 0, L_2, NULL);
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Aliases_m5BA89B1A096390813883D046ABB2BD88149EDD85 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m505EA67DDA91903753A21F58F2B936531B4C2EF0 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* V_0 = NULL;
	{
		// return obj is ManifestAction other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056*)IsInstClass((RuntimeObject*)L_0, ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056_il2cpp_TypeInfo_var));
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_2 = V_0;
		bool L_3;
		L_3 = ManifestAction_Equals_mC26F1EE6632BEADDF6581680E6FADDEBC44E83FE(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestAction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestAction_GetHashCode_m7254D05085579D35CBB44F3BAC68CCB67FE5614A (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_2;
		L_2 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Parameters.GetHashCode();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_6;
		L_6 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7)), ((int32_t)31))), L_9));
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mC26F1EE6632BEADDF6581680E6FADDEBC44E83FE (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m167216DA4A56D16696360355AF3632745D927349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.ID == other.ID && this.Assembly == other.Assembly && this.Name == other.Name && this.Parameters.SequenceEqual(other.Parameters) && this.Aliases.SequenceEqual(other.Aliases);
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_12;
		L_12 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_13 = ___other0;
		NullCheck(L_13);
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_14;
		L_14 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m167216DA4A56D16696360355AF3632745D927349(L_12, L_14, Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m167216DA4A56D16696360355AF3632745D927349_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16;
		L_16 = ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_17 = ___other0;
		NullCheck(L_17);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
		L_18 = ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline(L_17, NULL);
		bool L_19;
		L_19 = Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C(L_16, L_18, Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var);
		return L_19;
	}

IL_005e:
	{
		return (bool)0;
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
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_ID_mEE5BBBA1EA192153FF8767AF434A797885E73759 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Type_mA82E4595E6AF4C572E43F4C65CE43A41320BA143 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Name_mA050E2846B0A61FF801ECD3CB7B345ADA3CD3B48 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CValuesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Values(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Values_mD7EB0D3A711231329B2EEF2B89B2640993AFF3BF (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CValuesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m650A221AD49E471360B9A78A73B111F9741E7C69 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* V_0 = NULL;
	{
		// return obj is ManifestEntity other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938*)IsInstClass((RuntimeObject*)L_0, ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938_il2cpp_TypeInfo_var));
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_2 = V_0;
		bool L_3;
		L_3 = ManifestEntity_Equals_m63E5B6F11C9814DB0C9E37E81C8F9215CF3D4AA8(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEntity_GetHashCode_m37CE6D0987096AFC3983E6E5E462B12164AF723D (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Type.GetHashCode();
		String_t* L_2;
		L_2 = ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Values.GetHashCode();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
		L_6 = ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7));
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m63E5B6F11C9814DB0C9E37E81C8F9215CF3D4AA8 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ID == other.ID && Type == other.Type && Name == other.Name &&
		//        this.Values.SequenceEqual(other.Values);
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_13 = ___other0;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C(L_12, L_14, Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity__ctor_mEDA41116EB93F323CDBE36D83DC0DFFC476AA3BD (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CValuesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_3), (void*)L_0);
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
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* ManifestLoader_LoadManifest_m9CFBB0923E620C2445D699A7AE4F00CC197113D9 (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* __this, String_t* ___manifestLocalPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m4D14576527FB8957BB3BFF0CF8AD36031F9CFB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t73A696B3FD14CEB9054963740E9AEDD059B29DB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* G_B7_0 = NULL;
	Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* G_B6_0 = NULL;
	{
		// Debug.Log($"Loaded Conduit manifest from Resources/{manifestLocalPath}");
		String_t* L_0 = ___manifestLocalPath0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// int extIndex = manifestLocalPath.LastIndexOf('.');
		String_t* L_2 = ___manifestLocalPath0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_2, ((int32_t)46), NULL);
		V_0 = L_3;
		// string ignoreEnd = extIndex == -1 ? manifestLocalPath : manifestLocalPath.Substring(0, extIndex);
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = ___manifestLocalPath0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, L_6, NULL);
		G_B3_0 = L_7;
		goto IL_0028;
	}

IL_0027:
	{
		String_t* L_8 = ___manifestLocalPath0;
		G_B3_0 = L_8;
	}

IL_0028:
	{
		// TextAsset jsonFile = Resources.Load<TextAsset>(ignoreEnd);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_9;
		L_9 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A(G_B3_0, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		V_1 = L_9;
		// if (jsonFile == null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.LogError($"Conduit Error - No Manifest found at Resources/{manifestLocalPath}");
		String_t* L_12 = ___manifestLocalPath0;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_13, NULL);
		// return null;
		return (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF*)NULL;
	}

IL_0049:
	{
		// string rawJson = jsonFile.text;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_14, NULL);
		// var manifest = JsonMapper.ToObject<Manifest>(rawJson);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t73A696B3FD14CEB9054963740E9AEDD059B29DB0_il2cpp_TypeInfo_var);
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_16;
		L_16 = JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m4D14576527FB8957BB3BFF0CF8AD36031F9CFB16(L_15, JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m4D14576527FB8957BB3BFF0CF8AD36031F9CFB16_RuntimeMethod_var);
		// if (manifest.ResolveActions())
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_17 = L_16;
		NullCheck(L_17);
		bool L_18;
		L_18 = Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845(L_17, NULL);
		G_B6_0 = L_17;
		if (!L_18)
		{
			G_B7_0 = L_17;
			goto IL_0067;
		}
	}
	{
		// Debug.Log($"Successfully Loaded Conduit manifest");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF, NULL);
		return G_B6_0;
	}

IL_0067:
	{
		// Debug.LogError($"Fail to resolve actions from Conduit manifest");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B, NULL);
		// return manifest;
		return G_B7_0;
	}
}
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mE8C2E5D19E871C4E0B98ECDDF40DBA686D2A8DD7 (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* __this, const RuntimeMethod* method) 
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
// System.Void Meta.Conduit.ManifestParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter__ctor_mF735BD664B0DC87DE7FA9C03F061D85EF53BDE38 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public ManifestParameter() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestParameter() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_Name_m23911DEC06D8394D6DC4BEDF0727C90206BB28F7 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// get => name;
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Name_m99C46CA954D6B71CBE9878663AF08CC904268833 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => name = ConduitUtilities.DelimitWithUnderscores(value).ToLower();
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_DelimitWithUnderscores_mDACF464DC967E398A7800236196F942E02E57A56(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->___U3CInternalNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_InternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_InternalName_mE3035CAE72CADCC5D4234F880CFE2400F541D7B9 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CInternalNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInternalNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedName_m6585115B189CA4B902BD0E44B22A4D6F75436F9A (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CQualifiedNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQualifiedNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var lastPeriod = QualifiedTypeName.LastIndexOf('.');
		String_t* L_0;
		L_0 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_0, ((int32_t)46), NULL);
		V_0 = L_1;
		// if (lastPeriod < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0018:
	{
		// var entityName = QualifiedTypeName.Substring(lastPeriod + 1);
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		V_1 = L_6;
		// var lastPlus = entityName.LastIndexOf('+');
		String_t* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_7, ((int32_t)43), NULL);
		V_2 = L_8;
		// if (lastPlus < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// return entityName;
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0036:
	{
		// return entityName.Substring(lastPlus + 1);
		String_t* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		return L_13;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->___U3CTypeAssemblyU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_TypeAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_TypeAssembly_m63A5FA2620F66CE3D96A3960AD3D724AA8A5D423 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeAssemblyU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeAssemblyU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedTypeNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedTypeName_mF751499C3F32153BF1C93F749B75747A06B45541 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CQualifiedTypeNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQualifiedTypeNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Aliases_mA7913F0DD3ACE9C9142EE200857E4A092B9B2B12 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m6C31FD83374072C31D2F313F47B9ED1B986537C4 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* V_0 = NULL;
	{
		// return obj is ManifestParameter other && this.Equals(other);
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E*)IsInstClass((RuntimeObject*)L_0, ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_il2cpp_TypeInfo_var));
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_2 = V_0;
		bool L_3;
		L_3 = ManifestParameter_Equals_mCBB6851B7DB3A7CBF0568C4BA28AE610ACB7BDBA(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestParameter_GetHashCode_m73A19158865C7DC6F7AA92EFDFF78C8224ACFD8B (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + name.GetHashCode();
		String_t* L_0 = __this->___name_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + InternalName.GetHashCode();
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + QualifiedName.GetHashCode();
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + TypeAssembly.GetHashCode();
		String_t* L_6;
		L_6 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + QualifiedTypeName.GetHashCode();
		String_t* L_8;
		L_8 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5)), ((int32_t)31))), L_7)), ((int32_t)31))), L_9)), ((int32_t)31))), L_11));
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_mCBB6851B7DB3A7CBF0568C4BA28AE610ACB7BDBA (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(this.InternalName, other.InternalName) && Equals(this.QualifiedName, other.QualifiedName) &&
		//        Equals(this.EntityType, other.EntityType) && this.Aliases.SequenceEqual(other.Aliases) &&
		//        Equals(this.TypeAssembly, other.TypeAssembly) &&
		//        Equals(this.QualifiedTypeName, other.QualifiedTypeName);
		String_t* L_0;
		L_0 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(L_1, NULL);
		bool L_3;
		L_3 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(L_5, NULL);
		bool L_7;
		L_7 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5(L_9, NULL);
		bool L_11;
		L_11 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_13 = ___other0;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C(L_12, L_14, Enumerable_SequenceEqual_TisString_t_mFA0069CE282A89BDB6D4F592FCA028B0ACB37C3C_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_17 = ___other0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(L_17, NULL);
		bool L_19;
		L_19 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_20;
		L_20 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_21 = ___other0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(L_21, NULL);
		bool L_23;
		L_23 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_20, L_22, NULL);
		return L_23;
	}

IL_0071:
	{
		return (bool)0;
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
// System.Void Meta.Conduit.ParameterProvider::Populate(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_Populate_mB2189E75384B80783A7A5CDD09072285BCBA4DD0 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___actualParameters0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterToRoleMap1, const RuntimeMethod* method) 
{
	{
		// this.ActualParameters = actualParameters;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___actualParameters0;
		__this->___ActualParameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActualParameters_0), (void*)L_0);
		// this.parameterToRoleMap = parameterToRoleMap;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___parameterToRoleMap1;
		__this->___parameterToRoleMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterToRoleMap_1), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::ContainsParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_ContainsParameter_m72F38237F008638B03D1A12DBD486BF4CC17F193 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___parameter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (ActualParameters.ContainsKey(parameter.Name) &&
		//         this.parameterToRoleMap.ContainsKey(parameter.Name) &&
		//         ActualParameters[parameter.Name].GetType() == parameter.ParameterType) ||
		//        this.SupportedSpecializedParameter(parameter);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___ActualParameters_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___parameter0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = __this->___parameterToRoleMap_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = ___parameter0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_4, L_6, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = __this->___ActualParameters_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_9 = ___parameter0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_9);
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_8, L_10, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = ___parameter0;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0051;
		}
	}

IL_0049:
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_16 = ___parameter0;
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(7 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_16);
		return L_17;
	}

IL_0051:
	{
		return (bool)1;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetParameterValue(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterValue_mF28FBFA51D6D593BB76F2C46170A29EC189E0118 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var formalParameterName = formalParameter.Name;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___formalParameter0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (!this.ActualParameters.ContainsKey(formalParameterName))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = __this->___ActualParameters_0;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, L_3, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		// if (!this.parameterToRoleMap.ContainsKey(formalParameterName))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = __this->___parameterToRoleMap_1;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_5, L_6, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError($"Parameter {formalParameterName} is missing");
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B, L_8, _stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_9, NULL);
		// return false;
		bool L_10 = ((bool)0);
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_003f:
	{
		// formalParameterName = this.parameterToRoleMap[formalParameterName];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = __this->___parameterToRoleMap_1;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_12, L_13, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_0 = L_14;
	}

IL_004c:
	{
		// if (this.ActualParameters.TryGetValue(formalParameterName, out var parameterValue))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = __this->___ActualParameters_0;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_15, L_16, (&V_1), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00ee;
		}
	}
	{
		// if (formalParameter.ParameterType == typeof(string))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_18 = ___formalParameter0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// return parameterValue;
		RuntimeObject* L_23 = V_1;
		return L_23;
	}

IL_0078:
	{
		// else if (formalParameter.ParameterType.IsEnum)
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_24 = ___formalParameter0;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_24);
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_25);
		if (!L_26)
		{
			goto IL_00bb;
		}
	}
	try
	{// begin try (depth: 1)
		// return Enum.Parse(formalParameter.ParameterType, parameterValue.ToString(), true);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_27 = ___formalParameter0;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_27);
		RuntimeObject* L_29 = V_1;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_28, L_30, (bool)1, NULL);
		V_2 = L_31;
		goto IL_0106;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009a;
		}
		throw e;
	}

CATCH_009a:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// var error =
		//     $"Failed to cast {parameterValue} to enum of type {formalParameter.ParameterType}. {e}";
		RuntimeObject* L_32 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_33 = ___formalParameter0;
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		Exception_t* L_35 = V_3;
		String_t* L_36;
		L_36 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF7EFBD8BC034142848E4C19607C01A22400D9AE)), L_32, L_34, L_35, NULL);
		// Debug.LogError(error);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_36, NULL);
		// return false;
		bool L_37 = ((bool)0);
		RuntimeObject* L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)), &L_37);
		V_2 = L_38;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	}// end catch (depth: 1)

IL_00bb:
	{
	}
	try
	{// begin try (depth: 1)
		// return Convert.ChangeType(parameterValue, formalParameter.ParameterType);
		RuntimeObject* L_39 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_40 = ___formalParameter0;
		NullCheck(L_40);
		Type_t* L_41;
		L_41 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_40);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_42;
		L_42 = Convert_ChangeType_m6017C38CD5EA925943B6E047F20CE06E1807D033(L_39, L_41, NULL);
		V_2 = L_42;
		goto IL_0106;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cb;
		}
		throw e;
	}

CATCH_00cb:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// var error = $"Failed to convert {parameterValue} to {formalParameter.ParameterType}. {e}";
		RuntimeObject* L_43 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_44 = ___formalParameter0;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_44);
		Exception_t* L_46 = V_4;
		String_t* L_47;
		L_47 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral022184FDCAF79E398879AD81666844068AE208D4)), L_43, L_45, L_46, NULL);
		// Debug.LogError(error);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_47, NULL);
		// return false;
		bool L_48 = ((bool)0);
		RuntimeObject* L_49 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)), &L_48);
		V_2 = L_49;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	}// end catch (depth: 1)

IL_00ee:
	{
		// else if (SupportedSpecializedParameter(formalParameter))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_50 = ___formalParameter0;
		bool L_51;
		L_51 = VirtualFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(7 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_50);
		if (!L_51)
		{
			goto IL_00ff;
		}
	}
	{
		// return this.GetSpecializedParameter(formalParameter);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_52 = ___formalParameter0;
		RuntimeObject* L_53;
		L_53 = VirtualFuncInvoker1< RuntimeObject*, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(8 /* System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_52);
		return L_53;
	}

IL_00ff:
	{
		// return false;
		bool L_54 = ((bool)0);
		RuntimeObject* L_55 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_54);
		return L_55;
	}

IL_0106:
	{
		// }
		RuntimeObject* L_56 = V_2;
		return L_56;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_SupportedSpecializedParameter_m7543E82589ABDB7BC0246D001E63E22B6CC8DCE1 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetSpecializedParameter_m178B6D8BE1EE989169B2584631E6D1CD9DC309C7 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___formalParameter0, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParameterProvider_GetSpecializedParameter_m178B6D8BE1EE989169B2584631E6D1CD9DC309C7_RuntimeMethod_var)));
	}
}
// System.Void Meta.Conduit.ParameterProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__ctor_m2E35E89D2FEF5150874D7FC8C5A634D8733238BD (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, object> ActualParameters = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->___ActualParameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActualParameters_0), (void*)L_0);
		// private Dictionary<string, string> parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___parameterToRoleMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterToRoleMap_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CIntentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0 = __this->___U3CActionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->___U3CInternalNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodInfoU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedTypeNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->___U3CTypeAssemblyU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, MethodInfo_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = ___value0;
		__this->___U3CMethodInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CValuesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
