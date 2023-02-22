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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_t9882348D647A3D54BEE7E7F4E7F45D40BA286E19;
// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8;
// System.Action`3<System.Int32,System.Object,System.Single>
struct Action_3_t041F9EB77535247CDCF010C1F285CCCEFE9E2F04;
// Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>
struct ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Dictionary_2_tC75B15D6BE3719CB8EEF14082A03D3744B788B4F;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct IEnumerable_1_t9DA571C4219FFE40F4FF537163DC276EA50FA3EC;
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct IEnumerator_1_t93E14B096084E8B22B1F5F83D95AF5C8D28602A8;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t5F1247344658B7771C2EFA9A56F3195BF2EFD422;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB;
// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>
struct List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887;
// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_tC18B126FC489EF27D70BE515FE2369EB10D5FD4C;
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA;
// Facebook.WitAi.Data.RingBuffer`1/OnDataAdded<System.Byte>
struct OnDataAdded_tA1B6B469DA2CE7D92A1CCE1FB72982569A6EB1CE;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A;
// Facebook.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8;
// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Data.VoiceSession>
struct UnityEvent_1_t70DABB339DA7F86BA7CB2E82237E4A59E0116A0F;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>
struct UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_t1AF040B2AD528722FB8E4086468EBB1F6221F86E;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50;
// UnityEngine.Events.UnityEvent`3<System.Byte[],System.Int32,System.Int32>
struct UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_tD7E14BDD38F12B63EFECBD1604C666F9AF100EAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.String>
struct WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73;
// Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>[]
struct ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Component>[]
struct SlotU5BU5D_t77D4E8A0D0306C32C9CE0497F8584A1D53D52593;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Facebook.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Facebook.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Facebook.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75;
// Facebook.WitAi.Data.Entities.WitDynamicEntitiesData[]
struct WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C;
// Facebook.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D;
// Facebook.WitAi.Data.Entities.WitEntity[]
struct WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65;
// Facebook.WitAi.Data.Entities.WitEntityKeyword[]
struct WitEntityKeywordU5BU5D_tEE7E30A869C03107C32A2F75DE4C9A22654C1BB8;
// Facebook.WitAi.Data.Entities.WitEntityRole[]
struct WitEntityRoleU5BU5D_t9BF80EDFBF052E416D7367E4384AEEE319BC7812;
// Facebook.WitAi.Data.Intents.WitIntent[]
struct WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB;
// Facebook.WitAi.Data.Traits.WitTrait[]
struct WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31;
// Facebook.WitAi.Data.Traits.WitTraitValue[]
struct WitTraitValueU5BU5D_t33ABAE3E649C0BE3A3118382D056F5F917876281;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Facebook.WitAi.Data.AudioBuffer
struct AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB;
// Facebook.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA;
// Facebook.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928;
// Facebook.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Facebook.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Facebook.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Facebook.WitAi.Data.Entities.DynamicEntityDataProvider
struct DynamicEntityDataProvider_t75E28DA9F9EB4A2ADD4D10BA0A93A7DFF2D3771D;
// Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry
struct DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF;
// Facebook.WitAi.Data.Entities.DynamicEntityProvider
struct DynamicEntityProvider_tFFF7C1EDB71E7D0B59C0535069D251E269943FB7;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Facebook.WitAi.Events.EventCategoryAttribute
struct EventCategoryAttribute_t210AD3A4DAA563C640DC8461C79D539F0FD33B3A;
// Facebook.WitAi.Events.EventRegistry
struct EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Facebook.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Facebook.WitAi.Interfaces.IAudioEventProvider
struct IAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA;
// Facebook.WitAi.Interfaces.IAudioInputEvents
struct IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE;
// Facebook.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t762B3E7D2DA1201E5678485D344611A85532EB82;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_t517E6F2EE8F9893031C1FC89D0ABE3D932C5F372;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3;
// Facebook.WitAi.Interfaces.ITranscriptionEvent
struct ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813;
// Facebook.WitAi.Interfaces.ITranscriptionEventProvider
struct ITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Facebook.WitAi.Lib.JSONParseException
struct JSONParseException_tE9A684A4E112603C9915D5992AF55A9EE3C360E6;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Facebook.WitAi.Lib.Mic
struct Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Facebook.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Facebook.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
struct OutOfScopeUtteranceHandler_t6D1CE6F4B6A31C7CBD4E195FAADF88D3829984D1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
struct RegisteredDynamicEntityKeyword_t4CCDD49954200F42B6CD3FBC3CDB4867AB70D662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Facebook.WitAi.CallbackHandlers.SimpleIntentHandler
struct SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1;
// Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler
struct SimpleStringEntityHandler_tB95E77E27B20E13042B687D717A45B509D5166DC;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7;
// Facebook.WitAi.Utilities.StringEvent
struct StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76;
// Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Facebook.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74;
// Facebook.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5;
// Facebook.WitAi.VoiceService
struct VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99;
// Facebook.WitAi.Data.VoiceSession
struct VoiceSession_t91CD2D9FDE6B8FFF927125FF65929D922D08FE34;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// Facebook.WitAi.Data.Configuration.WitApplication
struct WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C;
// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E;
// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD;
// Facebook.WitAi.Configuration.WitConfigurationData
struct WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897;
// Facebook.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054;
// Facebook.WitAi.Data.Entities.WitDynamicEntitiesData
struct WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564;
// Facebook.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB;
// Facebook.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0;
// Facebook.WitAi.Data.Entities.WitEntity
struct WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892;
// Facebook.WitAi.Data.Entities.WitEntityData
struct WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC;
// Facebook.WitAi.Data.Entities.WitEntityFloatData
struct WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B;
// Facebook.WitAi.Data.Entities.WitEntityIntData
struct WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4;
// Facebook.WitAi.Data.Entities.WitEntityKeyword
struct WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5;
// Facebook.WitAi.Data.Entities.WitEntityRole
struct WitEntityRole_t47AC15DDC8D9F37888EB6747B6ABC142F0589453;
// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34;
// Facebook.WitAi.Data.WitFloatValue
struct WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7;
// Facebook.WitAi.Data.WitIntValue
struct WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0;
// Facebook.WitAi.Data.Intents.WitIntent
struct WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1;
// Facebook.WitAi.Data.Intents.WitIntentData
struct WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD;
// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C;
// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4;
// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49;
// Facebook.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F;
// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05;
// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t739569309AE400E308EB8DD834327086751C855C;
// Facebook.WitAi.Lib.WitResponseData
struct WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899;
// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD;
// Facebook.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B;
// Facebook.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB;
// Facebook.WitAi.WitResponseReference
struct WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E;
// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3;
// Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t7462383F5C63BB5F2B1A153A6E2F4506651692DB;
// Facebook.WitAi.Data.WitStringValue
struct WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141;
// Facebook.WitAi.Data.Traits.WitTrait
struct WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B;
// Facebook.WitAi.Data.Traits.WitTraitValue
struct WitTraitValue_tE5A6615AB4B4D4AEB582B44BCE876BB7C3CA0874;
// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E;
// Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4;
// Facebook.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8;
// Facebook.WitAi.Data.WitValue
struct WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32;
// Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28
struct U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68;
// Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A;
// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75;
// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC;

IL2CPP_EXTERN_C RuntimeClass* Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Endian_t69A803DA82819F6CAAEF4B6C5A7605D4155CDDAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDynamicEntitiesProvider_t517E6F2EE8F9893031C1FC89D0ABE3D932C5F372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA414C8405AD2AB4B5AC23942210B16227AC96D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF1F4F17D3837E1B1E52ACBC529204A77CBA5264E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0116812C84CAD7B4AAD7CE2415EECA7B219CCE24;
IL2CPP_EXTERN_C String_t* _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316;
IL2CPP_EXTERN_C String_t* _stringLiteral09D70245F3500CCD8237A0140F73164F286401D5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral22270319A52B6C9B9967E9291B9A79B116526038;
IL2CPP_EXTERN_C String_t* _stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F;
IL2CPP_EXTERN_C String_t* _stringLiteral29565B729B35A8E8D5DDB32B75BCCD98FDE1E555;
IL2CPP_EXTERN_C String_t* _stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252;
IL2CPP_EXTERN_C String_t* _stringLiteral3709814F28060CE673AD4F414B802CCF4136017F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53;
IL2CPP_EXTERN_C String_t* _stringLiteral7E8A7E993C20AB23FD1E1CAA1EDDBE7308416AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF3768A048853CBDA2EB8478E42FD206D4D43CA;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C;
IL2CPP_EXTERN_C String_t* _stringLiteralAE87ACD283F2574F5A4042DAC6F7CB75B4435C6C;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC88ED3BAC6612646AAAC68CE58E03895D796AB;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCA2F8DC7D017F687F668AF24B7973D521D7DA59C;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CBE5FC06436E56C8CFCEAB27D9AC06FDFE22BD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_OnMicSampleReady_mB265E6217A8363F12D629B4E94305A85067DC915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCDDAA1E220C8ADDA93A4114CB7DE9A426E7F393C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_m3EBDA5BA8379D2D3A635E7F7E9D8DA7CA025BE26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_mB1CAD0DAE81B96F14AD3668167409A47F8014E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25FAB013E20621ED9156A5D8602E37E6979CCDCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA9A5A358DC9B8FDB1068C40F3BAB23EF6A0238ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8D1B5472B8F40695AD00E362DF9B0CCE4F919D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCF943AD32D06568583B7FFE86E7B03141DBB9AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD56264A4D181F6240745145CE039E2D7750313AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF7A02DF9A86E636BD6D5A7A15909E8D00DE1F94B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_m3C71609D8891DE604DE357C8B6B826AC3E3E6BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0_m673A39138A6446859E53511CFC5B82DD87713A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m67036BF86398F726BAAE19DBF491CA4939343295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4CCCD59E97F72FE069AAFD946983DDD5D8591FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m636A52CA0FB7DD3D32CED251F24A66CDC3633C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m08573E18EBB7AF825DD42B2D856CB66586748D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m67821A662F596F3835E10453D4DA3BF09534DEDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCD55A9AA3D76949311C46085B8D9B6B74C50CE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_mAE8F4F3ED5F08BE06AEC51B3EDACC70A2ACF9C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_m8AE87A78189331FAA8521B0546C6E0506D19C416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m8F655F9490AD0EF34E869F0F56FC5CF4D820456E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_m6DDA6D25E9C2C761669D21ECF1CDB28F9F1ECF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mF3D19B89844D6E8BFA1115CAA60A5BDD5EF1F8DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_Reset_mEDCD035F288EAA30930D5BB6453FD6FF36522240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m54C04F9311681276CC1D797397DF7C4EAD36BCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m82EF064C3F391450633B61DC457C604BC39EC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB74215E6225CB1B138606454239119399A04B561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF1711B9510903376FFBCE71915269EBEB4013A32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m0578E7356B07DFFDCAF708E79C51CB74AF894D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m44BCC95882F476B59D585A3BB4B76287A13C528F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75;
struct WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C;
struct WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D;
struct WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65;
struct WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB;
struct WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95* ____entries_1;
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
	KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59* ____values_8;
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t77D4E8A0D0306C32C9CE0497F8584A1D53D52593* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
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

// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>
struct List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitEntityKeywordU5BU5D_tEE7E30A869C03107C32A2F75DE4C9A22654C1BB8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitEntityKeywordU5BU5D_tEE7E30A869C03107C32A2F75DE4C9A22654C1BB8* ___s_emptyArray_5;
};

// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA  : public RuntimeObject
{
	// System.Int64 Facebook.WitAi.Data.RingBuffer`1/Marker::bufferDataIndex
	int64_t ___bufferDataIndex_0;
	// System.Int32 Facebook.WitAi.Data.RingBuffer`1/Marker::index
	int32_t ___index_1;
	// Facebook.WitAi.Data.RingBuffer`1<T> Facebook.WitAi.Data.RingBuffer`1/Marker::ringBuffer
	RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* ___ringBuffer_2;
};

// Facebook.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88  : public RuntimeObject
{
	// Facebook.WitAi.Data.RingBuffer`1/OnDataAdded<T> Facebook.WitAi.Data.RingBuffer`1::OnDataAddedEvent
	OnDataAdded_tA1B6B469DA2CE7D92A1CCE1FB72982569A6EB1CE* ___OnDataAddedEvent_0;
	// T[] Facebook.WitAi.Data.RingBuffer`1::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.Int32 Facebook.WitAi.Data.RingBuffer`1::bufferIndex
	int32_t ___bufferIndex_2;
	// System.Int64 Facebook.WitAi.Data.RingBuffer`1::bufferDataLength
	int64_t ___bufferDataLength_3;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	int32_t ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* ___entities_11;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	float ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* ___entities_11;
};

// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.String>
struct WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	String_t* ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* ___entities_11;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Facebook.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA  : public RuntimeObject
{
	// System.Int32 Facebook.WitAi.Data.AudioBufferConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_0;
	// System.Single Facebook.WitAi.Data.AudioBufferConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_1;
};

// Facebook.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0  : public RuntimeObject
{
	// Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent Facebook.WitAi.Events.AudioBufferEvents::OnSampleReady
	OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* ___OnSampleReady_0;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.AudioBufferEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* ___OnMicLevelChanged_1;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.AudioBufferEvents::OnByteDataReady
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataReady_2;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.AudioBufferEvents::OnByteDataSent
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataSent_3;
};

// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.AudioEncoding::encoding
	String_t* ___encoding_0;
	// System.Int32 Facebook.WitAi.Data.AudioEncoding::bits
	int32_t ___bits_1;
	// System.Int32 Facebook.WitAi.Data.AudioEncoding::samplerate
	int32_t ___samplerate_2;
	// Facebook.WitAi.Data.AudioEncoding/Endian Facebook.WitAi.Data.AudioEncoding::endian
	int32_t ___endian_3;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Facebook.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9  : public RuntimeObject
{
	// System.Single Facebook.WitAi.CallbackHandlers.ConfidenceRange::minConfidence
	float ___minConfidence_0;
	// System.Single Facebook.WitAi.CallbackHandlers.ConfidenceRange::maxConfidence
	float ___maxConfidence_1;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.CallbackHandlers.ConfidenceRange::onWithinConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onWithinConfidenceRange_2;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.CallbackHandlers.ConfidenceRange::onOutsideConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onOutsideConfidenceRange_3;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Facebook.WitAi.Events.EventRegistry
struct EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Facebook.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Facebook.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____overriddenCallbacksHash_1;
};

// Facebook.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4  : public RuntimeObject
{
	// System.String Facebook.WitAi.CallbackHandlers.FormattedValueEvents::format
	String_t* ___format_0;
	// Facebook.WitAi.CallbackHandlers.ValueEvent Facebook.WitAi.CallbackHandlers.FormattedValueEvents::onFormattedValueEvent
	ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* ___onFormattedValueEvent_1;
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

// Facebook.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C  : public RuntimeObject
{
	// System.String Facebook.WitAi.CallbackHandlers.ValuePathMatcher::path
	String_t* ___path_0;
	// Facebook.WitAi.Data.WitValue Facebook.WitAi.CallbackHandlers.ValuePathMatcher::witValueReference
	WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* ___witValueReference_1;
	// System.Boolean Facebook.WitAi.CallbackHandlers.ValuePathMatcher::contentRequired
	bool ___contentRequired_2;
	// Facebook.WitAi.CallbackHandlers.MatchMethod Facebook.WitAi.CallbackHandlers.ValuePathMatcher::matchMethod
	int32_t ___matchMethod_3;
	// Facebook.WitAi.CallbackHandlers.ComparisonMethod Facebook.WitAi.CallbackHandlers.ValuePathMatcher::comparisonMethod
	int32_t ___comparisonMethod_4;
	// System.String Facebook.WitAi.CallbackHandlers.ValuePathMatcher::matchValue
	String_t* ___matchValue_5;
	// System.Double Facebook.WitAi.CallbackHandlers.ValuePathMatcher::floatingPointComparisonTolerance
	double ___floatingPointComparisonTolerance_6;
	// Facebook.WitAi.CallbackHandlers.ConfidenceRange[] Facebook.WitAi.CallbackHandlers.ValuePathMatcher::confidenceRanges
	ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* ___confidenceRanges_7;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::pathReference
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___pathReference_8;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::confidencePathReference
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___confidencePathReference_9;
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

// Facebook.WitAi.Data.VoiceSession
struct VoiceSession_t91CD2D9FDE6B8FFF927125FF65929D922D08FE34  : public RuntimeObject
{
	// Facebook.WitAi.VoiceService Facebook.WitAi.Data.VoiceSession::service
	VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* ___service_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.VoiceSession::response
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response_1;
	// System.Boolean Facebook.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;
};

// Facebook.WitAi.Configuration.WitConfigurationData
struct WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897  : public RuntimeObject
{
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.Configuration.WitConfigurationData::witConfiguration
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___witConfiguration_0;
};

// Facebook.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity> Facebook.WitAi.Data.Entities.WitDynamicEntities::entities
	List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* ___entities_0;
};

// Facebook.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.Entities.WitDynamicEntity::entity
	String_t* ___entity_0;
	// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword> Facebook.WitAi.Data.Entities.WitDynamicEntity::keywords
	List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* ___keywords_1;
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

// Facebook.WitAi.Data.Entities.WitEntityKeyword
struct WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.Entities.WitEntityKeyword::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.List`1<System.String> Facebook.WitAi.Data.Entities.WitEntityKeyword::synonyms
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};

// Facebook.WitAi.Data.Entities.WitEntityRole
struct WitEntityRole_t47AC15DDC8D9F37888EB6747B6ABC142F0589453  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.Entities.WitEntityRole::id
	String_t* ___id_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityRole::name
	String_t* ___name_1;
};

// Facebook.WitAi.Data.Intents.WitIntentData
struct WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD  : public RuntimeObject
{
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Intents.WitIntentData::responseNode
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___responseNode_0;
	// System.String Facebook.WitAi.Data.Intents.WitIntentData::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Intents.WitIntentData::name
	String_t* ___name_2;
	// System.Single Facebook.WitAi.Data.Intents.WitIntentData::confidence
	float ___confidence_3;
};

// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49  : public RuntimeObject
{
	// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider Facebook.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_0;
	// System.Int32 Facebook.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_1;
	// System.String Facebook.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_2;
	// System.String Facebook.WitAi.Configuration.WitRequestOptions::requestID
	String_t* ___requestID_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.Configuration.WitRequestOptions::additionalParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___additionalParameters_4;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_t9882348D647A3D54BEE7E7F4E7F45D40BA286E19* ___onResponse_5;
};

// Facebook.WitAi.Lib.WitResponseJson
struct WitResponseJson_t735C123BF19EB5B92B621556405F7C50751252FD  : public RuntimeObject
{
};

// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB  : public RuntimeObject
{
};

// Facebook.WitAi.WitResponseReference
struct WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E  : public RuntimeObject
{
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.WitResponseReference::child
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___child_0;
	// System.String Facebook.WitAi.WitResponseReference::path
	String_t* ___path_1;
};

// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3  : public RuntimeObject
{
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___witConfiguration_0;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Facebook.WitAi.Interfaces.CustomTranscriptionProvider Facebook.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* ___customTranscriptionProvider_10;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;
};

// Facebook.WitAi.Data.Traits.WitTraitValue
struct WitTraitValue_tE5A6615AB4B4D4AEB582B44BCE876BB7C3CA0874  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.Traits.WitTraitValue::id
	String_t* ___id_0;
	// System.String Facebook.WitAi.Data.Traits.WitTraitValue::value
	String_t* ___value_1;
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

// Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28
struct U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68  : public RuntimeObject
{
	// System.Int32 Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Facebook.WitAi.Data.AudioBuffer Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::<>4__this
	AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* ___U3CU3E4__this_2;
	// UnityEngine.Component Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::component
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component_3;
};

// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A  : public RuntimeObject
{
	// Facebook.WitAi.Data.Entities.WitDynamicEntity Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::dynamicEntity
	WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___dynamicEntity_0;
};

// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::entityName
	String_t* ___entityName_0;
};

// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC  : public RuntimeObject
{
	// System.String Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::entityName
	String_t* ___entityName_0;
};

// Facebook.WitAi.Data.Entities.WitEntity/Fields
struct Fields_t7542C9E3FE2EF7822C73CE979E8967A8C04DE05B  : public RuntimeObject
{
};

// Facebook.WitAi.Data.Intents.WitIntent/Fields
struct Fields_t531888B77BDD470F6A800A3E7C9E3301BF76377E  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitEntityKeyword>
struct Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value_1;
};

// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Data.VoiceSession>
struct UnityEvent_1_t70DABB339DA7F86BA7CB2E82237E4A59E0116A0F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>
struct UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_t1AF040B2AD528722FB8E4086468EBB1F6221F86E  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<System.Byte[],System.Int32,System.Int32>
struct UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
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

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5  : public EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD
{
	// Facebook.WitAi.Events.WitResponseEvent Facebook.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* ___OnResponse_7;
	// Facebook.WitAi.Events.WitResponseEvent Facebook.WitAi.Events.VoiceEvents::OnPartialResponse
	WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* ___OnPartialResponse_8;
	// Facebook.WitAi.Events.WitValidationEvent Facebook.WitAi.Events.VoiceEvents::OnValidatePartialResponse
	WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8* ___OnValidatePartialResponse_9;
	// Facebook.WitAi.Events.WitErrorEvent Facebook.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* ___OnError_10;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborting_11;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborted_12;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRequestCompleted_13;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* ___OnMicLevelChanged_14;
	// Facebook.WitAi.Events.WitRequestOptionsEvent Facebook.WitAi.Events.VoiceEvents::OnRequestOptionSetup
	WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F* ___OnRequestOptionSetup_15;
	// Facebook.WitAi.Events.WitRequestCreatedEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* ___OnRequestCreated_16;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStartListening_17;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListening_18;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToInactivity_19;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToTimeout_20;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToDeactivation_21;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMicDataSent_22;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMinimumWakeThresholdHit_23;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onPartialTranscription_24;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onFullTranscription_25;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataReady_26;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataSent_27;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Facebook.WitAi.Data.Configuration.WitApplication
struct WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C  : public WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897
{
	// System.String Facebook.WitAi.Data.Configuration.WitApplication::name
	String_t* ___name_1;
	// System.String Facebook.WitAi.Data.Configuration.WitApplication::id
	String_t* ___id_2;
	// System.String Facebook.WitAi.Data.Configuration.WitApplication::lang
	String_t* ___lang_3;
	// System.Boolean Facebook.WitAi.Data.Configuration.WitApplication::isPrivate
	bool ___isPrivate_4;
	// System.String Facebook.WitAi.Data.Configuration.WitApplication::createdAt
	String_t* ___createdAt_5;
};

// Facebook.WitAi.Data.Entities.WitEntity
struct WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892  : public WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897
{
	// System.String Facebook.WitAi.Data.Entities.WitEntity::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntity::name
	String_t* ___name_2;
	// System.String[] Facebook.WitAi.Data.Entities.WitEntity::lookups
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lookups_3;
	// Facebook.WitAi.Data.Entities.WitEntityRole[] Facebook.WitAi.Data.Entities.WitEntity::roles
	WitEntityRoleU5BU5D_t9BF80EDFBF052E416D7367E4384AEEE319BC7812* ___roles_4;
	// Facebook.WitAi.Data.Entities.WitEntityKeyword[] Facebook.WitAi.Data.Entities.WitEntity::keywords
	WitEntityKeywordU5BU5D_tEE7E30A869C03107C32A2F75DE4C9A22654C1BB8* ___keywords_5;
};

// Facebook.WitAi.Data.Entities.WitEntityData
struct WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC  : public WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73
{
};

// Facebook.WitAi.Data.Entities.WitEntityFloatData
struct WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B  : public WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3
{
};

// Facebook.WitAi.Data.Entities.WitEntityIntData
struct WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4  : public WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07
{
};

// Facebook.WitAi.Data.Intents.WitIntent
struct WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1  : public WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897
{
	// System.String Facebook.WitAi.Data.Intents.WitIntent::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Intents.WitIntent::name
	String_t* ___name_2;
	// Facebook.WitAi.Data.Entities.WitEntity[] Facebook.WitAi.Data.Intents.WitIntent::entities
	WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65* ___entities_3;
};

// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05  : public WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB
{
	// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray::m_List
	List_1_tC18B126FC489EF27D70BE515FE2369EB10D5FD4C* ___m_List_0;
};

// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t739569309AE400E308EB8DD834327086751C855C  : public WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB
{
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass::m_Dict
	Dictionary_2_tC75B15D6BE3719CB8EEF14082A03D3744B788B4F* ___m_Dict_0;
};

// Facebook.WitAi.Lib.WitResponseData
struct WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899  : public WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB
{
	// System.String Facebook.WitAi.Lib.WitResponseData::m_Data
	String_t* ___m_Data_0;
};

// Facebook.WitAi.Data.Traits.WitTrait
struct WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B  : public WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897
{
	// System.String Facebook.WitAi.Data.Traits.WitTrait::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Traits.WitTrait::name
	String_t* ___name_2;
	// Facebook.WitAi.Data.Traits.WitTraitValue[] Facebook.WitAi.Data.Traits.WitTrait::values
	WitTraitValueU5BU5D_t33ABAE3E649C0BE3A3118382D056F5F917876281* ___values_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// Facebook.WitAi.Events.EventCategoryAttribute
struct EventCategoryAttribute_t210AD3A4DAA563C640DC8461C79D539F0FD33B3A  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Facebook.WitAi.Events.EventCategoryAttribute::Category
	String_t* ___Category_0;
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

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// Facebook.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C  : public UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD
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

// Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.Utilities.StringEvent
struct StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E  : public UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F
{
};

// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34  : public UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50
{
};

// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4  : public UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F
{
};

// Facebook.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F  : public UnityEvent_1_t1AF040B2AD528722FB8E4086468EBB1F6221F86E
{
};

// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD  : public UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366
{
};

// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8  : public UnityEvent_1_t70DABB339DA7F86BA7CB2E82237E4A59E0116A0F
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

// Facebook.WitAi.Lib.JSONParseException
struct JSONParseException_tE9A684A4E112603C9915D5992AF55A9EE3C360E6  : public Exception_t
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

// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8  : public MulticastDelegate_t
{
};

// Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>
struct ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Predicate`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>
struct Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// Facebook.WitAi.Data.Entities.WitDynamicEntitiesData
struct WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.WitDynamicEntitiesData::entities
	WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* ___entities_4;
};

// Facebook.WitAi.Data.WitValue
struct WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Facebook.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::reference
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___reference_5;
};

// Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Facebook.WitAi.Data.WitFloatValue
struct WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7  : public WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32
{
	// System.Single Facebook.WitAi.Data.WitFloatValue::equalityTolerance
	float ___equalityTolerance_6;
};

