#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
extern void JsonUtility_ToJsonInternal_m55BF38958854796C9A5296AD0DCDE29BB9D0C8CF (void);
// 0x00000002 System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern void JsonUtility_FromJsonInternal_m09DB5F8C633417622AD3F43780975B39EFACC364 (void);
// 0x00000003 System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern void JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (void);
// 0x00000004 System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern void JsonUtility_ToJson_mA7B20656D12861446AAA157DF6E9ACBBD78EC0AC (void);
// 0x00000005 T UnityEngine.JsonUtility::FromJson(System.String)
// 0x00000006 System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern void JsonUtility_FromJson_mCA93DB12788DA2F120D6EC81758D3189D9341815 (void);
static Il2CppMethodPointer s_methodPointers[6] = 
{
	JsonUtility_ToJsonInternal_m55BF38958854796C9A5296AD0DCDE29BB9D0C8CF,
	JsonUtility_FromJsonInternal_m09DB5F8C633417622AD3F43780975B39EFACC364,
	JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD,
	JsonUtility_ToJson_mA7B20656D12861446AAA157DF6E9ACBBD78EC0AC,
	NULL,
	JsonUtility_FromJson_mCA93DB12788DA2F120D6EC81758D3189D9341815,
};
static const int32_t s_InvokerIndices[6] = 
{
	6943,
	6312,
	8127,
	6943,
	0,
	6950,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000005, { 0, 2 } },
};
extern const uint32_t g_rgctx_T_t0037DA0459BEFFA16888D5FD2547306EF5E49173;
extern const uint32_t g_rgctx_T_t0037DA0459BEFFA16888D5FD2547306EF5E49173;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t0037DA0459BEFFA16888D5FD2547306EF5E49173 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t0037DA0459BEFFA16888D5FD2547306EF5E49173 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule = 
{
	"UnityEngine.JSONSerializeModule.dll",
	6,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
