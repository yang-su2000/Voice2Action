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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Net.Http.Headers.ElementTryParser`1<System.Object>
struct ElementTryParser_1_tC103EFB3631438BCBDF23838D89879C456BC9034;
// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.StringWithQualityHeaderValue>
struct ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827;
// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.TransferCodingHeaderValue>
struct ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673;
// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>
struct ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E;
// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.ViaHeaderValue>
struct ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F;
// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.WarningHeaderValue>
struct ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D;
// System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue>
struct ICollection_1_t63DD402A17A7A409A1BDD205D511199CAC7D1D9F;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>
struct List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Net.Http.Headers.StringWithQualityHeaderValue>
struct List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF;
// System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingHeaderValue>
struct List_1_t121023712E9D93612AC2A927B298D0F6D1552847;
// System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>
struct List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E;
// System.Collections.Generic.List`1<System.Net.Http.Headers.ViaHeaderValue>
struct List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996;
// System.Collections.Generic.List`1<System.Net.Http.Headers.WarningHeaderValue>
struct List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Net.Http.Headers.NameValueHeaderValue[]
struct NameValueHeaderValueU5BU5D_t039D4AE5F06F09334619AC08383CD9462441642B;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Net.Http.Headers.StringWithQualityHeaderValue[]
struct StringWithQualityHeaderValueU5BU5D_t0144F705271555224FD067C9765963885106FE2C;
// System.Net.Http.Headers.TransferCodingHeaderValue[]
struct TransferCodingHeaderValueU5BU5D_tAF704F9235756DC18BEC627FF730C9F82B26C09E;
// System.Net.Http.Headers.TransferCodingWithQualityHeaderValue[]
struct TransferCodingWithQualityHeaderValueU5BU5D_t4796011B5FA5F86CDADE2543CB63BDDFC11FDB3B;
// System.Net.Http.Headers.ViaHeaderValue[]
struct ViaHeaderValueU5BU5D_tDDA845EDC279B3EF7410AF7618E4472704989B6A;
// System.Net.Http.Headers.WarningHeaderValue[]
struct WarningHeaderValueU5BU5D_tD8F387DEC226781AE48818C3376DA00266BB1DDC;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Net.Http.Headers.Lexer
struct Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Http.Headers.NameValueHeaderValue
struct NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Net.Http.Headers.StringWithQualityHeaderValue
struct StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Net.Http.Headers.TransferCodingHeaderValue
struct TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28;
// System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
struct TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0;
// System.Net.Http.Headers.ViaHeaderValue
struct ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Http.Headers.WarningHeaderValue
struct WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t63DD402A17A7A409A1BDD205D511199CAC7D1D9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140;
IL2CPP_EXTERN_C String_t* _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralE99398B335D2EAF0A31FDD023AFE8DD4D0497A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralF131637A571831C338E6287D2BDF20AEAAC71B23;
IL2CPP_EXTERN_C String_t* _stringLiteralFA6AD0FB1130BFA5AD9F54E775FBEB781B424CF5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_SequenceEqual_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m002CEC942673A8FB19B68E23B59D6156DC269BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_ToString_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_mCC9523AF4AE36964715203CA7EB5234DD15B447F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionParser_TryParse_TisStringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_mC5CF2341EAB7D4910A1CABC238E42CF5268EB6B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionParser_TryParse_TisTransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_m36FC4846EF4417FBE6A01AE26B3A5697C98DF399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionParser_TryParse_TisTransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_m9C6E763144BF4AD29A3FDE3C14070CDFA8B482BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionParser_TryParse_TisViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_mA1C30362729876469634883EF732510D5C9CEFCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionParser_TryParse_TisWarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_m89C9006D558F9428B7630E1BBE0D5A2EC008EDF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC3EFA629F08B6F5CF202CD70A7F1CD17DDA65FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m858DC357C35DF0EBD0224994E6E14E237B2DFED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8BD3976E00736BD9701D73F0E4629F79D7EB73F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashCodeCalculator_Calculate_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m08BD773E1CC6C23343258E2A29732EDA24E2C220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m06614B1C3CAC9E701A5D74B0B253445BB6031F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m815AC350D766BF4C2CE41E784C1F414B4929EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringWithQualityHeaderValue_TryParseElement_m290CB0828CB0F466285CAA8DA88E21CE9BFC61D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferCodingHeaderValue_TryParseElement_mCDCE45F43AD28EA6081BF7B4567127C0ED87CEBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferCodingWithQualityHeaderValue_TryParseElement_mB51A802078D7F2DF7C0A4786A3C0BDFBD0C4794B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ViaHeaderValue_TryParseElement_mB382E0FE989EE4458E44CB3D7CE6368979145547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WarningHeaderValue_TryParseElement_m18BBB77084037A279ECB844BBE6816E4A67B1D6D_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>
struct List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NameValueHeaderValueU5BU5D_t039D4AE5F06F09334619AC08383CD9462441642B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NameValueHeaderValueU5BU5D_t039D4AE5F06F09334619AC08383CD9462441642B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Net.Http.Headers.StringWithQualityHeaderValue>
struct List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringWithQualityHeaderValueU5BU5D_t0144F705271555224FD067C9765963885106FE2C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringWithQualityHeaderValueU5BU5D_t0144F705271555224FD067C9765963885106FE2C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingHeaderValue>
struct List_1_t121023712E9D93612AC2A927B298D0F6D1552847  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransferCodingHeaderValueU5BU5D_tAF704F9235756DC18BEC627FF730C9F82B26C09E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t121023712E9D93612AC2A927B298D0F6D1552847_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransferCodingHeaderValueU5BU5D_tAF704F9235756DC18BEC627FF730C9F82B26C09E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>
struct List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransferCodingWithQualityHeaderValueU5BU5D_t4796011B5FA5F86CDADE2543CB63BDDFC11FDB3B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransferCodingWithQualityHeaderValueU5BU5D_t4796011B5FA5F86CDADE2543CB63BDDFC11FDB3B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Net.Http.Headers.ViaHeaderValue>
struct List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ViaHeaderValueU5BU5D_tDDA845EDC279B3EF7410AF7618E4472704989B6A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ViaHeaderValueU5BU5D_tDDA845EDC279B3EF7410AF7618E4472704989B6A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Net.Http.Headers.WarningHeaderValue>
struct List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WarningHeaderValueU5BU5D_tD8F387DEC226781AE48818C3376DA00266BB1DDC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WarningHeaderValueU5BU5D_tD8F387DEC226781AE48818C3376DA00266BB1DDC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// System.Net.Http.Headers.Lexer
struct Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.Lexer::s
	String_t* ___s_3;
	// System.Int32 System.Net.Http.Headers.Lexer::pos
	int32_t ___pos_4;
};

struct Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6_StaticFields
{
	// System.Boolean[] System.Net.Http.Headers.Lexer::token_chars
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___token_chars_0;
	// System.Int32 System.Net.Http.Headers.Lexer::last_token_char
	int32_t ___last_token_char_1;
	// System.String[] System.Net.Http.Headers.Lexer::dt_formats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dt_formats_2;
};

// System.Net.Http.Headers.NameValueHeaderValue
struct NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.NameValueHeaderValue::value
	String_t* ___value_0;
	// System.String System.Net.Http.Headers.NameValueHeaderValue::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
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

// System.Net.Http.Headers.TransferCodingHeaderValue
struct TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.TransferCodingHeaderValue::value
	String_t* ___value_0;
	// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> System.Net.Http.Headers.TransferCodingHeaderValue::parameters
	List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* ___parameters_1;
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

// System.Net.Http.Headers.ViaHeaderValue
struct ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.ViaHeaderValue::<Comment>k__BackingField
	String_t* ___U3CCommentU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.ViaHeaderValue::<ProtocolName>k__BackingField
	String_t* ___U3CProtocolNameU3Ek__BackingField_1;
	// System.String System.Net.Http.Headers.ViaHeaderValue::<ProtocolVersion>k__BackingField
	String_t* ___U3CProtocolVersionU3Ek__BackingField_2;
	// System.String System.Net.Http.Headers.ViaHeaderValue::<ReceivedBy>k__BackingField
	String_t* ___U3CReceivedByU3Ek__BackingField_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Net.Http.Headers.NameValueHeaderValue>
struct Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* ____current_3;
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

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Net.Http.Headers.Token
struct Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 
{
	// System.Net.Http.Headers.Token/Type System.Net.Http.Headers.Token::type
	int32_t ___type_1;
	// System.Int32 System.Net.Http.Headers.Token::<StartPosition>k__BackingField
	int32_t ___U3CStartPositionU3Ek__BackingField_2;
	// System.Int32 System.Net.Http.Headers.Token::<EndPosition>k__BackingField
	int32_t ___U3CEndPositionU3Ek__BackingField_3;
};

struct Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_StaticFields
{
	// System.Net.Http.Headers.Token System.Net.Http.Headers.Token::Empty
	Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___Empty_0;
};

// System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
struct TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0  : public TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=127
struct __StaticArrayInitTypeSizeU3D127_tACE926A656C2A0A74013AEFDF02068728F625081 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D127_tACE926A656C2A0A74013AEFDF02068728F625081__padding[127];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA3C0161EB8FC0CA9517FDFE49755E4F410DCAD23  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tA3C0161EB8FC0CA9517FDFE49755E4F410DCAD23_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=127 <PrivateImplementationDetails>::1D59178A3E2B293760F6FE72820F96FEC4071964A5B9E4BB13F7EA51510A4729
	__StaticArrayInitTypeSizeU3D127_tACE926A656C2A0A74013AEFDF02068728F625081 ___1D59178A3E2B293760F6FE72820F96FEC4071964A5B9E4BB13F7EA51510A4729_0;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// System.Net.Http.Headers.StringWithQualityHeaderValue