// Facebook.WitAi.Data.WitIntValue
struct WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0  : public WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32
{
};

// Facebook.WitAi.Data.WitStringValue
struct WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141  : public WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32
{
};

// Facebook.WitAi.Data.AudioBuffer
struct AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Facebook.WitAi.Data.AudioBuffer::alwaysRecording
	bool ___alwaysRecording_6;
	// Facebook.WitAi.Data.AudioBufferConfiguration Facebook.WitAi.Data.AudioBuffer::audioBufferConfiguration
	AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* ___audioBufferConfiguration_7;
	// Facebook.WitAi.Events.AudioBufferEvents Facebook.WitAi.Data.AudioBuffer::events
	AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* ___events_8;
	// Facebook.WitAi.Interfaces.IAudioInputSource Facebook.WitAi.Data.AudioBuffer::_micInput
	RuntimeObject* ____micInput_9;
	// Facebook.WitAi.Data.RingBuffer`1<System.Byte> Facebook.WitAi.Data.AudioBuffer::_micDataBuffer
	RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* ____micDataBuffer_10;
	// System.Byte[] Facebook.WitAi.Data.AudioBuffer::_byteDataBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteDataBuffer_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Facebook.WitAi.Data.AudioBuffer::_activeRecorders
	HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* ____activeRecorders_12;
};

struct AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields
{
	// Facebook.WitAi.Data.AudioBuffer Facebook.WitAi.Data.AudioBuffer::_instance
	AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* ____instance_4;
	// System.Boolean Facebook.WitAi.Data.AudioBuffer::_instanceInit
	bool ____instanceInit_5;
};

// Facebook.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::onMicAudioLevelChanged
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* ___onMicAudioLevelChanged_4;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStartedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMicStartedListening_5;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMicStoppedListening_6;
	// Facebook.WitAi.Interfaces.IAudioInputEvents Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::_events
	RuntimeObject* ____events_7;
};

// Facebook.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Facebook.WitAi.Interfaces.CustomTranscriptionProvider::overrideMicLevel
	bool ___overrideMicLevel_4;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::onPartialTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onPartialTranscription_5;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::onFullTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onFullTranscription_6;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::onStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStoppedListening_7;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::onStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStartListening_8;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::onMicLevelChanged
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* ___onMicLevelChanged_9;
	// System.String Facebook.WitAi.Interfaces.CustomTranscriptionProvider::<LastTranscription>k__BackingField
	String_t* ___U3CLastTranscriptionU3Ek__BackingField_10;
};

// Facebook.WitAi.Data.Entities.DynamicEntityDataProvider
struct DynamicEntityDataProvider_t75E28DA9F9EB4A2ADD4D10BA0A93A7DFF2D3771D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Data.Entities.WitDynamicEntitiesData[] Facebook.WitAi.Data.Entities.DynamicEntityDataProvider::entitiesDefinition
	WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C* ___entitiesDefinition_4;
};

// Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry
struct DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::entities
	WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* ___entities_5;
};

struct DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields
{
	// Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::instance
	DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* ___instance_4;
};

// Facebook.WitAi.Data.Entities.DynamicEntityProvider
struct DynamicEntityProvider_tFFF7C1EDB71E7D0B59C0535069D251E269943FB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.DynamicEntityProvider::entities
	WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* ___entities_4;
};

// Facebook.WitAi.Lib.Mic
struct Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Facebook.WitAi.Lib.Mic::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_4;
	// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Lib.Mic::<AudioEncoding>k__BackingField
	AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* ___U3CAudioEncodingU3Ek__BackingField_5;
	// System.Single[] Facebook.WitAi.Lib.Mic::<Sample>k__BackingField
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CSampleU3Ek__BackingField_6;
	// System.Int32 Facebook.WitAi.Lib.Mic::<SampleDurationMS>k__BackingField
	int32_t ___U3CSampleDurationMSU3Ek__BackingField_7;
	// UnityEngine.AudioClip Facebook.WitAi.Lib.Mic::<AudioClip>k__BackingField
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___U3CAudioClipU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> Facebook.WitAi.Lib.Mic::_devices
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____devices_9;
	// System.Int32 Facebook.WitAi.Lib.Mic::<CurrentDeviceIndex>k__BackingField
	int32_t ___U3CCurrentDeviceIndexU3Ek__BackingField_10;
	// System.Int32 Facebook.WitAi.Lib.Mic::m_SampleCount
	int32_t ___m_SampleCount_11;
	// System.Action Facebook.WitAi.Lib.Mic::OnStartRecording
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStartRecording_12;
	// System.Action Facebook.WitAi.Lib.Mic::OnStartRecordingFailed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStartRecordingFailed_13;
	// System.Action`3<System.Int32,System.Single[],System.Single> Facebook.WitAi.Lib.Mic::OnSampleReady
	Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* ___OnSampleReady_14;
	// System.Action Facebook.WitAi.Lib.Mic::OnStopRecording
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStopRecording_15;
	// System.Boolean Facebook.WitAi.Lib.Mic::_showLog
	bool ____showLog_17;
};

struct Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0_StaticFields
{
	// Facebook.WitAi.Lib.Mic Facebook.WitAi.Lib.Mic::m_Instance
	Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0* ___m_Instance_16;
};

// Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
struct RegisteredDynamicEntityKeyword_t4CCDD49954200F42B6CD3FBC3CDB4867AB70D662  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::entity
	String_t* ___entity_4;
	// Facebook.WitAi.Data.Entities.WitEntityKeyword Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::keyword
	WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword_5;
};

// Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onPartialTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onPartialTranscription_4;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onFullTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onFullTranscription_5;
	// Facebook.WitAi.Interfaces.ITranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::_events
	RuntimeObject* ____events_6;
};

// Facebook.WitAi.VoiceService
struct VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Facebook.WitAi.VoiceService::conduitParameterProvider
	RuntimeObject* ___conduitParameterProvider_5;
	// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::events
	VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___events_6;
	// Meta.Conduit.IConduitDispatcher Facebook.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_7;
};

// Facebook.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.VoiceService Facebook.WitAi.CallbackHandlers.WitResponseHandler::wit
	VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* ___wit_4;
};

// Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t7462383F5C63BB5F2B1A153A6E2F4506651692DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity::entityName
	String_t* ___entityName_4;
	// System.String[] Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity::keywords
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords_5;
};

// Facebook.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
struct OutOfScopeUtteranceHandler_t6D1CE6F4B6A31C7CBD4E195FAADF88D3829984D1  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// UnityEngine.Events.UnityEvent Facebook.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::onOutOfDomain
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onOutOfDomain_5;
};

// Facebook.WitAi.CallbackHandlers.SimpleIntentHandler
struct SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// System.String Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::intent
	String_t* ___intent_5;
	// System.Single Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::confidence
	float ___confidence_6;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::onIntentTriggered
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onIntentTriggered_7;
	// System.Boolean Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_8;
	// Facebook.WitAi.CallbackHandlers.ConfidenceRange[] Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::confidenceRanges
	ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* ___confidenceRanges_9;
};

// Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler
struct SimpleStringEntityHandler_tB95E77E27B20E13042B687D717A45B509D5166DC  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// System.String Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::intent
	String_t* ___intent_5;
	// System.String Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::entity
	String_t* ___entity_6;
	// System.Single Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::confidence
	float ___confidence_7;
	// System.String Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::format
	String_t* ___format_8;
	// Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::onIntentEntityTriggered
	StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* ___onIntentEntityTriggered_9;
};

// Facebook.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// System.String Facebook.WitAi.CallbackHandlers.WitResponseMatcher::intent
	String_t* ___intent_5;
	// System.Single Facebook.WitAi.CallbackHandlers.WitResponseMatcher::confidenceThreshold
	float ___confidenceThreshold_6;
	// Facebook.WitAi.CallbackHandlers.ValuePathMatcher[] Facebook.WitAi.CallbackHandlers.WitResponseMatcher::valueMatchers
	ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* ___valueMatchers_7;
	// Facebook.WitAi.CallbackHandlers.FormattedValueEvents[] Facebook.WitAi.CallbackHandlers.WitResponseMatcher::formattedValueEvents
	FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188* ___formattedValueEvents_8;
	// Facebook.WitAi.CallbackHandlers.MultiValueEvent Facebook.WitAi.CallbackHandlers.WitResponseMatcher::onMultiValueEvent
	MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* ___onMultiValueEvent_9;
};

struct WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields
{
	// System.Text.RegularExpressions.Regex Facebook.WitAi.CallbackHandlers.WitResponseMatcher::valueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___valueRegex_10;
};

// Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// System.String Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_5;
	// System.Boolean Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_6;
	// System.Boolean Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_7;
	// Facebook.WitAi.Utilities.StringEvent Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* ___onUtteranceMatched_8;
	// System.Text.RegularExpressions.Regex Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex_9;
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
// Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>[]
struct ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* m_Items[1];

	inline ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* value)
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
// Facebook.WitAi.Data.Entities.WitDynamicEntitiesData[]
struct WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C  : public RuntimeArray
{
	ALIGN_FIELD (8) WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* m_Items[1];

