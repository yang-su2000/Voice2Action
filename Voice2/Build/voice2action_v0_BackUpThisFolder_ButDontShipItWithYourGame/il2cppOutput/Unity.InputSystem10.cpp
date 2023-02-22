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

// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>
struct IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEqualityComparer_1_tEA6D87A5AB670819FF91305D215B209552281584;
// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyCollection_t443F242E6072F26AA8803C1BF50400B0692392C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct ValueCollection_tD63A626D1918F702C79B868362E823BDCFD426CD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.InputSystem.Utilities.InternedString,System.Type>[]
struct EntryU5BU5D_t05A444C605D7D354DA1A1A00317821912EB2F4A7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.InputSystem.Composites.AxisComposite
struct AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Composites.ButtonWithOneModifier
struct ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222;
// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
struct ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.InputSystem.Composites.OneModifierComposite
struct OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908;
// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.Utilities.TypeTable/<>c
struct U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF4D7DE161067DE7FFAB264EC7D3DCF921ADBA5A5;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
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

// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t05A444C605D7D354DA1A1A00317821912EB2F4A7* ____entries_1;
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
	KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD63A626D1918F702C79B868362E823BDCFD426CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ____dictionary_0;
};
struct Il2CppArrayBounds;

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

// UnityEngine.InputSystem.Utilities.TypeTable/<>c
struct U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA  : public RuntimeObject
{
};

struct U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable/<>c UnityEngine.InputSystem.Utilities.TypeTable/<>c::<>9
	U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Utilities.TypeTable/<>c::<>9__2_0
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* ___U3CU3E9__2_0_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputBindingCompositeContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460
struct __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394__padding[460];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t22839514DD75372C54DF839115F07CBE22B34BF7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t22839514DD75372C54DF839115F07CBE22B34BF7__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=736
struct __StaticArrayInitTypeSizeU3D736_tEFF273797A7F1F1CF8E4CB8C5070351AF54A491A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D736_tEFF273797A7F1F1CF8E4CB8C5070351AF54A491A__padding[736];
	};
};

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 
{
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<part>k__BackingField
	int32_t ___U3CpartU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<control>k__BackingField
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t* ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::3FDAE84882EAE42DAA0B28DCB9A2CB495FD22A3F352B399DD7AAE09CB57A1B9D
	__StaticArrayInitTypeSizeU3D68_t22839514DD75372C54DF839115F07CBE22B34BF7 ___3FDAE84882EAE42DAA0B28DCB9A2CB495FD22A3F352B399DD7AAE09CB57A1B9D_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=736 <PrivateImplementationDetails>::8C33E5A06E45E284F11EEF6FD19B5B068157D5303B25D4CDB2E59C2338C3D111
	__StaticArrayInitTypeSizeU3D736_tEFF273797A7F1F1CF8E4CB8C5070351AF54A491A ___8C33E5A06E45E284F11EEF6FD19B5B068157D5303B25D4CDB2E59C2338C3D111_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460 <PrivateImplementationDetails>::A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
	__StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 ___A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A
	__StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 ___EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A_3;
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

// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0  : public RuntimeObject
{
};

struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputBindingComposite::s_Composites
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Composites_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
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

// UnityEngine.InputSystem.Composites.OneModifierComposite
struct OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::modifier
	int32_t ___modifier_1;
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::binding
	int32_t ___binding_2;
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_3;
	// System.Type UnityEngine.InputSystem.Composites.OneModifierComposite::m_ValueType
	Type_t* ___m_ValueType_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::binding
	int32_t ___binding_3;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_4;
	// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueType
	Type_t* ___m_ValueType_5;
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

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.InputSystem.Composites.AxisComposite
struct AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.AxisComposite::negative
	int32_t ___negative_1;
	// System.Int32 UnityEngine.InputSystem.Composites.AxisComposite::positive
	int32_t ___positive_2;
	// System.Single UnityEngine.InputSystem.Composites.AxisComposite::minValue
	float ___minValue_3;
	// System.Single UnityEngine.InputSystem.Composites.AxisComposite::maxValue
	float ___maxValue_4;
	// UnityEngine.InputSystem.Composites.AxisComposite/WhichSideWins UnityEngine.InputSystem.Composites.AxisComposite::whichSideWins
	int32_t ___whichSideWins_5;
};

// UnityEngine.InputSystem.Composites.ButtonWithOneModifier
struct ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithOneModifier::modifier
	int32_t ___modifier_1;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithOneModifier::button
	int32_t ___button_2;
};

// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
struct ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::button
	int32_t ___button_3;
};

// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908  : public InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::right
	int32_t ___right_4;
	// System.Boolean UnityEngine.InputSystem.Composites.Vector2Composite::normalize
	bool ___normalize_5;
	// UnityEngine.InputSystem.Composites.Vector2Composite/Mode UnityEngine.InputSystem.Composites.Vector2Composite::mode
	int32_t ___mode_6;
};

// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0  : public InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::right
	int32_t ___right_4;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::forward
	int32_t ___forward_5;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::backward
	int32_t ___backward_6;
	// UnityEngine.InputSystem.Composites.Vector3Composite/Mode UnityEngine.InputSystem.Composites.Vector3Composite::mode
	int32_t ___mode_7;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t443F242E6072F26AA8803C1BF50400B0692392C6* Dictionary_2_get_Keys_m6B4FEC85C78AA00269F440121A5297DB65B6D164_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEA865389B1F3B9B7F55A65C4B937BF1A2F7258AC_gshared (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.InputSystem.Utilities.InternedString,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisRuntimeObject_m6D1E7BE19748636FC77D4F07A11734CCD7C06231_gshared (RuntimeObject* ___source0, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD34AE4C80C1F230BC1EA62AB9020FFA9BC0DE8E0_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31 Dictionary_2_GetEnumerator_m3BF9969257B323347AA34745C6DCD37D1F9BF174_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC351F7DAFCD1DF4CCFF3E49D092773C72D84C292_gshared (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC Enumerator_get_Current_mB1068DBFCAA4C19D082D5717DF265CBA6D66D4BE_gshared_inline (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4BE8613970A8112E3042718B64AC74A4EF3355BF_gshared (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m725DDAF4C8BD4FBCD106BFFB1B4B5B74D7696281_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5FF3432937DE0E166259F54A0CFC568A388F7439_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_gshared (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Keys()
inline KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, const RuntimeMethod*))Dictionary_2_get_Keys_m6B4FEC85C78AA00269F440121A5297DB65B6D164_gshared)(__this, method);
}
// System.Void System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6763116FA3257580D87BD903E24793FCD6D82548 (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEA865389B1F3B9B7F55A65C4B937BF1A2F7258AC_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.InputSystem.Utilities.InternedString,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893 (RuntimeObject* ___source0, Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*, const RuntimeMethod*))Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisRuntimeObject_m6D1E7BE19748636FC77D4F07A11734CCD7C06231_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.InputSystem.Utilities.TypeTable::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Utilities.TypeTable::get_internedNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::.ctor()
inline void Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, const RuntimeMethod*))Dictionary_2__ctor_mD34AE4C80C1F230BC1EA62AB9020FFA9BC0DE8E0_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::GetEnumerator()
inline Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3BF9969257B323347AA34745C6DCD37D1F9BF174_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::Dispose()
inline void Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87 (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE*, const RuntimeMethod*))Enumerator_Dispose_mC351F7DAFCD1DF4CCFF3E49D092773C72D84C292_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Current()
inline KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_inline (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 (*) (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE*, const RuntimeMethod*))Enumerator_get_Current_mB1068DBFCAA4C19D082D5717DF265CBA6D66D4BE_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Value()
inline Type_t* KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_inline (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Key()
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_inline (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27* __this, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::MoveNext()
inline bool Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE*, const RuntimeMethod*))Enumerator_MoveNext_m4BE8613970A8112E3042718B64AC74A4EF3355BF_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.InternedString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7 (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m725DDAF4C8BD4FBCD106BFFB1B4B5B74D7696281_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::AddTypeRegistration(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860 (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, Type_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m5FF3432937DE0E166259F54A0CFC568A388F7439_gshared)(__this, ___key0, ___value1, method);
}
// System.Type UnityEngine.InputSystem.Utilities.TypeTable::LookupTypeRegistration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.TypeTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m272D75733C8074A4CB8134DEB9A4BD7442005F5A (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.InputBindingCompositeContext::EvaluateMagnitude(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::get_midPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.Processors.NormalizeProcessor::Normalize(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NormalizeProcessor_Normalize_mEC3981E44FB19990B8D33FB6B1CCDE509FE04A8D (float ___value0, float ___min1, float ___max2, float ___zero3, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::.ctor()
inline void InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8 (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E*, const RuntimeMethod*))InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
inline float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method)
{
	return ((  float (*) (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390*, int32_t, const RuntimeMethod*))InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared)(__this, ___partNumber0, method);
}
// System.Void UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue(System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, int32_t ___part1, Type_t** ___valueType2, int32_t* ___valueSizeInBytes3, const RuntimeMethod* method) ;
// System.Object UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding> UnityEngine.InputSystem.InputBindingCompositeContext::get_controls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_get_controls_m142FECF8374D6E0E3B012C8D376AB913E9634C69 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::get_part()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::get_control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A (InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_mD4C9050E32C089FCE8343E3361EC41BCC1ADB5D5 (float ___up0, float ___down1, float ___left2, float ___right3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_m587FE72C8BF54651CDB4339D0126A49963B08351 (bool ___up0, bool ___down1, bool ___left2, bool ___right3, bool ___normalize4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
inline void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545 (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588*, const RuntimeMethod*))InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
inline void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789 (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306*, const RuntimeMethod*))InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_pinvoke(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_pinvoke_back(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke& marshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_pinvoke_cleanup(TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_com(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com& marshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_com_back(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com& marshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_com_cleanup(TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com& marshaled)
{
}
// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.InputSystem.Utilities.TypeTable::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* G_B2_0 = NULL;
	KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* G_B2_1 = NULL;
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* G_B1_0 = NULL;
	KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* G_B1_1 = NULL;
	{
		// public IEnumerable<string> names => table.Keys.Select(x => x.ToString());
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_0 = __this->___table_0;
		NullCheck(L_0);
		KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* L_1;
		L_1 = Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF(L_0, Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_2 = ((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* L_4 = ((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_5 = (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*)il2cpp_codegen_object_new(Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m6763116FA3257580D87BD903E24793FCD6D82548(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9_RuntimeMethod_var), NULL);
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_6 = L_5;
		((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893(G_B2_1, G_B2_0, Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Utilities.TypeTable::get_internedNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerable<InternedString> internedNames => table.Keys;
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_0 = __this->___table_0;
		NullCheck(L_0);
		KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* L_1;
		L_1 = Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF(L_0, Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// table = new Dictionary<InternedString, Type>();
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_0 = (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*)il2cpp_codegen_object_new(Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE(L_0, Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE_RuntimeMethod_var);
		__this->___table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___table_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C(_thisAdjusted, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (type == null)
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(type));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00_RuntimeMethod_var)));
	}

IL_0014:
	{
		// foreach (var pair in table)
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_3 = __this->___table_0;
		NullCheck(L_3);
		Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE L_4;
		L_4 = Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A(L_3, Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87((&V_0), Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0022_1:
			{
				// foreach (var pair in table)
				KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 L_5;
				L_5 = Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_inline((&V_0), Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_RuntimeMethod_var);
				V_1 = L_5;
				// if (pair.Value == type)
				Type_t* L_6;
				L_6 = KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_inline((&V_1), KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_RuntimeMethod_var);
				Type_t* L_7 = ___type0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_7, NULL);
				if (!L_8)
				{
					goto IL_0043_1;
				}
			}
			{
				// return pair.Key;
				InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9;
				L_9 = KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_inline((&V_1), KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_RuntimeMethod_var);
				V_2 = L_9;
				goto IL_0066;
			}

IL_0043_1:
			{
				// foreach (var pair in table)
				bool L_10;
				L_10 = Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF((&V_0), Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// return new InternedString();
		il2cpp_codegen_initobj((&V_3), sizeof(InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_11 = V_3;
		return L_11;
	}

IL_0066:
	{
		// }
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00_AdjustorThunk (RuntimeObject* __this, Type_t* ___type0, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 _returnValue;
	_returnValue = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00(_thisAdjusted, ___type0, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::AddTypeRegistration(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentException("Name cannot be null or empty", nameof(name));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4D7DE161067DE7FFAB264EC7D3DCF921ADBA5A5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (type == null)
		Type_t* L_3 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_3, (Type_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new ArgumentNullException(nameof(type));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_RuntimeMethod_var)));
	}

IL_002c:
	{
		// var internedName = new InternedString(name);
		String_t* L_6 = ___name0;
		InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&V_0), L_6, NULL);
		// table[internedName] = type;
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_7 = __this->___table_0;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_8 = V_0;
		Type_t* L_9 = ___type1;
		NullCheck(L_7);
		Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7(L_7, L_8, L_9, Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E(_thisAdjusted, ___name0, ___type1, method);
}
// System.Type UnityEngine.InputSystem.Utilities.TypeTable::LookupTypeRegistration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Type_t* V_1 = NULL;
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentException("Name cannot be null or empty", nameof(name));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4D7DE161067DE7FFAB264EC7D3DCF921ADBA5A5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A_RuntimeMethod_var)));
	}

IL_0018:
	{
		// var internedName = new InternedString(name);
		String_t* L_3 = ___name0;
		InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&V_0), L_3, NULL);
		// if (table.TryGetValue(internedName, out var type))
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_4 = __this->___table_0;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860(L_4, L_5, (&V_1), Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// return type;
		Type_t* L_7 = V_1;
		return L_7;
	}

IL_0032:
	{
		// return null;
		return (Type_t*)NULL;
	}
}
IL2CPP_EXTERN_C  Type_t* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A(_thisAdjusted, ___name0, method);
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
// System.Void UnityEngine.InputSystem.Utilities.TypeTable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4242002B310EE69DCA8E2E04DB8A559E01D8C748 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* L_0 = (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA*)il2cpp_codegen_object_new(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m272D75733C8074A4CB8134DEB9A4BD7442005F5A(L_0, NULL);
		((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m272D75733C8074A4CB8134DEB9A4BD7442005F5A (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String UnityEngine.InputSystem.Utilities.TypeTable/<>c::<get_names>b__2_0(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9 (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___x0, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<string> names => table.Keys.Select(x => x.ToString());
		String_t* L_0;
		L_0 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&___x0), NULL);
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
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::get_midPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, const RuntimeMethod* method) 
{
	{
		// public float midPoint => (maxValue + minValue) / 2;
		float L_0 = __this->___maxValue_4;
		float L_1 = __this->___minValue_3;
		return ((float)(((float)il2cpp_codegen_add(L_0, L_1))/(2.0f)));
	}
}
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_ReadValue_mB6A4941AFFFB504B7F2A49C83C86633A6178994E (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		// var negativeMagnitude = context.EvaluateMagnitude(negative);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___negative_1;
		float L_2;
		L_2 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_0, L_1, NULL);
		V_0 = L_2;
		// var positiveMagnitude = context.EvaluateMagnitude(positive);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___positive_2;
		float L_5;
		L_5 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_3, L_4, NULL);
		V_1 = L_5;
		// var negativeIsPressed = negativeMagnitude > 0;
		float L_6 = V_0;
		V_2 = (bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0);
		// var positiveIsPressed = positiveMagnitude > 0;
		float L_7 = V_1;
		V_3 = (bool)((((float)L_7) > ((float)(0.0f)))? 1 : 0);
		// if (negativeIsPressed == positiveIsPressed)
		bool L_8 = V_2;
		bool L_9 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_005c;
		}
	}
	{
		// switch (whichSideWins)
		int32_t L_10 = __this->___whichSideWins_5;
		V_5 = L_10;
		int32_t L_11 = V_5;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_004d;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_004d:
	{
		// positiveIsPressed = false;
		V_3 = (bool)0;
		// break;
		goto IL_005c;
	}

IL_0051:
	{
		// negativeIsPressed = false;
		V_2 = (bool)0;
		// break;
		goto IL_005c;
	}

IL_0055:
	{
		// return midPoint;
		float L_12;
		L_12 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		return L_12;
	}

IL_005c:
	{
		// var mid = midPoint;
		float L_13;
		L_13 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		V_4 = L_13;
		// if (negativeIsPressed)
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// return mid - (mid - minValue) * negativeMagnitude;
		float L_15 = V_4;
		float L_16 = V_4;
		float L_17 = __this->___minValue_3;
		float L_18 = V_0;
		return ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_17)), L_18))));
	}

IL_0076:
	{
		// return mid + (maxValue - mid) * positiveMagnitude;
		float L_19 = V_4;
		float L_20 = __this->___maxValue_4;
		float L_21 = V_4;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_20, L_21)), L_22))));
	}
}
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_EvaluateMagnitude_mC09E5455DCA8A7E4B1001E378382A66C2DADAA48 (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var value = ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		// if (value < midPoint)
		float L_2 = V_0;
		float L_3;
		L_3 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_003b;
		}
	}
	{
		// value = Mathf.Abs(value - midPoint);
		float L_4 = V_0;
		float L_5;
		L_5 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = L_6;
		// return NormalizeProcessor.Normalize(value, 0, Mathf.Abs(minValue), 0);
		float L_7 = V_0;
		float L_8 = __this->___minValue_3;
		float L_9;
		L_9 = fabsf(L_8);
		float L_10;
		L_10 = NormalizeProcessor_Normalize_mEC3981E44FB19990B8D33FB6B1CCDE509FE04A8D(L_7, (0.0f), L_9, (0.0f), NULL);
		return L_10;
	}