struct StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177  : public RuntimeObject
{
	// System.Nullable`1<System.Double> System.Net.Http.Headers.StringWithQualityHeaderValue::<Quality>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CQualityU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.StringWithQualityHeaderValue::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_1;
};

// System.Nullable`1<System.DateTimeOffset>
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value_1;
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

// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.StringWithQualityHeaderValue>
struct ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827  : public MulticastDelegate_t
{
};

// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.TransferCodingHeaderValue>
struct ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673  : public MulticastDelegate_t
{
};

// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>
struct ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E  : public MulticastDelegate_t
{
};

// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.ViaHeaderValue>
struct ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F  : public MulticastDelegate_t
{
};

// System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.WarningHeaderValue>
struct ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D  : public MulticastDelegate_t
{
};

// System.Net.Http.Headers.WarningHeaderValue
struct WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.WarningHeaderValue::<Agent>k__BackingField
	String_t* ___U3CAgentU3Ek__BackingField_0;
	// System.Int32 System.Net.Http.Headers.WarningHeaderValue::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTimeOffset> System.Net.Http.Headers.WarningHeaderValue::<Date>k__BackingField
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___U3CDateU3Ek__BackingField_2;
	// System.String System.Net.Http.Headers.WarningHeaderValue::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;
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


// T System.Nullable`1<System.Double>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Double>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ElementTryParser`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementTryParser_1__ctor_mAD19F5D8112E5D7E73DC1788A36DB5D1983EC568_gshared (ElementTryParser_1_tC103EFB3631438BCBDF23838D89879C456BC9034* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.CollectionParser::TryParse<System.Object>(System.String,System.Int32,System.Net.Http.Headers.ElementTryParser`1<T>,System.Collections.Generic.List`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionParser_TryParse_TisRuntimeObject_m3AA1041CC3584EF81062155EB72204B86C516047_gshared (String_t* ___input0, int32_t ___minimalCount1, ElementTryParser_1_tC103EFB3631438BCBDF23838D89879C456BC9034* ___parser2, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___result3, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.CollectionExtensions::SequenceEqual<System.Object>(System.Collections.Generic.List`1<TSource>,System.Collections.Generic.List`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionExtensions_SequenceEqual_TisRuntimeObject_m350E058D25A1855B2ACDF614580457B20A39EA6A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___first0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___second1, const RuntimeMethod* method) ;
// System.Int32 System.Net.Http.Headers.HashCodeCalculator::Calculate<System.Object>(System.Collections.Generic.ICollection`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeCalculator_Calculate_TisRuntimeObject_m55286BC0C15F5D11F14BEEFFF9BD4A1C68F52CB3_gshared (RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.CollectionExtensions::ToString<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionExtensions_ToString_TisRuntimeObject_m13D01D765FC0213CD02096154C41BF7C536C0485_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___list0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTimeOffset>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_gshared_inline (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTimeOffset>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_gshared_inline (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.DateTimeOffset>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTimeOffset>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTimeOffset>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.StringWithQualityHeaderValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Nullable`1<System.Double> System.Net.Http.Headers.StringWithQualityHeaderValue::get_Quality()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::GetValueOrDefault()
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Double>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_gshared)(__this, method);
}
// System.Void System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.StringWithQualityHeaderValue>::.ctor(System.Object,System.IntPtr)
inline void ElementTryParser_1__ctor_m94AF52EBEF3E33EC79E2FC0D0EAB0D6303DF49D6 (ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827*, RuntimeObject*, intptr_t, const RuntimeMethod*))ElementTryParser_1__ctor_mAD19F5D8112E5D7E73DC1788A36DB5D1983EC568_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Net.Http.Headers.CollectionParser::TryParse<System.Net.Http.Headers.StringWithQualityHeaderValue>(System.String,System.Int32,System.Net.Http.Headers.ElementTryParser`1<T>,System.Collections.Generic.List`1<T>&)
inline bool CollectionParser_TryParse_TisStringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_mC5CF2341EAB7D4910A1CABC238E42CF5268EB6B4 (String_t* ___input0, int32_t ___minimalCount1, ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827* ___parser2, List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF** ___result3, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t, ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827*, List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF**, const RuntimeMethod*))CollectionParser_TryParse_TisRuntimeObject_m3AA1041CC3584EF81062155EB72204B86C516047_gshared)(___input0, ___minimalCount1, ___parser2, ___result3, method);
}
// System.Net.Http.Headers.Token System.Net.Http.Headers.Lexer::Scan(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, bool ___recognizeDash0, const RuntimeMethod* method) ;
// System.Net.Http.Headers.Token/Type System.Net.Http.Headers.Token::op_Implicit(System.Net.Http.Headers.Token)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline (Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___token0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.StringWithQualityHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue__ctor_m1987D26A3FAB6124C36662FEF2395289776A1BDA (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.Lexer::GetStringValue(System.Net.Http.Headers.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___token0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.StringWithQualityHeaderValue::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue_set_Value_m6AA46E14143ACB1F240D3BCAF62C203FA03C53D7_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.Lexer::TryGetDoubleValue(System.Net.Http.Headers.Token,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_TryGetDoubleValue_m0190F25B19392893FA1BB41C2967F8BF492B8BF6 (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___token0, double* ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___value0, method);
}
// System.Void System.Net.Http.Headers.StringWithQualityHeaderValue::set_Quality(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue_set_Quality_mD4ECD0A471994289199899481BE2F02D9CB84D50_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>::GetEnumerator()
inline Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A List_1_GetEnumerator_m06614B1C3CAC9E701A5D74B0B253445BB6031F09 (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A (*) (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Net.Http.Headers.NameValueHeaderValue>::Dispose()
inline void Enumerator_Dispose_mC3EFA629F08B6F5CF202CD70A7F1CD17DDA65FF8 (Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Net.Http.Headers.NameValueHeaderValue>::get_Current()
inline NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* Enumerator_get_Current_m8BD3976E00736BD9701D73F0E4629F79D7EB73F0_inline (Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A* __this, const RuntimeMethod* method)
{
	return ((  NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* (*) (Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> System.Net.Http.Headers.TransferCodingHeaderValue::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransferCodingHeaderValue_get_Parameters_m84A703FBD32E6F10BD328C9BBAE9FE91C5F22877 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.NameValueHeaderValue::.ctor(System.Net.Http.Headers.NameValueHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueHeaderValue__ctor_m4146411CE34CB17215D526E96B1150D317B874C6 (NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* __this, NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Net.Http.Headers.NameValueHeaderValue>::MoveNext()
inline bool Enumerator_MoveNext_m858DC357C35DF0EBD0224994E6E14E237B2DFED5 (Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>::.ctor()
inline void List_1__ctor_m815AC350D766BF4C2CE41E784C1F414B4929EBDB (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Net.Http.Headers.TransferCodingHeaderValue::.ctor(System.Net.Http.Headers.TransferCodingHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferCodingHeaderValue__ctor_m0F01269B8EBEDBB6B9412262548AE751D0E65027 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.CollectionExtensions::SequenceEqual<System.Net.Http.Headers.NameValueHeaderValue>(System.Collections.Generic.List`1<TSource>,System.Collections.Generic.List`1<TSource>)
inline bool CollectionExtensions_SequenceEqual_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m002CEC942673A8FB19B68E23B59D6156DC269BB5 (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* ___first0, List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC*, List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC*, const RuntimeMethod*))CollectionExtensions_SequenceEqual_TisRuntimeObject_m350E058D25A1855B2ACDF614580457B20A39EA6A_gshared)(___first0, ___second1, method);
}
// System.Int32 System.Net.Http.Headers.HashCodeCalculator::Calculate<System.Net.Http.Headers.NameValueHeaderValue>(System.Collections.Generic.ICollection`1<T>)
inline int32_t HashCodeCalculator_Calculate_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m08BD773E1CC6C23343258E2A29732EDA24E2C220 (RuntimeObject* ___list0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))HashCodeCalculator_Calculate_TisRuntimeObject_m55286BC0C15F5D11F14BEEFFF9BD4A1C68F52CB3_gshared)(___list0, method);
}
// System.String System.Net.Http.Headers.CollectionExtensions::ToString<System.Net.Http.Headers.NameValueHeaderValue>(System.Collections.Generic.List`1<T>)
inline String_t* CollectionExtensions_ToString_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_mCC9523AF4AE36964715203CA7EB5234DD15B447F (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* ___list0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC*, const RuntimeMethod*))CollectionExtensions_ToString_TisRuntimeObject_m13D01D765FC0213CD02096154C41BF7C536C0485_gshared)(___list0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.TransferCodingHeaderValue>::.ctor(System.Object,System.IntPtr)
inline void ElementTryParser_1__ctor_m4FFE12D96C4C7B91FA2E24988B1AD166C27833C9 (ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673*, RuntimeObject*, intptr_t, const RuntimeMethod*))ElementTryParser_1__ctor_mAD19F5D8112E5D7E73DC1788A36DB5D1983EC568_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Net.Http.Headers.CollectionParser::TryParse<System.Net.Http.Headers.TransferCodingHeaderValue>(System.String,System.Int32,System.Net.Http.Headers.ElementTryParser`1<T>,System.Collections.Generic.List`1<T>&)
inline bool CollectionParser_TryParse_TisTransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_m36FC4846EF4417FBE6A01AE26B3A5697C98DF399 (String_t* ___input0, int32_t ___minimalCount1, ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673* ___parser2, List_1_t121023712E9D93612AC2A927B298D0F6D1552847** ___result3, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t, ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673*, List_1_t121023712E9D93612AC2A927B298D0F6D1552847**, const RuntimeMethod*))CollectionParser_TryParse_TisRuntimeObject_m3AA1041CC3584EF81062155EB72204B86C516047_gshared)(___input0, ___minimalCount1, ___parser2, ___result3, method);
}
// System.Void System.Net.Http.Headers.TransferCodingHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferCodingHeaderValue__ctor_mE59525E494820D8C1541680ACE2B1963EAC76F5F (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.NameValueHeaderValue::TryParseParameters(System.Net.Http.Headers.Lexer,System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameValueHeaderValue_TryParseParameters_m8268F570B14B0546927DDEABFF6A29CA3C33968E (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* ___lexer0, List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC** ___result1, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___t2, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>::.ctor(System.Object,System.IntPtr)
inline void ElementTryParser_1__ctor_m076D98AE70CE1368079C1AD2F61E5D4EDBA198B1 (ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E*, RuntimeObject*, intptr_t, const RuntimeMethod*))ElementTryParser_1__ctor_mAD19F5D8112E5D7E73DC1788A36DB5D1983EC568_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Net.Http.Headers.CollectionParser::TryParse<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>(System.String,System.Int32,System.Net.Http.Headers.ElementTryParser`1<T>,System.Collections.Generic.List`1<T>&)
inline bool CollectionParser_TryParse_TisTransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_m9C6E763144BF4AD29A3FDE3C14070CDFA8B482BD (String_t* ___input0, int32_t ___minimalCount1, ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E* ___parser2, List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E** ___result3, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t, ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E*, List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E**, const RuntimeMethod*))CollectionParser_TryParse_TisRuntimeObject_m3AA1041CC3584EF81062155EB72204B86C516047_gshared)(___input0, ___minimalCount1, ___parser2, ___result3, method);
}
// System.Void System.Net.Http.Headers.TransferCodingWithQualityHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferCodingWithQualityHeaderValue__ctor_mC8E821716671E52FCB16117F70BED05494993CD1 (TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.ViaHeaderValue::get_Comment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.ViaHeaderValue::get_ProtocolName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.ViaHeaderValue::get_ProtocolVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.ViaHeaderValue::get_ReceivedBy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.ViaHeaderValue>::.ctor(System.Object,System.IntPtr)
inline void ElementTryParser_1__ctor_m53CD59A18348DDBA2D8D4D88860B76D93C8EE817 (ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F*, RuntimeObject*, intptr_t, const RuntimeMethod*))ElementTryParser_1__ctor_mAD19F5D8112E5D7E73DC1788A36DB5D1983EC568_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Net.Http.Headers.CollectionParser::TryParse<System.Net.Http.Headers.ViaHeaderValue>(System.String,System.Int32,System.Net.Http.Headers.ElementTryParser`1<T>,System.Collections.Generic.List`1<T>&)
inline bool CollectionParser_TryParse_TisViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_mA1C30362729876469634883EF732510D5C9CEFCC (String_t* ___input0, int32_t ___minimalCount1, ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F* ___parser2, List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996** ___result3, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t, ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F*, List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996**, const RuntimeMethod*))CollectionParser_TryParse_TisRuntimeObject_m3AA1041CC3584EF81062155EB72204B86C516047_gshared)(___input0, ___minimalCount1, ___parser2, ___result3, method);
}
// System.Void System.Net.Http.Headers.ViaHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViaHeaderValue__ctor_mE0D8F01E9C6F97C3321A6E63595AF17017D82FF2 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_ProtocolName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ProtocolName_m7C23BDD5E31B1B8FA3724E2FEEC01C3373BB4FEA_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_ProtocolVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ProtocolVersion_m45DBC07FD1229F3E566BECC20A332428BE1FD30E_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Http.Headers.Lexer::PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_PeekChar_m364174CE2F6379BDC3C82E5A7DC53E86B3696E61 (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.Lexer::EatChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_EatChar_m0061692E80AA9BE72E340069B4B5EA737F2B5409 (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.Lexer::GetStringValue(System.Net.Http.Headers.Token,System.Net.Http.Headers.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_GetStringValue_m04F7171F73F0FA085304E74AC227159D6197849E (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___start0, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___end1, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_ReceivedBy(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ReceivedBy_m99CB36A125F34F69A1FC9BF63AD6F811EF33F858_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.Lexer::ScanCommentOptional(System.String&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_ScanCommentOptional_m449BB87B4DD252B5F3949AD40C855A386AFFE5EE (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, String_t** ___value0, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___readToken1, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_Comment(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_Comment_mC438CB87E5234D1BFE81C42948F92311FD11F981_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Http.Headers.WarningHeaderValue::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.WarningHeaderValue::get_Agent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) ;
// System.String System.Net.Http.Headers.WarningHeaderValue::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTimeOffset> System.Net.Http.Headers.WarningHeaderValue::get_Date()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTimeOffset>::get_HasValue()
inline bool Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_inline (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*, const RuntimeMethod*))Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.DateTimeOffset>::GetValueOrDefault()
inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_inline (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method)
{
	return ((  DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_gshared_inline)(__this, method);
}
// System.Boolean System.DateTimeOffset::op_Equality(System.DateTimeOffset,System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeOffset_op_Equality_m33318CE5D85584EA3D2A6EAAD0E522ED9C4D7A63 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___left0, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.DateTimeOffset>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87 (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*, const RuntimeMethod*))Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_gshared)(__this, method);
}
// System.Void System.Net.Http.Headers.ElementTryParser`1<System.Net.Http.Headers.WarningHeaderValue>::.ctor(System.Object,System.IntPtr)
inline void ElementTryParser_1__ctor_mE30B491702961B176FD99DE85F37110CBBD9C966 (ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D*, RuntimeObject*, intptr_t, const RuntimeMethod*))ElementTryParser_1__ctor_mAD19F5D8112E5D7E73DC1788A36DB5D1983EC568_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Net.Http.Headers.CollectionParser::TryParse<System.Net.Http.Headers.WarningHeaderValue>(System.String,System.Int32,System.Net.Http.Headers.ElementTryParser`1<T>,System.Collections.Generic.List`1<T>&)
inline bool CollectionParser_TryParse_TisWarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_m89C9006D558F9428B7630E1BBE0D5A2EC008EDF6 (String_t* ___input0, int32_t ___minimalCount1, ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D* ___parser2, List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8** ___result3, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t, ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D*, List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8**, const RuntimeMethod*))CollectionParser_TryParse_TisRuntimeObject_m3AA1041CC3584EF81062155EB72204B86C516047_gshared)(___input0, ___minimalCount1, ___parser2, ___result3, method);
}
// System.Boolean System.Net.Http.Headers.Lexer::TryGetNumericValue(System.Net.Http.Headers.Token,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_TryGetNumericValue_m40DBCE6925FF90ECE9E6A51EA8AEF8F26DB0A7DC (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___token0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.WarningHeaderValue::IsCodeValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WarningHeaderValue_IsCodeValid_mC8DE563A73BBFBF23780DDD751264B670973CC90 (int32_t ___code0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.WarningHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningHeaderValue__ctor_m69C72638122B7016432046DB60F943A0291687AA (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Code_m7B5D485961DE6EBE8C80704AFECB4DE82150E13F_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Agent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Agent_m253887F96977DCE21057B60CCA45FD89F468F750_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Text_mA374FD8D24D59370A3606E8C2D38AD8440844581_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.Lexer::TryGetDateValue(System.Net.Http.Headers.Token,System.DateTimeOffset&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_TryGetDateValue_m0AD91877B2E626081B0725260AF3B1B75D1ACAD1 (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* __this, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___token0, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTimeOffset>::.ctor(T)
inline void Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, const RuntimeMethod*))Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF_gshared)(__this, ___value0, method);
}
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Date(System.Nullable`1<System.DateTimeOffset>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Date_mA012565F73DDCB3652C21CBF55E596A42C915EC1_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTimeOffset>::get_Value()
inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method)
{
	return ((  DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*, const RuntimeMethod*))Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D_gshared)(__this, method);
}
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m4B5BB65E069D2146E808A1CE5F424ACA2F4D2281 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Http.Headers.StringWithQualityHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue__ctor_m1987D26A3FAB6124C36662FEF2395289776A1BDA (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Nullable`1<System.Double> System.Net.Http.Headers.StringWithQualityHeaderValue::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CQualityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.StringWithQualityHeaderValue::set_Quality(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue_set_Quality_mD4ECD0A471994289199899481BE2F02D9CB84D50 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CQualityU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String System.Net.Http.Headers.StringWithQualityHeaderValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.StringWithQualityHeaderValue::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue_set_Value_m6AA46E14143ACB1F240D3BCAF62C203FA03C53D7 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Object System.Net.Http.Headers.StringWithQualityHeaderValue::System.ICloneable.Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringWithQualityHeaderValue_System_ICloneable_Clone_m72861E0254AF4C1AC0C84CF1163E4CB9073FC9E7 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Net.Http.Headers.StringWithQualityHeaderValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringWithQualityHeaderValue_Equals_mE2F9F00222BEDE023B3B1B6645C245EB9C1FD505 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* V_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177*)IsInstClass((RuntimeObject*)L_0, StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_il2cpp_TypeInfo_var));
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline(L_2, NULL);
		String_t* L_4;
		L_4 = StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline(__this, NULL);
		bool L_5;
		L_5 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_3, L_4, 5, NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_6 = V_0;
		NullCheck(L_6);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_7;
		L_7 = StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline(L_6, NULL);
		V_1 = L_7;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_8;
		L_8 = StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline(__this, NULL);
		V_2 = L_8;
		double L_9;
		L_9 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_1), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		double L_10;
		L_10 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_2), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		bool L_12;
		L_12 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_2), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		return (bool)((int32_t)(((((double)L_9) == ((double)L_10))? 1 : 0)&((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)));
	}

