#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct KeyCollection_t7B476242BD55D6AE1605538D29FD9F5664F2B4FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct KeyCollection_tB8F4E17B1C9396EEA9D84C15F0A63FBC7A90262F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct ValueCollection_t78D30292560FD0C8A9D4081C7530872500090707;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct ValueCollection_tAC7D22A98835288060B8073EBE9D6B53222473EF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>[]
struct EntryU5BU5D_t33C6D01AEDA6C0F5A44448DCC7AA313D757EA8B5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>[]
struct EntryU5BU5D_tD3D40B2CB003E30F5BCD17917B39861559C116AD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
struct MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate
struct AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate
struct BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate
struct ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20;

IL2CPP_EXTERN_C RuntimeClass* AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptEvent_t98D7BEA7A83AEC5AC0316FCED0B85028D4E75DAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrResult_tC6E780422C0CF27153FB9B0ED7D1F60015608195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1D16C2805D2C90CE9E9F75DD087A02771665799C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m786082F7C7C48014E4310D38AEC2BEB53FD2869C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m18B2157D65C4F2FC765F9AF4B4EBF7B8FF174E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC24ED42B1D62F196005DEF99454A30DCEF6E0A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m17FD7D5D71E4212B62A691A7F0CD5526EAC6AC39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9C4D0FB47A0BF06B9963582354883C7F4922A84D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m53A2E81E4273B7F237467FD0E411CD76F6A335D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9C89607F22DE5CBC0F10E446E79188543493C0E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m17C6500F4A39584F230E69E055B6EDCF7CE4032E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEB67AD45031F043BBC4B9E563EC2D2518BAFDE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisMockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_m87DF2AA7C62867FE357F972E35BD6E581BC7210F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA44820A2EDB2F298F5F072F96B03467D041C7C62 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t33C6D01AEDA6C0F5A44448DCC7AA313D757EA8B5* ____entries_1;
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
	KeyCollection_t7B476242BD55D6AE1605538D29FD9F5664F2B4FB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t78D30292560FD0C8A9D4081C7530872500090707* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD3D40B2CB003E30F5BCD17917B39861559C116AD* ____entries_1;
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
	KeyCollection_tB8F4E17B1C9396EEA9D84C15F0A63FBC7A90262F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAC7D22A98835288060B8073EBE9D6B53222473EF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;
};

struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55_StaticFields
{
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* ___s_RuntimeInstance_8;
};

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate
struct AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate
struct BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate
struct ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
struct MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ignoreValidationErrors
	bool ___ignoreValidationErrors_20;
};

struct MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate> UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::s_AfterFunctionCallbacks
	Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* ___s_AfterFunctionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate> UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::s_BeforeFunctionCallbacks
	Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* ___s_BeforeFunctionCallbacks_17;
	// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::onScriptEvent
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* ___onScriptEvent_18;
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


// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ReceiveScriptEvent_mF60E011CE8C239703723E35BB000CEE934CAC267 (int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728 (String_t* ___function0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionCallback(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188 (String_t* ___function0, int32_t ___result1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F (const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.OpenXR.Features.Mock.MockRuntime>()
inline MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF* OpenXRSettings_GetFeature_TisMockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_m87DF2AA7C62867FE357F972E35BD6E581BC7210F (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_inline (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetBeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* MockRuntime_GetBeforeFunctionCallback_mC6DF44DDDC972164DAF20C5FCB2D2C8DD1937B32 (String_t* ___function0, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_inline (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetAfterFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* MockRuntime_GetAfterFunctionCallback_m40ABECA2B33292B0E9FA41AA594A5E682339EC44 (String_t* ___function0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::Invoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_inline (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::.ctor()
inline void Dictionary_2__ctor_m9C4D0FB47A0BF06B9963582354883C7F4922A84D (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m17C6500F4A39584F230E69E055B6EDCF7CE4032E (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* __this, String_t* ___key0, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*, String_t*, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::Remove(TKey)
inline bool Dictionary_2_Remove_m1D16C2805D2C90CE9E9F75DD087A02771665799C (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::get_Count()
inline int32_t Dictionary_2_get_Count_m53A2E81E4273B7F237467FD0E411CD76F6A335D0 (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::.ctor()
inline void Dictionary_2__ctor_m17FD7D5D71E4212B62A691A7F0CD5526EAC6AC39 (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mEB67AD45031F043BBC4B9E563EC2D2518BAFDE22 (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* __this, String_t* ___key0, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*, String_t*, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::Remove(TKey)
inline bool Dictionary_2_Remove_m786082F7C7C48014E4310D38AEC2BEB53FD2869C (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::get_Count()
inline int32_t Dictionary_2_get_Count_m9C89607F22DE5CBC0F10E446E79188543493C0E1 (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeforeFunctionDelegate__ctor_m42A11E8DDD8B3706497D8CF87F6853D961D0C832 (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate__ctor_m70B1A5F67C275B7064C9E1731B27326B97913F96 (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_MockRuntime_RegisterFunctionCallbacks_mD56D8B54058443DF664EFB70C073008BDFD18B9C (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* ___hookBefore0, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* ___hookAfter1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_m85C0B354BD4E4815AD39B8F34F2D9096ADBD53ED (String_t* ___function0, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* ___beforeCallback1, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* ___afterCallback2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m18B2157D65C4F2FC765F9AF4B4EBF7B8FF174E4F (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* __this, String_t* ___key0, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*, String_t*, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC24ED42B1D62F196005DEF99454A30DCEF6E0A5F (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* __this, String_t* ___key0, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*, String_t*, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ClearFunctionCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ClearFunctionCallbacks_mD7EFA7D5F744B560F6AE1414DC6D20FA6AFD8598 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetView(int32_t, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetViewState(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetReferenceSpace(int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetActionSpace(uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockRuntime_RegisterScriptEventCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockRuntime_TransitionToState(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockRuntime_GetSessionState();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_RequestExitSession();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_CauseInstanceLoss();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetEnvironmentBlendMode(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_SetReferenceSpaceBounds(int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_GetEndFrameStats(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_ActivateSecondaryView(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockRuntime_RegisterFunctionCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_mF60E011CE8C239703723E35BB000CEE934CAC267(int32_t ___evt0, uint64_t ___param1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MockRuntime_ReceiveScriptEvent_mF60E011CE8C239703723E35BB000CEE934CAC267(___evt0, ___param1, NULL);

}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728(char* ___function0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___function0' to managed representation
	String_t* ____function0_unmarshaled = NULL;
	____function0_unmarshaled = il2cpp_codegen_marshal_string_result(___function0);

	// Managed method invocation
	int32_t returnValue;
	returnValue = MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728(____function0_unmarshaled, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188(char* ___function0, int32_t ___result1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___function0' to managed representation
	String_t* ____function0_unmarshaled = NULL;
	____function0_unmarshaled = il2cpp_codegen_marshal_string_result(___function0);

	// Managed method invocation
	MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188(____function0_unmarshaled, ___result1, NULL);

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::add_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_add_onScriptEvent_m40EF877249C65A83DE2BFFA396DCB823C80C6BE6 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* V_0 = NULL;
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* V_1 = NULL;
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* V_2 = NULL;
	{
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_0 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18;
		V_0 = L_0;
	}

IL_0006:
	{
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_1 = V_0;
		V_1 = L_1;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_2 = V_1;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)CastclassSealed((RuntimeObject*)L_4, ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20_il2cpp_TypeInfo_var));
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_5 = V_2;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_6 = V_1;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_7;
		L_7 = InterlockedCompareExchangeImpl<ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*>((&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18), L_5, L_6);
		V_0 = L_7;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_8 = V_0;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_9 = V_1;
		if ((!(((RuntimeObject*)(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)L_8) == ((RuntimeObject*)(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::remove_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_remove_onScriptEvent_m48CF329E755B35B4A6B0C09EB778450A7035FC59 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* V_0 = NULL;
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* V_1 = NULL;
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* V_2 = NULL;
	{
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_0 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18;
		V_0 = L_0;
	}

IL_0006:
	{
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_1 = V_0;
		V_1 = L_1;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_2 = V_1;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)CastclassSealed((RuntimeObject*)L_4, ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20_il2cpp_TypeInfo_var));
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_5 = V_2;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_6 = V_1;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_7;
		L_7 = InterlockedCompareExchangeImpl<ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*>((&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18), L_5, L_6);
		V_0 = L_7;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_8 = V_0;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_9 = V_1;
		if ((!(((RuntimeObject*)(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)L_8) == ((RuntimeObject*)(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF* MockRuntime_get_Instance_m8E121E9352DAB8B36A0BCA89060CC5E20E64ABB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisMockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_m87DF2AA7C62867FE357F972E35BD6E581BC7210F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MockRuntime Instance => OpenXRSettings.Instance.GetFeature<MockRuntime>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F(NULL);
		NullCheck(L_0);
		MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF* L_1;
		L_1 = OpenXRSettings_GetFeature_TisMockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_m87DF2AA7C62867FE357F972E35BD6E581BC7210F(L_0, OpenXRSettings_GetFeature_TisMockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_m87DF2AA7C62867FE357F972E35BD6E581BC7210F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ReceiveScriptEvent_mF60E011CE8C239703723E35BB000CEE934CAC267 (int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* G_B2_0 = NULL;
	ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* G_B1_0 = NULL;
	{
		// private static void ReceiveScriptEvent(ScriptEvent evt, ulong param) => onScriptEvent?.Invoke(evt, param);
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_0 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18;
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___evt0;
		uint64_t L_3 = ___param1;
		NullCheck(G_B2_0);
		ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_inline(G_B2_0, L_2, L_3, NULL);
		return;
	}
}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728 (String_t* ___function0, const RuntimeMethod* method) 
{
	BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* V_0 = NULL;
	{
		// var callback = GetBeforeFunctionCallback(function);
		String_t* L_0 = ___function0;
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_1;
		L_1 = MockRuntime_GetBeforeFunctionCallback_mC6DF44DDDC972164DAF20C5FCB2D2C8DD1937B32(L_0, NULL);
		V_0 = L_1;
		// if(null == callback)
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return XrResult.Success;
		return (int32_t)(0);
	}

IL_000c:
	{
		// return callback(function);
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_3 = V_0;
		String_t* L_4 = ___function0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_inline(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionCallback(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188 (String_t* ___function0, int32_t ___result1, const RuntimeMethod* method) 
{
	AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* V_0 = NULL;
	{
		// var callback = GetAfterFunctionCallback(function);
		String_t* L_0 = ___function0;
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_1;
		L_1 = MockRuntime_GetAfterFunctionCallback_m40ABECA2B33292B0E9FA41AA594A5E682339EC44(L_0, NULL);
		V_0 = L_1;
		// if (null == callback)
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// callback(function, result);
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_3 = V_0;
		String_t* L_4 = ___function0;
		int32_t L_5 = ___result1;
		NullCheck(L_3);
		AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_inline(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_m85C0B354BD4E4815AD39B8F34F2D9096ADBD53ED (String_t* ___function0, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* ___beforeCallback1, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* ___afterCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1D16C2805D2C90CE9E9F75DD087A02771665799C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m786082F7C7C48014E4310D38AEC2BEB53FD2869C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m17FD7D5D71E4212B62A691A7F0CD5526EAC6AC39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9C4D0FB47A0BF06B9963582354883C7F4922A84D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m53A2E81E4273B7F237467FD0E411CD76F6A335D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9C89607F22DE5CBC0F10E446E79188543493C0E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m17C6500F4A39584F230E69E055B6EDCF7CE4032E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEB67AD45031F043BBC4B9E563EC2D2518BAFDE22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* G_B17_0 = NULL;
	BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* G_B19_0 = NULL;
	BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* G_B18_0 = NULL;
	AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* G_B20_0 = NULL;
	BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* G_B20_1 = NULL;
	{
		// if (beforeCallback != null)
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_0 = ___beforeCallback1;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (null == s_BeforeFunctionCallbacks)
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_1 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// s_BeforeFunctionCallbacks = new Dictionary<string, BeforeFunctionDelegate>();
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_2 = (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*)il2cpp_codegen_object_new(Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m9C4D0FB47A0BF06B9963582354883C7F4922A84D(L_2, Dictionary_2__ctor_m9C4D0FB47A0BF06B9963582354883C7F4922A84D_RuntimeMethod_var);
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17), (void*)L_2);
	}

IL_0014:
	{
		// s_BeforeFunctionCallbacks[function] = beforeCallback;
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_3 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		String_t* L_4 = ___function0;
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_5 = ___beforeCallback1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m17C6500F4A39584F230E69E055B6EDCF7CE4032E(L_3, L_4, L_5, Dictionary_2_set_Item_m17C6500F4A39584F230E69E055B6EDCF7CE4032E_RuntimeMethod_var);
		goto IL_0047;
	}

IL_0022:
	{
		// else if (s_BeforeFunctionCallbacks != null)
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_6 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// s_BeforeFunctionCallbacks.Remove(function);
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_7 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		String_t* L_8 = ___function0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m1D16C2805D2C90CE9E9F75DD087A02771665799C(L_7, L_8, Dictionary_2_Remove_m1D16C2805D2C90CE9E9F75DD087A02771665799C_RuntimeMethod_var);
		// if (s_BeforeFunctionCallbacks.Count == 0)
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_10 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m53A2E81E4273B7F237467FD0E411CD76F6A335D0(L_10, Dictionary_2_get_Count_m53A2E81E4273B7F237467FD0E411CD76F6A335D0_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		// s_BeforeFunctionCallbacks = null;
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17 = (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17), (void*)(Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*)NULL);
	}

IL_0047:
	{
		// if (afterCallback != null)
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_12 = ___afterCallback2;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// if (null == s_AfterFunctionCallbacks)
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_13 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		// s_AfterFunctionCallbacks = new Dictionary<string, AfterFunctionDelegate>();
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_14 = (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*)il2cpp_codegen_object_new(Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Dictionary_2__ctor_m17FD7D5D71E4212B62A691A7F0CD5526EAC6AC39(L_14, Dictionary_2__ctor_m17FD7D5D71E4212B62A691A7F0CD5526EAC6AC39_RuntimeMethod_var);
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16), (void*)L_14);
	}

IL_005b:
	{
		// s_AfterFunctionCallbacks[function] = afterCallback;
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_15 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		String_t* L_16 = ___function0;
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_17 = ___afterCallback2;
		NullCheck(L_15);
		Dictionary_2_set_Item_mEB67AD45031F043BBC4B9E563EC2D2518BAFDE22(L_15, L_16, L_17, Dictionary_2_set_Item_mEB67AD45031F043BBC4B9E563EC2D2518BAFDE22_RuntimeMethod_var);
		goto IL_008e;
	}

IL_0069:
	{
		// else if (s_AfterFunctionCallbacks != null)
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_18 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		if (!L_18)
		{
			goto IL_008e;
		}
	}
	{
		// s_AfterFunctionCallbacks.Remove(function);
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_19 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		String_t* L_20 = ___function0;
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_Remove_m786082F7C7C48014E4310D38AEC2BEB53FD2869C(L_19, L_20, Dictionary_2_Remove_m786082F7C7C48014E4310D38AEC2BEB53FD2869C_RuntimeMethod_var);
		// if (s_AfterFunctionCallbacks.Count == 0)
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_22 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Dictionary_2_get_Count_m9C89607F22DE5CBC0F10E446E79188543493C0E1(L_22, Dictionary_2_get_Count_m9C89607F22DE5CBC0F10E446E79188543493C0E1_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_008e;
		}
	}
	{
		// s_AfterFunctionCallbacks = null;
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16 = (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16), (void*)(Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*)NULL);
	}

IL_008e:
	{
		// MockRuntime_RegisterFunctionCallbacks(
		//     s_BeforeFunctionCallbacks != null ? BeforeFunctionCallback : (BeforeFunctionDelegate)null,
		//     s_AfterFunctionCallbacks != null ? AfterFunctionCallback : (AfterFunctionDelegate)null);
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_24 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		if (L_24)
		{
			goto IL_0098;
		}
	}
	{
		G_B17_0 = ((BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*)(NULL));
		goto IL_00a4;
	}

IL_0098:
	{
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_25 = (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*)il2cpp_codegen_object_new(BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		BeforeFunctionDelegate__ctor_m42A11E8DDD8B3706497D8CF87F6853D961D0C832(L_25, NULL, (intptr_t)((void*)MockRuntime_BeforeFunctionCallback_mC2015035328001D9FC22DC73D38518A1146ED728_RuntimeMethod_var), NULL);
		G_B17_0 = L_25;
	}

IL_00a4:
	{
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_26 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		G_B18_0 = G_B17_0;
		if (L_26)
		{
			G_B19_0 = G_B17_0;
			goto IL_00ae;
		}
	}
	{
		G_B20_0 = ((AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*)(NULL));
		G_B20_1 = G_B18_0;
		goto IL_00ba;
	}

IL_00ae:
	{
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_27 = (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*)il2cpp_codegen_object_new(AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		AfterFunctionDelegate__ctor_m70B1A5F67C275B7064C9E1731B27326B97913F96(L_27, NULL, (intptr_t)((void*)MockRuntime_AfterFunctionCallback_m6812E36D77CB5E9AC4BA21547ECB1A7CC8130188_RuntimeMethod_var), NULL);
		G_B20_0 = L_27;
		G_B20_1 = G_B19_0;
	}

IL_00ba:
	{
		MockRuntime_MockRuntime_RegisterFunctionCallbacks_mD56D8B54058443DF664EFB70C073008BDFD18B9C(G_B20_1, G_B20_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_mB26073BAA260892E982CD536CE09C3863F0C7CF5 (String_t* ___function0, BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* ___beforeCallback1, const RuntimeMethod* method) 
{
	{
		// SetFunctionCallback(function, beforeCallback, GetAfterFunctionCallback(function));
		String_t* L_0 = ___function0;
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_1 = ___beforeCallback1;
		String_t* L_2 = ___function0;
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_3;
		L_3 = MockRuntime_GetAfterFunctionCallback_m40ABECA2B33292B0E9FA41AA594A5E682339EC44(L_2, NULL);
		MockRuntime_SetFunctionCallback_m85C0B354BD4E4815AD39B8F34F2D9096ADBD53ED(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetFunctionCallback_m9E6CFC9535D27447649ED3892688016533AFF832 (String_t* ___function0, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* ___afterCallback1, const RuntimeMethod* method) 
{
	{
		// SetFunctionCallback(function, GetBeforeFunctionCallback(function), afterCallback);
		String_t* L_0 = ___function0;
		String_t* L_1 = ___function0;
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_2;
		L_2 = MockRuntime_GetBeforeFunctionCallback_mC6DF44DDDC972164DAF20C5FCB2D2C8DD1937B32(L_1, NULL);
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_3 = ___afterCallback1;
		MockRuntime_SetFunctionCallback_m85C0B354BD4E4815AD39B8F34F2D9096ADBD53ED(L_0, L_2, L_3, NULL);
		return;
	}
}
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetBeforeFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* MockRuntime_GetBeforeFunctionCallback_mC6DF44DDDC972164DAF20C5FCB2D2C8DD1937B32 (String_t* ___function0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m18B2157D65C4F2FC765F9AF4B4EBF7B8FF174E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* V_0 = NULL;
	{
		// if (null == s_BeforeFunctionCallbacks)
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_0 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*)NULL;
	}

IL_0009:
	{
		// if (!s_BeforeFunctionCallbacks.TryGetValue(function, out var callback))
		Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F* L_1 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17;
		String_t* L_2 = ___function0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m18B2157D65C4F2FC765F9AF4B4EBF7B8FF174E4F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m18B2157D65C4F2FC765F9AF4B4EBF7B8FF174E4F_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*)NULL;
	}

IL_001a:
	{
		// return callback;
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetAfterFunctionCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* MockRuntime_GetAfterFunctionCallback_m40ABECA2B33292B0E9FA41AA594A5E682339EC44 (String_t* ___function0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC24ED42B1D62F196005DEF99454A30DCEF6E0A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* V_0 = NULL;
	{
		// if (null == s_AfterFunctionCallbacks)
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_0 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*)NULL;
	}

IL_0009:
	{
		// if (!s_AfterFunctionCallbacks.TryGetValue(function, out var callback))
		Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6* L_1 = ((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16;
		String_t* L_2 = ___function0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mC24ED42B1D62F196005DEF99454A30DCEF6E0A5F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mC24ED42B1D62F196005DEF99454A30DCEF6E0A5F_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*)NULL;
	}

IL_001a:
	{
		// return callback;
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ClearFunctionCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ClearFunctionCallbacks_mD7EFA7D5F744B560F6AE1414DC6D20FA6AFD8598 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_BeforeFunctionCallbacks = null;
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17 = (Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_BeforeFunctionCallbacks_17), (void*)(Dictionary_2_tE800B4C2237603A792FFCCFB9BFC21EA79CB7F3F*)NULL);
		// s_AfterFunctionCallbacks = null;
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16 = (Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___s_AfterFunctionCallbacks_16), (void*)(Dictionary_2_t07B33916E5B9BFBEDDE5C206E597C4A2071ED5E6*)NULL);
		// MockRuntime_RegisterFunctionCallbacks(null, null);
		MockRuntime_MockRuntime_RegisterFunctionCallbacks_mD56D8B54058443DF664EFB70C073008BDFD18B9C((BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*)NULL, (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ResetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ResetDefaults_m698F8466797E10FE398D686AA53276D52C42A35E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onScriptEvent = null;
		((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18 = (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_StaticFields*)il2cpp_codegen_static_fields_for(MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF_il2cpp_TypeInfo_var))->___onScriptEvent_18), (void*)(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*)NULL);
		// ClearFunctionCallbacks();
		MockRuntime_ClearFunctionCallbacks_mD7EFA7D5F744B560F6AE1414DC6D20FA6AFD8598(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_OnInstanceDestroy_m87D9042CA7DCD7E262D932C110546CB4458847BD (MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF* __this, uint64_t ___instance0, const RuntimeMethod* method) 
{
	{
		// ClearFunctionCallbacks();
		MockRuntime_ClearFunctionCallbacks_mD7EFA7D5F744B560F6AE1414DC6D20FA6AFD8598(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewPose(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetViewPose_mF1B2E370C087DCE67AC48EB271D6961E986400CB (int32_t ___viewConfigurationType0, int32_t ___viewIndex1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___fov4, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2) + sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974) + sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetView", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetView)(___viewConfigurationType0, ___viewIndex1, ___position2, ___orientation3, ___fov4);
	#else
	il2cppPInvokeFunc(___viewConfigurationType0, ___viewIndex1, ___position2, ___orientation3, ___fov4);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewState(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,UnityEngine.XR.OpenXR.NativeTypes.XrViewStateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetViewState_mD0BFEAE2401F55ABDADD9F11B22F122EBE840CC5 (int32_t ___viewConfigurationType0, int32_t ___viewStateFlags1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetViewState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetViewState)(___viewConfigurationType0, ___viewStateFlags1);
	#else
	il2cppPInvokeFunc(___viewConfigurationType0, ___viewStateFlags1);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetSpace_m8621F28AEDB10199503BDD00A74A2EA7A789FFC2 (int32_t ___referenceSpace0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation2, int32_t ___locationFlags3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2) + sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetReferenceSpace", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetReferenceSpace)(___referenceSpace0, ___position1, ___orientation2, ___locationFlags3);
	#else
	il2cppPInvokeFunc(___referenceSpace0, ___position1, ___orientation2, ___locationFlags3);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(System.UInt64,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetSpace_mE14677D206494B4ED6D11376DA9BD11DA63961CD (uint64_t ___actionHandle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation2, int32_t ___locationFlags3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2) + sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetActionSpace", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetActionSpace)(___actionHandle0, ___position1, ___orientation2, ___locationFlags3);
	#else
	il2cppPInvokeFunc(___actionHandle0, ___position1, ___orientation2, ___locationFlags3);
	#endif

}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_RegisterScriptEventCallback(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_Internal_RegisterScriptEventCallback_m2B81D5FE7365699AE4C48B481FB4D75A2EE65D95 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* ___callback0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_RegisterScriptEventCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockRuntime_RegisterScriptEventCallback)(____callback0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____callback0_marshaled);
	#endif

	return returnValue;
}
// System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_TransitionToState(UnityEngine.XR.OpenXR.NativeTypes.XrSessionState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MockRuntime_Internal_TransitionToState_mE336F5F83100704EC10256F8B886FF1F78236558 (int32_t ___state0, bool ___forceTransition1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_TransitionToState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockRuntime_TransitionToState)(___state0, static_cast<int32_t>(___forceTransition1));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___state0, static_cast<int32_t>(___forceTransition1));
	#endif

	return static_cast<bool>(returnValue);
}
// UnityEngine.XR.OpenXR.NativeTypes.XrSessionState UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_GetSessionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockRuntime_Internal_GetSessionState_m6B755956ADDA78C98438458893188E63398B16BC (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_GetSessionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockRuntime_GetSessionState)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::RequestExitSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_RequestExitSession_m3D1898810AE563EF5643979E37B3F61BB552D3B0 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_RequestExitSession", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_RequestExitSession)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::CauseInstanceLoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_CauseInstanceLoss_m61AB63D783A75EBDF3FB7B3C1DE245AF05153076 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_CauseInstanceLoss", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_CauseInstanceLoss)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetEnvironmentBlendMode(UnityEngine.XR.OpenXR.NativeTypes.XrEnvironmentBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetEnvironmentBlendMode_m032FF21F59BDE5E5ECE9DD49CBDC08A278B4AEE4 (int32_t ___environmentBlendMode0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetEnvironmentBlendMode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetEnvironmentBlendMode)(___environmentBlendMode0);
	#else
	il2cppPInvokeFunc(___environmentBlendMode0);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetReferenceSpaceBounds(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_SetReferenceSpaceBounds_mC2B8DA0F5E3CCD406C5B76C6B099F968274F8BA8 (int32_t ___referenceSpace0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bounds1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_SetReferenceSpaceBounds", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_SetReferenceSpaceBounds)(___referenceSpace0, ___bounds1);
	#else
	il2cppPInvokeFunc(___referenceSpace0, ___bounds1);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetEndFrameStats(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_GetEndFrameStats_m618966C4B72707899EE838FE1AA1B6B3441F3CFB (int32_t* ___primaryLayerCount0, int32_t* ___secondaryLayerCount1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_GetEndFrameStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_GetEndFrameStats)(___primaryLayerCount0, ___secondaryLayerCount1);
	#else
	il2cppPInvokeFunc(___primaryLayerCount0, ___secondaryLayerCount1);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ActivateSecondaryView(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_ActivateSecondaryView_mF7420192192C3BAEBBF009ED56D07BC556FA15A7 (int32_t ___viewConfigurationType0, bool ___activate1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_ActivateSecondaryView", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_ActivateSecondaryView)(___viewConfigurationType0, static_cast<int32_t>(___activate1));
	#else
	il2cppPInvokeFunc(___viewConfigurationType0, static_cast<int32_t>(___activate1));
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime_MockRuntime_RegisterFunctionCallbacks_mD56D8B54058443DF664EFB70C073008BDFD18B9C (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* ___hookBefore0, AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* ___hookAfter1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_runtime"), "MockRuntime_RegisterFunctionCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___hookBefore0' to native representation
	Il2CppMethodPointer ____hookBefore0_marshaled = NULL;
	____hookBefore0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___hookBefore0));

	// Marshaling of parameter '___hookAfter1' to native representation
	Il2CppMethodPointer ____hookAfter1_marshaled = NULL;
	____hookAfter1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___hookAfter1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockRuntime_RegisterFunctionCallbacks)(____hookBefore0_marshaled, ____hookAfter1_marshaled);
	#else
	il2cppPInvokeFunc(____hookBefore0_marshaled, ____hookAfter1_marshaled);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockRuntime__ctor_mB159112DF9A71505BB0C77424F107CCF5906699F (MockRuntime_tC5F1019CA2D3E89010E3A3BFC89834251257B2AF* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_Multicast(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* currentDelegate = reinterpret_cast<ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___evt0, ___param1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_OpenInst(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___evt0, ___param1, method);
}
void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_OpenStatic(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___evt0, ___param1, method);
}
void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_OpenStaticInvoker(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___evt0, ___param1);
}
void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_ClosedStaticInvoker(ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___evt0, ___param1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___evt0, ___param1);

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate__ctor_mE05196985541B485AA1A5D7C97EE6370162597C6 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_Multicast;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___evt0, ___param1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::BeginInvoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptEventDelegate_BeginInvoke_mA01E16330527DD2C2E43DEA25B1E766572ED28B6 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEvent_t98D7BEA7A83AEC5AC0316FCED0B85028D4E75DAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ScriptEvent_t98D7BEA7A83AEC5AC0316FCED0B85028D4E75DAD_il2cpp_TypeInfo_var, &___evt0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___param1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_EndInvoke_m25145EDD65EE5A0A801F0DE45587B47D73CFC353 (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_Multicast(BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* currentDelegate = reinterpret_cast<BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___functionName0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_OpenInst(BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	NullCheck(___functionName0);
	typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___functionName0, method);
}
int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_OpenStatic(BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___functionName0, method);
}
int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_OpenStaticInvoker(BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___functionName0);
}
int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_ClosedStaticInvoker(BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___functionName0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___functionName0' to native representation
	char* ____functionName0_marshaled = NULL;
	____functionName0_marshaled = il2cpp_codegen_marshal_string(___functionName0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____functionName0_marshaled);

	// Marshaling cleanup of parameter '___functionName0' native representation
	il2cpp_codegen_marshal_free(____functionName0_marshaled);
	____functionName0_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeforeFunctionDelegate__ctor_m42A11E8DDD8B3706497D8CF87F6853D961D0C832 (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_Multicast;
}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___functionName0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BeforeFunctionDelegate_BeginInvoke_m55800A4146677D7A22524810CA5559EF881F59C0 (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___functionName0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_EndInvoke_m680B2FC2866E4A959B218584FCEC8811CE46A4B1 (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_Multicast(AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* currentDelegate = reinterpret_cast<AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___functionName0, ___result1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_OpenInst(AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	NullCheck(___functionName0);
	typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___functionName0, ___result1, method);
}
void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_OpenStatic(AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___functionName0, ___result1, method);
}
void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_OpenStaticInvoker(AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___functionName0, ___result1);
}
void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_ClosedStaticInvoker(AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___functionName0, ___result1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552 (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___functionName0' to native representation
	char* ____functionName0_marshaled = NULL;
	____functionName0_marshaled = il2cpp_codegen_marshal_string(___functionName0);

	// Native function invocation
	il2cppPInvokeFunc(____functionName0_marshaled, ___result1);

	// Marshaling cleanup of parameter '___functionName0' native representation
	il2cpp_codegen_marshal_free(____functionName0_marshaled);
	____functionName0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate__ctor_m70B1A5F67C275B7064C9E1731B27326B97913F96 (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_Multicast;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::Invoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115 (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___functionName0, ___result1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::BeginInvoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AfterFunctionDelegate_BeginInvoke_m8850000FC36D01D205D12C3C496C66A4282322AA (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_tC6E780422C0CF27153FB9B0ED7D1F60015608195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___functionName0;
	__d_args[1] = Box(XrResult_tC6E780422C0CF27153FB9B0ED7D1F60015608195_il2cpp_TypeInfo_var, &___result1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AfterFunctionDelegate_EndInvoke_m1F7F16FB2CF9927443DA7257E47A5418DABD7B58 (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_m41274335D95A563973BC60763CF3853920443403_inline (ScriptEventDelegate_t0DE50F0234F04B68173703087BFCB08BB4922E20* __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___evt0, ___param1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BeforeFunctionDelegate_Invoke_mAA46B0A8103DF4E9C729D21D736BB9E6A38C70CA_inline (BeforeFunctionDelegate_t767D515AE77977BF5EA389123E37EB685DDADDDA* __this, String_t* ___functionName0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___functionName0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AfterFunctionDelegate_Invoke_mF8B0A0BF8DCC84E37AB367200F2D081B9706A115_inline (AfterFunctionDelegate_t2794658426C2B81F53841DCC65EED4E864522552* __this, String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___functionName0, ___result1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