IL_003b:
	{
		// value = Mathf.Abs(value - midPoint);
		float L_11 = V_0;
		float L_12;
		L_12 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		float L_13;
		L_13 = fabsf(((float)il2cpp_codegen_subtract(L_11, L_12)));
		V_0 = L_13;
		// return NormalizeProcessor.Normalize(value, 0, Mathf.Abs(maxValue), 0);
		float L_14 = V_0;
		float L_15 = __this->___maxValue_4;
		float L_16;
		L_16 = fabsf(L_15);
		float L_17;
		L_17 = NormalizeProcessor_Normalize_mEC3981E44FB19990B8D33FB6B1CCDE509FE04A8D(L_14, (0.0f), L_16, (0.0f), NULL);
		return L_17;
	}
}
// System.Void UnityEngine.InputSystem.Composites.AxisComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisComposite__ctor_m4E736548F5FF6FD260080DB105A10CE59E447EC2 (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float minValue = -1;
		__this->___minValue_3 = (-1.0f);
		// public float maxValue = 1;
		__this->___maxValue_4 = (1.0f);
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Single UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithOneModifier_ReadValue_m439AB954F407DC5590C539DD486A04624AA07791 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.ReadValue<float>(button);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___button_2;
		float L_5;
		L_5 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_3, L_4, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return default;
		return (0.0f);
	}
}
// System.Single UnityEngine.InputSystem.Composites.ButtonWithOneModifier::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithOneModifier_EvaluateMagnitude_m5620878936698B7CB4AD5BBD698EC2FF062A9505 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// return ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithOneModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithOneModifier__ctor_m7B7F85E23B5C441609E4155452F6D4AC05E2B639 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Single UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithTwoModifiers_ReadValue_m37221E24FA2D2429BABF071D71DA89E255B8CBA9 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return context.ReadValue<float>(button);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___context0;
		int32_t L_7 = __this->___button_3;
		float L_8;
		L_8 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_6, L_7, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		return L_8;
	}