IL_004e:
	{
		return (bool)0;
	}
}
// System.Int32 System.Net.Http.Headers.StringWithQualityHeaderValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringWithQualityHeaderValue_GetHashCode_mD285DE246AC1111DD51BD85B1936EDEE8A0FE0BA (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
		L_3 = StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12((&V_0), Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_RuntimeMethod_var);
		return ((int32_t)(L_2^L_4));
	}
}
// System.Boolean System.Net.Http.Headers.StringWithQualityHeaderValue::TryParse(System.String,System.Int32,System.Collections.Generic.List`1<System.Net.Http.Headers.StringWithQualityHeaderValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringWithQualityHeaderValue_TryParse_m4299234BF82BBDF9C0D8025EDEF4E7725F743835 (String_t* ___input0, int32_t ___minimalCount1, List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF** ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionParser_TryParse_TisStringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_mC5CF2341EAB7D4910A1CABC238E42CF5268EB6B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWithQualityHeaderValue_TryParseElement_m290CB0828CB0F466285CAA8DA88E21CE9BFC61D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = ___minimalCount1;
		ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827* L_2 = (ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827*)il2cpp_codegen_object_new(ElementTryParser_1_t4B321AD06FA1B220011BD1ACD5BB117D8360E827_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ElementTryParser_1__ctor_m94AF52EBEF3E33EC79E2FC0D0EAB0D6303DF49D6(L_2, NULL, (intptr_t)((void*)StringWithQualityHeaderValue_TryParseElement_m290CB0828CB0F466285CAA8DA88E21CE9BFC61D1_RuntimeMethod_var), NULL);
		List_1_tD8E2046561ED40F4DECB673B95483C6EA2F893FF** L_3 = ___result2;
		bool L_4;
		L_4 = CollectionParser_TryParse_TisStringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_mC5CF2341EAB7D4910A1CABC238E42CF5268EB6B4(L_0, L_1, L_2, L_3, CollectionParser_TryParse_TisStringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_mC5CF2341EAB7D4910A1CABC238E42CF5268EB6B4_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean System.Net.Http.Headers.StringWithQualityHeaderValue::TryParseElement(System.Net.Http.Headers.Lexer,System.Net.Http.Headers.StringWithQualityHeaderValue&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringWithQualityHeaderValue_TryParseElement_m290CB0828CB0F466285CAA8DA88E21CE9BFC61D1 (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* ___lexer0, StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177** ___parsedValue1, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90);
		s_Il2CppMethodInitialized = true;
	}
	StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* V_0 = NULL;
	String_t* V_1 = NULL;
	double V_2 = 0.0;
	{
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177** L_0 = ___parsedValue1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_1 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_2 = ___lexer0;
		NullCheck(L_2);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_3;
		L_3 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_2, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_1 = L_3;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_4 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_5 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_7 = (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177*)il2cpp_codegen_object_new(StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StringWithQualityHeaderValue__ctor_m1987D26A3FAB6124C36662FEF2395289776A1BDA(L_7, NULL);
		V_0 = L_7;
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_8 = V_0;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_9 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_10 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_11 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_10);
		NullCheck(L_9);
		String_t* L_12;
		L_12 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_9, L_11, NULL);
		NullCheck(L_8);
		StringWithQualityHeaderValue_set_Value_m6AA46E14143ACB1F240D3BCAF62C203FA03C53D7_inline(L_8, L_12, NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_13 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_14 = ___lexer0;
		NullCheck(L_14);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_15;
		L_15 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_14, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_13 = L_15;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_16 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_17 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_00ff;
		}
	}
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_19 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_20 = ___lexer0;
		NullCheck(L_20);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_21;
		L_21 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_20, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_19 = L_21;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_22 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_23 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_22);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_23, NULL);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0073:
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_25 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_26 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_27 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_26);
		NullCheck(L_25);
		String_t* L_28;
		L_28 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_25, L_27, NULL);
		V_1 = L_28;
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_29, _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140, NULL);
		if (!L_30)
		{
			goto IL_009c;
		}
	}
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_31, _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90, NULL);
		if (!L_32)
		{
			goto IL_009c;
		}
	}
	{
		return (bool)0;
	}