	inline WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D  : public RuntimeArray
{
	ALIGN_FIELD (8) WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* m_Items[1];

	inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.Data.Entities.WitEntity[]
struct WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65  : public RuntimeArray
{
	ALIGN_FIELD (8) WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892* m_Items[1];

	inline WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.Data.Intents.WitIntent[]
struct WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB  : public RuntimeArray
{
	ALIGN_FIELD (8) WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1* m_Items[1];

	inline WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.Data.Traits.WitTrait[]
struct WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31  : public RuntimeArray
{
	ALIGN_FIELD (8) WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B* m_Items[1];

	inline WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC  : public RuntimeArray
{
	ALIGN_FIELD (8) ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* m_Items[1];

	inline ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188  : public RuntimeArray
{
	ALIGN_FIELD (8) FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* m_Items[1];

	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75  : public RuntimeArray
{
	ALIGN_FIELD (8) ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* m_Items[1];

	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m941EF00E4EF658BB1461C8BD9E6527F9E495DCFE_gshared (UnityEvent_3_tD7E14BDD38F12B63EFECBD1604C666F9AF100EAA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m4DF8F60E9446A6DA0A67F2DBEEBF612A0FEF68FF_gshared (Action_3_t041F9EB77535247CDCF010C1F285CCCEFE9E2F04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.RingBuffer`1/Marker<T> Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB_gshared (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteDataWriter__ctor_mE9DD0B50E51106D6C68F58DDC009C0CDA810CE44_gshared (ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>::ReadIntoWriters(Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0_gshared (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* __this, ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C* ___writers0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.RingBuffer`1<System.Byte>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F_gshared (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.RingBuffer`1<System.Byte>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B_gshared (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* __this, uint8_t ___data0, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.RingBuffer`1/Marker<T> Facebook.WitAi.Data.RingBuffer`1<System.Byte>::CreateMarker(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_gshared (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_mBE1172303D1D1230A11FF1B8EC38110688115B78_gshared (WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* WitEntityDataBase_1_FromEntityWitResponseNode_mA2434A6859F2D25D71070D839414E7E640D2DF2F_gshared (WitEntityDataBase_1_tD992377A5996E2EC27D289A60634F3FAE327D362* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_gshared (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF_gshared (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_gshared (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557_gshared (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* WitResponseNode_Parse_m6FFC3E76C1C075E46BC04079BB9AB16693D85E3C (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitMicLevelChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMicLevelChangedEvent__ctor_m2643EEC42D8F1AF70E6173E43AA50CE55EFC01A4 (WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitByteDataEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitByteDataEvent__ctor_mB90DA13E87A0CF6C254199D39B7606F35F7A3082 (WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
inline bool HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.HashSet`1<System.String> Facebook.WitAi.Events.EventRegistry::get_OverriddenCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* EventRegistry_get_OverriddenCallbacks_m8EA6C4632BFB2007A6E3B7E05E4D3FDE4D795DAF (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Events.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_m631381374944899ECBE552E0A5A8CF8EBB617FE6 (WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitValidationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValidationEvent__ctor_m52491683D3E7B5AF970AECE8E4091F159ABC6685 (WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitErrorEvent__ctor_m2634DD9BD17142008709E54213D1A0FE6BCD07F7 (WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitRequestOptionsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptionsEvent__ctor_m822F331B9A2A66FB2D4F4080D21DAFE0EC5203D7 (WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.WitRequestCreatedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestCreatedEvent__ctor_mF51A80F06BB41FE24BF27BD3236390D438614F83 (WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.EventRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry__ctor_mB58989B296C512115B65D1544EA5A8BE2217C73E (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Byte[],System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9 (UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F*, const RuntimeMethod*))UnityEvent_3__ctor_m941EF00E4EF658BB1461C8BD9E6527F9E495DCFE_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::.ctor()
inline void UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480 (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.WitRequest>::.ctor()
inline void UnityEvent_1__ctor_m82EF064C3F391450633B61DC457C604BC39EC702 (UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t238789F4DA2D455190194173EDA6D6473BAC295F*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Configuration.WitRequestOptions>::.ctor()
inline void UnityEvent_1__ctor_mF1711B9510903376FFBCE71915269EBEB4013A32 (UnityEvent_1_t1AF040B2AD528722FB8E4086468EBB1F6221F86E* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1AF040B2AD528722FB8E4086468EBB1F6221F86E*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::.ctor()
inline void UnityEvent_1__ctor_m54C04F9311681276CC1D797397DF7C4EAD36BCD7 (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Data.VoiceSession>::.ctor()
inline void UnityEvent_1__ctor_mB74215E6225CB1B138606454239119399A04B561 (UnityEvent_1_t70DABB339DA7F86BA7CB2E82237E4A59E0116A0F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t70DABB339DA7F86BA7CB2E82237E4A59E0116A0F*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Facebook.WitAi.Interfaces.IAudioEventProvider>()
inline RuntimeObject* Component_GetComponent_TisIAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_m3EBDA5BA8379D2D3A635E7F7E9D8DA7CA025BE26 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Facebook.WitAi.Interfaces.IAudioInputEvents Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::get_AudioInputEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioEventListener_get_AudioInputEvents_m19FFDA667E1F40D1AEA02467479DE74C8483D10B (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Facebook.WitAi.Interfaces.ITranscriptionEventProvider>()
inline RuntimeObject* Component_GetComponent_TisITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_mB1CAD0DAE81B96F14AD3668167409A47F8014E4B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Facebook.WitAi.Interfaces.ITranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_TranscriptionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionEventListener_get_TranscriptionEvents_m6451529BDBDA8FC768FB7CC17B70FD5DCC2E3B61 (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Configuration.WitEndpointConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__ctor_m45851DBF1D527584556B4989BC8429E8CB543C90 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
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
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Facebook.WitAi.Data.AudioBuffer>()
inline AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* Object_FindObjectOfType_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_mAE8F4F3ED5F08BE06AEC51B3EDACC70A2ACF9C8A (const RuntimeMethod* method)
{
	return ((  AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Facebook.WitAi.Data.AudioBuffer>()
inline AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* GameObject_AddComponent_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_m3C71609D8891DE604DE357C8B6B826AC3E3E6BCA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Contains(T)
inline bool HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Facebook.WitAi.Interfaces.IAudioInputSource>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Facebook.WitAi.Lib.Mic>()
inline Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0* GameObject_AddComponent_TisMic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0_m673A39138A6446859E53511CFC5B82DD87713A71 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Data.AudioBuffer::InitializeMicDataBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_InitializeMicDataBuffer_mE4D39179AC31E90D61A11A738ECA602BE9B95788 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m456761457D50C389C47B3D27E78233649D267B93 (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m4DF8F60E9446A6DA0A67F2DBEEBF612A0FEF68FF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Facebook.WitAi.Data.AudioBuffer::StartRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StartRecording_mC997B758EDB2F101C1E1AC7D77C5509C81CAF539 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.AudioBuffer::StopRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StopRecording_m038134963603034B9C7CA94686E5E0A4E73525DD (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte> Facebook.WitAi.Data.AudioBuffer::CreateMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* AudioBuffer_CreateMarker_m8F8E7CA339181D33A0ACC1A6F4B6910457B56094 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.AudioBuffer::Convert(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_Convert_m08109F403C9AAE0FA1C791B06168FDE2C68658E6 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___samples0, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.RingBuffer`1/Marker<T> Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>::Clone()
inline Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* __this, const RuntimeMethod* method)
{
	return ((  Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* (*) (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, const RuntimeMethod*))Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>::.ctor(System.Object,System.IntPtr)
inline void ByteDataWriter__ctor_mE9DD0B50E51106D6C68F58DDC009C0CDA810CE44 (ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3*, RuntimeObject*, intptr_t, const RuntimeMethod*))ByteDataWriter__ctor_mE9DD0B50E51106D6C68F58DDC009C0CDA810CE44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>::ReadIntoWriters(Facebook.WitAi.Data.RingBuffer`1/ByteDataWriter<T>[])
inline void Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0 (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* __this, ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C* ___writers0, const RuntimeMethod* method)
{
	((  void (*) (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C*, const RuntimeMethod*))Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0_gshared)(__this, ___writers0, method);
}
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_inline (OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.RingBuffer`1<System.Byte>::.ctor(System.Int32)
inline void RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88*, int32_t, const RuntimeMethod*))RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F_gshared)(__this, ___capacity0, method);
}
// System.Void Facebook.WitAi.Data.RingBuffer`1<System.Byte>::Push(T)
inline void RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* __this, uint8_t ___data0, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88*, uint8_t, const RuntimeMethod*))RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B_gshared)(__this, ___data0, method);
}
// Facebook.WitAi.Data.RingBuffer`1/Marker<T> Facebook.WitAi.Data.RingBuffer`1<System.Byte>::CreateMarker(System.Int32)
inline Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38 (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	return ((  Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* (*) (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88*, int32_t, const RuntimeMethod*))RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_gshared)(__this, ___offset0, method);
}
// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Data.AudioBuffer::get_AudioEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* AudioBuffer_get_AudioEncoding_m943078E0DC2533FFE28042E717B55C2CB82FBE43 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Facebook.WitAi.Data.AudioBuffer::WaitForMicToStart(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_WaitForMicToStart_mB24FC93BEE8F80CB0A66CCF6054660341FF23DBC (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28__ctor_mD89031FC85AF73ECC12C11C39594FD2801CF12DA (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Remove(T)
inline bool HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.Component>::get_Count()
inline int32_t HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_inline (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.AudioBufferConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferConfiguration__ctor_mA08FE83F8B5AE429ADC0A843568613C30B7B005D (AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Events.AudioBufferEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferEvents__ctor_mAF949D0E9CBDDF4EFF56FD9A66A45052EC2DA760 (AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Component>::.ctor()
inline void HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468 (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Add(T)
inline bool HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Single Facebook.WitAi.Data.WitFloatValue::GetFloatValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WitFloatValue_GetFloatValue_mF372762C3D265206AA7C8B57049FD52078501854 (WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E (WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_m264288526BAD2486D03CB9C724275A8BBFF8A8B9 (WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* __this, const RuntimeMethod* method) ;
// System.Int32 Facebook.WitAi.Data.WitIntValue::GetIntValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitIntValue_GetIntValue_m694764F51663C086A2013B034F1A47F2195BD39C (WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.Data.WitStringValue::GetStringValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m5B80B840DF95DD62EC616011C12B5333457CCC6D (WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Facebook.WitAi.WitResponseReference Facebook.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Configuration.WitConfigurationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfigurationData__ctor_m8D4068A08641205F93EF9642BA9106B0EFD37975 (WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897* __this, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.Intents.WitIntentData Facebook.WitAi.Data.Intents.WitIntentData::FromIntentWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* WitIntentData_FromIntentWitResponseNode_mD898DAD5667EE83CED862C064635D4C42102670A (WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.Lib.WitResponseNode::op_Implicit(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseNode_op_Implicit_mBEC61604C409E23E9D4BEBA57CE513B294B68AB6 (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___d0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_mFACF5C5BC88B719671AEC348696B8ABDDE7FD800 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::Merge(Facebook.WitAi.Interfaces.IDynamicEntitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m2AD9830395640D7DE0B649A3871F59F025642FE2 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* DynamicEntityKeywordRegistry_get_Instance_m8853ADF518217D605099DE7141772E0B1545A7FB (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry>()
inline DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_m8AE87A78189331FAA8521B0546C6E0506D19C416 (const RuntimeMethod* method)
{
	return ((  DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::AddKeyword(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_AddKeyword_mB73458D3C69D7626D02CBACBD364E7F86F135D19 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, String_t* ___entityName0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::RemoveKeyword(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_RemoveKeyword_m98DFBC81E3A87E27F64C33F67BE054516815C36A (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, String_t* ___entityName0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m3BD187393EB61B4E4CDC64985BB0ED064D4E39FF (const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::RegisterDynamicEntity(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_RegisterDynamicEntity_m2DBB1B5A4F762F9CBE671D7FAB43D9018056503A (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, String_t* ___entity0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::UnregisterDynamicEntity(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mFAAE3A95793C72F21A190B0A5480DD29B649E534 (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, String_t* ___entity0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::.ctor()
inline void List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796 (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165 (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseClass__ctor_m9CBC789798C208F99B1EE6384D791A39AF77FC79 (WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::GetEnumerator()
inline Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9 (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitDynamicEntity>::Dispose()
inline void Enumerator_Dispose_mA9A5A358DC9B8FDB1068C40F3BAB23EF6A0238ED (Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitDynamicEntity>::get_Current()
inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* Enumerator_get_Current_mF7A02DF9A86E636BD6D5A7A15909E8D00DE1F94B_inline (Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71* __this, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* (*) (Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitDynamicEntity::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* WitDynamicEntity_get_AsJson_m3E898F87E1494557AC5A76A5DCFC8B1B1F91729A (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitDynamicEntity>::MoveNext()
inline bool Enumerator_MoveNext_mCF943AD32D06568583B7FFE86E7B03141DBB9AC8 (Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Data.Entities.WitDynamicEntities::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* WitDynamicEntities_get_AsJson_m8EF0C3717FA69838AF16C551C6C8A6049EA397C2 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Data.Entities.WitDynamicEntity> Facebook.WitAi.Data.Entities.WitDynamicEntities::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_GetEnumerator_m79A115440176EB7BB57EC2B84336A03C9F41C0A6 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m6F9B764F8D21DDB847D9FAF1FF2699340D73F99E (U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m503B049BA64B04367D43973DFDA18B3E5F9CAFD9 (Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6 (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::Add(T)
inline void List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_inline (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::Remove(T)
inline bool List_1_Remove_m67821A662F596F3835E10453D4DA3BF09534DEDC (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mD68EB8CF35DBEEDB63A76D2D48212966C1695ECB (U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::Find(System.Predicate`1<T>)
inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* List_1_Find_m67036BF86398F726BAAE19DBF491CA4939343295 (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A* ___match0, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_mC6FE01FD85FED5466AE52CAF3200BFAF93FA7C04 (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, String_t* ___entity0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>::Add(T)
inline void List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_inline (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* __this, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m8D0E22D4F38C1C78E58C2188BFE7862B882F10EA (U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::get_Item(System.Int32)
inline WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>::Remove(T)
inline bool List_1_Remove_m08573E18EBB7AF825DD42B2D856CB66586748D76 (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* __this, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>::get_Count()
inline int32_t List_1_get_Count_mCD55A9AA3D76949311C46085B8D9B6B74C50CE2F_inline (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m636A52CA0FB7DD3D32CED251F24A66CDC3633C11 (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>::.ctor()
inline void List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityKeyword::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityKeyword__ctor_m0F0DC376B974BD93B174E7A4D6AC604DE0BEB8FB (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_inline (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityKeyword__ctor_m428EA8D89870BEBE0C2CCFF4041C82EB3171DD6C (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_inline (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_inline (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseArray__ctor_m6D22459257B33D9C45FF0EA9619A9AA49124606D (WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>::GetEnumerator()
inline Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A List_1_GetEnumerator_m4CCCD59E97F72FE069AAFD946983DDD5D8591FD1 (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A (*) (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitEntityKeyword>::Dispose()
inline void Enumerator_Dispose_m25FAB013E20621ED9156A5D8602E37E6979CCDCB (Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitEntityKeyword>::get_Current()
inline WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* Enumerator_get_Current_mD56264A4D181F6240745145CE039E2D7750313AF_inline (Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A* __this, const RuntimeMethod* method)
{
	return ((  WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* (*) (Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Data.Entities.WitEntityKeyword::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* WitEntityKeyword_get_AsJson_mF26B952D2770B770116A8D862D1DAA6853653DC6 (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Data.Entities.WitEntityKeyword>::MoveNext()
inline bool Enumerator_MoveNext_m8D1B5472B8F40695AD00E362DF9B0CCE4F919D7C (Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.String>::.ctor()
inline void WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402 (WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*, const RuntimeMethod*))WitEntityDataBase_1__ctor_mBE1172303D1D1230A11FF1B8EC38110688115B78_gshared)(__this, method);
}
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.String>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
inline WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73* WitEntityDataBase_1_FromEntityWitResponseNode_m44BCC95882F476B59D585A3BB4B76287A13C528F (WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73* (*) (WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_mA2434A6859F2D25D71070D839414E7E640D2DF2F_gshared)(__this, ___node0, method);
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityData::op_Inequality(Facebook.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Inequality_mC5EADA586EF7358C1C5C3E530F13FCC8B030B39F (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
inline void WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893 (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_gshared)(__this, method);
}
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
inline WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* (*) (WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF_gshared)(__this, ___node0, method);
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mDA7E5EB195526CAF4EEC92686EA6DA1FF2131A05 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mF7C0A4BE6ED6E60663B359F19BD910329487820A (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
inline void WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8 (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_gshared)(__this, method);
}
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
inline WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557 (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* (*) (WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557_gshared)(__this, ___node0, method);
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_mD4249AEC5F17CFB0127B7998EC36C5D1E3CA2D15 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* ___data0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* WitResponseNode_op_Implicit_m7392348272E97DB110F9139AC4838B8FB3EF2B88 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseData__ctor_m3A5FEF3343F12DA87251CD2C8F7BDEEABB3DCA68 (WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899* __this, String_t* ___aData0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::.ctor(Facebook.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m0F22F28030E3D54891FE26BA0654012D37BCFB4E (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* ___entity0, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.Lib.WitResponseNode::op_Equality(Facebook.WitAi.Lib.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Equality_m9F1A77CB5E0EAFEFA74CEDEC43A8DA3C3568033B (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::CheckInsideRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_CheckInsideRange_mD6CBC4679B71419827151FEB27E89A03BD30BEE2 (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, float ___resultConfidence0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::CheckOutsideRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_CheckOutsideRange_m4729456664D2CCDDB0F2AFB4516DE3F5154DEC87 (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, float ___resultConfidence0, const RuntimeMethod* method) ;
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.WitResultUtilities::GetFirstIntent(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* WitResultUtilities_GetFirstIntent_mE9748A7275970EABF61BC4920BFB445857066F58 (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___witResponse0, const RuntimeMethod* method) ;
// System.String Facebook.WitAi.WitResultUtilities::GetFirstEntityValue(Facebook.WitAi.Lib.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResultUtilities_GetFirstEntityValue_m66FD91C71028FF980D19497D71F800E535EB85FC (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___witResponse0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mADFDA95EA9466ACCE74C701C74BC6C01C1BDEA82 (StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Facebook.WitAi.VoiceService>()
inline VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31 (const RuntimeMethod* method)
{
	return ((  VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF4F621DB3C8F308CF78411309EDFD1334CF9CE75 (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3 (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366* __this, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366*, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366* __this, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366*, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::IntentMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_IntentMatches_mC627F7AF4545BCC223D06C2674367446F6E98A37 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mFFD7A8502BD3EA08F7AA931E417D1C9393481512 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787 (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94 (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mBFEA1319F29D734BB9902412C9B3BD757E5B5FFB (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m39D94664E1B155931817F0C2434F2093F037CF5D (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m01E1A016568F0A2A109C5E4556505AD7188ABC85 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B (String_t* ___s0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m24721BEA88A8DC6A7438F16DF9C7F4B141BE0FF0 (MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Escape_m2E4E071ABAFAE1BF55932725F28F4194CD56D7DE (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::.ctor()
inline void UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Facebook.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_mD1D914C07A91A8D88BEEB83833BCDC9818261377 (ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mF3F63CB79A236D91609C9B7EBF293D7E6935006A (StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseJson::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* WitResponseJson_Parse_m9CDA09F8D82060410158F0CC34FF45B8B82D858A (String_t* ___aJSON0, const RuntimeMethod* method) 
{
	{
		// return WitResponseNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = WitResponseNode_Parse_m6FFC3E76C1C075E46BC04079BB9AB16693D85E3C(L_0, NULL);
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
// System.Void Facebook.WitAi.Lib.JSONParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONParseException__ctor_m13F9BDEB808AE60CABAF8E98C97AEC5EFBF7E1C6 (JSONParseException_tE9A684A4E112603C9915D5992AF55A9EE3C360E6* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONParseException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public JSONParseException(string message) : base(message) { }
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
// System.String Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_LastTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomTranscriptionProvider_get_LastTranscription_m695C1646C20991F1DFAB675A814132A93309C99F (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public string LastTranscription { get; }
		String_t* L_0 = __this->___U3CLastTranscriptionU3Ek__BackingField_10;
		return L_0;
	}
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* CustomTranscriptionProvider_get_OnPartialTranscription_mA90A9EA1679D22E084F2ABE3F0EAF0019A8E7967 (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = __this->___onPartialTranscription_5;
		return L_0;
	}
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* CustomTranscriptionProvider_get_OnFullTranscription_m77A4C689B9FB46E815AD3D2E8FE0BFA19DFD35AC (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = __this->___onFullTranscription_6;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* CustomTranscriptionProvider_get_OnStoppedListening_m4DA16EEFCA69CC4EC576EF6B0C95B42868767D28 (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListening => onStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onStoppedListening_7;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_OnStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* CustomTranscriptionProvider_get_OnStartListening_mD4C2A1B91D23A7F9BDA7B5D151EEFEB81B19CF2F (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStartListening => onStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onStartListening_8;
		return L_0;
	}
}
// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_OnMicLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* CustomTranscriptionProvider_get_OnMicLevelChanged_m8633BCED8FCDEDD4F8EC2E29C15A13DD025A6E4D (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged => onMicLevelChanged;
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_0 = __this->___onMicLevelChanged_9;
		return L_0;
	}
}
// System.Boolean Facebook.WitAi.Interfaces.CustomTranscriptionProvider::get_OverrideMicLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomTranscriptionProvider_get_OverrideMicLevel_mB8E3F4D335873FC30F949251E6BE0E6AA74FE075 (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	{
		// public bool OverrideMicLevel => overrideMicLevel;
		bool L_0 = __this->___overrideMicLevel_4;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Interfaces.CustomTranscriptionProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomTranscriptionProvider__ctor_mC9169CAC7F676545DD3BDE2AB1AE4FB3E0EA2E85 (CustomTranscriptionProvider_t2763C7AB904BFCE353D0F1956C1A8E5BE5357076* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WitTranscriptionEvent onPartialTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E*)il2cpp_codegen_object_new(WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB(L_0, NULL);
		__this->___onPartialTranscription_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPartialTranscription_5), (void*)L_0);
		// private WitTranscriptionEvent onFullTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_1 = (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E*)il2cpp_codegen_object_new(WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB(L_1, NULL);
		__this->___onFullTranscription_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFullTranscription_6), (void*)L_1);
		// private UnityEvent onStoppedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->___onStoppedListening_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStoppedListening_7), (void*)L_2);
		// private UnityEvent onStartListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->___onStartListening_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStartListening_8), (void*)L_3);
		// private WitMicLevelChangedEvent onMicLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_4 = (WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WitMicLevelChangedEvent__ctor_m2643EEC42D8F1AF70E6173E43AA50CE55EFC01A4(L_4, NULL);
		__this->___onMicLevelChanged_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicLevelChanged_9), (void*)L_4);
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
// System.Void Facebook.WitAi.Events.AudioBufferEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferEvents__ctor_mAF949D0E9CBDDF4EFF56FD9A66A45052EC2DA760 (AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_0 = (WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitMicLevelChangedEvent__ctor_m2643EEC42D8F1AF70E6173E43AA50CE55EFC01A4(L_0, NULL);
		__this->___OnMicLevelChanged_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnMicLevelChanged_1), (void*)L_0);
		// public WitByteDataEvent OnByteDataReady = new WitByteDataEvent();
		WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* L_1 = (WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E*)il2cpp_codegen_object_new(WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitByteDataEvent__ctor_mB90DA13E87A0CF6C254199D39B7606F35F7A3082(L_1, NULL);
		__this->___OnByteDataReady_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnByteDataReady_2), (void*)L_1);
		// public WitByteDataEvent OnByteDataSent = new WitByteDataEvent();
		WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* L_2 = (WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E*)il2cpp_codegen_object_new(WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitByteDataEvent__ctor_mB90DA13E87A0CF6C254199D39B7606F35F7A3082(L_2, NULL);
		__this->___OnByteDataSent_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnByteDataSent_3), (void*)L_2);
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
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_Multicast(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* currentDelegate = reinterpret_cast<OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___marker0, ___levelMax1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenInst(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	typedef void (*FunctionPointerType) (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___marker0, ___levelMax1, method);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenStatic(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___marker0, ___levelMax1, method);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenStaticInvoker(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_ClosedStaticInvoker(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenVirtual(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenInterface(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenGenericVirtual(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	GenericVirtualActionInvoker1< float >::Invoke(method, ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenGenericInterface(OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	GenericInterfaceActionInvoker1< float >::Invoke(method, ___marker0, ___levelMax1);
}
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent__ctor_m36B22939BF318603BDEF81EE26797EA463B6B35A (OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_Multicast;
}
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F (OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___marker0, ___levelMax1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::BeginInvoke(Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSampleReadyEvent_BeginInvoke_m032AA67F550E83E8BC45C9E9D8C00ED633C76D5F (OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___marker0;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___levelMax1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_EndInvoke_m1BDB65531D4FC2D029C995749905ECE349E78390 (OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Events.EventCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCategoryAttribute__ctor_m543BBC990677F27FEE474E64655D20CEAC4E4FD0 (EventCategoryAttribute_t210AD3A4DAA563C640DC8461C79D539F0FD33B3A* __this, String_t* ___category0, const RuntimeMethod* method) 
{
	{
		// public EventCategoryAttribute(string category = "")
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Category = category;
		String_t* L_0 = ___category0;
		__this->___Category_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Category_0), (void*)L_0);
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
// System.Collections.Generic.HashSet`1<System.String> Facebook.WitAi.Events.EventRegistry::get_OverriddenCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* EventRegistry_get_OverriddenCallbacks_m8EA6C4632BFB2007A6E3B7E05E4D3FDE4D795DAF (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_overriddenCallbacksHash == null)
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->____overriddenCallbacksHash_1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _overriddenCallbacksHash = new HashSet<string>(_overriddenCallbacks);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->____overriddenCallbacks_0;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62(L_2, L_1, HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		__this->____overriddenCallbacksHash_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____overriddenCallbacksHash_1), (void*)L_2);
	}

IL_0019:
	{
		// return _overriddenCallbacksHash;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = __this->____overriddenCallbacksHash_1;
		return L_3;
	}
}
// System.Void Facebook.WitAi.Events.EventRegistry::RegisterOverriddenCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry_RegisterOverriddenCallback_mF2325A75645E891F50E954AC3F1A434D88264BF8 (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, String_t* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_overriddenCallbacks.Contains(callback))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____overriddenCallbacks_0;
		String_t* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _overriddenCallbacks.Add(callback);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->____overriddenCallbacks_0;
		String_t* L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// _overriddenCallbacksHash.Add(callback);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = __this->____overriddenCallbacksHash_1;
		String_t* L_6 = ___callback0;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_5, L_6, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Events.EventRegistry::RemoveOverriddenCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry_RemoveOverriddenCallback_mC26E32BE9187276E1DEF226BD8C1B53749B8A633 (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, String_t* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_overriddenCallbacks.Contains(callback))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____overriddenCallbacks_0;
		String_t* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// _overriddenCallbacks.Remove(callback);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->____overriddenCallbacks_0;
		String_t* L_4 = ___callback0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_3, L_4, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// _overriddenCallbacksHash.Remove(callback);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = __this->____overriddenCallbacksHash_1;
		String_t* L_7 = ___callback0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA(L_6, L_7, HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.Events.EventRegistry::IsCallbackOverridden(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistry_IsCallbackOverridden_mB8CAF8EC5CFE620F00C59E6000CB24A1531772E5 (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, String_t* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return OverriddenCallbacks.Contains(callback);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0;
		L_0 = EventRegistry_get_OverriddenCallbacks_m8EA6C4632BFB2007A6E3B7E05E4D3FDE4D795DAF(__this, NULL);
		String_t* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_1, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Events.EventRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry__ctor_mB58989B296C512115B65D1544EA5A8BE2217C73E (EventRegistry_t99AFB9CB7F3AE036D371CE2385B5708CD93517AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> _overriddenCallbacks = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____overriddenCallbacks_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____overriddenCallbacks_0), (void*)L_0);
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
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* VoiceEvents_get_OnPartialTranscription_m9EE42862E01DA8C6319C4853689753E5E2CC4F10 (VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = __this->___onPartialTranscription_24;
		return L_0;
	}
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* VoiceEvents_get_OnFullTranscription_m03ED3515BF8736C1F47C04A1AB6AB33DAC084474 (VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = __this->___onFullTranscription_25;
		return L_0;
	}
}
// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.VoiceEvents::get_OnMicAudioLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* VoiceEvents_get_OnMicAudioLevelChanged_mEADAA579F48BC2C36B84B75CFBC5004F52D46356 (VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicAudioLevelChanged => OnMicLevelChanged;
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_0 = __this->___OnMicLevelChanged_14;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::get_OnMicStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* VoiceEvents_get_OnMicStartedListening_m7E72A4D0F0094AB25B853ECCCE2F8E67A9CB8A8E (VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStartedListening => OnStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnStartListening_17;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::get_OnMicStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* VoiceEvents_get_OnMicStoppedListening_mEC602DA36AF1F04806CD0E1C0DFC1614E598CDCD (VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStoppedListening => OnStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnStoppedListening_18;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Events.VoiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceEvents__ctor_m579D87AC7F6D12671ACB16CA5D35A48CA740EB7B (VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitResponseEvent OnResponse = new WitResponseEvent();
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_0 = (WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD*)il2cpp_codegen_object_new(WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitResponseEvent__ctor_m631381374944899ECBE552E0A5A8CF8EBB617FE6(L_0, NULL);
		__this->___OnResponse_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnResponse_7), (void*)L_0);
		// public WitResponseEvent OnPartialResponse = new WitResponseEvent();
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_1 = (WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD*)il2cpp_codegen_object_new(WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitResponseEvent__ctor_m631381374944899ECBE552E0A5A8CF8EBB617FE6(L_1, NULL);
		__this->___OnPartialResponse_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnPartialResponse_8), (void*)L_1);
		// public WitValidationEvent OnValidatePartialResponse = new WitValidationEvent();
		WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8* L_2 = (WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8*)il2cpp_codegen_object_new(WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitValidationEvent__ctor_m52491683D3E7B5AF970AECE8E4091F159ABC6685(L_2, NULL);
		__this->___OnValidatePartialResponse_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnValidatePartialResponse_9), (void*)L_2);
		// public WitErrorEvent OnError = new WitErrorEvent();
		WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* L_3 = (WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34*)il2cpp_codegen_object_new(WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WitErrorEvent__ctor_m2634DD9BD17142008709E54213D1A0FE6BCD07F7(L_3, NULL);
		__this->___OnError_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnError_10), (void*)L_3);
		// public UnityEvent OnAborting = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_4, NULL);
		__this->___OnAborting_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnAborting_11), (void*)L_4);
		// public UnityEvent OnAborted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_5, NULL);
		__this->___OnAborted_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnAborted_12), (void*)L_5);
		// public UnityEvent OnRequestCompleted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_6, NULL);
		__this->___OnRequestCompleted_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnRequestCompleted_13), (void*)L_6);
		// public WitMicLevelChangedEvent OnMicLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_7 = (WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WitMicLevelChangedEvent__ctor_m2643EEC42D8F1AF70E6173E43AA50CE55EFC01A4(L_7, NULL);
		__this->___OnMicLevelChanged_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnMicLevelChanged_14), (void*)L_7);
		// public WitRequestOptionsEvent OnRequestOptionSetup = new WitRequestOptionsEvent();
		WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F* L_8 = (WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F*)il2cpp_codegen_object_new(WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WitRequestOptionsEvent__ctor_m822F331B9A2A66FB2D4F4080D21DAFE0EC5203D7(L_8, NULL);
		__this->___OnRequestOptionSetup_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnRequestOptionSetup_15), (void*)L_8);
		// public WitRequestCreatedEvent OnRequestCreated = new WitRequestCreatedEvent();
		WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* L_9 = (WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4*)il2cpp_codegen_object_new(WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WitRequestCreatedEvent__ctor_mF51A80F06BB41FE24BF27BD3236390D438614F83(L_9, NULL);
		__this->___OnRequestCreated_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnRequestCreated_16), (void*)L_9);
		// public UnityEvent OnStartListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_10, NULL);
		__this->___OnStartListening_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStartListening_17), (void*)L_10);
		// public UnityEvent OnStoppedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_11, NULL);
		__this->___OnStoppedListening_18 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStoppedListening_18), (void*)L_11);
		// public UnityEvent OnStoppedListeningDueToInactivity = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_12, NULL);
		__this->___OnStoppedListeningDueToInactivity_19 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStoppedListeningDueToInactivity_19), (void*)L_12);
		// public UnityEvent OnStoppedListeningDueToTimeout = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_13, NULL);
		__this->___OnStoppedListeningDueToTimeout_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStoppedListeningDueToTimeout_20), (void*)L_13);
		// public UnityEvent OnStoppedListeningDueToDeactivation = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_14, NULL);
		__this->___OnStoppedListeningDueToDeactivation_21 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStoppedListeningDueToDeactivation_21), (void*)L_14);
		// public UnityEvent OnMicDataSent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_15, NULL);
		__this->___OnMicDataSent_22 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnMicDataSent_22), (void*)L_15);
		// public UnityEvent OnMinimumWakeThresholdHit = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_16, NULL);
		__this->___OnMinimumWakeThresholdHit_23 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnMinimumWakeThresholdHit_23), (void*)L_16);
		// public WitTranscriptionEvent onPartialTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_17 = (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E*)il2cpp_codegen_object_new(WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB(L_17, NULL);
		__this->___onPartialTranscription_24 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPartialTranscription_24), (void*)L_17);
		// public WitTranscriptionEvent onFullTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_18 = (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E*)il2cpp_codegen_object_new(WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB(L_18, NULL);
		__this->___onFullTranscription_25 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFullTranscription_25), (void*)L_18);
		// public WitByteDataEvent OnByteDataReady = new WitByteDataEvent();
		WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* L_19 = (WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E*)il2cpp_codegen_object_new(WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WitByteDataEvent__ctor_mB90DA13E87A0CF6C254199D39B7606F35F7A3082(L_19, NULL);
		__this->___OnByteDataReady_26 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnByteDataReady_26), (void*)L_19);
		// public WitByteDataEvent OnByteDataSent = new WitByteDataEvent();
		WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* L_20 = (WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E*)il2cpp_codegen_object_new(WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WitByteDataEvent__ctor_mB90DA13E87A0CF6C254199D39B7606F35F7A3082(L_20, NULL);
		__this->___OnByteDataSent_27 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnByteDataSent_27), (void*)L_20);
		EventRegistry__ctor_mB58989B296C512115B65D1544EA5A8BE2217C73E(__this, NULL);
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
// System.Void Facebook.WitAi.Events.WitByteDataEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitByteDataEvent__ctor_mB90DA13E87A0CF6C254199D39B7606F35F7A3082 (WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9(__this, UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitErrorEvent__ctor_m2634DD9BD17142008709E54213D1A0FE6BCD07F7 (WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480(__this, UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitMicLevelChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMicLevelChangedEvent__ctor_m2643EEC42D8F1AF70E6173E43AA50CE55EFC01A4 (WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitRequestCreatedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestCreatedEvent__ctor_mF51A80F06BB41FE24BF27BD3236390D438614F83 (WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m82EF064C3F391450633B61DC457C604BC39EC702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m82EF064C3F391450633B61DC457C604BC39EC702(__this, UnityEvent_1__ctor_m82EF064C3F391450633B61DC457C604BC39EC702_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitRequestOptionsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptionsEvent__ctor_m822F331B9A2A66FB2D4F4080D21DAFE0EC5203D7 (WitRequestOptionsEvent_tAD812E88B700DE72AA3AC8F72941B76618FFED9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF1711B9510903376FFBCE71915269EBEB4013A32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF1711B9510903376FFBCE71915269EBEB4013A32(__this, UnityEvent_1__ctor_mF1711B9510903376FFBCE71915269EBEB4013A32_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_m631381374944899ECBE552E0A5A8CF8EBB617FE6 (WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m54C04F9311681276CC1D797397DF7C4EAD36BCD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m54C04F9311681276CC1D797397DF7C4EAD36BCD7(__this, UnityEvent_1__ctor_m54C04F9311681276CC1D797397DF7C4EAD36BCD7_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.Events.WitValidationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValidationEvent__ctor_m52491683D3E7B5AF970AECE8E4091F159ABC6685 (WitValidationEvent_tAE06F393757B1295A5597456EBE6E7FA4CECD2A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB74215E6225CB1B138606454239119399A04B561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB74215E6225CB1B138606454239119399A04B561(__this, UnityEvent_1__ctor_mB74215E6225CB1B138606454239119399A04B561_RuntimeMethod_var);
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
// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::get_OnMicAudioLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* AudioEventListener_get_OnMicAudioLevelChanged_m83F3E95746A6155A2C3DB5179670A57A57523CE6 (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicAudioLevelChanged => onMicAudioLevelChanged;
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_0 = __this->___onMicAudioLevelChanged_4;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::get_OnMicStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* AudioEventListener_get_OnMicStartedListening_mFE1841D41721C2F19E70C05956E797BF5445AFF1 (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStartedListening => onMicStartedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onMicStartedListening_5;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::get_OnMicStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* AudioEventListener_get_OnMicStoppedListening_m2ADFE526C9F7236E07D9E5EF4A94D8B898EEAB99 (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStoppedListening => onMicStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onMicStoppedListening_6;
		return L_0;
	}
}
// Facebook.WitAi.Interfaces.IAudioInputEvents Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::get_AudioInputEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioEventListener_get_AudioInputEvents_m19FFDA667E1F40D1AEA02467479DE74C8483D10B (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_m3EBDA5BA8379D2D3A635E7F7E9D8DA7CA025BE26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (null == _events)
		RuntimeObject* L_0 = __this->____events_7;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// var eventProvider = GetComponent<IAudioEventProvider>();
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisIAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_m3EBDA5BA8379D2D3A635E7F7E9D8DA7CA025BE26(__this, Component_GetComponent_TisIAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_m3EBDA5BA8379D2D3A635E7F7E9D8DA7CA025BE26_RuntimeMethod_var);
		V_0 = L_1;
		// if (null != eventProvider)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// _events = eventProvider.AudioEvents;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Facebook.WitAi.Interfaces.IAudioInputEvents Facebook.WitAi.Interfaces.IAudioEventProvider::get_AudioEvents() */, IAudioEventProvider_t5614DA95F35A89D4B42F3CD224FDE902F165F4DA_il2cpp_TypeInfo_var, L_3);
		__this->____events_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_7), (void*)L_4);
	}

IL_001e:
	{
		// return _events;
		RuntimeObject* L_5 = __this->____events_7;
		return L_5;
	}
}
// System.Void Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventListener_OnEnable_m184AD08549BECD0101C82B9D89486A8F00B2F3F0 (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var events = AudioInputEvents;
		RuntimeObject* L_0;
		L_0 = AudioEventListener_get_AudioInputEvents_m19FFDA667E1F40D1AEA02467479DE74C8483D10B(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// events.OnMicAudioLevelChanged.AddListener(onMicAudioLevelChanged.Invoke);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_3;
		L_3 = InterfaceFuncInvoker0< WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* >::Invoke(0 /* Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Interfaces.IAudioInputEvents::get_OnMicAudioLevelChanged() */, IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var, L_2);
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_4 = __this->___onMicAudioLevelChanged_4;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, L_4, (intptr_t)((void*)UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_3, L_5, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// events.OnMicStartedListening.AddListener(onMicStartedListening.Invoke);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7;
		L_7 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(1 /* UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.IAudioInputEvents::get_OnMicStartedListening() */, IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var, L_6);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = __this->___onMicStartedListening_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, L_8, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_9, NULL);
		// events.OnMicStoppedListening.AddListener(onMicStoppedListening.Invoke);
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11;
		L_11 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(2 /* UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.IAudioInputEvents::get_OnMicStoppedListening() */, IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var, L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___onMicStoppedListening_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, L_12, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_13, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventListener_OnDisable_m7BDB0517A77141EAFEC8D75FCE28052D0C411B51 (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var events = AudioInputEvents;
		RuntimeObject* L_0;
		L_0 = AudioEventListener_get_AudioInputEvents_m19FFDA667E1F40D1AEA02467479DE74C8483D10B(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// events.OnMicAudioLevelChanged.RemoveListener(onMicAudioLevelChanged.Invoke);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_3;
		L_3 = InterfaceFuncInvoker0< WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* >::Invoke(0 /* Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Interfaces.IAudioInputEvents::get_OnMicAudioLevelChanged() */, IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var, L_2);
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_4 = __this->___onMicAudioLevelChanged_4;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, L_4, (intptr_t)((void*)UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_3, L_5, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// events.OnMicStartedListening.RemoveListener(onMicStartedListening.Invoke);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7;
		L_7 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(1 /* UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.IAudioInputEvents::get_OnMicStartedListening() */, IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var, L_6);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = __this->___onMicStartedListening_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, L_8, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_7, L_9, NULL);
		// events.OnMicStoppedListening.RemoveListener(onMicStoppedListening.Invoke);
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11;
		L_11 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(2 /* UnityEngine.Events.UnityEvent Facebook.WitAi.Interfaces.IAudioInputEvents::get_OnMicStoppedListening() */, IAudioInputEvents_tE6075B501F5C836E7E509800534F63519B6BDCAE_il2cpp_TypeInfo_var, L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___onMicStoppedListening_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, L_12, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_11, L_13, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Events.UnityEventListeners.AudioEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventListener__ctor_m442D367F058F689CCB6F9B4891B4677748A977DA (AudioEventListener_t44995F17069119C4907450645D0F69DC82E75BBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private WitMicLevelChangedEvent onMicAudioLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_0 = (WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitMicLevelChangedEvent__ctor_m2643EEC42D8F1AF70E6173E43AA50CE55EFC01A4(L_0, NULL);
		__this->___onMicAudioLevelChanged_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicAudioLevelChanged_4), (void*)L_0);
		// [SerializeField] private UnityEvent onMicStartedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onMicStartedListening_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicStartedListening_5), (void*)L_1);
		// [SerializeField] private UnityEvent onMicStoppedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->___onMicStoppedListening_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicStoppedListening_6), (void*)L_2);
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
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* TranscriptionEventListener_get_OnPartialTranscription_mD6C61A5AF4F238FB47D1732C0E319408F50E52CC (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = __this->___onPartialTranscription_4;
		return L_0;
	}
}
// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* TranscriptionEventListener_get_OnFullTranscription_m5EA83C29F46F37BB66A903CB714E6352C5B1B63D (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = __this->___onFullTranscription_5;
		return L_0;
	}
}
// Facebook.WitAi.Interfaces.ITranscriptionEvent Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_TranscriptionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionEventListener_get_TranscriptionEvents_m6451529BDBDA8FC768FB7CC17B70FD5DCC2E3B61 (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_mB1CAD0DAE81B96F14AD3668167409A47F8014E4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (null == _events)
		RuntimeObject* L_0 = __this->____events_6;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// var eventProvider = GetComponent<ITranscriptionEventProvider>();
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_mB1CAD0DAE81B96F14AD3668167409A47F8014E4B(__this, Component_GetComponent_TisITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_mB1CAD0DAE81B96F14AD3668167409A47F8014E4B_RuntimeMethod_var);
		V_0 = L_1;
		// if (null != eventProvider)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// _events = eventProvider.TranscriptionEvents;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Facebook.WitAi.Interfaces.ITranscriptionEvent Facebook.WitAi.Interfaces.ITranscriptionEventProvider::get_TranscriptionEvents() */, ITranscriptionEventProvider_tAA7F37A55A76742F892734B07C24F5454774F531_il2cpp_TypeInfo_var, L_3);
		__this->____events_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_4);
	}

IL_001e:
	{
		// return _events;
		RuntimeObject* L_5 = __this->____events_6;
		return L_5;
	}
}
// System.Void Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionEventListener_OnEnable_m31972D501DF77D8383639C38D35F4D99C56B9B4D (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var events = TranscriptionEvents;
		RuntimeObject* L_0;
		L_0 = TranscriptionEventListener_get_TranscriptionEvents_m6451529BDBDA8FC768FB7CC17B70FD5DCC2E3B61(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// events.OnPartialTranscription.AddListener(onPartialTranscription.Invoke);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_3;
		L_3 = InterfaceFuncInvoker0< WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* >::Invoke(0 /* Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.ITranscriptionEvent::get_OnPartialTranscription() */, ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var, L_2);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_4 = __this->___onPartialTranscription_4;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_5 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_5, L_4, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_3, L_5, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// events.OnFullTranscription.AddListener(onFullTranscription.Invoke);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_7;
		L_7 = InterfaceFuncInvoker0< WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* >::Invoke(1 /* Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.ITranscriptionEvent::get_OnFullTranscription() */, ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var, L_6);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_8 = __this->___onFullTranscription_5;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_9 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_9, L_8, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_7, L_9, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionEventListener_OnDisable_mA77BC61C94A29EEF0BE309ACC0E8894BE34270BB (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var events = TranscriptionEvents;
		RuntimeObject* L_0;
		L_0 = TranscriptionEventListener_get_TranscriptionEvents_m6451529BDBDA8FC768FB7CC17B70FD5DCC2E3B61(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// events.OnPartialTranscription.RemoveListener(onPartialTranscription.Invoke);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_3;
		L_3 = InterfaceFuncInvoker0< WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* >::Invoke(0 /* Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.ITranscriptionEvent::get_OnPartialTranscription() */, ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var, L_2);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_4 = __this->___onPartialTranscription_4;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_5 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_5, L_4, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_3, L_5, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// events.OnFullTranscription.RemoveListener(onFullTranscription.Invoke);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_7;
		L_7 = InterfaceFuncInvoker0< WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* >::Invoke(1 /* Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Interfaces.ITranscriptionEvent::get_OnFullTranscription() */, ITranscriptionEvent_t57EC7B88C818D433ADDEAB28423C924BA049A813_il2cpp_TypeInfo_var, L_6);
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_8 = __this->___onFullTranscription_5;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_9 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_9, L_8, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_7, L_9, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Events.UnityEventListeners.TranscriptionEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionEventListener__ctor_m31E31C903287D6F0FDDA7B21576CA4F9F9EB9F0D (TranscriptionEventListener_tFF6A766DF52FC91FDEDD91141FBA0C5DEC87F1FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private WitTranscriptionEvent onPartialTranscription = new
		//     WitTranscriptionEvent();
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_0 = (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E*)il2cpp_codegen_object_new(WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB(L_0, NULL);
		__this->___onPartialTranscription_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPartialTranscription_4), (void*)L_0);
		// [SerializeField] private WitTranscriptionEvent onFullTranscription = new
		//     WitTranscriptionEvent();
		WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* L_1 = (WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E*)il2cpp_codegen_object_new(WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitTranscriptionEvent__ctor_m69A664B07F972F085A5CF6428E065BE0154579EB(L_1, NULL);
		__this->___onFullTranscription_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFullTranscription_5), (void*)L_1);
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
// System.Void Facebook.WitAi.Configuration.WitConfigurationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfigurationData__ctor_m8D4068A08641205F93EF9642BA9106B0EFD37975 (WitConfigurationData_tE8AEFEBCB9258DD2909EED5C1ACE770CBC099897* __this, const RuntimeMethod* method) 
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
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_UriScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_UriScheme_m86831992A6AD745AC3A5020DEE48643B7E84C793 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string UriScheme => string.IsNullOrEmpty(uriScheme) ? WitRequest.URI_SCHEME : uriScheme;
		String_t* L_0 = __this->___uriScheme_1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->___uriScheme_1;
		return L_2;
	}

IL_0014:
	{
		return _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
	}
}
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Authority_mF4F20B3CA37A69AB5D003F2D618BBF6496B7C583 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC88ED3BAC6612646AAAC68CE58E03895D796AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string.IsNullOrEmpty(authority) ? WitRequest.URI_AUTHORITY : authority;
		String_t* L_0 = __this->___authority_2;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->___authority_2;
		return L_2;
	}

IL_0014:
	{
		return _stringLiteralAEC88ED3BAC6612646AAAC68CE58E03895D796AB;
	}
}
// System.Int32 Facebook.WitAi.Configuration.WitEndpointConfig::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEndpointConfig_get_Port_m9FCE8AFC43BD2C735DC50D75B70CDDD604437403 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	{
		// public int Port => port <= 0 ? WitRequest.URI_DEFAULT_PORT : port;
		int32_t L_0 = __this->___port_3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->___port_3;
		return L_1;
	}

IL_0010:
	{
		return 0;
	}
}
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_WitApiVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_WitApiVersion_m63158C60ECC4C89A6B6ED9F87C64394DD19C587C (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA2F8DC7D017F687F668AF24B7973D521D7DA59C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string WitApiVersion => string.IsNullOrEmpty(witApiVersion)
		//     ? WitRequest.WIT_API_VERSION
		//     : witApiVersion;
		String_t* L_0 = __this->___witApiVersion_4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->___witApiVersion_4;
		return L_2;
	}

IL_0014:
	{
		return _stringLiteralCA2F8DC7D017F687F668AF24B7973D521D7DA59C;
	}
}
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_Speech()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Speech_m929A41ECAA6AFE934B2FCA4C22E543589DF3D47F (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string.IsNullOrEmpty(speech) ? WitRequest.WIT_ENDPOINT_SPEECH : speech;
		String_t* L_0 = __this->___speech_5;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->___speech_5;
		return L_2;
	}

IL_0014:
	{
		return _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
	}
}
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Message_m27EB573E6C308F9771B29AE472A9D5958300D0B4 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string.IsNullOrEmpty(message) ? WitRequest.WIT_ENDPOINT_MESSAGE : message;
		String_t* L_0 = __this->___message_6;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->___message_6;
		return L_2;
	}

IL_0014:
	{
		return _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
	}
}
// System.String Facebook.WitAi.Configuration.WitEndpointConfig::get_Dictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Dictation_mF7D803492AAE247ECC6482B80095D4170547DCC4 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Dictation => string.IsNullOrEmpty(dictation) ? WitRequest.WIT_ENDPOINT_DICTATION : dictation;
		String_t* L_0 = __this->___dictation_7;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->___dictation_7;
		return L_2;
	}

IL_0014:
	{
		return _stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F;
	}
}
// Facebook.WitAi.Configuration.WitEndpointConfig Facebook.WitAi.Configuration.WitEndpointConfig::GetEndpointConfig(Facebook.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* WitEndpointConfig_GetEndpointConfig_m5E94C5612BD7D2C869888BABB0F51720ADD873DE (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* ___witConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return witConfig && null != witConfig.endpointConfiguration
		//     ? witConfig.endpointConfiguration
		//     : defaultEndpointConfig;
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_0 = ___witConfig0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_2 = ___witConfig0;
		NullCheck(L_2);
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_3 = L_2->___endpointConfiguration_8;
		if (L_3)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_4 = ((WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_StaticFields*)il2cpp_codegen_static_fields_for(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var))->___defaultEndpointConfig_0;
		return L_4;
	}

IL_0016:
	{
		WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* L_5 = ___witConfig0;
		NullCheck(L_5);
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_6 = L_5->___endpointConfiguration_8;
		return L_6;
	}
}
// System.Void Facebook.WitAi.Configuration.WitEndpointConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__ctor_m45851DBF1D527584556B4989BC8429E8CB543C90 (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.Configuration.WitEndpointConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__cctor_m0161FDC84119F32BAAB06F5B907890ACC076F546 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static WitEndpointConfig defaultEndpointConfig = new WitEndpointConfig();
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_0 = (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0*)il2cpp_codegen_object_new(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitEndpointConfig__ctor_m45851DBF1D527584556B4989BC8429E8CB543C90(L_0, NULL);
		((WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_StaticFields*)il2cpp_codegen_static_fields_for(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var))->___defaultEndpointConfig_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_StaticFields*)il2cpp_codegen_static_fields_for(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var))->___defaultEndpointConfig_0), (void*)L_0);
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
// System.String Facebook.WitAi.Configuration.WitRequestOptions::ToJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitRequestOptions_ToJsonString_m79E2B66D64BD70F8175AE998F9FD4EE9DA5D9737 (WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E8A7E993C20AB23FD1E1CAA1EDDBE7308416AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// string results = JsonUtility.ToJson(this);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(__this, NULL);
		V_0 = L_0;
		// StringBuilder parameters = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_1 = L_1;
		// foreach (var key in additionalParameters.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = __this->___additionalParameters_4;
		NullCheck(L_2);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_3;
		L_3 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_2, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_3);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_4;
		L_4 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_3, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_2), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0078_1;
			}

IL_0020_1:
			{
				// foreach (var key in additionalParameters.Keys)
				String_t* L_5;
				L_5 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_2), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_3 = L_5;
				// string value = additionalParameters[key].Replace("\"", "\\\"");
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = __this->___additionalParameters_4;
				String_t* L_7 = V_3;
				NullCheck(L_6);
				String_t* L_8;
				L_8 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_6, L_7, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_8);
				String_t* L_9;
				L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
				V_4 = L_9;
				// parameters.Append($",\"{key}\":\"{value}\"");
				StringBuilder_t* L_10 = V_1;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, _stringLiteral7E8A7E993C20AB23FD1E1CAA1EDDBE7308416AFB);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7E8A7E993C20AB23FD1E1CAA1EDDBE7308416AFB);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
				String_t* L_14 = V_3;
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_14);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
				String_t* L_17 = V_4;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, L_17);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				String_t* L_19;
				L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_18, NULL);
				NullCheck(L_10);
				StringBuilder_t* L_20;
				L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_19, NULL);
			}