IL_0029:
	{
		// return default;
		return (0.0f);
	}
}
// System.Single UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithTwoModifiers_EvaluateMagnitude_mFA7A056972DA25A3D63AB79E19E366F3F68DB900 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// return ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithTwoModifiers__ctor_m200626B0BEBB78BC03D64F561D3727DE1D2D5325 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Type UnityEngine.InputSystem.Composites.OneModifierComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* OneModifierComposite_get_valueType_m5E2ABFE018FE89563F657E18C3DCB5EEA8BF2673 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	{
		// public override Type valueType => m_ValueType;
		Type_t* L_0 = __this->___m_ValueType_4;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OneModifierComposite_get_valueSizeInBytes_m910E77B6AB3AAF8E47F0DA92CD16C47784E66A1C (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		int32_t L_0 = __this->___m_ValueSizeInBytes_3;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.OneModifierComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneModifierComposite_EvaluateMagnitude_mA42D5A4588ED01010B8642529A70E665BB9C6923 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___binding_2;
		float L_5;
		L_5 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_3, L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		// return default;
		return (0.0f);
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_ReadValue_mFFCA6F249ACC7FB1137FC8DC42FEF8893AF5764B (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___binding_2;
		void* L_5 = ___buffer1;
		int32_t L_6 = ___bufferSize2;
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_3, L_4, L_5, L_6, NULL);
		return;
	}