IL_009c:
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_33 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_34 = ___lexer0;
		NullCheck(L_34);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_35;
		L_35 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_34, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_33 = L_35;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_36 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_37 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_36);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_37, NULL);
		if ((((int32_t)L_38) == ((int32_t)4)))
		{
			goto IL_00b9;
		}
	}
	{
		return (bool)0;
	}

IL_00b9:
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_39 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_40 = ___lexer0;
		NullCheck(L_40);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_41;
		L_41 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_40, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_39 = L_41;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_42 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_43 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_44 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_43);
		NullCheck(L_42);
		bool L_45;
		L_45 = Lexer_TryGetDoubleValue_m0190F25B19392893FA1BB41C2967F8BF492B8BF6(L_42, L_44, (&V_2), NULL);
		if (L_45)
		{
			goto IL_00d8;
		}
	}
	{
		return (bool)0;
	}

IL_00d8:
	{
		double L_46 = V_2;
		if ((!(((double)L_46) > ((double)(1.0)))))
		{
			goto IL_00e6;
		}
	}
	{
		return (bool)0;
	}

IL_00e6:
	{
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_47 = V_0;
		double L_48 = V_2;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_49), L_48, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		NullCheck(L_47);
		StringWithQualityHeaderValue_set_Quality_mD4ECD0A471994289199899481BE2F02D9CB84D50_inline(L_47, L_49, NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_50 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_51 = ___lexer0;
		NullCheck(L_51);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_52;
		L_52 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_51, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_50 = L_52;
	}

IL_00ff:
	{
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177** L_53 = ___parsedValue1;
		StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* L_54 = V_0;
		*((RuntimeObject**)L_53) = (RuntimeObject*)L_54;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_53, (void*)(RuntimeObject*)L_54);
		return (bool)1;
	}
}
// System.String System.Net.Http.Headers.StringWithQualityHeaderValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringWithQualityHeaderValue_ToString_mB9DD827C75416CE19C236916BC5E54366D67F174 (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE99398B335D2EAF0A31FDD023AFE8DD4D0497A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF131637A571831C338E6287D2BDF20AEAAC71B23);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0;
		L_0 = StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2;
		L_2 = StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline(__this, NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
		L_3 = StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline(__this, NULL);
		V_0 = L_3;
		double L_4;
		L_4 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		V_1 = L_4;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_6;
		L_6 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_1), _stringLiteralF131637A571831C338E6287D2BDF20AEAAC71B23, L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralE99398B335D2EAF0A31FDD023AFE8DD4D0497A1B, L_6, NULL);
		return L_7;
	}