IL_0078_1:
			{
				// foreach (var key in additionalParameters.Keys)
				bool L_21;
				L_21 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_2), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		// results = results.Insert(results.Length - 1, parameters.ToString());
		String_t* L_22 = V_0;
		String_t* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		StringBuilder_t* L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		NullCheck(L_22);
		String_t* L_27;
		L_27 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_22, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_26, NULL);
		V_0 = L_27;
		// return results;
		String_t* L_28 = V_0;
		return L_28;
	}
}
// System.Void Facebook.WitAi.Configuration.WitRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptions__ctor_mC268FEEBCAC2DABEED5ED9C53109E02EE3189F48 (WitRequestOptions_tDF3C29A7F96FE1E43F5143DB6C6E96869BD4AB49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public int nBestIntents = -1;
		__this->___nBestIntents_1 = (-1);
		// public string requestID = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___requestID_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requestID_3), (void*)L_1);
		// public Dictionary<string, string> additionalParameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___additionalParameters_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___additionalParameters_4), (void*)L_2);
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
// UnityEngine.Vector2 Facebook.WitAi.Configuration.WitRuntimeConfiguration::get_RecordingTimeRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WitRuntimeConfiguration_get_RecordingTimeRange_m62B36299D25C617A18EA915441EB88544C596228 (WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual Vector2 RecordingTimeRange => new Vector2(0, 20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (20.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Facebook.WitAi.Configuration.WitRuntimeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRuntimeConfiguration__ctor_m259A9FD2B03DBC2E9A907F1359CEE3F3C511A68C (WitRuntimeConfiguration_t74ABC500731591BA8D99A1C88E1821020551D3B3* __this, const RuntimeMethod* method) 
{
	{
		// public float minKeepAliveVolume = .0005f;
		__this->___minKeepAliveVolume_1 = (0.000500000024f);
		// public float minKeepAliveTimeInSeconds = 2f;
		__this->___minKeepAliveTimeInSeconds_2 = (2.0f);
		// public float minTranscriptionKeepAliveTimeInSeconds = 1f;
		__this->___minTranscriptionKeepAliveTimeInSeconds_3 = (1.0f);
		// public float maxRecordingTime = 20;
		__this->___maxRecordingTime_4 = (20.0f);
		// [SerializeField] public float soundWakeThreshold = .0005f;
		__this->___soundWakeThreshold_5 = (0.000500000024f);
		// [Range(10, 500)] [SerializeField] public int sampleLengthInMs = 10;
		__this->___sampleLengthInMs_6 = ((int32_t)10);
		// [SerializeField] public float micBufferLengthInSeconds = 1;
		__this->___micBufferLengthInSeconds_7 = (1.0f);
		// [Range(1, 10)] [SerializeField] public int maxConcurrentRequests = 5;
		__this->___maxConcurrentRequests_8 = 5;
		// public bool sendAudioToWit = true;
		__this->___sendAudioToWit_9 = (bool)1;
		// public float preferredActivationOffset = -.5f;
		__this->___preferredActivationOffset_12 = (-0.5f);
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
// Facebook.WitAi.Data.AudioBuffer Facebook.WitAi.Data.AudioBuffer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* AudioBuffer_get_Instance_m4ECF9E4F1CAC843FDDAEBFCD3B2E35B809A9772C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_m3C71609D8891DE604DE357C8B6B826AC3E3E6BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_mAE8F4F3ED5F08BE06AEC51B3EDACC70A2ACF9C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CBE5FC06436E56C8CFCEAB27D9AC06FDFE22BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_instance) _instance = FindObjectOfType<AudioBuffer>();
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_0 = ((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (!_instance) _instance = FindObjectOfType<AudioBuffer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_2;
		L_2 = Object_FindObjectOfType_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_mAE8F4F3ED5F08BE06AEC51B3EDACC70A2ACF9C8A(Object_FindObjectOfType_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_mAE8F4F3ED5F08BE06AEC51B3EDACC70A2ACF9C8A_RuntimeMethod_var);
		((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4), (void*)L_2);
	}

IL_0016:
	{
		// if (!_instance && !_instanceInit)
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_3 = ((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = ((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instanceInit_5;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		// var audioBufferObject = new GameObject("AudioBuffer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteralD5CBE5FC06436E56C8CFCEAB27D9AC06FDFE22BD, NULL);
		// _instance = audioBufferObject.AddComponent<AudioBuffer>();
		NullCheck(L_6);
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_7;
		L_7 = GameObject_AddComponent_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_m3C71609D8891DE604DE357C8B6B826AC3E3E6BCA(L_6, GameObject_AddComponent_TisAudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_m3C71609D8891DE604DE357C8B6B826AC3E3E6BCA_RuntimeMethod_var);
		((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4), (void*)L_7);
	}

IL_003d:
	{
		// return _instance;
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_8 = ((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4;
		return L_8;
	}
}
// Facebook.WitAi.Events.AudioBufferEvents Facebook.WitAi.Data.AudioBuffer::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* AudioBuffer_get_Events_m80CCCEDEFD301B15FD01EEE0BF6E81EA050F5105 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	{
		// public AudioBufferEvents Events => events;
		AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* L_0 = __this->___events_8;
		return L_0;
	}
}
// System.Boolean Facebook.WitAi.Data.AudioBuffer::IsRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_IsRecording_m20FF75D364E6607428E4BD65A5EF1F1E61E8FE2D (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRecording(Component component) => _activeRecorders.Contains(component);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_0 = __this->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = ___component0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D(L_0, L_1, HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Facebook.WitAi.Data.AudioBuffer::get_IsInputAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_get_IsInputAvailable_m794B27925BEE5CC144E94D01075DFDC3D9F99DE5 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsInputAvailable => _micInput.IsInputAvailable;
		RuntimeObject* L_0 = __this->____micInput_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean Facebook.WitAi.Interfaces.IAudioInputSource::get_IsInputAvailable() */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::CheckForInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_CheckForInput_mCF137E4F9F060C6275D2CA12588FF17C5326AB14 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void CheckForInput() => _micInput.CheckForInput();
		RuntimeObject* L_0 = __this->____micInput_9;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Facebook.WitAi.Interfaces.IAudioInputSource::CheckForInput() */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Data.AudioBuffer::get_AudioEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* AudioBuffer_get_AudioEncoding_m943078E0DC2533FFE28042E717B55C2CB82FBE43 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioEncoding AudioEncoding => _micInput.AudioEncoding;
		RuntimeObject* L_0 = __this->____micInput_9;
		NullCheck(L_0);
		AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* L_1;
		L_1 = InterfaceFuncInvoker0< AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* >::Invoke(11 /* Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Interfaces.IAudioInputSource::get_AudioEncoding() */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_Awake_m10AC606C7431190F921F62C56A66DBE3ABF98F17 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0_m673A39138A6446859E53511CFC5B82DD87713A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// _instance = this;
		((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// _instanceInit = true;
		((AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB_il2cpp_TypeInfo_var))->____instanceInit_5 = (bool)1;
		// _micInput = gameObject.GetComponentInChildren<IAudioInputSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E(L_0, GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E_RuntimeMethod_var);
		__this->____micInput_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micInput_9), (void*)L_1);
		// if (_micInput == null)
		RuntimeObject* L_2 = __this->____micInput_9;
		if (L_2)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (var root in gameObject.scene.GetRootGameObjects())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_3, NULL);
		V_2 = L_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5;
		L_5 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_2), NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0059;
	}

IL_003d:
	{
		// foreach (var root in gameObject.scene.GetRootGameObjects())
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// _micInput = root.GetComponentInChildren<IAudioInputSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E(L_10, GameObject_GetComponentInChildren_TisIAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_mD4F42C6E00B982D83FDAFCFBA3F31C2E272C376E_RuntimeMethod_var);
		__this->____micInput_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micInput_9), (void*)L_11);
		// if (_micInput != null)
		RuntimeObject* L_12 = __this->____micInput_9;
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0059:
	{
		// foreach (var root in gameObject.scene.GetRootGameObjects())
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_003d;
		}
	}

IL_005f:
	{
		// if (_micInput == null)
		RuntimeObject* L_16 = __this->____micInput_9;
		if (L_16)
		{
			goto IL_0078;
		}
	}
	{
		// _micInput = gameObject.AddComponent<Mic>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		Mic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0* L_18;
		L_18 = GameObject_AddComponent_TisMic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0_m673A39138A6446859E53511CFC5B82DD87713A71(L_17, GameObject_AddComponent_TisMic_t88F7A63BDE701A495E54E7A3EFEA570942DC1BA0_m673A39138A6446859E53511CFC5B82DD87713A71_RuntimeMethod_var);
		__this->____micInput_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micInput_9), (void*)L_18);
	}