IL_001d:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		void* L_7 = ___buffer1;
		int32_t L_8 = __this->___m_ValueSizeInBytes_3;
		UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460(L_7, ((int64_t)L_8), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_FinishSetup_m91EE0D3C7261D70C6C72173F1F18650A9C007620 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___binding_2;
		Type_t** L_2 = (&__this->___m_ValueType_4);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_3);
		OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.OneModifierComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneModifierComposite_ReadValueAsObject_mE7F10A702C1FC6CF14A127CB653733BE056C445B (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___binding_2;
		RuntimeObject* L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_3, L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		// return null;
		return NULL;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, int32_t ___part1, Type_t** ___valueType2, int32_t* ___valueSizeInBytes3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* V_3 = NULL;
	{
		// valueSizeInBytes = 0;
		int32_t* L_0 = ___valueSizeInBytes3;
		*((int32_t*)L_0) = (int32_t)0;
		// Type type = null;
		V_0 = (Type_t*)NULL;
		// foreach (var control in context.controls)
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_1 = ___context0;
		RuntimeObject* L_2;
		L_2 = InputBindingCompositeContext_get_controls_m142FECF8374D6E0E3B012C8D376AB913E9634C69(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>::GetEnumerator() */, IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_0013_1:
			{
				// foreach (var control in context.controls)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_7;
				L_7 = InterfaceFuncInvoker0< PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>::get_Current() */, IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// if (control.part != part)
				int32_t L_8;
				L_8 = PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline((&V_2), NULL);
				int32_t L_9 = ___part1;
				if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
				{
					goto IL_0070_1;
				}
			}
			{
				// var controlType = control.control.valueType;
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_10;
				L_10 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				NullCheck(L_10);
				Type_t* L_11;
				L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type UnityEngine.InputSystem.InputControl::get_valueType() */, L_10);
				V_3 = L_11;
				// if (type == null || controlType.IsAssignableFrom(type))
				Type_t* L_12 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_12, (Type_t*)NULL, NULL);
				if (L_13)
				{
					goto IL_0043_1;
				}
			}
			{
				Type_t* L_14 = V_3;
				Type_t* L_15 = V_0;
				NullCheck(L_14);
				bool L_16;
				L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_14, L_15);
				if (!L_16)
				{
					goto IL_0047_1;
				}
			}