IL_0041:
	{
		String_t* L_8;
		L_8 = StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline(__this, NULL);
		return L_8;
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
// System.Void System.Net.Http.Headers.TransferCodingHeaderValue::.ctor(System.Net.Http.Headers.TransferCodingHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferCodingHeaderValue__ctor_m0F01269B8EBEDBB6B9412262548AE751D0E65027 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC3EFA629F08B6F5CF202CD70A7F1CD17DDA65FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m858DC357C35DF0EBD0224994E6E14E237B2DFED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8BD3976E00736BD9701D73F0E4629F79D7EB73F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t63DD402A17A7A409A1BDD205D511199CAC7D1D9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m06614B1C3CAC9E701A5D74B0B253445BB6031F09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* V_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___value_0;
		__this->___value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_0), (void*)L_1);
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_2 = ___source0;
		NullCheck(L_2);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_3 = L_2->___parameters_1;
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_4 = ___source0;
		NullCheck(L_4);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_5 = L_4->___parameters_1;
		NullCheck(L_5);
		Enumerator_t87A6595E7D3434A935327B1288129E3BA005458A L_6;
		L_6 = List_1_GetEnumerator_m06614B1C3CAC9E701A5D74B0B253445BB6031F09(L_5, List_1_GetEnumerator_m06614B1C3CAC9E701A5D74B0B253445BB6031F09_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC3EFA629F08B6F5CF202CD70A7F1CD17DDA65FF8((&V_0), Enumerator_Dispose_mC3EFA629F08B6F5CF202CD70A7F1CD17DDA65FF8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_0028_1:
			{
				NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* L_7;
				L_7 = Enumerator_get_Current_m8BD3976E00736BD9701D73F0E4629F79D7EB73F0_inline((&V_0), Enumerator_get_Current_m8BD3976E00736BD9701D73F0E4629F79D7EB73F0_RuntimeMethod_var);
				V_1 = L_7;
				RuntimeObject* L_8;
				L_8 = TransferCodingHeaderValue_get_Parameters_m84A703FBD32E6F10BD328C9BBAE9FE91C5F22877(__this, NULL);
				NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* L_9 = V_1;
				NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* L_10 = (NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B*)il2cpp_codegen_object_new(NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				NameValueHeaderValue__ctor_m4146411CE34CB17215D526E96B1150D317B874C6(L_10, L_9, NULL);
				NullCheck(L_8);
				InterfaceActionInvoker1< NameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue>::Add(T) */, ICollection_1_t63DD402A17A7A409A1BDD205D511199CAC7D1D9F_il2cpp_TypeInfo_var, L_8, L_10);
			}

IL_0041_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_m858DC357C35DF0EBD0224994E6E14E237B2DFED5((&V_0), Enumerator_MoveNext_m858DC357C35DF0EBD0224994E6E14E237B2DFED5_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Net.Http.Headers.TransferCodingHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferCodingHeaderValue__ctor_mE59525E494820D8C1541680ACE2B1963EAC76F5F (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> System.Net.Http.Headers.TransferCodingHeaderValue::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransferCodingHeaderValue_get_Parameters_m84A703FBD32E6F10BD328C9BBAE9FE91C5F22877 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m815AC350D766BF4C2CE41E784C1F414B4929EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* V_0 = NULL;
	List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* G_B2_0 = NULL;
	List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* G_B1_0 = NULL;
	{
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_0 = __this->___parameters_1;
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_2 = (List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC*)il2cpp_codegen_object_new(List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m815AC350D766BF4C2CE41E784C1F414B4929EBDB(L_2, List_1__ctor_m815AC350D766BF4C2CE41E784C1F414B4929EBDB_RuntimeMethod_var);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_3 = L_2;
		V_0 = L_3;
		__this->___parameters_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_1), (void*)L_3);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.String System.Net.Http.Headers.TransferCodingHeaderValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransferCodingHeaderValue_get_Value_m1449D2099CDCB97D651C29849876D412E65BF750 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_0;
		return L_0;
	}
}
// System.Object System.Net.Http.Headers.TransferCodingHeaderValue::System.ICloneable.Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransferCodingHeaderValue_System_ICloneable_Clone_mD6C7886425480DDEC26892AC16C1B53508223911 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_0 = (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28*)il2cpp_codegen_object_new(TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TransferCodingHeaderValue__ctor_m0F01269B8EBEDBB6B9412262548AE751D0E65027(L_0, __this, NULL);
		return L_0;
	}
}
// System.Boolean System.Net.Http.Headers.TransferCodingHeaderValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransferCodingHeaderValue_Equals_mA34B4055C809C2BFA9F6F0D7DC5A6FBDDB365263 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_SequenceEqual_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m002CEC942673A8FB19B68E23B59D6156DC269BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28*)IsInstClass((RuntimeObject*)L_0, TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var));
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = __this->___value_0;
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___value_0;
		bool L_5;
		L_5 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_2, L_4, 5, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_6 = __this->___parameters_1;
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_7 = V_0;
		NullCheck(L_7);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_8 = L_7->___parameters_1;
		bool L_9;
		L_9 = CollectionExtensions_SequenceEqual_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m002CEC942673A8FB19B68E23B59D6156DC269BB5(L_6, L_8, CollectionExtensions_SequenceEqual_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m002CEC942673A8FB19B68E23B59D6156DC269BB5_RuntimeMethod_var);
		return L_9;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Int32 System.Net.Http.Headers.TransferCodingHeaderValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransferCodingHeaderValue_GetHashCode_mF381E25AA404CBE8D7E3A7E5070FDFD9C5E6A5F2 (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCodeCalculator_Calculate_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m08BD773E1CC6C23343258E2A29732EDA24E2C220_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->___value_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = L_2;
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_3 = __this->___parameters_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_5 = __this->___parameters_1;
		int32_t L_6;
		L_6 = HashCodeCalculator_Calculate_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m08BD773E1CC6C23343258E2A29732EDA24E2C220(L_5, HashCodeCalculator_Calculate_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_m08BD773E1CC6C23343258E2A29732EDA24E2C220_RuntimeMethod_var);
		V_0 = ((int32_t)(L_4^L_6));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.String System.Net.Http.Headers.TransferCodingHeaderValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransferCodingHeaderValue_ToString_m8A61C8CAB9AC5EA64BCEB5A6EB0567A46DE7E7EA (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_ToString_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_mCC9523AF4AE36964715203CA7EB5234DD15B447F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___value_0;
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* L_1 = __this->___parameters_1;
		String_t* L_2;
		L_2 = CollectionExtensions_ToString_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_mCC9523AF4AE36964715203CA7EB5234DD15B447F(L_1, CollectionExtensions_ToString_TisNameValueHeaderValue_tCDB2FC3E4BE9D8E15B191AB51B0088B587EA9B9B_mCC9523AF4AE36964715203CA7EB5234DD15B447F_RuntimeMethod_var);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean System.Net.Http.Headers.TransferCodingHeaderValue::TryParse(System.String,System.Int32,System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingHeaderValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransferCodingHeaderValue_TryParse_m86A4F97240C3EE8BAC15568085B12A9D584750FB (String_t* ___input0, int32_t ___minimalCount1, List_1_t121023712E9D93612AC2A927B298D0F6D1552847** ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionParser_TryParse_TisTransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_m36FC4846EF4417FBE6A01AE26B3A5697C98DF399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransferCodingHeaderValue_TryParseElement_mCDCE45F43AD28EA6081BF7B4567127C0ED87CEBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = ___minimalCount1;
		ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673* L_2 = (ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673*)il2cpp_codegen_object_new(ElementTryParser_1_tEF880F6E5F44F3331A9167AA1E853AF625875673_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ElementTryParser_1__ctor_m4FFE12D96C4C7B91FA2E24988B1AD166C27833C9(L_2, NULL, (intptr_t)((void*)TransferCodingHeaderValue_TryParseElement_mCDCE45F43AD28EA6081BF7B4567127C0ED87CEBC_RuntimeMethod_var), NULL);
		List_1_t121023712E9D93612AC2A927B298D0F6D1552847** L_3 = ___result2;
		bool L_4;
		L_4 = CollectionParser_TryParse_TisTransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_m36FC4846EF4417FBE6A01AE26B3A5697C98DF399(L_0, L_1, L_2, L_3, CollectionParser_TryParse_TisTransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_m36FC4846EF4417FBE6A01AE26B3A5697C98DF399_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean System.Net.Http.Headers.TransferCodingHeaderValue::TryParseElement(System.Net.Http.Headers.Lexer,System.Net.Http.Headers.TransferCodingHeaderValue&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransferCodingHeaderValue_TryParseElement_mCDCE45F43AD28EA6081BF7B4567127C0ED87CEBC (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* ___lexer0, TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28** ___parsedValue1, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* V_0 = NULL;
	{
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28** L_0 = ___parsedValue1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_1 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_2 = ___lexer0;
		NullCheck(L_2);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_3;
		L_3 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_2, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_1 = L_3;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_4 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_5 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_7 = (TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28*)il2cpp_codegen_object_new(TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TransferCodingHeaderValue__ctor_mE59525E494820D8C1541680ACE2B1963EAC76F5F(L_7, NULL);
		V_0 = L_7;
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_8 = V_0;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_9 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_10 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_11 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_10);
		NullCheck(L_9);
		String_t* L_12;
		L_12 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_9, L_11, NULL);
		NullCheck(L_8);
		L_8->___value_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___value_0), (void*)L_12);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_13 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_14 = ___lexer0;
		NullCheck(L_14);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_15;
		L_15 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_14, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_13 = L_15;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_16 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_17 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_0072;
		}
	}
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_19 = ___lexer0;
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_20 = V_0;
		NullCheck(L_20);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC** L_21 = (&L_20->___parameters_1);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_22 = ___t2;
		bool L_23;
		L_23 = NameValueHeaderValue_TryParseParameters_m8268F570B14B0546927DDEABFF6A29CA3C33968E(L_19, L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_0070;
		}
	}
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_24 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_25 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_24);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_25, NULL);
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}

IL_0070:
	{
		return (bool)0;
	}