IL_0078:
	{
		// InitializeMicDataBuffer();
		AudioBuffer_InitializeMicDataBuffer_mE4D39179AC31E90D61A11A738ECA602BE9B95788(__this, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_OnEnable_mFF622559D2B4289ABBBEF499FD38CBF60947D1AA (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_OnMicSampleReady_mB265E6217A8363F12D629B4E94305A85067DC915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _micInput.OnSampleReady += OnMicSampleReady;
		RuntimeObject* L_0 = __this->____micInput_9;
		Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* L_1 = (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8*)il2cpp_codegen_object_new(Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_3__ctor_m456761457D50C389C47B3D27E78233649D267B93(L_1, __this, (intptr_t)((void*)AudioBuffer_OnMicSampleReady_mB265E6217A8363F12D629B4E94305A85067DC915_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* >::Invoke(4 /* System.Void Facebook.WitAi.Interfaces.IAudioInputSource::add_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>) */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_0, L_1);
		// if (alwaysRecording) StartRecording(this);
		bool L_2 = __this->___alwaysRecording_6;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (alwaysRecording) StartRecording(this);
		AudioBuffer_StartRecording_mC997B758EDB2F101C1E1AC7D77C5509C81CAF539(__this, __this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_OnDisable_m5FCC2C8242B13FFC12E711A56949EA7D76F22644 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_OnMicSampleReady_mB265E6217A8363F12D629B4E94305A85067DC915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _micInput.OnSampleReady -= OnMicSampleReady;
		RuntimeObject* L_0 = __this->____micInput_9;
		Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* L_1 = (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8*)il2cpp_codegen_object_new(Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_3__ctor_m456761457D50C389C47B3D27E78233649D267B93(L_1, __this, (intptr_t)((void*)AudioBuffer_OnMicSampleReady_mB265E6217A8363F12D629B4E94305A85067DC915_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* >::Invoke(5 /* System.Void Facebook.WitAi.Interfaces.IAudioInputSource::remove_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>) */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_0, L_1);
		// if (alwaysRecording) StopRecording(this);
		bool L_2 = __this->___alwaysRecording_6;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (alwaysRecording) StopRecording(this);
		AudioBuffer_StopRecording_m038134963603034B9C7CA94686E5E0A4E73525DD(__this, __this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::OnMicSampleReady(System.Int32,System.Single[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_OnMicSampleReady_mB265E6217A8363F12D629B4E94305A85067DC915 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, int32_t ___sampleCount0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sample1, float ___levelMax2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m0578E7356B07DFFDCAF708E79C51CB74AF894D8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* V_0 = NULL;
	OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* G_B4_0 = NULL;
	OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* G_B3_0 = NULL;
	{
		// events.OnMicLevelChanged.Invoke(levelMax);
		AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* L_0 = __this->___events_8;
		NullCheck(L_0);
		WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* L_1 = L_0->___OnMicLevelChanged_1;
		float L_2 = ___levelMax2;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// var marker = CreateMarker();
		Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* L_3;
		L_3 = AudioBuffer_CreateMarker_m8F8E7CA339181D33A0ACC1A6F4B6910457B56094(__this, NULL);
		V_0 = L_3;
		// Convert(sample);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___sample1;
		AudioBuffer_Convert_m08109F403C9AAE0FA1C791B06168FDE2C68658E6(__this, L_4, NULL);
		// if (null != events.OnByteDataReady)
		AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* L_5 = __this->___events_8;
		NullCheck(L_5);
		WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* L_6 = L_5->___OnByteDataReady_2;
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// marker.Clone().ReadIntoWriters(events.OnByteDataReady.Invoke);
		Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* L_7 = V_0;
		NullCheck(L_7);
		Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* L_8;
		L_8 = Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB(L_7, Marker_Clone_m10E056C693F0BCBF67E7026A21519CF41B104ABB_RuntimeMethod_var);
		ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C* L_9 = (ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C*)(ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C*)SZArrayNew(ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteDataWriterU5BU5D_tA2523DC9B20CACDF2D29AB3AD00FB7DD8CF60A6C* L_10 = L_9;
		AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* L_11 = __this->___events_8;
		NullCheck(L_11);
		WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* L_12 = L_11->___OnByteDataReady_2;
		ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3* L_13 = (ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3*)il2cpp_codegen_object_new(ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ByteDataWriter__ctor_mE9DD0B50E51106D6C68F58DDC009C0CDA810CE44(L_13, L_12, (intptr_t)((void*)UnityEvent_3_Invoke_m0578E7356B07DFFDCAF708E79C51CB74AF894D8D_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteDataWriter_tC4FCCFBBC051258F2D10C45AED572D3B510E3BE3*)L_13);
		NullCheck(L_8);
		Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0(L_8, L_10, Marker_ReadIntoWriters_m8DD21818BCEACE374C31A1E49AEB0D67F38E3FD0_RuntimeMethod_var);
	}

IL_0056:
	{
		// events.OnSampleReady?.Invoke(marker, levelMax);
		AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* L_14 = __this->___events_8;
		NullCheck(L_14);
		OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* L_15 = L_14->___OnSampleReady_0;
		OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* L_16 = L_15;
		G_B3_0 = L_16;
		if (L_16)
		{
			G_B4_0 = L_16;
			goto IL_0066;
		}
	}
	{
		return;
	}

IL_0066:
	{
		Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* L_17 = V_0;
		float L_18 = ___levelMax2;
		NullCheck(G_B4_0);
		OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_inline(G_B4_0, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::InitializeMicDataBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_InitializeMicDataBuffer_mE4D39179AC31E90D61A11A738ECA602BE9B95788 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (null == _micDataBuffer && audioBufferConfiguration.micBufferLengthInSeconds > 0)
		RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* L_0 = __this->____micDataBuffer_10;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* L_1 = __this->___audioBufferConfiguration_7;
		NullCheck(L_1);
		float L_2 = L_1->___micBufferLengthInSeconds_1;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// var bufferSize = (int) Mathf.Ceil(2 *
		//                                   audioBufferConfiguration
		//                                       .micBufferLengthInSeconds * 1000 *
		//                                   audioBufferConfiguration.sampleLengthInMs);
		AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* L_3 = __this->___audioBufferConfiguration_7;
		NullCheck(L_3);
		float L_4 = L_3->___micBufferLengthInSeconds_1;
		AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* L_5 = __this->___audioBufferConfiguration_7;
		NullCheck(L_5);
		int32_t L_6 = L_5->___sampleLengthInMs_0;
		float L_7;
		L_7 = ceilf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_4)), (1000.0f))), ((float)L_6))));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		// if (bufferSize <= 0)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// bufferSize = 1024;
		V_0 = ((int32_t)1024);
	}

IL_004f:
	{
		// _micDataBuffer = new RingBuffer<byte>(bufferSize);
		int32_t L_9 = V_0;
		RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* L_10 = (RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88*)il2cpp_codegen_object_new(RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F(L_10, L_9, RingBuffer_1__ctor_m6D796228A7E58BD3CAE62DB89E118F144BC8F08F_RuntimeMethod_var);
		__this->____micDataBuffer_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micDataBuffer_10), (void*)L_10);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::Convert(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_Convert_m08109F403C9AAE0FA1C791B06168FDE2C68658E6 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___samples0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		// var sampleCount = samples.Length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___samples0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// for (int i = 0; i < sampleCount; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0008:
	{
		// short data = (short) (samples[i] * rescaleFactor);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___samples0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply(L_4, (32767.0f))));
		// _micDataBuffer.Push((byte) data);
		RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* L_5 = __this->____micDataBuffer_10;
		int16_t L_6 = V_2;
		NullCheck(L_5);
		RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B(L_5, (uint8_t)((int32_t)(uint8_t)L_6), RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B_RuntimeMethod_var);
		// _micDataBuffer.Push((byte) (data >> 8));
		RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* L_7 = __this->____micDataBuffer_10;
		int16_t L_8 = V_2;
		NullCheck(L_7);
		RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B(L_7, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8>>8))), RingBuffer_1_Push_mB43E8021C74C509BEACF7A0A7EC635C36CB3156B_RuntimeMethod_var);
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte> Facebook.WitAi.Data.AudioBuffer::CreateMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* AudioBuffer_CreateMarker_m8F8E7CA339181D33A0ACC1A6F4B6910457B56094 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _micDataBuffer.CreateMarker();
		RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* L_0 = __this->____micDataBuffer_10;
		NullCheck(L_0);
		Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* L_1;
		L_1 = RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38(L_0, 0, RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_RuntimeMethod_var);
		return L_1;
	}
}
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte> Facebook.WitAi.Data.AudioBuffer::CreateMarker(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* AudioBuffer_CreateMarker_mD16CFBB82EEB7550F07FEAA58B0FA214B7230C39 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, float ___offset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var samples = (int) (AudioEncoding.samplerate * offset);
		AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* L_0;
		L_0 = AudioBuffer_get_AudioEncoding_m943078E0DC2533FFE28042E717B55C2CB82FBE43(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___samplerate_2;
		float L_2 = ___offset0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_1), L_2)));
		// return _micDataBuffer.CreateMarker(samples);
		RingBuffer_1_tD23A0505D1136EEFB4BB9A8EDDD7C49C45ADBF88* L_3 = __this->____micDataBuffer_10;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* L_5;
		L_5 = RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38(L_3, L_4, RingBuffer_1_CreateMarker_mD3F4EE984CA50026FEE164BF75E0880D12A5BC38_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::StartRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StartRecording_mC997B758EDB2F101C1E1AC7D77C5509C81CAF539 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitForMicToStart(component));
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___component0;
		RuntimeObject* L_1;
		L_1 = AudioBuffer_WaitForMicToStart_mB24FC93BEE8F80CB0A66CCF6054660341FF23DBC(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Data.AudioBuffer::WaitForMicToStart(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_WaitForMicToStart_mB24FC93BEE8F80CB0A66CCF6054660341FF23DBC (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* L_0 = (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68*)il2cpp_codegen_object_new(U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForMicToStartU3Ed__28__ctor_mD89031FC85AF73ECC12C11C39594FD2801CF12DA(L_0, 0, NULL);
		U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* L_2 = L_1;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = ___component0;
		NullCheck(L_2);
		L_2->___component_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___component_3), (void*)L_3);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::StopRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StopRecording_m038134963603034B9C7CA94686E5E0A4E73525DD (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// _activeRecorders.Remove(component);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_0 = __this->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = ___component0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A(L_0, L_1, HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		// if (_activeRecorders.Count == 0)
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_3 = __this->____activeRecorders_12;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_inline(L_3, HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		// _micInput.StopRecording();
		RuntimeObject* L_5 = __this->____micInput_9;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Facebook.WitAi.Interfaces.IAudioInputSource::StopRecording() */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_5);
	}

IL_0025:
	{
		// if (component is IVoiceEventProvider v)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6 = ___component0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// v.VoiceEvents.OnStoppedListening?.Invoke();
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_9;
		L_9 = InterfaceFuncInvoker0< VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* >::Invoke(0 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = L_9->___OnStoppedListening_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer__ctor_mCC7320FBEF1DF041C79C4108E3D021CCA8EEB764 (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private AudioBufferConfiguration audioBufferConfiguration = new AudioBufferConfiguration();
		AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* L_0 = (AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA*)il2cpp_codegen_object_new(AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AudioBufferConfiguration__ctor_mA08FE83F8B5AE429ADC0A843568613C30B7B005D(L_0, NULL);
		__this->___audioBufferConfiguration_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioBufferConfiguration_7), (void*)L_0);
		// [SerializeField] private AudioBufferEvents events = new AudioBufferEvents();
		AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0* L_1 = (AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0*)il2cpp_codegen_object_new(AudioBufferEvents_tA363A9310AFD6CF188C8DD024844957E2228FAA0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioBufferEvents__ctor_mAF949D0E9CBDDF4EFF56FD9A66A45052EC2DA760(L_1, NULL);
		__this->___events_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_8), (void*)L_1);
		// private HashSet<Component> _activeRecorders = new HashSet<Component>();
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_2 = (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*)il2cpp_codegen_object_new(HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468(L_2, HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var);
		__this->____activeRecorders_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRecorders_12), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.AudioBuffer::<WaitForMicToStart>b__28_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCDDAA1E220C8ADDA93A4114CB7DE9A426E7F393C (AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => null != _micInput);
		RuntimeObject* L_0 = __this->____micInput_9;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28__ctor_mD89031FC85AF73ECC12C11C39594FD2801CF12DA (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28_System_IDisposable_Dispose_mAAFE4693023F6B64E1098722AF7647ABD428B40F (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForMicToStartU3Ed__28_MoveNext_m23625E59D1A009A3C750ACE35DBE643A5C3EC922 (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCDDAA1E220C8ADDA93A4114CB7DE9A426E7F393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => null != _micInput);
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCDDAA1E220C8ADDA93A4114CB7DE9A426E7F393C_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _activeRecorders.Add(component);
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_7 = V_1;
		NullCheck(L_7);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_8 = L_7->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_9 = __this->___component_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C(L_8, L_9, HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var);
		// if (!_micInput.IsRecording)
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->____micInput_9;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Facebook.WitAi.Interfaces.IAudioInputSource::get_IsRecording() */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_12);
		if (L_13)
		{
			goto IL_007a;
		}
	}
	{
		// _micInput.StartRecording(audioBufferConfiguration.sampleLengthInMs);
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->____micInput_9;
		AudioBuffer_t3D431BE6580764CC09C1F5C99F92C8714344DCAB* L_16 = V_1;
		NullCheck(L_16);
		AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* L_17 = L_16->___audioBufferConfiguration_7;
		NullCheck(L_17);
		int32_t L_18 = L_17->___sampleLengthInMs_0;
		NullCheck(L_15);
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void Facebook.WitAi.Interfaces.IAudioInputSource::StartRecording(System.Int32) */, IAudioInputSource_tE5406883396F6A8ED4931D544E24CED4369D1EAD_il2cpp_TypeInfo_var, L_15, L_18);
	}

IL_007a:
	{
		// if (component is IVoiceEventProvider v)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_19 = __this->___component_3;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var));
		RuntimeObject* L_20 = V_2;
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		// v.VoiceEvents.OnStartListening?.Invoke();
		RuntimeObject* L_21 = V_2;
		NullCheck(L_21);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_22;
		L_22 = InterfaceFuncInvoker0< VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* >::Invoke(0 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t9B97E1006C8EAA03AC6E6D71ED116228AEED1948_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23 = L_22->___OnStartListening_17;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_24 = L_23;
		G_B8_0 = L_24;
		if (L_24)
		{
			G_B9_0 = L_24;
			goto IL_009a;
		}
	}
	{
		goto IL_009f;
	}

IL_009a:
	{
		NullCheck(G_B9_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
	}

IL_009f:
	{
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForMicToStartU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C3085F1E432B73EF3DFB968E4CBD2C8567452B7 (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_Reset_mEDCD035F288EAA30930D5BB6453FD6FF36522240 (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_Reset_mEDCD035F288EAA30930D5BB6453FD6FF36522240_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_get_Current_m0EA152679C2414BF9AC139BC60F739A17C8F3F81 (U3CWaitForMicToStartU3Ed__28_t380521300E9D6DA58F0ACCDAC85EE36DCB1BBA68* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Data.AudioBufferConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferConfiguration__ctor_mA08FE83F8B5AE429ADC0A843568613C30B7B005D (AudioBufferConfiguration_t8F3B4F793B835A489D247295DA006AFFD76F25AA* __this, const RuntimeMethod* method) 
{
	{
		// public int sampleLengthInMs = 10;
		__this->___sampleLengthInMs_0 = ((int32_t)10);
		// public float micBufferLengthInSeconds = 1;
		__this->___micBufferLengthInSeconds_1 = (1.0f);
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
// System.String Facebook.WitAi.Data.AudioEncoding::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioEncoding_ToString_mB036BB4AD517758C16FF6791B855173AB427D0E4 (AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endian_t69A803DA82819F6CAAEF4B6C5A7605D4155CDDAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF3768A048853CBDA2EB8478E42FD206D4D43CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"audio/raw;bits={bits};rate={samplerate / 1000}k;encoding={encoding};endian={endian.ToString().ToLower()}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___bits_1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = __this->___samplerate_2;
		int32_t L_7 = ((int32_t)(L_6/((int32_t)1000)));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		String_t* L_10 = __this->___encoding_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		int32_t* L_12 = (&__this->___endian_3);
		Il2CppFakeBox<int32_t> L_13(Endian_t69A803DA82819F6CAAEF4B6C5A7605D4155CDDAF_il2cpp_TypeInfo_var, L_12);
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_14, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		String_t* L_16;
		L_16 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral8BF3768A048853CBDA2EB8478E42FD206D4D43CA, L_11, NULL);
		return L_16;
	}
}
// System.Void Facebook.WitAi.Data.AudioEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEncoding__ctor_mDECFD145416B4E3940999095D5CA123671C7EE09 (AudioEncoding_t2377DC69ECC62D1EB67A1E3B9F2B2FEF67443928* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string encoding = "signed-integer";
		__this->___encoding_0 = _stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding_0), (void*)_stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6);
		// public int bits = 16;
		__this->___bits_1 = ((int32_t)16);
		// public int samplerate = 16000;
		__this->___samplerate_2 = ((int32_t)16000);
		// public Endian endian = Endian.Little;
		__this->___endian_3 = 1;
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
// System.Void Facebook.WitAi.Data.VoiceSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSession__ctor_m9829CC6E7361F204600D6877C845ECBD8CB7CDD7 (VoiceSession_t91CD2D9FDE6B8FFF927125FF65929D922D08FE34* __this, const RuntimeMethod* method) 
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
// System.Object Facebook.WitAi.Data.WitFloatValue::GetValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitFloatValue_GetValue_m207BE1EF2F2283D0EF283EAA8B9E0892CD440315 (WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetFloatValue(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		float L_1;
		L_1 = WitFloatValue_GetFloatValue_mF372762C3D265206AA7C8B57049FD52078501854(__this, L_0, NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean Facebook.WitAi.Data.WitFloatValue::Equals(Facebook.WitAi.Lib.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitFloatValue_Equals_m308A8F6ECCB626B284FAF0C224AE8360335EED9F (WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		// float fValue = 0;
		V_0 = (0.0f);
		// if (value is float f)
		RuntimeObject* L_0 = ___value1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___value1;
		V_1 = ((*(float*)((float*)(float*)UnBox(L_1, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// fValue = f;
		float L_2 = V_1;
		V_0 = L_2;
		goto IL_003c;
	}

IL_0019:
	{
		// else if(null != value && !float.TryParse("" + value, out fValue))
		RuntimeObject* L_3 = ___value1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_4 = ___value1;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		goto IL_0028;
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___value1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		G_B6_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = G_B6_0;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_0031;
		}
	}
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0031:
	{
		bool L_8;
		L_8 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(G_B8_0, (&V_0), NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003c:
	{
		// return Math.Abs(GetFloatValue(response) - fValue) < equalityTolerance;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_9 = ___response0;
		float L_10;
		L_10 = WitFloatValue_GetFloatValue_mF372762C3D265206AA7C8B57049FD52078501854(__this, L_9, NULL);
		float L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = fabsf(((float)il2cpp_codegen_subtract(L_10, L_11)));
		float L_13 = __this->___equalityTolerance_6;
		return (bool)((((float)L_12) < ((float)L_13))? 1 : 0);
	}
}
// System.Single Facebook.WitAi.Data.WitFloatValue::GetFloatValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WitFloatValue_GetFloatValue_mF372762C3D265206AA7C8B57049FD52078501854 (WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// return Reference.GetFloatValue(response);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0;
		L_0 = WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E(__this, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___response0;
		NullCheck(L_0);
		float L_2;
		L_2 = VirtualFuncInvoker1< float, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(6 /* System.Single Facebook.WitAi.WitResponseReference::GetFloatValue(Facebook.WitAi.Lib.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Data.WitFloatValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitFloatValue__ctor_mDC869B0C461A17A781ED40A9C9C756535C0E2DD2 (WitFloatValue_t83AB15F09EF4FAF4F60CFD3DB5516B1B5262DBB7* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float equalityTolerance = .0001f;
		__this->___equalityTolerance_6 = (9.99999975E-05f);
		WitValue__ctor_m264288526BAD2486D03CB9C724275A8BBFF8A8B9(__this, NULL);
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
// System.Object Facebook.WitAi.Data.WitIntValue::GetValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitIntValue_GetValue_mE04E78427C730D93A49DB2E404D7CACC1952E2E5 (WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetIntValue(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		int32_t L_1;
		L_1 = WitIntValue_GetIntValue_m694764F51663C086A2013B034F1A47F2195BD39C(__this, L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean Facebook.WitAi.Data.WitIntValue::Equals(Facebook.WitAi.Lib.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitIntValue_Equals_m3FD679F56D49BFBF62DF352F26E76AA296C166EF (WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		// int iValue = 0;
		V_0 = 0;
		// if (value is int i)
		RuntimeObject* L_0 = ___value1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___value1;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// iValue = i;
		int32_t L_2 = V_1;
		V_0 = L_2;
		goto IL_0038;
	}

IL_0015:
	{
		// else if (null != value && !int.TryParse("" + value, out iValue))
		RuntimeObject* L_3 = ___value1;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_4 = ___value1;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		goto IL_0024;
	}

IL_001e:
	{
		RuntimeObject* L_5 = ___value1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		G_B6_0 = L_6;
	}

IL_0024:
	{
		String_t* L_7 = G_B6_0;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_002d;
		}
	}
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		bool L_8;
		L_8 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(G_B8_0, (&V_0), NULL);
		if (L_8)
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
		// return GetIntValue(response) == iValue;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_9 = ___response0;
		int32_t L_10;
		L_10 = WitIntValue_GetIntValue_m694764F51663C086A2013B034F1A47F2195BD39C(__this, L_9, NULL);
		int32_t L_11 = V_0;
		return (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
	}
}
// System.Int32 Facebook.WitAi.Data.WitIntValue::GetIntValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitIntValue_GetIntValue_m694764F51663C086A2013B034F1A47F2195BD39C (WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// return Reference.GetIntValue(response);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0;
		L_0 = WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E(__this, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___response0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(5 /* System.Int32 Facebook.WitAi.WitResponseReference::GetIntValue(Facebook.WitAi.Lib.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Data.WitIntValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntValue__ctor_m6D1FC9354AE0AFE1089E4EE60CB76E6276B58744 (WitIntValue_t29F1CC33733C944124B4CA408B25B2789122A5A0* __this, const RuntimeMethod* method) 
{
	{
		WitValue__ctor_m264288526BAD2486D03CB9C724275A8BBFF8A8B9(__this, NULL);
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
// System.Object Facebook.WitAi.Data.WitStringValue::GetValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitStringValue_GetValue_mDE1C8E34A3DF31021B960071499C9F071D9BAC0E (WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// return GetStringValue(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		String_t* L_1;
		L_1 = WitStringValue_GetStringValue_m5B80B840DF95DD62EC616011C12B5333457CCC6D(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean Facebook.WitAi.Data.WitStringValue::Equals(Facebook.WitAi.Lib.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitStringValue_Equals_mBC55F09224BCA6215C8184E1593D235A00BD0D47 (WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (value is string sValue)
		RuntimeObject* L_0 = ___value1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return GetStringValue(response) == sValue;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2 = ___response0;
		String_t* L_3;
		L_3 = WitStringValue_GetStringValue_m5B80B840DF95DD62EC616011C12B5333457CCC6D(__this, L_2, NULL);
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
		return L_5;
	}

IL_0018:
	{
		// return "" + value == GetStringValue(response);
		RuntimeObject* L_6 = ___value1;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0024;
	}

IL_001e:
	{
		RuntimeObject* L_7 = ___value1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		G_B5_0 = L_8;
	}

IL_0024:
	{
		String_t* L_9 = G_B5_0;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_002d;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10 = ___response0;
		String_t* L_11;
		L_11 = WitStringValue_GetStringValue_m5B80B840DF95DD62EC616011C12B5333457CCC6D(__this, L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(G_B7_0, L_11, NULL);
		return L_12;
	}
}
// System.String Facebook.WitAi.Data.WitStringValue::GetStringValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m5B80B840DF95DD62EC616011C12B5333457CCC6D (WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0;
		L_0 = WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E(__this, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Data.WitStringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitStringValue__ctor_m99FFDBE296451F1893E4CD8795A70DDE2C01A84F (WitStringValue_tE2CD1599E2F04B7B779D0254C7CA5262953F4141* __this, const RuntimeMethod* method) 
{
	{
		WitValue__ctor_m264288526BAD2486D03CB9C724275A8BBFF8A8B9(__this, NULL);
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
// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E (WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* __this, const RuntimeMethod* method) 
{
	{
		// if (null == reference)
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0 = __this->___reference_5;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// reference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_1 = __this->___path_4;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_2;
		L_2 = WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD(L_1, NULL);
		__this->___reference_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reference_5), (void*)L_2);
	}

IL_0019:
	{
		// return reference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_3 = __this->___reference_5;
		return L_3;
	}
}
// System.String Facebook.WitAi.Data.WitValue::ToString(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitValue_ToString_m0F7339D6EB2740A5214FF2A0FEDF0D2BE0A05C8F (WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0;
		L_0 = WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E(__this, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_m264288526BAD2486D03CB9C724275A8BBFF8A8B9 (WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Data.Traits.WitTrait::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTrait__ctor_m895832EF4D0D05AE5010064BACC48C63EE5D8225 (WitTrait_t99DD355D4BE3CDE35D2719D94FB4383196B14C0B* __this, const RuntimeMethod* method) 
{
	{
		WitConfigurationData__ctor_m8D4068A08641205F93EF9642BA9106B0EFD37975(__this, NULL);
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
// System.Void Facebook.WitAi.Data.Traits.WitTraitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTraitValue__ctor_mD725E8A9E1D4C7A558A497CF0D5983958B278609 (WitTraitValue_tE5A6615AB4B4D4AEB582B44BCE876BB7C3CA0874* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Data.Intents.WitIntent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntent__ctor_m86D722790927E57BA33863BE4C8C35BBD413F062 (WitIntent_t50D15FFA847A8880F6700AD57A09F00BAD2B97B1* __this, const RuntimeMethod* method) 
{
	{
		WitConfigurationData__ctor_m8D4068A08641205F93EF9642BA9106B0EFD37975(__this, NULL);
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
// System.Void Facebook.WitAi.Data.Intents.WitIntentData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentData__ctor_m2478D4ABDF4379DB5F5E5E376DECF61716EE4503 (WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* __this, const RuntimeMethod* method) 
{
	{
		// public WitIntentData() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public WitIntentData() {}
		return;
	}
}
// System.Void Facebook.WitAi.Data.Intents.WitIntentData::.ctor(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentData__ctor_m8CEDB53E18884435719EA336872E77FBFF6D07C3 (WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	{
		// public WitIntentData(WitResponseNode node)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// FromIntentWitResponseNode(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* L_1;
		L_1 = WitIntentData_FromIntentWitResponseNode_mD898DAD5667EE83CED862C064635D4C42102670A(__this, L_0, NULL);
		// }
		return;
	}
}
// Facebook.WitAi.Data.Intents.WitIntentData Facebook.WitAi.Data.Intents.WitIntentData::FromIntentWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* WitIntentData_FromIntentWitResponseNode_mD898DAD5667EE83CED862C064635D4C42102670A (WitIntentData_t6A544591D0035DEADD1FEE4F4598099B2E4436FD* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// responseNode = node;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		// id = node[WitIntent.Fields.ID];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1 = ___node0;
		NullCheck(L_1);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2;
		L_2 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_mBEC61604C409E23E9D4BEBA57CE513B294B68AB6(L_2, NULL);
		__this->___id_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_1), (void*)L_3);
		// name = node[WitIntent.Fields.NAME];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4 = ___node0;
		NullCheck(L_4);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5;
		L_5 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_mBEC61604C409E23E9D4BEBA57CE513B294B68AB6(L_5, NULL);
		__this->___name_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_6);
		// confidence = node[WitIntent.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7 = ___node0;
		NullCheck(L_7);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_8;
		L_8 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_7, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_8);
		__this->___confidence_3 = L_9;
		// return this;
		return __this;
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
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.DynamicEntityDataProvider::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* DynamicEntityDataProvider_GetDynamicEntities_m26F72C7D369718E6DE32AF246700112BE1738EFE (DynamicEntityDataProvider_t75E28DA9F9EB4A2ADD4D10BA0A93A7DFF2D3771D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* V_0 = NULL;
	WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C* V_1 = NULL;
	int32_t V_2 = 0;
	WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* V_3 = NULL;
	{
		// WitDynamicEntities entities = new WitDynamicEntities();
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054*)il2cpp_codegen_object_new(WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_mFACF5C5BC88B719671AEC348696B8ABDDE7FD800(L_0, NULL);
		V_0 = L_0;
		// foreach (var entity in entitiesDefinition)
		WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C* L_1 = __this->___entitiesDefinition_4;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0020;
	}

IL_0011:
	{
		// foreach (var entity in entitiesDefinition)
		WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// entities.Merge(entity);
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_6 = V_0;
		WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* L_7 = V_3;
		NullCheck(L_6);
		WitDynamicEntities_Merge_m2AD9830395640D7DE0B649A3871F59F025642FE2(L_6, L_7, NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		// foreach (var entity in entitiesDefinition)
		int32_t L_9 = V_2;
		WitDynamicEntitiesDataU5BU5D_t98419FABDAF1EE0A54491F8BE3D37CA0DADD872C* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// return entities;
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_11 = V_0;
		return L_11;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityDataProvider__ctor_m07A18369650B13E051B850922C7AE756EC2FDDA8 (DynamicEntityDataProvider_t75E28DA9F9EB4A2ADD4D10BA0A93A7DFF2D3771D* __this, const RuntimeMethod* method) 
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
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.DynamicEntityProvider::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* DynamicEntityProvider_GetDynamicEntities_m0CE5C5FD9150FAFC1C0FC93409ED4B13E577C5F2 (DynamicEntityProvider_tFFF7C1EDB71E7D0B59C0535069D251E269943FB7* __this, const RuntimeMethod* method) 
{
	{
		// return entities;
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = __this->___entities_4;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityProvider__ctor_mE22EF4448EEAA0142191245D50752CEFA85B4C18 (DynamicEntityProvider_tFFF7C1EDB71E7D0B59C0535069D251E269943FB7* __this, const RuntimeMethod* method) 
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
// System.Boolean Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m3BD187393EB61B4E4CDC64985BB0ED064D4E39FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool HasDynamicEntityRegistry => Instance;
		DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* L_0;
		L_0 = DynamicEntityKeywordRegistry_get_Instance_m8853ADF518217D605099DE7141772E0B1545A7FB(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		return L_1;
	}
}
// Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* DynamicEntityKeywordRegistry_get_Instance_m8853ADF518217D605099DE7141772E0B1545A7FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_m8AE87A78189331FAA8521B0546C6E0506D19C416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instance)
		DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* L_0 = ((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// instance = FindObjectOfType<DynamicEntityKeywordRegistry>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* L_2;
		L_2 = Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_m8AE87A78189331FAA8521B0546C6E0506D19C416(Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_m8AE87A78189331FAA8521B0546C6E0506D19C416_RuntimeMethod_var);
		((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4), (void*)L_2);
	}

IL_0016:
	{
		// return instance;
		DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* L_3 = ((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4;
		return L_3;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_OnEnable_m25DBB232E390018E218692B47B9747BD6CF67FED (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_OnDisable_mD2BB03F557723FC86A4C1972758A589F3B4DA315 (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4 = (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF_il2cpp_TypeInfo_var))->___instance_4), (void*)(DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF*)NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::RegisterDynamicEntity(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_RegisterDynamicEntity_m2DBB1B5A4F762F9CBE671D7FAB43D9018056503A (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, String_t* ___entity0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) 
{
	{
		// entities.AddKeyword(entity, keyword);
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = __this->___entities_5;
		String_t* L_1 = ___entity0;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_2 = ___keyword1;
		NullCheck(L_0);
		WitDynamicEntities_AddKeyword_mB73458D3C69D7626D02CBACBD364E7F86F135D19(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::UnregisterDynamicEntity(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mFAAE3A95793C72F21A190B0A5480DD29B649E534 (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, String_t* ___entity0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) 
{
	{
		// entities.RemoveKeyword(entity, keyword);
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = __this->___entities_5;
		String_t* L_1 = ___entity0;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_2 = ___keyword1;
		NullCheck(L_0);
		WitDynamicEntities_RemoveKeyword_m98DFBC81E3A87E27F64C33F67BE054516815C36A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* DynamicEntityKeywordRegistry_GetDynamicEntities_mE0A8AD4B728AA0AE45A467DEA412693BD73F071F (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, const RuntimeMethod* method) 
{
	{
		// return entities;
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = __this->___entities_5;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Data.Entities.DynamicEntityKeywordRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry__ctor_m88B8AA232C2AFC238525A4EFC67EC2A7C50EAFE3 (DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WitDynamicEntities entities = new WitDynamicEntities();
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054*)il2cpp_codegen_object_new(WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_mFACF5C5BC88B719671AEC348696B8ABDDE7FD800(L_0, NULL);
		__this->___entities_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_5), (void*)L_0);
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
// System.Void Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword_OnEnable_m8EF7203804FDC3B224AFE57AD45ABBBC97ADF734 (RegisteredDynamicEntityKeyword_t4CCDD49954200F42B6CD3FBC3CDB4867AB70D662* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE87ACD283F2574F5A4042DAC6F7CB75B4435C6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == keyword) return;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_0 = __this->___keyword_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (null == keyword) return;
		return;
	}

IL_0009:
	{
		// if (string.IsNullOrEmpty(entity)) return;
		String_t* L_1 = __this->___entity_4;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (string.IsNullOrEmpty(entity)) return;
		return;
	}

IL_0017:
	{
		// if (DynamicEntityKeywordRegistry.HasDynamicEntityRegistry)
		bool L_3;
		L_3 = DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m3BD187393EB61B4E4CDC64985BB0ED064D4E39FF(NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// DynamicEntityKeywordRegistry.Instance.RegisterDynamicEntity(entity, keyword);
		DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* L_4;
		L_4 = DynamicEntityKeywordRegistry_get_Instance_m8853ADF518217D605099DE7141772E0B1545A7FB(NULL);
		String_t* L_5 = __this->___entity_4;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_6 = __this->___keyword_5;
		NullCheck(L_4);
		DynamicEntityKeywordRegistry_RegisterDynamicEntity_m2DBB1B5A4F762F9CBE671D7FAB43D9018056503A(L_4, L_5, L_6, NULL);
		return;
	}

IL_0035:
	{
		// Debug.LogWarning($"No dynamic entity registry in the scene. Cannot register {name}.");
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralAE87ACD283F2574F5A4042DAC6F7CB75B4435C6C, L_7, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_8, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword_OnDisable_m85210F8788B3F8E0414618373D84B5235C7AFE8A (RegisteredDynamicEntityKeyword_t4CCDD49954200F42B6CD3FBC3CDB4867AB70D662* __this, const RuntimeMethod* method) 
{
	{
		// if (null == keyword) return;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_0 = __this->___keyword_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (null == keyword) return;
		return;
	}

IL_0009:
	{
		// if (string.IsNullOrEmpty(entity)) return;
		String_t* L_1 = __this->___entity_4;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (string.IsNullOrEmpty(entity)) return;
		return;
	}

IL_0017:
	{
		// if (DynamicEntityKeywordRegistry.HasDynamicEntityRegistry && null != keyword)
		bool L_3;
		L_3 = DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m3BD187393EB61B4E4CDC64985BB0ED064D4E39FF(NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_4 = __this->___keyword_5;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// DynamicEntityKeywordRegistry.Instance.UnregisterDynamicEntity(entity, keyword);
		DynamicEntityKeywordRegistry_tB9B31E9BD282D7259D44EF103B33239120FA00FF* L_5;
		L_5 = DynamicEntityKeywordRegistry_get_Instance_m8853ADF518217D605099DE7141772E0B1545A7FB(NULL);
		String_t* L_6 = __this->___entity_4;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_7 = __this->___keyword_5;
		NullCheck(L_5);
		DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mFAAE3A95793C72F21A190B0A5480DD29B649E534(L_5, L_6, L_7, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword__ctor_m7963AAA05B2C9BB583712966FA479B39C132EC2B (RegisteredDynamicEntityKeyword_t4CCDD49954200F42B6CD3FBC3CDB4867AB70D662* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_mFACF5C5BC88B719671AEC348696B8ABDDE7FD800 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_0 = (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*)il2cpp_codegen_object_new(List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796(L_0, List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::.ctor(System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m85BB01C194DF06D45586AF725E2887C6256C6F3B (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_0 = (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*)il2cpp_codegen_object_new(List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796(L_0, List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities(IEnumerable<WitDynamicEntity> entity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// entities.AddRange(entity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___entity0;
		NullCheck(L_1);
		List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165(L_1, L_2, List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::.ctor(Facebook.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m0F22F28030E3D54891FE26BA0654012D37BCFB4E (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_0 = (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*)il2cpp_codegen_object_new(List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796(L_0, List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities(params WitDynamicEntity[] entity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// entities.AddRange(entity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_1 = __this->___entities_0;
		WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* L_2 = ___entity0;
		NullCheck(L_1);
		List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165(L_1, (RuntimeObject*)L_2, List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		// }
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Data.Entities.WitDynamicEntities::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* WitDynamicEntities_get_AsJson_m8EF0C3717FA69838AF16C551C6C8A6049EA397C2 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA9A5A358DC9B8FDB1068C40F3BAB23EF6A0238ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCF943AD32D06568583B7FFE86E7B03141DBB9AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF7A02DF9A86E636BD6D5A7A15909E8D00DE1F94B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* V_0 = NULL;
	Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* V_2 = NULL;
	{
		// WitResponseClass json = new WitResponseClass();
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_0 = (WitResponseClass_t739569309AE400E308EB8DD834327086751C855C*)il2cpp_codegen_object_new(WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitResponseClass__ctor_m9CBC789798C208F99B1EE6384D791A39AF77FC79(L_0, NULL);
		V_0 = L_0;
		// foreach (var entity in entities)
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_1 = __this->___entities_0;
		NullCheck(L_1);
		Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 L_2;
		L_2 = List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9(L_1, List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA9A5A358DC9B8FDB1068C40F3BAB23EF6A0238ED((&V_1), Enumerator_Dispose_mA9A5A358DC9B8FDB1068C40F3BAB23EF6A0238ED_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0014_1:
			{
				// foreach (var entity in entities)
				WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_3;
				L_3 = Enumerator_get_Current_mF7A02DF9A86E636BD6D5A7A15909E8D00DE1F94B_inline((&V_1), Enumerator_get_Current_mF7A02DF9A86E636BD6D5A7A15909E8D00DE1F94B_RuntimeMethod_var);
				V_2 = L_3;
				// json.Add(entity.entity, entity.AsJson);
				WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_4 = V_0;
				WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = L_5->___entity_0;
				WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_7 = V_2;
				NullCheck(L_7);
				WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_8;
				L_8 = WitDynamicEntity_get_AsJson_m3E898F87E1494557AC5A76A5DCFC8B1B1F91729A(L_7, NULL);
				NullCheck(L_4);
				VirtualActionInvoker2< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.Void Facebook.WitAi.Lib.WitResponseNode::Add(System.String,Facebook.WitAi.Lib.WitResponseNode) */, L_4, L_6, L_8);
			}

IL_002e_1:
			{
				// foreach (var entity in entities)
				bool L_9;
				L_9 = Enumerator_MoveNext_mCF943AD32D06568583B7FFE86E7B03141DBB9AC8((&V_1), Enumerator_MoveNext_mCF943AD32D06568583B7FFE86E7B03141DBB9AC8_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// return json;
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_10 = V_0;
		return L_10;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitDynamicEntities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitDynamicEntities_ToString_m92EE4A9FB0B8A0D4DD2D6F73B19B5C5B31258DD9 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) 
{
	{
		// return AsJson.ToString();
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_0;
		L_0 = WitDynamicEntities_get_AsJson_m8EF0C3717FA69838AF16C551C6C8A6049EA397C2(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Data.Entities.WitDynamicEntity> Facebook.WitAi.Data.Entities.WitDynamicEntities::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_GetEnumerator_m79A115440176EB7BB57EC2B84336A03C9F41C0A6 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<WitDynamicEntity> GetEnumerator() => entities.GetEnumerator();
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_0 = __this->___entities_0;
		NullCheck(L_0);
		Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 L_1;
		L_1 = List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9(L_0, List_1_GetEnumerator_m9B441DBC66FB09AD88733DDAE4DA311DA53438A9_RuntimeMethod_var);
		Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tEAE49D46248145AE21DE9F12327D42FAAF488C71_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Data.Entities.WitDynamicEntities::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_System_Collections_IEnumerable_GetEnumerator_mBE0DA0CA487225B083C3B5CDF89CFFCAF6EA2F85 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = WitDynamicEntities_GetEnumerator_m79A115440176EB7BB57EC2B84336A03C9F41C0A6(__this, NULL);
		return L_0;
	}
}
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.WitDynamicEntities::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* WitDynamicEntities_GetDynamicEntities_mF4F9199761B7C9CDFAC877A6C5B0B9913F64E2A9 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, const RuntimeMethod* method) 
{
	{
		// return this;
		return __this;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::Merge(Facebook.WitAi.Interfaces.IDynamicEntitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m2AD9830395640D7DE0B649A3871F59F025642FE2 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDynamicEntitiesProvider_t517E6F2EE8F9893031C1FC89D0ABE3D932C5F372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == provider) return;
		RuntimeObject* L_0 = ___provider0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (null == provider) return;
		return;
	}

IL_0004:
	{
		// entities.AddRange(provider.GetDynamicEntities());
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___provider0;
		NullCheck(L_2);
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_3;
		L_3 = InterfaceFuncInvoker0< WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* >::Invoke(0 /* Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Interfaces.IDynamicEntitiesProvider::GetDynamicEntities() */, IDynamicEntitiesProvider_t517E6F2EE8F9893031C1FC89D0ABE3D932C5F372_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165(L_1, L_3, List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::Merge(System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Data.Entities.WitDynamicEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m812B437EA353D84928259AB705164D2FBF99F74D (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, RuntimeObject* ___mergeEntities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == mergeEntities) return;
		RuntimeObject* L_0 = ___mergeEntities0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (null == mergeEntities) return;
		return;
	}

IL_0004:
	{
		// entities.AddRange(mergeEntities);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___mergeEntities0;
		NullCheck(L_1);
		List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165(L_1, L_2, List_1_AddRange_mB158E6C8919DA4046D3393F554B49381B83DE165_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::Add(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Add_m5260DA19C9C90C720EAE5ECFFB57F51B158DF8EA (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___dynamicEntity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m8F655F9490AD0EF34E869F0F56FC5CF4D820456E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* L_0 = (U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m6F9B764F8D21DDB847D9FAF1FF2699340D73F99E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* L_1 = V_0;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_2 = ___dynamicEntity0;
		NullCheck(L_1);
		L_1->___dynamicEntity_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___dynamicEntity_0), (void*)L_2);
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* L_4 = V_0;
		Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A* L_5 = (Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A*)il2cpp_codegen_object_new(Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m503B049BA64B04367D43973DFDA18B3E5F9CAFD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m8F655F9490AD0EF34E869F0F56FC5CF4D820456E_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6(L_3, L_5, List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6_RuntimeMethod_var);
		// if(index < 0) entities.Add(dynamicEntity);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// if(index < 0) entities.Add(dynamicEntity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_7 = __this->___entities_0;
		U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* L_8 = V_0;
		NullCheck(L_8);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_9 = L_8->___dynamicEntity_0;
		NullCheck(L_7);
		List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_inline(L_7, L_9, List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var);
		return;
	}

IL_0039:
	{
		// else Debug.LogWarning($"Cannot add entity, registry already has an entry for {dynamicEntity.entity}");
		U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* L_10 = V_0;
		NullCheck(L_10);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_11 = L_10->___dynamicEntity_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___entity_0;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_13, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::Remove(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Remove_m35B8D7F6E5659C22AD181BA772F145F01A49FA9E (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___dynamicEntity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m67821A662F596F3835E10453D4DA3BF09534DEDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entities.Remove(dynamicEntity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_0 = __this->___entities_0;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_1 = ___dynamicEntity0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m67821A662F596F3835E10453D4DA3BF09534DEDC(L_0, L_1, List_1_Remove_m67821A662F596F3835E10453D4DA3BF09534DEDC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::AddKeyword(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_AddKeyword_mB73458D3C69D7626D02CBACBD364E7F86F135D19 (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, String_t* ___entityName0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m67036BF86398F726BAAE19DBF491CA4939343295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_m6DDA6D25E9C2C761669D21ECF1CDB28F9F1ECF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* V_0 = NULL;
	WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* L_0 = (U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_mD68EB8CF35DBEEDB63A76D2D48212966C1695ECB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* L_1 = V_0;
		String_t* L_2 = ___entityName0;
		NullCheck(L_1);
		L_1->___entityName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entityName_0), (void*)L_2);
		// var entity = entities.Find(e => entityName == e.entity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* L_4 = V_0;
		Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A* L_5 = (Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A*)il2cpp_codegen_object_new(Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m503B049BA64B04367D43973DFDA18B3E5F9CAFD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_m6DDA6D25E9C2C761669D21ECF1CDB28F9F1ECF44_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_6;
		L_6 = List_1_Find_m67036BF86398F726BAAE19DBF491CA4939343295(L_3, L_5, List_1_Find_m67036BF86398F726BAAE19DBF491CA4939343295_RuntimeMethod_var);
		V_1 = L_6;
		// if (null == entity)
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_7 = V_1;
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		// entity = new WitDynamicEntity(entityName);
		U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___entityName_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline(Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_11 = (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB*)il2cpp_codegen_object_new(WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WitDynamicEntity__ctor_mC6FE01FD85FED5466AE52CAF3200BFAF93FA7C04(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		// entities.Add(entity);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_12 = __this->___entities_0;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_13 = V_1;
		NullCheck(L_12);
		List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_inline(L_12, L_13, List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var);
	}

IL_0045:
	{
		// entity.keywords.Add(keyword);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_14 = V_1;
		NullCheck(L_14);
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_15 = L_14->___keywords_1;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_16 = ___keyword1;
		NullCheck(L_15);
		List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_inline(L_15, L_16, List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities::RemoveKeyword(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_RemoveKeyword_m98DFBC81E3A87E27F64C33F67BE054516815C36A (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* __this, String_t* ___entityName0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m636A52CA0FB7DD3D32CED251F24A66CDC3633C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m08573E18EBB7AF825DD42B2D856CB66586748D76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCD55A9AA3D76949311C46085B8D9B6B74C50CE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mF3D19B89844D6E8BFA1115CAA60A5BDD5EF1F8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* L_0 = (U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m8D0E22D4F38C1C78E58C2188BFE7862B882F10EA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* L_1 = V_0;
		String_t* L_2 = ___entityName0;
		NullCheck(L_1);
		L_1->___entityName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entityName_0), (void*)L_2);
		// int index = entities.FindIndex(e => e.entity == entityName);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* L_4 = V_0;
		Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A* L_5 = (Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A*)il2cpp_codegen_object_new(Predicate_1_t36EBC0743DAB25F77F55833ED918D2C7AC431C7A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m503B049BA64B04367D43973DFDA18B3E5F9CAFD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mF3D19B89844D6E8BFA1115CAA60A5BDD5EF1F8DB_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6(L_3, L_5, List_1_FindIndex_m41E864FFDD4F42C944B561A9709E2EE62FC602C6_RuntimeMethod_var);
		V_1 = L_6;
		// if (index >= 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		// entities[index].keywords.Remove(keyword);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_8 = __this->___entities_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_10;
		L_10 = List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E(L_8, L_9, List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_11 = L_10->___keywords_1;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_12 = ___keyword1;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_m08573E18EBB7AF825DD42B2D856CB66586748D76(L_11, L_12, List_1_Remove_m08573E18EBB7AF825DD42B2D856CB66586748D76_RuntimeMethod_var);
		// if(entities[index].keywords.Count == 0) entities.RemoveAt(index);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_14 = __this->___entities_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_16;
		L_16 = List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E(L_14, L_15, List_1_get_Item_mF22238F8F9CCF966EC6B3673B9258342EB764B7E_RuntimeMethod_var);
		NullCheck(L_16);
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_17 = L_16->___keywords_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mCD55A9AA3D76949311C46085B8D9B6B74C50CE2F_inline(L_17, List_1_get_Count_mCD55A9AA3D76949311C46085B8D9B6B74C50CE2F_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		// if(entities[index].keywords.Count == 0) entities.RemoveAt(index);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_19 = __this->___entities_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		List_1_RemoveAt_m636A52CA0FB7DD3D32CED251F24A66CDC3633C11(L_19, L_20, List_1_RemoveAt_m636A52CA0FB7DD3D32CED251F24A66CDC3633C11_RuntimeMethod_var);
	}

IL_0065:
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m6F9B764F8D21DDB847D9FAF1FF2699340D73F99E (U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::<Add>b__0(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m8F655F9490AD0EF34E869F0F56FC5CF4D820456E (U3CU3Ec__DisplayClass12_0_t74EEAADB5D1467BB6A6581295207DCC9B25C9A7A* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___e0, const RuntimeMethod* method) 
{
	{
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___entity_0;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_2 = __this->___dynamicEntity_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___entity_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mD68EB8CF35DBEEDB63A76D2D48212966C1695ECB (U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::<AddKeyword>b__0(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_m6DDA6D25E9C2C761669D21ECF1CDB28F9F1ECF44 (U3CU3Ec__DisplayClass14_0_t0E317FA09AA1ADB9E7810FCEBBDCF487BBBA7F75* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___e0, const RuntimeMethod* method) 
{
	{
		// var entity = entities.Find(e => entityName == e.entity);
		String_t* L_0 = __this->___entityName_0;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___entity_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_2, NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m8D0E22D4F38C1C78E58C2188BFE7862B882F10EA (U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::<RemoveKeyword>b__0(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mF3D19B89844D6E8BFA1115CAA60A5BDD5EF1F8DB (U3CU3Ec__DisplayClass15_0_t9278361DC2379675C4FBCB0FBF4950B7B760FEBC* __this, WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* ___e0, const RuntimeMethod* method) 
{
	{
		// int index = entities.FindIndex(e => e.entity == entityName);
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___entity_0;
		String_t* L_2 = __this->___entityName_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.WitDynamicEntitiesData::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* WitDynamicEntitiesData_GetDynamicEntities_m963886EB4A912A5E18691EC6FAA96BAEC080060A (WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* __this, const RuntimeMethod* method) 
{
	{
		// return entities;
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = __this->___entities_4;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntitiesData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntitiesData__ctor_mF46974C7974D2D9E0711BF71A55B3186F472CA55 (WitDynamicEntitiesData_t89F1557016C7917FB0136B98FE1DC9C3CDDA2564* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m78CC87086AFBC34CA487A411C4ABF4A76AEA6DF1 (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitEntityKeyword> keywords = new List<WitEntityKeyword>();
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_0 = (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*)il2cpp_codegen_object_new(List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D(L_0, List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,Facebook.WitAi.Data.Entities.WitEntityKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m43379C3B399A1D467F875EB6B22FF3CCF326B8F3 (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, String_t* ___entity0, WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitEntityKeyword> keywords = new List<WitEntityKeyword>();
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_0 = (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*)il2cpp_codegen_object_new(List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D(L_0, List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, WitEntityKeyword keyword)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// this.keywords.Add(keyword);
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_2 = __this->___keywords_1;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_3 = ___keyword1;
		NullCheck(L_2);
		List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_inline(L_2, L_3, List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_mC6FE01FD85FED5466AE52CAF3200BFAF93FA7C04 (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, String_t* ___entity0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// public List<WitEntityKeyword> keywords = new List<WitEntityKeyword>();
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_0 = (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*)il2cpp_codegen_object_new(List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D(L_0, List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, params string[] keywords)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// foreach (var keyword in keywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___keywords1;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0037;
	}

IL_001e:
	{
		// foreach (var keyword in keywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// this.keywords.Add(new WitEntityKeyword(keyword));
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_7 = __this->___keywords_1;
		String_t* L_8 = V_2;
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_9 = (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5*)il2cpp_codegen_object_new(WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WitEntityKeyword__ctor_m0F0DC376B974BD93B174E7A4D6AC604DE0BEB8FB(L_9, L_8, NULL);
		NullCheck(L_7);
		List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_inline(L_7, L_9, List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		// foreach (var keyword in keywords)
		int32_t L_11 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_mAA99CCFEDD61F3E2F8175F707C10E63B5E9A946D (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, String_t* ___entity0, Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___keywordsToSynonyms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public List<WitEntityKeyword> keywords = new List<WitEntityKeyword>();
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_0 = (List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887*)il2cpp_codegen_object_new(List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D(L_0, List_1__ctor_mDCB43822A4DFE2F6B5BE818B82DC23AE063EE56D_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, Dictionary<string, List<string>> keywordsToSynonyms)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// foreach (var synonym in keywordsToSynonyms)
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = ___keywordsToSynonyms1;
		NullCheck(L_2);
		Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 L_3;
		L_3 = Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE(L_2, Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44((&V_0), Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0021_1:
			{
				// foreach (var synonym in keywordsToSynonyms)
				KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 L_4;
				L_4 = Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_inline((&V_0), Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var);
				V_1 = L_4;
				// keywords.Add(new WitEntityKeyword()
				// {
				//     keyword = synonym.Key,
				//     synonyms = synonym.Value
				// });
				List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_5 = __this->___keywords_1;
				WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_6 = (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5*)il2cpp_codegen_object_new(WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				WitEntityKeyword__ctor_m428EA8D89870BEBE0C2CCFF4041C82EB3171DD6C(L_6, NULL);
				WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_7 = L_6;
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_inline((&V_1), KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var);
				NullCheck(L_7);
				L_7->___keyword_0 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&L_7->___keyword_0), (void*)L_8);
				WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_9 = L_7;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
				L_10 = KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_inline((&V_1), KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var);
				NullCheck(L_9);
				L_9->___synonyms_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&L_9->___synonyms_1), (void*)L_10);
				NullCheck(L_5);
				List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_inline(L_5, L_9, List_1_Add_m57806926C3F1B7EEF0B008479ECA5BE9027A179D_RuntimeMethod_var);
			}

IL_0053_1:
			{
				// foreach (var synonym in keywordsToSynonyms)
				bool L_11;
				L_11 = Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656((&V_0), Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitDynamicEntity::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* WitDynamicEntity_get_AsJson_m3E898F87E1494557AC5A76A5DCFC8B1B1F91729A (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25FAB013E20621ED9156A5D8602E37E6979CCDCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8D1B5472B8F40695AD00E362DF9B0CCE4F919D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD56264A4D181F6240745145CE039E2D7750313AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CCCD59E97F72FE069AAFD946983DDD5D8591FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* V_0 = NULL;
	Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A V_1;
	memset((&V_1), 0, sizeof(V_1));
	WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* V_2 = NULL;
	{
		// WitResponseArray synonymArray = new WitResponseArray();
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_0 = (WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05*)il2cpp_codegen_object_new(WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitResponseArray__ctor_m6D22459257B33D9C45FF0EA9619A9AA49124606D(L_0, NULL);
		V_0 = L_0;
		// foreach (var keyword in keywords)
		List_1_tC8924E5DCB1302F87A924D4A2EEBC2434968F887* L_1 = __this->___keywords_1;
		NullCheck(L_1);
		Enumerator_tA5C2AD228C0A9F224D92979908D12B57CEF6E96A L_2;
		L_2 = List_1_GetEnumerator_m4CCCD59E97F72FE069AAFD946983DDD5D8591FD1(L_1, List_1_GetEnumerator_m4CCCD59E97F72FE069AAFD946983DDD5D8591FD1_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m25FAB013E20621ED9156A5D8602E37E6979CCDCB((&V_1), Enumerator_Dispose_m25FAB013E20621ED9156A5D8602E37E6979CCDCB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0014_1:
			{
				// foreach (var keyword in keywords)
				WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_3;
				L_3 = Enumerator_get_Current_mD56264A4D181F6240745145CE039E2D7750313AF_inline((&V_1), Enumerator_get_Current_mD56264A4D181F6240745145CE039E2D7750313AF_RuntimeMethod_var);
				V_2 = L_3;
				// synonymArray.Add(keyword.AsJson);
				WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_4 = V_0;
				WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_5 = V_2;
				NullCheck(L_5);
				WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_6;
				L_6 = WitEntityKeyword_get_AsJson_mF26B952D2770B770116A8D862D1DAA6853653DC6(L_5, NULL);
				NullCheck(L_4);
				VirtualActionInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(12 /* System.Void Facebook.WitAi.Lib.WitResponseNode::Add(Facebook.WitAi.Lib.WitResponseNode) */, L_4, L_6);
			}

IL_0028_1:
			{
				// foreach (var keyword in keywords)
				bool L_7;
				L_7 = Enumerator_MoveNext_m8D1B5472B8F40695AD00E362DF9B0CCE4F919D7C((&V_1), Enumerator_MoveNext_m8D1B5472B8F40695AD00E362DF9B0CCE4F919D7C_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return synonymArray;
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_8 = V_0;
		return L_8;
	}
}
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.WitDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* WitDynamicEntity_GetDynamicEntities_mCA3E4210C970FE269FAC81D59B72DE56FF8EFCCB (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WitDynamicEntities()
		// {
		//     entities = new List<WitDynamicEntity>
		//     {
		//         this
		//     }
		// };
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_0 = (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054*)il2cpp_codegen_object_new(WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_mFACF5C5BC88B719671AEC348696B8ABDDE7FD800(L_0, NULL);
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_1 = L_0;
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_2 = (List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB*)il2cpp_codegen_object_new(List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796(L_2, List_1__ctor_m38543D708664CDA034C6B6D276D1EA261BEE2796_RuntimeMethod_var);
		List_1_t38B7BD41064635B832F9DDAA569AB0626FC926BB* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_inline(L_3, __this, List_1_Add_m4AFBFA0F69A9E9C42FDF4CBBED43E6C26A6EDE28_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___entities_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entities_0), (void*)L_3);
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
// System.Void Facebook.WitAi.Data.Entities.WitEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntity__ctor_mC46AC661CB8DCA81813BD37A2D41034B09584954 (WitEntity_t94A3BFC668CFCC30CC80133AEF7E9947F691F892* __this, const RuntimeMethod* method) 
{
	{
		WitConfigurationData__ctor_m8D4068A08641205F93EF9642BA9106B0EFD37975(__this, NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitEntityData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityData__ctor_m5998AD1EABFF15C05ADA683D7149E7FC47D0CDE2 (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityData() {}
		WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402(__this, WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402_RuntimeMethod_var);
		// public WitEntityData() {}
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityData::.ctor(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityData__ctor_mADBBBECBD117EB5A0B3D52075F74312E4F8644B1 (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m44BCC95882F476B59D585A3BB4B76287A13C528F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402(__this, WitEntityDataBase_1__ctor_m954C8C7C12B6AE8DC251B99574E791D559661402_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m44BCC95882F476B59D585A3BB4B76287A13C528F(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m44BCC95882F476B59D585A3BB4B76287A13C528F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityData::OnParseValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityData_OnParseValue_mC190378E8BF7A6C2A1EEB39DCD6F76F72B61EB7A (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return node[WitEntity.Fields.VALUE];
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		NullCheck(L_0);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		String_t* L_2;
		L_2 = WitResponseNode_op_Implicit_mBEC61604C409E23E9D4BEBA57CE513B294B68AB6(L_1, NULL);
		return L_2;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityData::op_Implicit(Facebook.WitAi.Data.Entities.WitEntityData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Implicit_mEA87D541E9AD27DC55D8F5847D6F2342C05F6A14 (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* ___data0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator bool(WitEntityData data) => null != data && !string.IsNullOrEmpty(data.value);
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_0 = ___data0;
		bool L_1;
		L_1 = WitEntityData_op_Inequality_mC5EADA586EF7358C1C5C3E530F13FCC8B030B39F((WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_2 = ___data0;
		NullCheck(L_2);
		String_t* L_3 = ((WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*)L_2)->___value_8;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityData::op_Implicit(Facebook.WitAi.Data.Entities.WitEntityData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityData_op_Implicit_m07EC2F851A12F5653924BE29C1C17881768301DA (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* ___data0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator string(WitEntityData data) => data.value;
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = ((WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*)L_0)->___value_8;
		return L_1;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Equality_m2738EF611A8B6196FE5DC382C37EC960B4899B83 (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// public static bool operator ==(WitEntityData data, object value) => Equals(data?.value, value);
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2 = ((WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*)L_1)->___value_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___value1;
		bool L_4;
		L_4 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(G_B3_0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityData::op_Inequality(Facebook.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Inequality_mC5EADA586EF7358C1C5C3E530F13FCC8B030B39F (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// public static bool operator !=(WitEntityData data, object value) => !Equals(data?.value, value);
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2 = ((WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*)L_1)->___value_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___value1;
		bool L_4;
		L_4 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(G_B3_0, L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_Equals_m935C3A0D10C7C7EE3A6D6F9C74945062335EA700 (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (obj is string s) return s == value;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (obj is string s) return s == value;
		String_t* L_2 = V_0;
		String_t* L_3 = ((WitEntityDataBase_1_t15096AB26C7BE580FC9D4916EBFB66A4B9CF4C73*)__this)->___value_8;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return base.Equals(obj);
		RuntimeObject* L_5 = ___obj0;
		bool L_6;
		L_6 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_5, NULL);
		return L_6;
	}
}
// System.Int32 Facebook.WitAi.Data.Entities.WitEntityData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityData_GetHashCode_m2860E04002015CE351667D5A29BBAAC393210643 (WitEntityData_tDDA8E2C904F3DF1FEC36CE153524F0C0F0E6E9BC* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitEntityFloatData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityFloatData__ctor_m0270E5FE62E52476EE4A92BDE6449641FFE6305A (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityFloatData() {}
		WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893(__this, WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_RuntimeMethod_var);
		// public WitEntityFloatData() {}
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityFloatData::.ctor(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityFloatData__ctor_mB4D2ADFE66739B2B36266743E16983049CC32E37 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityFloatData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893(__this, WitEntityDataBase_1__ctor_m0BDA5D9ABBD4DF5591D8961245233F9652851893_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_mEBB6417BC069B64576611835830E1CCE7D824FCF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single Facebook.WitAi.Data.Entities.WitEntityFloatData::OnParseValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WitEntityFloatData_OnParseValue_mAE207BA914EF6B834C82CF34CB0F64F0E0E39A80 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return node[WitEntity.Fields.VALUE].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		NullCheck(L_0);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_1);
		return L_2;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Implicit(Facebook.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Implicit_m304E6BD085994AC98DCD71A016E78ED4B87C6AF1 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, const RuntimeMethod* method) 
{
	{
		// null != data && data.hasData;
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_1 = ___data0;
		NullCheck(L_1);
		bool L_2 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)L_1)->___hasData_10;
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::Approximately(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_Approximately_m59DC1C8A148025CC49F5D023150D6C53E1ED73A2 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// public bool Approximately(float v) => Mathf.Approximately(value, v);
		float L_0 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)__this)->___value_8;
		float L_1 = ___v0;
		bool L_2;
		L_2 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mDA7E5EB195526CAF4EEC92686EA6DA1FF2131A05 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, float ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(WitEntityFloatData data, float value) => data?.value == value;
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_1 = ___data0;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)L_1)->___value_8;
		float L_3 = ___value1;
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(Facebook.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_mF19D3632EFB1A24936E64C9EFF68D5335A12A909 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, float ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityFloatData data, float value) => !(data == value);
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data0;
		float L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mDA7E5EB195526CAF4EEC92686EA6DA1FF2131A05(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mF7C0A4BE6ED6E60663B359F19BD910329487820A (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(WitEntityFloatData data, int value) => data?.value == value;
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_1 = ___data0;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)L_1)->___value_8;
		int32_t L_3 = ___value1;
		return (bool)((((float)L_2) == ((float)((float)L_3)))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(Facebook.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m268A4D68F4AD0A2116C6074877562B8D584E0853 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityFloatData data, int value) => !(data == value);
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mF7C0A4BE6ED6E60663B359F19BD910329487820A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Equality(System.Single,Facebook.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mE99A494390DFBF5B30917182C250E6714136EDDE (float ___value0, WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(float value, WitEntityFloatData data) => data?.value == value;
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_1 = ___data1;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)L_1)->___value_8;
		float L_3 = ___value0;
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(System.Single,Facebook.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m274AE8355CC402B2D464546F2939539FF6A051D5 (float ___value0, WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(float value, WitEntityFloatData data) => !(data == value);
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data1;
		float L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mDA7E5EB195526CAF4EEC92686EA6DA1FF2131A05(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Equality(System.Int32,Facebook.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m0A4B26344FAF95EA1BBD8E3F963BB46BFBC86FD0 (int32_t ___value0, WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(int value, WitEntityFloatData data) => data?.value == value;
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_1 = ___data1;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)L_1)->___value_8;
		int32_t L_3 = ___value0;
		return (bool)((((float)L_2) == ((float)((float)L_3)))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(System.Int32,Facebook.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_mEB0B1CE5C6EBE590E4B0AA8DE1B9A921D0B3A4C7 (int32_t ___value0, WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(int value, WitEntityFloatData data) => !(data == value);
		WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* L_0 = ___data1;
		int32_t L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mF7C0A4BE6ED6E60663B359F19BD910329487820A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityFloatData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_Equals_mD4D42AE1CC27CAE2E520980E4252818B4F88C9F5 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (obj is float f) return f == value;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_1, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// if (obj is float f) return f == value;
		float L_2 = V_0;
		float L_3 = ((WitEntityDataBase_1_tABE913B8DEE0D7741D01250BCF54CB222D019FA3*)__this)->___value_8;
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}

IL_0019:
	{
		// return base.Equals(obj);
		RuntimeObject* L_4 = ___obj0;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Facebook.WitAi.Data.Entities.WitEntityFloatData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityFloatData_GetHashCode_mE2A9EA1F9B2E9393D4FB3050EAF7ED8567BB30E3 (WitEntityFloatData_tC929892407D54A42C285CB034B85DE6E7A23C18B* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitEntityIntData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityIntData__ctor_m1727D274EFBC1F612C0538955E0D37E93ED24F72 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityIntData() {}
		WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8(__this, WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_RuntimeMethod_var);
		// public WitEntityIntData() {}
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityIntData::.ctor(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityIntData__ctor_m8093C8F8CBA82F47526000A9045A2CD782CB3110 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityIntData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8(__this, WitEntityDataBase_1__ctor_m55E914060BE2E600ACB8CC71FC9C80AB2CB992B8_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m63B33E2731C95F8A7209705B9BDBACFDA0FC8557_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Facebook.WitAi.Data.Entities.WitEntityIntData::OnParseValue(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityIntData_OnParseValue_m4182B28934A6D17EBF719F684C0073B60D8D0E58 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return node[WitEntity.Fields.VALUE].AsInt;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___node0;
		NullCheck(L_0);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, L_1);
		return L_2;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::op_Implicit(Facebook.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Implicit_m83E4CF74F9154A8B544F0A88466CC50686E2FA13 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* ___data0, const RuntimeMethod* method) 
{
	{
		// null != data && data.hasData;
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_1 = ___data0;
		NullCheck(L_1);
		bool L_2 = ((WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07*)L_1)->___hasData_10;
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::op_Equality(Facebook.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_mD4249AEC5F17CFB0127B7998EC36C5D1E3CA2D15 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(WitEntityIntData data, int value) => data?.value == value;
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_1 = ___data0;
		NullCheck(L_1);
		int32_t L_2 = ((WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07*)L_1)->___value_8;
		int32_t L_3 = ___value1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::op_Inequality(Facebook.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Inequality_mFB50CF67F6050BE26860B0A57274470985F74BD0 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityIntData data, int value) => !(data == value);
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_0 = ___data0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityIntData_op_Equality_mD4249AEC5F17CFB0127B7998EC36C5D1E3CA2D15(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::op_Equality(System.Int32,Facebook.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_m6822202A1306823C5DCF027D93494EE4EB16D450 (int32_t ___value0, WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(int value, WitEntityIntData data) => data?.value == value;
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_1 = ___data1;
		NullCheck(L_1);
		int32_t L_2 = ((WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07*)L_1)->___value_8;
		int32_t L_3 = ___value0;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::op_Inequality(System.Int32,Facebook.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Inequality_m04EA980E93E5A251E9A5E60E791140D207F52FC0 (int32_t ___value0, WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(int value, WitEntityIntData data) => !(data == value);
		WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* L_0 = ___data1;
		int32_t L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityIntData_op_Equality_mD4249AEC5F17CFB0127B7998EC36C5D1E3CA2D15(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitEntityIntData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_Equals_m1A97A4D57A4735D912A5C00AC184AB693C0FB744 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (obj is int i) return i == value;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// if (obj is int i) return i == value;
		int32_t L_2 = V_0;
		int32_t L_3 = ((WitEntityDataBase_1_t6A3C61732A7C2581DF05134AB74E1DFB59E05C07*)__this)->___value_8;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_0019:
	{
		// return base.Equals(obj);
		RuntimeObject* L_4 = ___obj0;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Facebook.WitAi.Data.Entities.WitEntityIntData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityIntData_GetHashCode_mAE8EA34E626ACA7996F7AE07C59FD887BC5CCB25 (WitEntityIntData_t80FC1C7E72820445CF6D31576A246C23947A0FE4* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitEntityKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityKeyword__ctor_m428EA8D89870BEBE0C2CCFF4041C82EB3171DD6C (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> synonyms = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___synonyms_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synonyms_1), (void*)L_0);
		// public WitEntityKeyword() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public WitEntityKeyword() {}
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityKeyword::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityKeyword__ctor_m0F0DC376B974BD93B174E7A4D6AC604DE0BEB8FB (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, String_t* ___keyword0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> synonyms = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___synonyms_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synonyms_1), (void*)L_0);
		// public WitEntityKeyword(string keyword)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.keyword = keyword;
		String_t* L_1 = ___keyword0;
		__this->___keyword_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyword_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityKeyword::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityKeyword__ctor_mD6293B504C9C078C96E3EF5970A6ACA35009424D (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, String_t* ___keyword0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___synonyms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> synonyms = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___synonyms_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synonyms_1), (void*)L_0);
		// public WitEntityKeyword(string keyword, params string[] synonyms)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.keyword = keyword;
		String_t* L_1 = ___keyword0;
		__this->___keyword_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyword_0), (void*)L_1);
		// this.synonyms.AddRange(synonyms);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___synonyms_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___synonyms1;
		NullCheck(L_2);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_2, (RuntimeObject*)L_3, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityKeyword::.ctor(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityKeyword__ctor_m5C0F5286D37C56D010889F58E4B199CE810F5748 (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, String_t* ___keyword0, RuntimeObject* ___synonyms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> synonyms = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___synonyms_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synonyms_1), (void*)L_0);
		// public WitEntityKeyword(string keyword, IEnumerable<string> synonyms)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.keyword = keyword;
		String_t* L_1 = ___keyword0;
		__this->___keyword_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyword_0), (void*)L_1);
		// this.synonyms.AddRange(synonyms);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___synonyms_1;
		RuntimeObject* L_3 = ___synonyms1;
		NullCheck(L_2);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_2, L_3, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		// }
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Data.Entities.WitEntityKeyword::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* WitEntityKeyword_get_AsJson_mF26B952D2770B770116A8D862D1DAA6853653DC6 (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0116812C84CAD7B4AAD7CE2415EECA7B219CCE24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3709814F28060CE673AD4F414B802CCF4136017F);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* V_0 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// var synonymArray = new WitResponseArray();
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_0 = (WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05*)il2cpp_codegen_object_new(WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitResponseArray__ctor_m6D22459257B33D9C45FF0EA9619A9AA49124606D(L_0, NULL);
		V_0 = L_0;
		// foreach (var synonym in synonyms)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___synonyms_1;
		NullCheck(L_1);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_2;
		L_2 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_1, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0014_1:
			{
				// foreach (var synonym in synonyms)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_3;
				// synonymArray.Add(synonym);
				WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_4 = V_0;
				String_t* L_5 = V_2;
				WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6;
				L_6 = WitResponseNode_op_Implicit_m7392348272E97DB110F9139AC4838B8FB3EF2B88(L_5, NULL);
				NullCheck(L_4);
				VirtualActionInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(12 /* System.Void Facebook.WitAi.Lib.WitResponseNode::Add(Facebook.WitAi.Lib.WitResponseNode) */, L_4, L_6);
			}

IL_0028_1:
			{
				// foreach (var synonym in synonyms)
				bool L_7;
				L_7 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return new WitResponseClass
		// {
		//     {"keyword", new WitResponseData(keyword)},
		//     {"synonyms", synonymArray}
		// };
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_8 = (WitResponseClass_t739569309AE400E308EB8DD834327086751C855C*)il2cpp_codegen_object_new(WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WitResponseClass__ctor_m9CBC789798C208F99B1EE6384D791A39AF77FC79(L_8, NULL);
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_9 = L_8;
		String_t* L_10 = __this->___keyword_0;
		WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899* L_11 = (WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899*)il2cpp_codegen_object_new(WitResponseData_t78CC4B9FA619C3E5C20CC8CB4338164E4AB5F899_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WitResponseData__ctor_m3A5FEF3343F12DA87251CD2C8F7BDEEABB3DCA68(L_11, L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker2< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.Void Facebook.WitAi.Lib.WitResponseNode::Add(System.String,Facebook.WitAi.Lib.WitResponseNode) */, L_9, _stringLiteral0116812C84CAD7B4AAD7CE2415EECA7B219CCE24, L_11);
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_12 = L_9;
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_13 = V_0;
		NullCheck(L_12);
		VirtualActionInvoker2< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.Void Facebook.WitAi.Lib.WitResponseNode::Add(System.String,Facebook.WitAi.Lib.WitResponseNode) */, L_12, _stringLiteral3709814F28060CE673AD4F414B802CCF4136017F, L_13);
		return L_12;
	}
}
// Facebook.WitAi.Data.Entities.WitEntityKeyword Facebook.WitAi.Data.Entities.WitEntityKeyword::FromJson(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* WitEntityKeyword_FromJson_m807F411F4436B436AAA0225C0A18D512587BF021 (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___keywordNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0116812C84CAD7B4AAD7CE2415EECA7B219CCE24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3709814F28060CE673AD4F414B802CCF4136017F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WitEntityKeyword()
		// {
		//     keyword = keywordNode["keyword"],
		//     synonyms = keywordNode["synonyms"].AsStringArray.ToList()
		// };
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_0 = (WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5*)il2cpp_codegen_object_new(WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitEntityKeyword__ctor_m428EA8D89870BEBE0C2CCFF4041C82EB3171DD6C(L_0, NULL);
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_1 = L_0;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2 = ___keywordNode0;
		NullCheck(L_2);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_3;
		L_3 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_2, _stringLiteral0116812C84CAD7B4AAD7CE2415EECA7B219CCE24);
		String_t* L_4;
		L_4 = WitResponseNode_op_Implicit_mBEC61604C409E23E9D4BEBA57CE513B294B68AB6(L_3, NULL);
		NullCheck(L_1);
		L_1->___keyword_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___keyword_0), (void*)L_4);
		WitEntityKeyword_t167817E0271B423A77D207B9E66FCEA879613EC5* L_5 = L_1;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6 = ___keywordNode0;
		NullCheck(L_6);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7;
		L_7 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_6, _stringLiteral3709814F28060CE673AD4F414B802CCF4136017F);
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(27 /* System.String[] Facebook.WitAi.Lib.WitResponseNode::get_AsStringArray() */, L_7);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9;
		L_9 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5((RuntimeObject*)L_8, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___synonyms_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___synonyms_1), (void*)L_9);
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
// System.Void Facebook.WitAi.Data.Entities.WitEntityRole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityRole__ctor_m6BD6172B88AA64B467E645BC4F956628563F2CB6 (WitEntityRole_t47AC15DDC8D9F37888EB6747B6ABC142F0589453* __this, const RuntimeMethod* method) 
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
// Facebook.WitAi.Data.Entities.WitDynamicEntities Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* WitSimpleDynamicEntity_GetDynamicEntities_m196EED15D559780FDB9FBA3545AC60F39F2A023A (WitSimpleDynamicEntity_t7462383F5C63BB5F2B1A153A6E2F4506651692DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* V_0 = NULL;
	{
		// var entity = new WitDynamicEntity(entityName, keywords);
		String_t* L_0 = __this->___entityName_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___keywords_5;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_2 = (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB*)il2cpp_codegen_object_new(WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitDynamicEntity__ctor_mC6FE01FD85FED5466AE52CAF3200BFAF93FA7C04(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// var entities = new WitDynamicEntities(entity);
		WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* L_3 = (WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D*)(WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D*)SZArrayNew(WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D_il2cpp_TypeInfo_var, (uint32_t)1);
		WitDynamicEntityU5BU5D_tC9CA8D9163A2C005902FA1DA1998AA249D84DB5D* L_4 = L_3;
		WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (WitDynamicEntity_t235D64BB173F2AB83FEC57D244015C1E987996BB*)L_5);
		WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054* L_6 = (WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054*)il2cpp_codegen_object_new(WitDynamicEntities_t7357ADD27A2311DC0EE89FE25DA7C404AB7C5054_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WitDynamicEntities__ctor_m0F22F28030E3D54891FE26BA0654012D37BCFB4E(L_6, L_4, NULL);
		// return entities;
		return L_6;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitSimpleDynamicEntity__ctor_m610895979786A570B54372CF02D23E42F10AA8A9 (WitSimpleDynamicEntity_t7462383F5C63BB5F2B1A153A6E2F4506651692DB* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.Data.Configuration.WitApplication::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitApplication__ctor_m0CF01821BE8F62E6DD45AFFE5CFB686AF675EE69 (WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* __this, const RuntimeMethod* method) 
{
	{
		WitConfigurationData__ctor_m8D4068A08641205F93EF9642BA9106B0EFD37975(__this, NULL);
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
// System.String Facebook.WitAi.Data.Configuration.WitConfiguration::get_WitApplicationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_get_WitApplicationId_m6634CD56C438E238FC8619A3AF08F33733D0F0B1 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D70245F3500CCD8237A0140F73164F286401D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53);
		s_Il2CppMethodInitialized = true;
	}
	WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* G_B2_0 = NULL;
	WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// if (String.IsNullOrEmpty(application?.id))
		WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* L_0 = __this->___application_4;
		WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2 = G_B2_0->___id_2;
		G_B3_0 = L_2;
	}

IL_0012:
	{
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(G_B3_0, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// if (!string.IsNullOrEmpty(clientAccessToken))
		String_t* L_4 = __this->___clientAccessToken_6;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		// return INVALID_APP_ID_WITH_CLIENT_TOKEN;
		return _stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53;
	}

IL_002c:
	{
		// return INVALID_APP_ID_NO_CLIENT_TOKEN;
		return _stringLiteral09D70245F3500CCD8237A0140F73164F286401D5;
	}

IL_0032:
	{
		// return application.id;
		WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* L_6 = __this->___application_4;
		NullCheck(L_6);
		String_t* L_7 = L_6->___id_2;
		return L_7;
	}
}
// Facebook.WitAi.Data.Configuration.WitApplication Facebook.WitAi.Data.Configuration.WitConfiguration::get_Application()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* WitConfiguration_get_Application_mA50FA92E97AF67B91F2AD185CAE88DBC326264D3 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* __this, const RuntimeMethod* method) 
{
	{
		// public WitApplication Application => application;
		WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C* L_0 = __this->___application_4;
		return L_0;
	}
}
// System.Void Facebook.WitAi.Data.Configuration.WitConfiguration::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration_OnEnable_m8E6E61DEB7BBE676AB1739CC4F0EC07FBF549F8B (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Configuration.WitConfiguration::ResetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration_ResetData_m346D989096A032EC12998931D8C015B2BAC25BB8 (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* __this, const RuntimeMethod* method) 
{
	{
		// application = null;
		__this->___application_4 = (WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___application_4), (void*)(WitApplication_t63668A99EE80B05F17BCCDDAA4BF50A84A9A1E3C*)NULL);
		// clientAccessToken = null;
		__this->___clientAccessToken_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clientAccessToken_6), (void*)(String_t*)NULL);
		// entities = null;
		__this->___entities_9 = (WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_9), (void*)(WitEntityU5BU5D_tC65502A56DE214BCA9ECD0258022C310876CDC65*)NULL);
		// intents = null;
		__this->___intents_10 = (WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intents_10), (void*)(WitIntentU5BU5D_tDB2609D617BB35FBBC73A93A1C8B54DF6B24ADAB*)NULL);
		// traits = null;
		__this->___traits_11 = (WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traits_11), (void*)(WitTraitU5BU5D_t61DB38855B37C3123DBC4FC8B31E08E69BB8EC31*)NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Data.Configuration.WitConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration__ctor_mBE875CBE608DDA97B19FA93392A6FC7720EC9C0A (WitConfiguration_t3D1E7D46065A2742877307705778E1CBC33530DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public int timeoutMS = 10000;
		__this->___timeoutMS_7 = ((int32_t)10000);
		// [SerializeField] public WitEndpointConfig endpointConfiguration = new WitEndpointConfig();
		WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0* L_0 = (WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0*)il2cpp_codegen_object_new(WitEndpointConfig_t736B6D17F8267F55239E85D5423598671E17E9B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitEndpointConfig__ctor_m45851DBF1D527584556B4989BC8429E8CB543C90(L_0, NULL);
		__this->___endpointConfiguration_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endpointConfiguration_8), (void*)L_0);
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
// System.Void Facebook.WitAi.CallbackHandlers.ConfidenceRange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfidenceRange__ctor_m2FF548FCC0369D786CC81130B64B9B993356BC77 (ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent onWithinConfidenceRange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onWithinConfidenceRange_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onWithinConfidenceRange_2), (void*)L_0);
		// public UnityEvent onOutsideConfidenceRange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onOutsideConfidenceRange_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutsideConfidenceRange_3), (void*)L_1);
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
// System.Void Facebook.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler_OnHandleResponse_m1BD01A19CD40A76D0635124133352510C1001DB1 (OutOfScopeUtteranceHandler_t6D1CE6F4B6A31C7CBD4E195FAADF88D3829984D1* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// if (null == response) return;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseNode_op_Equality_m9F1A77CB5E0EAFEFA74CEDEC43A8DA3C3568033B((WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (null == response) return;
		return;
	}

IL_000a:
	{
		// if (response["intents"].Count == 0)
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2 = ___response0;
		NullCheck(L_2);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_3;
		L_3 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_2, _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_Count() */, L_3);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// onOutOfDomain?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = __this->___onOutOfDomain_5;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler__ctor_mD275FB82065BCC666651C9226F369E73CC2E717B (OutOfScopeUtteranceHandler_t6D1CE6F4B6A31C7CBD4E195FAADF88D3829984D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private UnityEvent onOutOfDomain = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onOutOfDomain_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutOfDomain_5), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
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
// UnityEngine.Events.UnityEvent Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::get_OnIntentTriggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SimpleIntentHandler_get_OnIntentTriggered_mFF092F219C7BE54D19B14AE844243BF393594472 (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnIntentTriggered => onIntentTriggered;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onIntentTriggered_7;
		return L_0;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_OnHandleResponse_m35F99ADEDCC082697445FA797A52BCCCF10640BE (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA414C8405AD2AB4B5AC23942210B16227AC96D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF1F4F17D3837E1B1E52ACBC529204A77CBA5264E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* V_2 = NULL;
	float V_3 = 0.0f;
	RuntimeObject* G_B7_0 = NULL;
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* G_B6_0 = NULL;
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* G_B5_0 = NULL;
	{
		// if (null == response) return;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseNode_op_Equality_m9F1A77CB5E0EAFEFA74CEDEC43A8DA3C3568033B((WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (null == response) return;
		return;
	}

IL_000a:
	{
		// bool matched = false;
		V_0 = (bool)0;
		// foreach (var intentNode in response?["intents"]?.Childs)
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2 = ___response0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		G_B7_0 = ((RuntimeObject*)(NULL));
		goto IL_0029;
	}

IL_0012:
	{
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_3 = ___response0;
		NullCheck(L_3);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4;
		L_4 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_3, _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5 = L_4;
		G_B5_0 = L_5;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_0024;
		}
	}
	{
		G_B7_0 = ((RuntimeObject*)(NULL));
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B6_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode::get_Childs() */, G_B6_0);
		G_B7_0 = L_6;
	}

IL_0029:
	{
		NullCheck(G_B7_0);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator() */, IEnumerable_1_tA414C8405AD2AB4B5AC23942210B16227AC96D03_il2cpp_TypeInfo_var, G_B7_0);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008a_1;
			}

IL_0031_1:
			{
				// foreach (var intentNode in response?["intents"]?.Childs)
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_11;
				L_11 = InterfaceFuncInvoker0< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>::get_Current() */, IEnumerator_1_tF1F4F17D3837E1B1E52ACBC529204A77CBA5264E_il2cpp_TypeInfo_var, L_10);
				V_2 = L_11;
				// var resultConfidence = intentNode["confidence"].AsFloat;
				WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_12 = V_2;
				NullCheck(L_12);
				WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_13;
				L_13 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_12, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
				NullCheck(L_13);
				float L_14;
				L_14 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_13);
				V_3 = L_14;
				// if (intent == intentNode["name"].Value)
				String_t* L_15 = __this->___intent_5;
				WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_16 = V_2;
				NullCheck(L_16);
				WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_17;
				L_17 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_16, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
				NullCheck(L_17);
				String_t* L_18;
				L_18 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_17);
				bool L_19;
				L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, L_18, NULL);
				if (!L_19)
				{
					goto IL_008a_1;
				}
			}
			{
				// matched = true;
				V_0 = (bool)1;
				// if (resultConfidence >= confidence)
				float L_20 = V_3;
				float L_21 = __this->___confidence_6;
				if ((!(((float)L_20) >= ((float)L_21))))
				{
					goto IL_007c_1;
				}
			}
			{
				// onIntentTriggered.Invoke();
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_22 = __this->___onIntentTriggered_7;
				NullCheck(L_22);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_22, NULL);
			}

IL_007c_1:
			{
				// CheckInsideRange(resultConfidence);
				float L_23 = V_3;
				SimpleIntentHandler_CheckInsideRange_mD6CBC4679B71419827151FEB27E89A03BD30BEE2(__this, L_23, NULL);
				// CheckOutsideRange(resultConfidence);
				float L_24 = V_3;
				SimpleIntentHandler_CheckOutsideRange_m4729456664D2CCDDB0F2AFB4516DE3F5154DEC87(__this, L_24, NULL);
			}

IL_008a_1:
			{
				// foreach (var intentNode in response?["intents"]?.Childs)
				RuntimeObject* L_25 = V_1;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// if(!matched)
		bool L_27 = V_0;
		if (L_27)
		{
			goto IL_00b7;
		}
	}
	{
		// CheckInsideRange(0);
		SimpleIntentHandler_CheckInsideRange_mD6CBC4679B71419827151FEB27E89A03BD30BEE2(__this, (0.0f), NULL);
		// CheckOutsideRange(0);
		SimpleIntentHandler_CheckOutsideRange_m4729456664D2CCDDB0F2AFB4516DE3F5154DEC87(__this, (0.0f), NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::CheckOutsideRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_CheckOutsideRange_m4729456664D2CCDDB0F2AFB4516DE3F5154DEC87 (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, float ___resultConfidence0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* V_1 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		// var range = confidenceRanges[i];
		ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* L_0 = __this->___confidenceRanges_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if (resultConfidence < range.minConfidence ||
		//     resultConfidence > range.maxConfidence)
		float L_4 = ___resultConfidence0;
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->___minConfidence_0;
		if ((((float)L_4) < ((float)L_6)))
		{
			goto IL_001f;
		}
	}
	{
		float L_7 = ___resultConfidence0;
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___maxConfidence_1;
		if ((!(((float)L_7) > ((float)L_9))))
		{
			goto IL_0038;
		}
	}

IL_001f:
	{
		// range.onOutsideConfidenceRange?.Invoke();
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_10 = V_1;
		NullCheck(L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10->___onOutsideConfidenceRange_3;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_002b;
		}
	}
	{
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0030:
	{
		// if (!allowConfidenceOverlap) break;
		bool L_13 = __this->___allowConfidenceOverlap_8;
		if (!L_13)
		{
			goto IL_004f;
		}
	}

IL_0038:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003c:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* L_15 = __this->___confidenceRanges_9;
		if (!L_15)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_16 = V_0;
		ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* L_17 = __this->___confidenceRanges_9;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0004;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::CheckInsideRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_CheckInsideRange_mD6CBC4679B71419827151FEB27E89A03BD30BEE2 (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, float ___resultConfidence0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* V_1 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		// var range = confidenceRanges[i];
		ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* L_0 = __this->___confidenceRanges_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if (resultConfidence >= range.minConfidence &&
		//     resultConfidence <= range.maxConfidence)
		float L_4 = ___resultConfidence0;
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->___minConfidence_0;
		if ((!(((float)L_4) >= ((float)L_6))))
		{
			goto IL_0038;
		}
	}
	{
		float L_7 = ___resultConfidence0;
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___maxConfidence_1;
		if ((!(((float)L_7) <= ((float)L_9))))
		{
			goto IL_0038;
		}
	}
	{
		// range.onWithinConfidenceRange?.Invoke();
		ConfidenceRange_tE18A7D630A039B765127834BF07B91FE073588F9* L_10 = V_1;
		NullCheck(L_10);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10->___onWithinConfidenceRange_2;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_002b;
		}
	}
	{
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0030:
	{
		// if (!allowConfidenceOverlap) break;
		bool L_13 = __this->___allowConfidenceOverlap_8;
		if (!L_13)
		{
			goto IL_004f;
		}
	}

IL_0038:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003c:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* L_15 = __this->___confidenceRanges_9;
		if (!L_15)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_16 = V_0;
		ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* L_17 = __this->___confidenceRanges_9;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0004;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.SimpleIntentHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler__ctor_mDC11B9B908AA713B3EE8E41329333BBFB09A6F8A (SimpleIntentHandler_tD80C11D1D51C8A1E12DC9170F02AC6463E5ABDE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public float confidence = .9f;
		__this->___confidence_6 = (0.899999976f);
		// [SerializeField] private UnityEvent onIntentTriggered = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onIntentTriggered_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onIntentTriggered_7), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
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
// Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::get_OnIntentEntityTriggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* SimpleStringEntityHandler_get_OnIntentEntityTriggered_m4069B433E4C1739163CABE3873E12EF70B9407E8 (SimpleStringEntityHandler_tB95E77E27B20E13042B687D717A45B509D5166DC* __this, const RuntimeMethod* method) 
{
	{
		// public StringEntityMatchEvent OnIntentEntityTriggered => onIntentEntityTriggered;
		StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* L_0 = __this->___onIntentEntityTriggered_9;
		return L_0;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler_OnHandleResponse_m86F1DA2CB7EDEBB2CCF62517A939F15EFD45C5E0 (SimpleStringEntityHandler_tB95E77E27B20E13042B687D717A45B509D5166DC* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var intentNode = WitResultUtilities.GetFirstIntent(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = WitResultUtilities_GetFirstIntent_mE9748A7275970EABF61BC4920BFB445857066F58(L_0, NULL);
		V_0 = L_1;
		// if (intent == intentNode["name"].Value && intentNode["confidence"].AsFloat > confidence)
		String_t* L_2 = __this->___intent_5;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_3 = V_0;
		NullCheck(L_3);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_4;
		L_4 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_3, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_4);
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_5, NULL);
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_7 = V_0;
		NullCheck(L_7);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_8;
		L_8 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_7, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_8);
		float L_10 = __this->___confidence_7;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_007f;
		}
	}
	{
		// var entityValue = WitResultUtilities.GetFirstEntityValue(response, entity);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_11 = ___response0;
		String_t* L_12 = __this->___entity_6;
		String_t* L_13;
		L_13 = WitResultUtilities_GetFirstEntityValue_m66FD91C71028FF980D19497D71F800E535EB85FC(L_11, L_12, NULL);
		V_1 = L_13;
		// if (!string.IsNullOrEmpty(format))
		String_t* L_14 = __this->___format_8;
		bool L_15;
		L_15 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_14, NULL);
		if (L_15)
		{
			goto IL_0073;
		}
	}
	{
		// onIntentEntityTriggered.Invoke(format.Replace("{value}", entityValue));
		StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* L_16 = __this->___onIntentEntityTriggered_9;
		String_t* L_17 = __this->___format_8;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_17, _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, L_18, NULL);
		NullCheck(L_16);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_16, L_19, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		// onIntentEntityTriggered.Invoke(entityValue);
		StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* L_20 = __this->___onIntentEntityTriggered_9;
		String_t* L_21 = V_1;
		NullCheck(L_20);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_20, L_21, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler__ctor_m2A8AD6A11EC7D31E0DA81457A263803A9C9D7C91 (SimpleStringEntityHandler_tB95E77E27B20E13042B687D717A45B509D5166DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0, 1f)] [SerializeField] public float confidence = .9f;
		__this->___confidence_7 = (0.899999976f);
		// [SerializeField] private StringEntityMatchEvent onIntentEntityTriggered
		//     = new StringEntityMatchEvent();
		StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* L_0 = (StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7*)il2cpp_codegen_object_new(StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEntityMatchEvent__ctor_mADFDA95EA9466ACCE74C701C74BC6C01C1BDEA82(L_0, NULL);
		__this->___onIntentEntityTriggered_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onIntentEntityTriggered_9), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
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
// System.Void Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mADFDA95EA9466ACCE74C701C74BC6C01C1BDEA82 (StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnValidate_m5993AE8531334DE9DF2F2A2E0BA537941D911AC4 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_0 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31(Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		__this->___wit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wit_4), (void*)L_2);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_m55F24E026839F33CBE76FC8B25FAC9AC3135250B (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29565B729B35A8E8D5DDB32B75BCCD98FDE1E555);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_0 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31(Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		__this->___wit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wit_4), (void*)L_2);
	}

IL_0018:
	{
		// if (!wit)
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_3 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogError("Wit not found in scene. Disabling " + GetType().Name + " on " +
		//                name);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_8;
		L_8 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral29565B729B35A8E8D5DDB32B75BCCD98FDE1E555, L_6, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0052:
	{
		// wit.events.OnResponse.AddListener(OnHandleResponse);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_9 = __this->___wit_4;
		NullCheck(L_9);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_10 = L_9->___events_6;
		NullCheck(L_10);
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_11 = L_10->___OnResponse_7;
		UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* L_12 = (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*)il2cpp_codegen_object_new(UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_mF4F621DB3C8F308CF78411309EDFD1334CF9CE75(L_12, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 4)), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3(L_11, L_12, UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m2647C1AD81C5AB8B9BE30A6356302E4851947A29 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (wit)
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_0 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// wit.events.OnResponse.RemoveListener(OnHandleResponse);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_2 = __this->___wit_4;
		NullCheck(L_2);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_3 = L_2->___events_6;
		NullCheck(L_3);
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_4 = L_3->___OnResponse_7;
		UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* L_5 = (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*)il2cpp_codegen_object_new(UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF4F621DB3C8F308CF78411309EDFD1334CF9CE75(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 4)), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B(L_4, L_5, UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B_RuntimeMethod_var);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::HandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleResponse_m1EF09793D58EB26C8F3264DB5A7D6FB8342E51E1 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// public void HandleResponse(WitResponseNode response) => OnHandleResponse(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		VirtualActionInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode) */, __this, L_0);
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
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
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseMatcher::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnHandleResponse_mDC95CC8B6DA9B6987BEA2D5E98C5DF58635A0AF7 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* G_B14_0 = NULL;
	ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* G_B13_0 = NULL;
	{
		// if (IntentMatches(response))
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseMatcher_IntentMatches_mC627F7AF4545BCC223D06C2674367446F6E98A37(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0146;
		}
	}
	{
		// if (ValueMatches(response))
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2 = ___response0;
		bool L_3;
		L_3 = WitResponseMatcher_ValueMatches_mFFD7A8502BD3EA08F7AA931E417D1C9393481512(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_00fa;
		}
	}
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		V_1 = 0;
		goto IL_00ec;
	}

IL_001f:
	{
		// var formatEvent = formattedValueEvents[j];
		FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188* L_4 = __this->___formattedValueEvents_8;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// var result = formatEvent.format;
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = L_8->___format_0;
		V_3 = L_9;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_4 = 0;
		goto IL_00bf;
	}

IL_0037:
	{
		// var reference = valueMatchers[i].Reference;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_10 = __this->___valueMatchers_7;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_14;
		L_14 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(L_13, NULL);
		// var value = reference.GetStringValue(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_15 = ___response0;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_14, L_15);
		V_5 = L_16;
		// if (!string.IsNullOrEmpty(formatEvent.format))
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18 = L_17->___format_0;
		bool L_19;
		L_19 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_18, NULL);
		if (L_19)
		{
			goto IL_00b9;
		}
	}
	{
		// if (!string.IsNullOrEmpty(value))
		String_t* L_20 = V_5;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_20, NULL);
		if (L_21)
		{
			goto IL_0093;
		}
	}
	{
		// result = valueRegex.Replace(result, value, 1);
		il2cpp_codegen_runtime_class_init_inline(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_22 = ((WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var))->___valueRegex_10;
		String_t* L_23 = V_3;
		String_t* L_24 = V_5;
		NullCheck(L_22);
		String_t* L_25;
		L_25 = Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492(L_22, L_23, L_24, 1, NULL);
		V_3 = L_25;
		// result = result.Replace("{" + i + "}", value);
		String_t* L_26 = V_3;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_27, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		String_t* L_29 = V_5;
		NullCheck(L_26);
		String_t* L_30;
		L_30 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_26, L_28, L_29, NULL);
		V_3 = L_30;
		goto IL_00b9;
	}

IL_0093:
	{
		// else if (result.Contains("{" + i + "}"))
		String_t* L_31 = V_3;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_33;
		L_33 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_32, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_31, L_33, NULL);
		if (!L_34)
		{
			goto IL_00b9;
		}
	}
	{
		// result = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_00ce;
	}

IL_00b9:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00bf:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_36 = V_4;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_37 = __this->___valueMatchers_7;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0037;
		}
	}

IL_00ce:
	{
		// if (!string.IsNullOrEmpty(result))
		String_t* L_38 = V_3;
		bool L_39;
		L_39 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_38, NULL);
		if (L_39)
		{
			goto IL_00e8;
		}
	}
	{
		// formatEvent.onFormattedValueEvent?.Invoke(result);
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_40 = V_2;
		NullCheck(L_40);
		ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* L_41 = L_40->___onFormattedValueEvent_1;
		ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* L_42 = L_41;
		G_B13_0 = L_42;
		if (L_42)
		{
			G_B14_0 = L_42;
			goto IL_00e2;
		}
	}
	{
		goto IL_00e8;
	}

IL_00e2:
	{
		String_t* L_43 = V_3;
		NullCheck(G_B14_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B14_0, L_43, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00e8:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ec:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_45 = V_1;
		FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188* L_46 = __this->___formattedValueEvents_8;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_001f;
		}
	}

IL_00fa:
	{
		// List<string> values = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_47 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_47, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_47;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_6 = 0;
		goto IL_0129;
	}

IL_0105:
	{
		// var value = valueMatchers[i].Reference.GetStringValue(response);
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_48 = __this->___valueMatchers_7;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_52;
		L_52 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(L_51, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_53 = ___response0;
		NullCheck(L_52);
		String_t* L_54;
		L_54 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_52, L_53);
		V_7 = L_54;
		// values.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55 = V_0;
		String_t* L_56 = V_7;
		NullCheck(L_55);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_55, L_56, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_57 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0129:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_58 = V_6;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_59 = __this->___valueMatchers_7;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0105;
		}
	}
	{
		// onMultiValueEvent.Invoke(values.ToArray());
		MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* L_60 = __this->___onMultiValueEvent_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_61 = V_0;
		NullCheck(L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62;
		L_62 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_61, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_60);
		UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94(L_60, L_62, UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
	}

IL_0146:
	{
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mFFD7A8502BD3EA08F7AA931E417D1C9393481512 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	int32_t G_B4_0 = 0;
	bool G_B4_1 = false;
	{
		// bool matches = true;
		V_0 = (bool)1;
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		V_1 = 0;
		goto IL_00ad;
	}

IL_0009:
	{
		// var matcher = valueMatchers[i];
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_0 = __this->___valueMatchers_7;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_4 = V_2;
		NullCheck(L_4);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_5;
		L_5 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(L_4, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6 = ___response0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_5, L_6);
		V_3 = L_7;
		// matches &= !matcher.contentRequired || !string.IsNullOrEmpty(value);
		bool L_8 = V_0;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = L_9->___contentRequired_2;
		G_B2_0 = L_8;
		if (!L_10)
		{
			G_B3_0 = L_8;
			goto IL_0033;
		}
	}
	{
		String_t* L_11 = V_3;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		G_B4_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0034:
	{
		V_0 = (bool)((int32_t)((int32_t)G_B4_1&G_B4_0));
		// switch (matcher.matchMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___matchMethod_3;
		V_4 = L_14;
		int32_t L_15 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1)))
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_009e;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_005d:
	{
		// matches &= Regex.Match(value, matcher.matchValue).Success;
		bool L_16 = V_0;
		String_t* L_17 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19 = L_18->___matchValue_5;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_20;
		L_20 = Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7(L_17, L_19, NULL);
		NullCheck(L_20);
		bool L_21;
		L_21 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_20, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_16&(int32_t)L_21));
		// break;
		goto IL_00a9;
	}

IL_0073:
	{
		// matches &= value == matcher.matchValue;
		bool L_22 = V_0;
		String_t* L_23 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = L_24->___matchValue_5;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, L_25, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_22&(int32_t)L_26));
		// break;
		goto IL_00a9;
	}

IL_0084:
	{
		// matches &= CompareInt(value, matcher);
		bool L_27 = V_0;
		String_t* L_28 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_29 = V_2;
		bool L_30;
		L_30 = WitResponseMatcher_CompareInt_mBFEA1319F29D734BB9902412C9B3BD757E5B5FFB(__this, L_28, L_29, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_30));
		// break;
		goto IL_00a9;
	}

IL_0091:
	{
		// matches &= CompareFloat(value, matcher);
		bool L_31 = V_0;
		String_t* L_32 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_33 = V_2;
		bool L_34;
		L_34 = WitResponseMatcher_CompareFloat_m39D94664E1B155931817F0C2434F2093F037CF5D(__this, L_32, L_33, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_31&(int32_t)L_34));
		// break;
		goto IL_00a9;
	}

IL_009e:
	{
		// matches &= CompareDouble(value, matcher);
		bool L_35 = V_0;
		String_t* L_36 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_37 = V_2;
		bool L_38;
		L_38 = WitResponseMatcher_CompareDouble_m01E1A016568F0A2A109C5E4556505AD7188ABC85(__this, L_36, L_37, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_35&(int32_t)L_38));
	}

IL_00a9:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_40 = V_1;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_41 = __this->___valueMatchers_7;
		NullCheck(L_41);
		bool L_42 = V_0;
		if (((int32_t)(((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))? 1 : 0)&(int32_t)L_42)))
		{
			goto IL_0009;
		}
	}
	{
		// return matches;
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m01E1A016568F0A2A109C5E4556505AD7188ABC85 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// double dMatchValue = double.Parse(matcher.matchValue);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		double L_4;
		L_4 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_006b;
			}
			case 4:
			{
				goto IL_0066;
			}
			case 5:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) < matcher.floatingPointComparisonTolerance;
		double L_8 = V_0;
		double L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_10) < ((double)L_12))? 1 : 0);
	}

IL_0050:
	{
		// return Math.Abs(dValue - dMatchValue) > matcher.floatingPointComparisonTolerance;
		double L_13 = V_0;
		double L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(((double)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_15) > ((double)L_17))? 1 : 0);
	}

IL_0061:
	{
		// return dValue > dMatchValue;
		double L_18 = V_0;
		double L_19 = V_1;
		return (bool)((((double)L_18) > ((double)L_19))? 1 : 0);
	}

IL_0066:
	{
		// return dValue < dMatchValue;
		double L_20 = V_0;
		double L_21 = V_1;
		return (bool)((((double)L_20) < ((double)L_21))? 1 : 0);
	}

IL_006b:
	{
		// return dValue >= dMatchValue;
		double L_22 = V_0;
		double L_23 = V_1;
		return (bool)((((int32_t)((!(((double)L_22) >= ((double)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0073:
	{
		// return dValue <= dMatchValue;
		double L_24 = V_0;
		double L_25 = V_1;
		return (bool)((((int32_t)((!(((double)L_24) <= ((double)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m39D94664E1B155931817F0C2434F2093F037CF5D (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// float dMatchValue = float.Parse(matcher.matchValue);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		float L_4;
		L_4 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0068;
			}
			case 5:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) <
		//        matcher.floatingPointComparisonTolerance;
		float L_8 = V_0;
		float L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_10)) < ((double)L_12))? 1 : 0);
	}

IL_0051:
	{
		// return Math.Abs(dValue - dMatchValue) >
		//        matcher.floatingPointComparisonTolerance;
		float L_13 = V_0;
		float L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_15)) > ((double)L_17))? 1 : 0);
	}

IL_0063:
	{
		// return dValue > dMatchValue;
		float L_18 = V_0;
		float L_19 = V_1;
		return (bool)((((float)L_18) > ((float)L_19))? 1 : 0);
	}

IL_0068:
	{
		// return dValue < dMatchValue;
		float L_20 = V_0;
		float L_21 = V_1;
		return (bool)((((float)L_20) < ((float)L_21))? 1 : 0);
	}

IL_006d:
	{
		// return dValue >= dMatchValue;
		float L_22 = V_0;
		float L_23 = V_1;
		return (bool)((((int32_t)((!(((float)L_22) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		// return dValue <= dMatchValue;
		float L_24 = V_0;
		float L_25 = V_1;
		return (bool)((((int32_t)((!(((float)L_24) <= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mBFEA1319F29D734BB9902412C9B3BD757E5B5FFB (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// int dMatchValue = int.Parse(matcher.matchValue);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		int32_t L_4;
		L_4 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_003f:
	{
		// return dValue == dMatchValue;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0044:
	{
		// return dValue != dMatchValue;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		return (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004c:
	{
		// return dValue > dMatchValue;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		return (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
	}

IL_0051:
	{
		// return dValue < dMatchValue;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		return (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
	}

IL_0056:
	{
		// return dValue >= dMatchValue;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		return (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		// return dValue <= dMatchValue;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		return (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::IntentMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_IntentMatches_mC627F7AF4545BCC223D06C2674367446F6E98A37 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22270319A52B6C9B9967E9291B9A79B116526038);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// var intentNode = response.GetFirstIntent();
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = WitResultUtilities_GetFirstIntent_mE9748A7275970EABF61BC4920BFB445857066F58(L_0, NULL);
		V_0 = L_1;
		// if (string.IsNullOrEmpty(intent))
		String_t* L_2 = __this->___intent_5;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// if (intent == intentNode["name"].Value)
		String_t* L_4 = __this->___intent_5;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5 = V_0;
		NullCheck(L_5);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6;
		L_6 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_5, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_6);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_00a2;
		}
	}
	{
		// var actualConfidence = intentNode["confidence"].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_9 = V_0;
		NullCheck(L_9);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10;
		L_10 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_9, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_10);
		V_1 = L_11;
		// if (actualConfidence >= confidenceThreshold)
		float L_12 = V_1;
		float L_13 = __this->___confidenceThreshold_6;
		if ((!(((float)L_12) >= ((float)L_13))))
		{
			goto IL_004f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// Debug.Log($"{intent} matched, but confidence ({actualConfidence.ToString("F")}) was below threshold ({confidenceThreshold.ToString("F")})");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = __this->___intent_5;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19;
		L_19 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_1), _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral22270319A52B6C9B9967E9291B9A79B116526038);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral22270319A52B6C9B9967E9291B9A79B116526038);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (&__this->___confidenceThreshold_6);
		String_t* L_23;
		L_23 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_22, _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_25;
		L_25 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
	}

IL_00a2:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__ctor_mB81768CF47FEDAA8B731D83226298AB18A46E5D4 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0, 1f), SerializeField] public float confidenceThreshold = .6f;
		__this->___confidenceThreshold_6 = (0.600000024f);
		// [SerializeField] private MultiValueEvent onMultiValueEvent = new MultiValueEvent();
		MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* L_0 = (MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C*)il2cpp_codegen_object_new(MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MultiValueEvent__ctor_m24721BEA88A8DC6A7438F16DF9C7F4B141BE0FF0(L_0, NULL);
		__this->___onMultiValueEvent_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMultiValueEvent_9), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseMatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__cctor_m6F8D78AB8BA2DFE600AE008EEADD8866F7D47D5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Regex valueRegex = new Regex(Regex.Escape("{value}"), RegexOptions.Compiled);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Regex_Escape_m2E4E071ABAFAE1BF55932725F28F4194CD56D7DE(_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, 8, NULL);
		((WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var))->___valueRegex_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var))->___valueRegex_10), (void*)L_1);
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
// System.Void Facebook.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m24721BEA88A8DC6A7438F16DF9C7F4B141BE0FF0 (MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D(__this, UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_mD1D914C07A91A8D88BEEB83833BCDC9818261377 (ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.FormattedValueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedValueEvents__ctor_m4DA3F46BEB2E9D13C232CB1BC9DEAC759746B57C (FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueEvent onFormattedValueEvent = new ValueEvent();
		ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* L_0 = (ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74*)il2cpp_codegen_object_new(ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueEvent__ctor_mD1D914C07A91A8D88BEEB83833BCDC9818261377(L_0, NULL);
		__this->___onFormattedValueEvent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFormattedValueEvent_1), (void*)L_0);
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
// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ValuePathMatcher_get_ConfidenceReference_m561926765A3249DAB510C86C42FC2692338F5F62 (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* G_B4_0 = NULL;
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0 = __this->___confidencePathReference_9;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_1 = __this->___confidencePathReference_9;
		return L_1;
	}

IL_000f:
	{
		// var confidencePath = Reference?.path;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_2;
		L_2 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(__this, NULL);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		String_t* L_4 = G_B4_0->___path_1;
		G_B5_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(confidencePath))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		// confidencePath = confidencePath.Substring(0, confidencePath.LastIndexOf("."));
		String_t* L_7 = V_0;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_9, NULL);
		V_0 = L_10;
		// confidencePath += ".confidence";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E, NULL);
		V_0 = L_12;
		// confidencePathReference = WitResultUtilities.GetWitResponseReference(confidencePath);
		String_t* L_13 = V_0;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_14;
		L_14 = WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD(L_13, NULL);
		__this->___confidencePathReference_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___confidencePathReference_9), (void*)L_14);
	}

IL_0055:
	{
		// return confidencePathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_15 = __this->___confidencePathReference_9;
		return L_15;
	}
}
// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787 (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* L_0 = __this->___witValueReference_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* L_2 = __this->___witValueReference_1;
		NullCheck(L_2);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_3;
		L_3 = WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// if (null == pathReference || pathReference.path != path)
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_4 = __this->___pathReference_8;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_5 = __this->___pathReference_8;
		NullCheck(L_5);
		String_t* L_6 = L_5->___path_1;
		String_t* L_7 = __this->___path_0;
		bool L_8;
		L_8 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_0039:
	{
		// pathReference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_9 = __this->___path_0;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_10;
		L_10 = WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD(L_9, NULL);
		__this->___pathReference_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathReference_8), (void*)L_10);
	}

IL_004a:
	{
		// return pathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_11 = __this->___pathReference_8;
		return L_11;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.ValuePathMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuePathMatcher__ctor_m07EFED8A2D66952E0FB33D2D6C6C6AC2F4FE4FED (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) 
{
	{
		// public bool contentRequired = true;
		__this->___contentRequired_2 = (bool)1;
		// public double floatingPointComparisonTolerance = .0001f;
		__this->___floatingPointComparisonTolerance_6 = (9.9999997473787516E-05);
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
// System.Void Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnHandleResponse_m83929902127384A727DDFE5F36ACD0BF434F423B (WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_1 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B8_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B7_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B11_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B10_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B16_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B15_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B20_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B19_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (useRegex)
		bool L_3 = __this->___useRegex_7;
		if (!L_3)
		{
			goto IL_0086;
		}
	}
	{
		// if (null == regex)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->___regex_9;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_5 = __this->___searchText_5;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_6, L_5, ((int32_t)9), NULL);
		__this->___regex_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_9), (void*)L_6);
	}

IL_0034:
	{
		// var match = regex.Match(text);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_7 = __this->___regex_9;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_9;
		L_9 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_7, L_8, NULL);
		V_1 = L_9;
		// if (match.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_10, NULL);
		if (!L_11)
		{
			goto IL_00e1;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_12 = __this->___exactMatch_6;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_13, NULL);
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_17 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_18 = L_17;
		G_B7_0 = L_18;
		if (L_18)
		{
			G_B8_0 = L_18;
			goto IL_006d;
		}
	}
	{
		return;
	}

IL_006d:
	{
		String_t* L_19 = V_0;
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B8_0, L_19, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_0074:
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_20 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_21 = L_20;
		G_B10_0 = L_21;
		if (L_21)
		{
			G_B11_0 = L_21;
			goto IL_007f;
		}
	}
	{
		return;
	}

IL_007f:
	{
		String_t* L_22 = V_0;
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B11_0, L_22, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_0086:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_23 = __this->___exactMatch_6;
		if (!L_23)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_24, NULL);
		String_t* L_26 = __this->___searchText_5;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_26, NULL);
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_29 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_30 = L_29;
		G_B15_0 = L_30;
		if (L_30)
		{
			G_B16_0 = L_30;
			goto IL_00b1;
		}
	}
	{
		return;
	}

IL_00b1:
	{
		String_t* L_31 = V_0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B16_0, L_31, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_00b8:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_32, NULL);
		String_t* L_34 = __this->___searchText_5;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_34, NULL);
		NullCheck(L_33);
		bool L_36;
		L_36 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00e1;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_37 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_38 = L_37;
		G_B19_0 = L_38;
		if (L_38)
		{
			G_B20_0 = L_38;
			goto IL_00db;
		}
	}
	{
		return;
	}

IL_00db:
	{
		String_t* L_39 = V_0;
		NullCheck(G_B20_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B20_0, L_39, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_mD2508F7BF061E1643E07B446F990E5502AD260A6 (WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->___exactMatch_6 = (bool)1;
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_0 = (StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76*)il2cpp_codegen_object_new(StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mF3F63CB79A236D91609C9B7EBF293D7E6935006A(L_0, NULL);
		__this->___onUtteranceMatched_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUtteranceMatched_8), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_m297B639D265D4DDC99556909C31BF5ACA5F74D9F_inline (OnSampleReadyEvent_t976D2428545137840B5C1D5043C7CAFF1C9EFD46* __this, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA* ___marker0, float ___levelMax1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Marker_t39BFB87EDDBC1C455AEB14FBF8654372C9A639DA*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___marker0, ___levelMax1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