IL_0043_1:
			{
				// type = controlType;
				Type_t* L_17 = V_3;
				V_0 = L_17;
				goto IL_005b_1;
			}

IL_0047_1:
			{
				// else if (!type.IsAssignableFrom(controlType))
				Type_t* L_18 = V_0;
				Type_t* L_19 = V_3;
				NullCheck(L_18);
				bool L_20;
				L_20 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_18, L_19);
				if (L_20)
				{
					goto IL_005b_1;
				}
			}
			{
				// type = typeof(Object);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
				V_0 = L_22;
			}

IL_005b_1:
			{
				// valueSizeInBytes = Math.Max(control.control.valueSizeInBytes, valueSizeInBytes);
				int32_t* L_23 = ___valueSizeInBytes3;
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_24;
				L_24 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				NullCheck(L_24);
				int32_t L_25;
				L_25 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.InputSystem.InputControl::get_valueSizeInBytes() */, L_24);
				int32_t* L_26 = ___valueSizeInBytes3;
				int32_t L_27 = *((int32_t*)L_26);
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_28;
				L_28 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_25, L_27, NULL);
				*((int32_t*)L_23) = (int32_t)L_28;
			}

IL_0070_1:
			{
				// foreach (var control in context.controls)
				RuntimeObject* L_29 = V_1;
				NullCheck(L_29);
				bool L_30;
				L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				if (L_30)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// valueType = type;
		Type_t** L_31 = ___valueType2;
		Type_t* L_32 = V_0;
		*((RuntimeObject**)L_31) = (RuntimeObject*)L_32;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_31, (void*)(RuntimeObject*)L_32);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite__ctor_mB03D8DE49D44A7C6FF0AB59B5CF4F35E2F6C7A26 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		// public override Type valueType => m_ValueType;
		Type_t* L_0 = __this->___m_ValueType_5;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		int32_t L_0 = __this->___m_ValueSizeInBytes_4;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.TwoModifiersComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___context0;
		int32_t L_7 = __this->___binding_3;
		float L_8;
		L_8 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_6, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		// return default;
		return (0.0f);
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___context0;
		int32_t L_7 = __this->___binding_3;
		void* L_8 = ___buffer1;
		int32_t L_9 = ___bufferSize2;
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_6, L_7, L_8, L_9, NULL);
		return;
	}