IL_0072:
	{
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28** L_27 = ___parsedValue1;
		TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28* L_28 = V_0;
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_28;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_28);
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
// System.Void System.Net.Http.Headers.TransferCodingWithQualityHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferCodingWithQualityHeaderValue__ctor_mC8E821716671E52FCB16117F70BED05494993CD1 (TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* __this, const RuntimeMethod* method) 
{
	{
		TransferCodingHeaderValue__ctor_mE59525E494820D8C1541680ACE2B1963EAC76F5F(__this, NULL);
		return;
	}
}
// System.Boolean System.Net.Http.Headers.TransferCodingWithQualityHeaderValue::TryParse(System.String,System.Int32,System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransferCodingWithQualityHeaderValue_TryParse_m098E2F07230D36FD1054A2576E06D997AAAB8AA0 (String_t* ___input0, int32_t ___minimalCount1, List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E** ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionParser_TryParse_TisTransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_m9C6E763144BF4AD29A3FDE3C14070CDFA8B482BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransferCodingWithQualityHeaderValue_TryParseElement_mB51A802078D7F2DF7C0A4786A3C0BDFBD0C4794B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = ___minimalCount1;
		ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E* L_2 = (ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E*)il2cpp_codegen_object_new(ElementTryParser_1_t3F8A9C674DD6495523E4CF94BB966CDB682B556E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ElementTryParser_1__ctor_m076D98AE70CE1368079C1AD2F61E5D4EDBA198B1(L_2, NULL, (intptr_t)((void*)TransferCodingWithQualityHeaderValue_TryParseElement_mB51A802078D7F2DF7C0A4786A3C0BDFBD0C4794B_RuntimeMethod_var), NULL);
		List_1_t97379C581BB4B6FC7941A4FAED84BB39DD51927E** L_3 = ___result2;
		bool L_4;
		L_4 = CollectionParser_TryParse_TisTransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_m9C6E763144BF4AD29A3FDE3C14070CDFA8B482BD(L_0, L_1, L_2, L_3, CollectionParser_TryParse_TisTransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_m9C6E763144BF4AD29A3FDE3C14070CDFA8B482BD_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean System.Net.Http.Headers.TransferCodingWithQualityHeaderValue::TryParseElement(System.Net.Http.Headers.Lexer,System.Net.Http.Headers.TransferCodingWithQualityHeaderValue&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransferCodingWithQualityHeaderValue_TryParseElement_mB51A802078D7F2DF7C0A4786A3C0BDFBD0C4794B (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* ___lexer0, TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0** ___parsedValue1, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* V_0 = NULL;
	{
		TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0** L_0 = ___parsedValue1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_1 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_2 = ___lexer0;
		NullCheck(L_2);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_3;
		L_3 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_2, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_1 = L_3;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_4 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_5 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* L_7 = (TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0*)il2cpp_codegen_object_new(TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TransferCodingWithQualityHeaderValue__ctor_mC8E821716671E52FCB16117F70BED05494993CD1(L_7, NULL);
		V_0 = L_7;
		TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* L_8 = V_0;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_9 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_10 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_11 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_10);
		NullCheck(L_9);
		String_t* L_12;
		L_12 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_9, L_11, NULL);
		NullCheck(L_8);
		((TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28*)L_8)->___value_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28*)L_8)->___value_0), (void*)L_12);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_13 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_14 = ___lexer0;
		NullCheck(L_14);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_15;
		L_15 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_14, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_13 = L_15;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_16 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_17 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_0072;
		}
	}
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_19 = ___lexer0;
		TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* L_20 = V_0;
		NullCheck(L_20);
		List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC** L_21 = (&((TransferCodingHeaderValue_tA2737A9BB27B3B052EE12713D08B526A2D0D6C28*)L_20)->___parameters_1);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_22 = ___t2;
		bool L_23;
		L_23 = NameValueHeaderValue_TryParseParameters_m8268F570B14B0546927DDEABFF6A29CA3C33968E(L_19, L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_0070;
		}
	}
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_24 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_25 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_24);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_25, NULL);
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}

IL_0070:
	{
		return (bool)0;
	}

IL_0072:
	{
		TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0** L_27 = ___parsedValue1;
		TransferCodingWithQualityHeaderValue_tD5911DBA8232F3CDBF416E03EC5DCBF59DCDF5F0* L_28 = V_0;
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_28;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_28);
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
// System.Void System.Net.Http.Headers.ViaHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViaHeaderValue__ctor_mE0D8F01E9C6F97C3321A6E63595AF17017D82FF2 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String System.Net.Http.Headers.ViaHeaderValue::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCommentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViaHeaderValue_set_Comment_mC438CB87E5234D1BFE81C42948F92311FD11F981 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCommentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.Net.Http.Headers.ViaHeaderValue::get_ProtocolName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProtocolNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_ProtocolName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ProtocolName_m7C23BDD5E31B1B8FA3724E2FEEC01C3373BB4FEA (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CProtocolNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtocolNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String System.Net.Http.Headers.ViaHeaderValue::get_ProtocolVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProtocolVersionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_ProtocolVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ProtocolVersion_m45DBC07FD1229F3E566BECC20A332428BE1FD30E (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CProtocolVersionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtocolVersionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String System.Net.Http.Headers.ViaHeaderValue::get_ReceivedBy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReceivedByU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.ViaHeaderValue::set_ReceivedBy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ReceivedBy_m99CB36A125F34F69A1FC9BF63AD6F811EF33F858 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CReceivedByU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceivedByU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object System.Net.Http.Headers.ViaHeaderValue::System.ICloneable.Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ViaHeaderValue_System_ICloneable_Clone_mC55CA4E702799B5ACBEC77A70B8FCEB38FAA26F3 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Net.Http.Headers.ViaHeaderValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ViaHeaderValue_Equals_mE08B362F8D99BE6FC327C7F914745074F0BCA739 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7*)IsInstClass((RuntimeObject*)L_0, ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_il2cpp_TypeInfo_var));
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline(L_2, NULL);
		String_t* L_4;
		L_4 = ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline(__this, NULL);
		bool L_5;
		L_5 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_3, L_4, 4, NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline(L_6, NULL);
		String_t* L_8;
		L_8 = ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline(__this, NULL);
		bool L_9;
		L_9 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_7, L_8, 5, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline(L_10, NULL);
		String_t* L_12;
		L_12 = ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline(__this, NULL);
		bool L_13;
		L_13 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_11, L_12, 5, NULL);
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline(L_14, NULL);
		String_t* L_16;
		L_16 = ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline(__this, NULL);
		bool L_17;
		L_17 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_15, L_16, 5, NULL);
		return L_17;
	}

IL_005b:
	{
		return (bool)0;
	}
}
// System.Int32 System.Net.Http.Headers.ViaHeaderValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ViaHeaderValue_GetHashCode_m9256AA38E030E2E5D912C7520B750F1F8DFA3383 (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_0 = ((int32_t)(L_3^L_6));
		String_t* L_7;
		L_7 = ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline(__this, NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_0;
		String_t* L_10;
		L_10 = ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline(__this, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_11);
		V_0 = ((int32_t)(L_9^L_12));
	}

IL_0044:
	{
		String_t* L_13;
		L_13 = ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline(__this, NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_13, NULL);
		if (L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		String_t* L_16;
		L_16 = ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_16);
		V_0 = ((int32_t)(L_15^L_17));
	}

IL_005f:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Boolean System.Net.Http.Headers.ViaHeaderValue::TryParse(System.String,System.Int32,System.Collections.Generic.List`1<System.Net.Http.Headers.ViaHeaderValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ViaHeaderValue_TryParse_mCF41726BAE73669BE2607507F55529F2F9175807 (String_t* ___input0, int32_t ___minimalCount1, List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996** ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionParser_TryParse_TisViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_mA1C30362729876469634883EF732510D5C9CEFCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViaHeaderValue_TryParseElement_mB382E0FE989EE4458E44CB3D7CE6368979145547_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = ___minimalCount1;
		ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F* L_2 = (ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F*)il2cpp_codegen_object_new(ElementTryParser_1_t921E9B19880E9AE890E16329FD630551C383992F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ElementTryParser_1__ctor_m53CD59A18348DDBA2D8D4D88860B76D93C8EE817(L_2, NULL, (intptr_t)((void*)ViaHeaderValue_TryParseElement_mB382E0FE989EE4458E44CB3D7CE6368979145547_RuntimeMethod_var), NULL);
		List_1_t362783D7BD5FD6FC04FAB5048C5EA3D8D8936996** L_3 = ___result2;
		bool L_4;
		L_4 = CollectionParser_TryParse_TisViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_mA1C30362729876469634883EF732510D5C9CEFCC(L_0, L_1, L_2, L_3, CollectionParser_TryParse_TisViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_mA1C30362729876469634883EF732510D5C9CEFCC_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean System.Net.Http.Headers.ViaHeaderValue::TryParseElement(System.Net.Http.Headers.Lexer,System.Net.Http.Headers.ViaHeaderValue&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ViaHeaderValue_TryParseElement_mB382E0FE989EE4458E44CB3D7CE6368979145547 (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* ___lexer0, ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7** ___parsedValue1, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7** L_0 = ___parsedValue1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_1 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_2 = ___lexer0;
		NullCheck(L_2);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_3;
		L_3 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_2, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_1 = L_3;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_4 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_5 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_7 = ___lexer0;
		NullCheck(L_7);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_8;
		L_8 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_7, (bool)0, NULL);
		V_0 = L_8;
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_9 = (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7*)il2cpp_codegen_object_new(ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ViaHeaderValue__ctor_mE0D8F01E9C6F97C3321A6E63595AF17017D82FF2(L_9, NULL);
		V_1 = L_9;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_0073;
		}
	}
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_12 = ___lexer0;
		NullCheck(L_12);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_13;
		L_13 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_12, (bool)0, NULL);
		V_0 = L_13;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_14, NULL);
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_004a:
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_16 = V_1;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_17 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_18 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_19 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_18);
		NullCheck(L_17);
		String_t* L_20;
		L_20 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_17, L_19, NULL);
		NullCheck(L_16);
		ViaHeaderValue_set_ProtocolName_m7C23BDD5E31B1B8FA3724E2FEEC01C3373BB4FEA_inline(L_16, L_20, NULL);
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_21 = V_1;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_22 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_23 = V_0;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_22, L_23, NULL);
		NullCheck(L_21);
		ViaHeaderValue_set_ProtocolVersion_m45DBC07FD1229F3E566BECC20A332428BE1FD30E_inline(L_21, L_24, NULL);
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_25 = ___lexer0;
		NullCheck(L_25);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_26;
		L_26 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_25, (bool)0, NULL);
		V_0 = L_26;
		goto IL_0085;
	}

IL_0073:
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_27 = V_1;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_28 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_29 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_30 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_29);
		NullCheck(L_28);
		String_t* L_31;
		L_31 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_28, L_30, NULL);
		NullCheck(L_27);
		ViaHeaderValue_set_ProtocolVersion_m45DBC07FD1229F3E566BECC20A332428BE1FD30E_inline(L_27, L_31, NULL);
	}

IL_0085:
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_32, NULL);
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0090:
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_34 = ___lexer0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Lexer_PeekChar_m364174CE2F6379BDC3C82E5A7DC53E86B3696E61(L_34, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00bd;
		}
	}
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_36 = ___lexer0;
		NullCheck(L_36);
		Lexer_EatChar_m0061692E80AA9BE72E340069B4B5EA737F2B5409(L_36, NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_37 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_38 = ___lexer0;
		NullCheck(L_38);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_39;
		L_39 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_38, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_37 = L_39;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_40 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_41 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_40);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_41, NULL);
		if ((((int32_t)L_42) == ((int32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_00bd:
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_43 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_44 = V_0;
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_43 = L_44;
	}

IL_00c4:
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_45 = V_1;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_46 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_47 = V_0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_48 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_49 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_48);
		NullCheck(L_46);
		String_t* L_50;
		L_50 = Lexer_GetStringValue_m04F7171F73F0FA085304E74AC227159D6197849E(L_46, L_47, L_49, NULL);
		NullCheck(L_45);
		ViaHeaderValue_set_ReceivedBy_m99CB36A125F34F69A1FC9BF63AD6F811EF33F858_inline(L_45, L_50, NULL);
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_51 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_52 = ___t2;
		NullCheck(L_51);
		bool L_53;
		L_53 = Lexer_ScanCommentOptional_m449BB87B4DD252B5F3949AD40C855A386AFFE5EE(L_51, (&V_2), L_52, NULL);
		if (!L_53)
		{
			goto IL_00ef;
		}
	}
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_54 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_55 = ___lexer0;
		NullCheck(L_55);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_56;
		L_56 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_55, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_54 = L_56;
	}

IL_00ef:
	{
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_57 = V_1;
		String_t* L_58 = V_2;
		NullCheck(L_57);
		ViaHeaderValue_set_Comment_mC438CB87E5234D1BFE81C42948F92311FD11F981_inline(L_57, L_58, NULL);
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7** L_59 = ___parsedValue1;
		ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* L_60 = V_1;
		*((RuntimeObject**)L_59) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)L_60);
		return (bool)1;
	}
}
// System.String System.Net.Http.Headers.ViaHeaderValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_ToString_m4E2C1C4D027AF3A281EBCEE9ADA3B0A55889E4FE (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0;
		L_0 = ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_1;
		L_1 = ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline(__this, NULL);
		String_t* L_2;
		L_2 = ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_1, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0056;
	}

IL_0020:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline(__this, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline(__this, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_11, NULL);
		G_B3_0 = L_13;
	}

IL_0056:
	{
		V_0 = G_B3_0;
		String_t* L_14;
		L_14 = ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline(__this, NULL);
		if (L_14)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_15 = V_0;
		return L_15;
	}

IL_0061:
	{
		String_t* L_16 = V_0;
		String_t* L_17;
		L_17 = ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline(__this, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_16, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_17, NULL);
		return L_18;
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
// System.Void System.Net.Http.Headers.WarningHeaderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningHeaderValue__ctor_m69C72638122B7016432046DB60F943A0291687AA (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String System.Net.Http.Headers.WarningHeaderValue::get_Agent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAgentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Agent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Agent_m253887F96977DCE21057B60CCA45FD89F468F750 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAgentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAgentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 System.Net.Http.Headers.WarningHeaderValue::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Code_m7B5D485961DE6EBE8C80704AFECB4DE82150E13F (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Nullable`1<System.DateTimeOffset> System.Net.Http.Headers.WarningHeaderValue::get_Date()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = __this->___U3CDateU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Date(System.Nullable`1<System.DateTimeOffset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Date_mA012565F73DDCB3652C21CBF55E596A42C915EC1 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = ___value0;
		__this->___U3CDateU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String System.Net.Http.Headers.WarningHeaderValue::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void System.Net.Http.Headers.WarningHeaderValue::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Text_mA374FD8D24D59370A3606E8C2D38AD8440844581 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean System.Net.Http.Headers.WarningHeaderValue::IsCodeValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WarningHeaderValue_IsCodeValid_mC8DE563A73BBFBF23780DDD751264B670973CC90 (int32_t ___code0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___code0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___code0;
		return (bool)((((int32_t)L_1) < ((int32_t)((int32_t)1000)))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Object System.Net.Http.Headers.WarningHeaderValue::System.ICloneable.Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarningHeaderValue_System_ICloneable_Clone_m649A475095A80603F5EC874213FC66BD1870C243 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Net.Http.Headers.WarningHeaderValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WarningHeaderValue_Equals_m3CC06F5FB14158CD52D295C19DB361A1EFF0BBB8 (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* V_0 = NULL;
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5*)IsInstClass((RuntimeObject*)L_0, WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_il2cpp_TypeInfo_var));
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_2;
		L_2 = WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657_inline(__this, NULL);
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657_inline(L_3, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0080;
		}
	}
	{
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60_inline(L_5, NULL);
		String_t* L_7;
		L_7 = WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60_inline(__this, NULL);
		bool L_8;
		L_8 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_6, L_7, 5, NULL);
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_9;
		L_9 = WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47_inline(__this, NULL);
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47_inline(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_13;
		L_13 = WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline(__this, NULL);
		V_1 = L_13;
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_14 = V_0;
		NullCheck(L_14);
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_15;
		L_15 = WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline(L_14, NULL);
		V_2 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_inline((&V_1), Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var);
		bool L_17;
		L_17 = Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_inline((&V_2), Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0061:
	{
		bool L_18;
		L_18 = Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_inline((&V_1), Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_19;
		L_19 = Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_inline((&V_1), Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_RuntimeMethod_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_20;
		L_20 = Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_inline((&V_2), Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = DateTimeOffset_op_Equality_m33318CE5D85584EA3D2A6EAAD0E522ED9C4D7A63(L_19, L_20, NULL);
		return L_21;
	}

IL_0080:
	{
		return (bool)0;
	}
}
// System.Int32 System.Net.Http.Headers.WarningHeaderValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WarningHeaderValue_GetHashCode_mF1D01A134DE59012F43497A08110F08C76FC1CDD (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0;
		L_0 = WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		String_t* L_2;
		L_2 = WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		String_t* L_5;
		L_5 = WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_7;
		L_7 = WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline(__this, NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87((&V_1), Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_RuntimeMethod_var);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^L_4))^L_6))^L_8));
	}
}
// System.Boolean System.Net.Http.Headers.WarningHeaderValue::TryParse(System.String,System.Int32,System.Collections.Generic.List`1<System.Net.Http.Headers.WarningHeaderValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WarningHeaderValue_TryParse_mC45D9086D8C4A9B735A3C5849D56D16F8914D56A (String_t* ___input0, int32_t ___minimalCount1, List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8** ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionParser_TryParse_TisWarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_m89C9006D558F9428B7630E1BBE0D5A2EC008EDF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WarningHeaderValue_TryParseElement_m18BBB77084037A279ECB844BBE6816E4A67B1D6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = ___minimalCount1;
		ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D* L_2 = (ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D*)il2cpp_codegen_object_new(ElementTryParser_1_tDB631650789B49ECA1E1031F18F4A55CD0A5244D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ElementTryParser_1__ctor_mE30B491702961B176FD99DE85F37110CBBD9C966(L_2, NULL, (intptr_t)((void*)WarningHeaderValue_TryParseElement_m18BBB77084037A279ECB844BBE6816E4A67B1D6D_RuntimeMethod_var), NULL);
		List_1_tBBEF6BDCB23A5F0A0AA8D120B9AC33CC7A66E2E8** L_3 = ___result2;
		bool L_4;
		L_4 = CollectionParser_TryParse_TisWarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_m89C9006D558F9428B7630E1BBE0D5A2EC008EDF6(L_0, L_1, L_2, L_3, CollectionParser_TryParse_TisWarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_m89C9006D558F9428B7630E1BBE0D5A2EC008EDF6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean System.Net.Http.Headers.WarningHeaderValue::TryParseElement(System.Net.Http.Headers.Lexer,System.Net.Http.Headers.WarningHeaderValue&,System.Net.Http.Headers.Token&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WarningHeaderValue_TryParseElement_m18BBB77084037A279ECB844BBE6816E4A67B1D6D (Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* ___lexer0, WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5** ___parsedValue1, Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* V_2 = NULL;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5** L_0 = ___parsedValue1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_1 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_2 = ___lexer0;
		NullCheck(L_2);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_3;
		L_3 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_2, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_1 = L_3;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_4 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_5 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_7 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_8 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_9 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_8);
		NullCheck(L_7);
		bool L_10;
		L_10 = Lexer_TryGetNumericValue_m40DBCE6925FF90ECE9E6A51EA8AEF8F26DB0A7DC(L_7, L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_11 = V_0;
		bool L_12;
		L_12 = WarningHeaderValue_IsCodeValid_mC8DE563A73BBFBF23780DDD751264B670973CC90(L_11, NULL);
		if (L_12)
		{
			goto IL_003a;
		}
	}

IL_0038:
	{
		return (bool)0;
	}

IL_003a:
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_13 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_14 = ___lexer0;
		NullCheck(L_14);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_15;
		L_15 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_14, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_13 = L_15;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_16 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_17 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_17, NULL);
		if ((((int32_t)L_18) == ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_19 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_20 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_19);
		V_1 = L_20;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_21 = ___lexer0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Lexer_PeekChar_m364174CE2F6379BDC3C82E5A7DC53E86B3696E61(L_21, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0081;
		}
	}
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_23 = ___lexer0;
		NullCheck(L_23);
		Lexer_EatChar_m0061692E80AA9BE72E340069B4B5EA737F2B5409(L_23, NULL);
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_24 = ___lexer0;
		NullCheck(L_24);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_25;
		L_25 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_24, (bool)0, NULL);
		V_1 = L_25;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_26, NULL);
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0081:
	{
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_28 = (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5*)il2cpp_codegen_object_new(WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WarningHeaderValue__ctor_m69C72638122B7016432046DB60F943A0291687AA(L_28, NULL);
		V_2 = L_28;
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_29 = V_2;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		WarningHeaderValue_set_Code_m7B5D485961DE6EBE8C80704AFECB4DE82150E13F_inline(L_29, L_30, NULL);
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_31 = V_2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_32 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_33 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_34 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_33);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_35 = V_1;
		NullCheck(L_32);
		String_t* L_36;
		L_36 = Lexer_GetStringValue_m04F7171F73F0FA085304E74AC227159D6197849E(L_32, L_34, L_35, NULL);
		NullCheck(L_31);
		WarningHeaderValue_set_Agent_m253887F96977DCE21057B60CCA45FD89F468F750_inline(L_31, L_36, NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_37 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_38 = ___lexer0;
		NullCheck(L_38);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_39;
		L_39 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_38, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_37 = L_39;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_40 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_41 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_40);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_41, NULL);
		if ((((int32_t)L_42) == ((int32_t)3)))
		{
			goto IL_00be;
		}
	}
	{
		return (bool)0;
	}

IL_00be:
	{
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_43 = V_2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_44 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_45 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_46 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_45);
		NullCheck(L_44);
		String_t* L_47;
		L_47 = Lexer_GetStringValue_m1837C0E00B514DBE70A826911A44A0E883752F6D(L_44, L_46, NULL);
		NullCheck(L_43);
		WarningHeaderValue_set_Text_mA374FD8D24D59370A3606E8C2D38AD8440844581_inline(L_43, L_47, NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_48 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_49 = ___lexer0;
		NullCheck(L_49);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_50;
		L_50 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_49, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_48 = L_50;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_51 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_52 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_51);
		il2cpp_codegen_runtime_class_init_inline(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112_il2cpp_TypeInfo_var);
		int32_t L_53;
		L_53 = Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline(L_52, NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)3))))
		{
			goto IL_0116;
		}
	}
	{
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_54 = ___lexer0;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_55 = ___t2;
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_56 = (*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_55);
		NullCheck(L_54);
		bool L_57;
		L_57 = Lexer_TryGetDateValue_m0AD91877B2E626081B0725260AF3B1B75D1ACAD1(L_54, L_56, (&V_3), NULL);
		if (L_57)
		{
			goto IL_00fd;
		}
	}
	{
		return (bool)0;
	}