IL_002b:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		void* L_10 = ___buffer1;
		int32_t L_11 = __this->___m_ValueSizeInBytes_4;
		UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460(L_10, ((int64_t)L_11), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// OneModifierComposite.DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___binding_3;
		Type_t** L_2 = (&__this->___m_ValueType_5);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_4);
		OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___context0;
		int32_t L_7 = __this->___binding_3;
		RuntimeObject* L_8;
		L_8 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_6, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		// return null;
		return NULL;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// UnityEngine.Vector2 UnityEngine.InputSystem.Composites.Vector2Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		// var mode = this.mode;
		int32_t L_0 = __this->___mode_6;
		V_0 = L_0;
		// if (mode == Mode.Analog)
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_004d;
		}
	}
	{
		// var upValue = context.ReadValue<float>(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_2 = ___context0;
		int32_t L_3 = __this->___up_1;
		float L_4;
		L_4 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_2, L_3, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		// var downValue = context.ReadValue<float>(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_5 = ___context0;
		int32_t L_6 = __this->___down_2;
		float L_7;
		L_7 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_5, L_6, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_4 = L_7;
		// var leftValue = context.ReadValue<float>(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_8 = ___context0;
		int32_t L_9 = __this->___left_3;
		float L_10;
		L_10 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_8, L_9, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_5 = L_10;
		// var rightValue = context.ReadValue<float>(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_11 = ___context0;
		int32_t L_12 = __this->___right_4;
		float L_13;
		L_13 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_11, L_12, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_6 = L_13;
		// return DpadControl.MakeDpadVector(upValue, downValue, leftValue, rightValue);
		float L_14 = V_4;
		float L_15 = V_5;
		float L_16 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = DpadControl_MakeDpadVector_mD4C9050E32C089FCE8343E3361EC41BCC1ADB5D5(L_4, L_14, L_15, L_16, NULL);
		return L_17;
	}

IL_004d:
	{
		// var upIsPressed = context.ReadValueAsButton(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_18 = ___context0;
		int32_t L_19 = __this->___up_1;
		bool L_20;
		L_20 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_18, L_19, NULL);
		// var downIsPressed = context.ReadValueAsButton(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_21 = ___context0;
		int32_t L_22 = __this->___down_2;
		bool L_23;
		L_23 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_21, L_22, NULL);
		V_1 = L_23;
		// var leftIsPressed = context.ReadValueAsButton(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_24 = ___context0;
		int32_t L_25 = __this->___left_3;
		bool L_26;
		L_26 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_24, L_25, NULL);
		V_2 = L_26;
		// var rightIsPressed = context.ReadValueAsButton(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_27 = ___context0;
		int32_t L_28 = __this->___right_4;
		bool L_29;
		L_29 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_27, L_28, NULL);
		V_3 = L_29;
		// if (!normalize) // Was on by default.
		bool L_30 = __this->___normalize_5;
		G_B3_0 = L_20;
		if (L_30)
		{
			G_B4_0 = L_20;
			goto IL_008a;
		}
	}
	{
		// mode = Mode.Digital;
		V_0 = 1;
		G_B4_0 = G_B3_0;
	}

IL_008a:
	{
		// return DpadControl.MakeDpadVector(upIsPressed, downIsPressed, leftIsPressed, rightIsPressed, mode == Mode.DigitalNormalized);
		bool L_31 = V_1;
		bool L_32 = V_2;
		bool L_33 = V_3;
		int32_t L_34 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = DpadControl_MakeDpadVector_m587FE72C8BF54651CDB4339D0126A49963B08351(G_B4_0, L_31, L_32, L_33, (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0), NULL);
		return L_35;
	}
}
// System.Single UnityEngine.InputSystem.Composites.Vector2Composite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		// return value.magnitude;
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector2Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool normalize = true;
		__this->___normalize_5 = (bool)1;
		InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545(__this, InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
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
// UnityEngine.Vector3 UnityEngine.InputSystem.Composites.Vector3Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1 (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float G_B5_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B20_0 = 0.0f;
	{
		// if (mode == Mode.Analog)
		int32_t L_0 = __this->___mode_7;
		if (L_0)
		{
			goto IL_0065;
		}
	}
	{
		// var upValue = context.ReadValue<float>(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_1 = ___context0;
		int32_t L_2 = __this->___up_1;
		float L_3;
		L_3 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_1, L_2, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_0 = L_3;
		// var downValue = context.ReadValue<float>(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_4 = ___context0;
		int32_t L_5 = __this->___down_2;
		float L_6;
		L_6 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_4, L_5, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_1 = L_6;
		// var leftValue = context.ReadValue<float>(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___context0;
		int32_t L_8 = __this->___left_3;
		float L_9;
		L_9 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_7, L_8, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_2 = L_9;
		// var rightValue = context.ReadValue<float>(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_10 = ___context0;
		int32_t L_11 = __this->___right_4;
		float L_12;
		L_12 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_10, L_11, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		// var forwardValue = context.ReadValue<float>(forward);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_13 = ___context0;
		int32_t L_14 = __this->___forward_5;
		float L_15;
		L_15 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_13, L_14, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_3 = L_15;
		// var backwardValue = context.ReadValue<float>(backward);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_16 = ___context0;
		int32_t L_17 = __this->___backward_6;
		float L_18;
		L_18 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_16, L_17, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_4 = L_18;
		// return new Vector3(rightValue - leftValue, upValue - downValue, forwardValue - backwardValue);
		float L_19 = V_2;
		float L_20 = V_0;
		float L_21 = V_1;
		float L_22 = V_3;
		float L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(L_12, L_19)), ((float)il2cpp_codegen_subtract(L_20, L_21)), ((float)il2cpp_codegen_subtract(L_22, L_23)), /*hidden argument*/NULL);
		return L_24;
	}

IL_0065:
	{
		// var upValue = context.ReadValueAsButton(up) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_25 = ___context0;
		int32_t L_26 = __this->___up_1;
		bool L_27;
		L_27 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_25, L_26, NULL);
		if (L_27)
		{
			goto IL_007a;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_007f;
	}

IL_007a:
	{
		G_B5_0 = (1.0f);
	}

IL_007f:
	{
		V_5 = G_B5_0;
		// var downValue = context.ReadValueAsButton(down) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_28 = ___context0;
		int32_t L_29 = __this->___down_2;
		bool L_30;
		L_30 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_28, L_29, NULL);
		if (L_30)
		{
			goto IL_0096;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_009b;
	}

IL_0096:
	{
		G_B8_0 = (-1.0f);
	}

IL_009b:
	{
		V_6 = G_B8_0;
		// var leftValue = context.ReadValueAsButton(left) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_31 = ___context0;
		int32_t L_32 = __this->___left_3;
		bool L_33;
		L_33 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_31, L_32, NULL);
		if (L_33)
		{
			goto IL_00b2;
		}
	}
	{
		G_B11_0 = (0.0f);
		goto IL_00b7;
	}

IL_00b2:
	{
		G_B11_0 = (-1.0f);
	}

IL_00b7:
	{
		V_7 = G_B11_0;
		// var rightValue = context.ReadValueAsButton(right) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_34 = ___context0;
		int32_t L_35 = __this->___right_4;
		bool L_36;
		L_36 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_34, L_35, NULL);
		if (L_36)
		{
			goto IL_00ce;
		}
	}
	{
		G_B14_0 = (0.0f);
		goto IL_00d3;
	}

IL_00ce:
	{
		G_B14_0 = (1.0f);
	}

IL_00d3:
	{
		V_8 = G_B14_0;
		// var forwardValue = context.ReadValueAsButton(forward) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_37 = ___context0;
		int32_t L_38 = __this->___forward_5;
		bool L_39;
		L_39 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_37, L_38, NULL);
		if (L_39)
		{
			goto IL_00ea;
		}
	}
	{
		G_B17_0 = (0.0f);
		goto IL_00ef;
	}

IL_00ea:
	{
		G_B17_0 = (1.0f);
	}

IL_00ef:
	{
		V_9 = G_B17_0;
		// var backwardValue = context.ReadValueAsButton(backward) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_40 = ___context0;
		int32_t L_41 = __this->___backward_6;
		bool L_42;
		L_42 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_40, L_41, NULL);
		if (L_42)
		{
			goto IL_0106;
		}
	}
	{
		G_B20_0 = (0.0f);
		goto IL_010b;
	}

IL_0106:
	{
		G_B20_0 = (-1.0f);
	}

IL_010b:
	{
		V_10 = G_B20_0;
		// var vector = new Vector3(leftValue + rightValue, upValue + downValue, forwardValue + backwardValue);
		float L_43 = V_7;
		float L_44 = V_8;
		float L_45 = V_5;
		float L_46 = V_6;
		float L_47 = V_9;
		float L_48 = V_10;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_11), ((float)il2cpp_codegen_add(L_43, L_44)), ((float)il2cpp_codegen_add(L_45, L_46)), ((float)il2cpp_codegen_add(L_47, L_48)), NULL);
		// if (mode == Mode.DigitalNormalized)
		int32_t L_49 = __this->___mode_7;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0135;
		}
	}
	{
		// vector = vector.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_11), NULL);
		V_11 = L_50;
	}

IL_0135:
	{
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_11;
		return L_51;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector3Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789(__this, InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) 
{
	{
		// public int part { get; set; }
		int32_t L_0 = __this->___U3CpartU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) 
{
	{
		// public InputControl control { get; set; }
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC Enumerator_get_Current_mB1068DBFCAA4C19D082D5717DF265CBA6D66D4BE_gshared_inline (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC L_0 = (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