IL_00fd:
	{
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_58 = V_2;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_59 = V_3;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_60;
		memset((&L_60), 0, sizeof(L_60));
		Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF((&L_60), L_59, /*hidden argument*/Nullable_1__ctor_mDA82F73205B49CB1E147CB683AA4A7F401AC35AF_RuntimeMethod_var);
		NullCheck(L_58);
		WarningHeaderValue_set_Date_mA012565F73DDCB3652C21CBF55E596A42C915EC1_inline(L_58, L_60, NULL);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112* L_61 = ___t2;
		Lexer_tEB5CE4B8FBF019C518920A6F9B17B7B1766484A6* L_62 = ___lexer0;
		NullCheck(L_62);
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_63;
		L_63 = Lexer_Scan_m4B1EFD005EE0CE32D59E5B206E574DF95D32A37A(L_62, (bool)0, NULL);
		*(Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112*)L_61 = L_63;
	}

IL_0116:
	{
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5** L_64 = ___parsedValue1;
		WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* L_65 = V_2;
		*((RuntimeObject**)L_64) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_64, (void*)(RuntimeObject*)L_65);
		return (bool)1;
	}
}
// System.String System.Net.Http.Headers.WarningHeaderValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_ToString_m90FA84EAE55B5ED08DF7759CD87289A749B1A15D (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA6AD0FB1130BFA5AD9F54E775FBEB781B424CF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		int32_t L_2;
		L_2 = WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657_inline(__this, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_1), _stringLiteralFA6AD0FB1130BFA5AD9F54E775FBEB781B424CF5, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60_inline(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47_inline(__this, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_8, NULL);
		V_0 = L_10;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_11;
		L_11 = WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline(__this, NULL);
		V_2 = L_11;
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_inline((&V_2), Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_13 = V_0;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_14;
		L_14 = WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline(__this, NULL);
		V_2 = L_14;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_15;
		L_15 = Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D((&V_2), Nullable_1_get_Value_m1944AF710176ED4CBDDDAC654EF24C2CD3FFC82D_RuntimeMethod_var);
		V_3 = L_15;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16;
		L_16 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_17;
		L_17 = DateTimeOffset_ToString_m4B5BB65E069D2146E808A1CE5F424ACA2F4D2281((&V_3), _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_13, _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9, L_17, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_0 = L_18;
	}

IL_0085:
	{
		String_t* L_19 = V_0;
		return L_19;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2B741B2248956DD36B50D0303C08E172F8B57A99 (String_t* ___s0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringWithQualityHeaderValue_get_Value_m916D60EF782A59938AC2797FFCAD6FC545E608A3_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StringWithQualityHeaderValue_get_Quality_mB16FC7191209C8439C68DF8701683F02CCF32231_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CQualityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_op_Implicit_m4BEC226099D2470CA706BC10E45FFC7A2083F15C_inline (Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 ___token0, const RuntimeMethod* method) 
{
	{
		Token_t97B178673FF7CB702F702E256C5AC3DAF3CCB112 L_0 = ___token0;
		int32_t L_1 = L_0.___type_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue_set_Value_m6AA46E14143ACB1F240D3BCAF62C203FA03C53D7_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringWithQualityHeaderValue_set_Quality_mD4ECD0A471994289199899481BE2F02D9CB84D50_inline (StringWithQualityHeaderValue_t1154E44CD2B16ED98C06CC70B740A1486F12A177* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CQualityU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_Comment_m4C1CC218AD4525A587FF7E6D2C7A1A86E19A4770_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCommentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ProtocolName_m48DBBAF0052142759FEEFDDCB7F3189F70445D52_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProtocolNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ProtocolVersion_mFFE932C60DA5022662E1DC07BBBF3BD594B0B0F3_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProtocolVersionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ViaHeaderValue_get_ReceivedBy_mF3191B978025363CB500AE2B8BED04FF00194A07_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReceivedByU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ProtocolName_m7C23BDD5E31B1B8FA3724E2FEEC01C3373BB4FEA_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CProtocolNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtocolNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ProtocolVersion_m45DBC07FD1229F3E566BECC20A332428BE1FD30E_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CProtocolVersionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtocolVersionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_ReceivedBy_m99CB36A125F34F69A1FC9BF63AD6F811EF33F858_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CReceivedByU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceivedByU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViaHeaderValue_set_Comment_mC438CB87E5234D1BFE81C42948F92311FD11F981_inline (ViaHeaderValue_t7DC6DBD23389B608F7AF2E7C2DB747E1FAFA56A7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCommentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WarningHeaderValue_get_Code_mF75AC08E3199D32A8B91C12B49AA3C3B105E1657_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_get_Agent_mD374CF260C631995960586D45475567EA35E6A60_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAgentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WarningHeaderValue_get_Text_m903E35915246C5861367E3BAE2A748EA0CA6CE47_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WarningHeaderValue_get_Date_m0C5FA9B22FAC287F991068A4B315918584757212_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = __this->___U3CDateU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Code_m7B5D485961DE6EBE8C80704AFECB4DE82150E13F_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Agent_m253887F96977DCE21057B60CCA45FD89F468F750_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAgentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAgentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Text_mA374FD8D24D59370A3606E8C2D38AD8440844581_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WarningHeaderValue_set_Date_mA012565F73DDCB3652C21CBF55E596A42C915EC1_inline (WarningHeaderValue_t52A702D65E092AD47325E23AAE36593D504605F5* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = ___value0;
		__this->___U3CDateU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = (double)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m79C15523E7CAA22E353C665B870D2E9470CB4D19_gshared_inline (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Nullable_1_GetValueOrDefault_m52BEF2665C4DDD4239BB3302C2788A7DFEC133E5_gshared_inline (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4)__this->___value_1;
		return L_0;
	}
}
