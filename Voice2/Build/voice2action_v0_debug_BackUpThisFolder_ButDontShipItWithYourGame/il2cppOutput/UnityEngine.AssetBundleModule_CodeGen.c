#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_mBADE7FF4DE42B855B626633622F8DE05820B4876 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_mFED01CCB7121612FD98DC6D79ECD08F58DADA275 (void);
// 0x00000004 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
extern void AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E (void);
// 0x00000005 T UnityEngine.AssetBundle::LoadAsset(System.String)
// 0x00000006 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern void AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE (void);
// 0x00000007 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern void AssetBundle_LoadAsset_Internal_mD096392756815901FE982C1AF64DDF0846551433 (void);
// 0x00000008 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (void);
// 0x00000009 System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
extern void AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3 (void);
// 0x0000000A System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
extern void AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE (void);
// 0x0000000B UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern void AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (void);
// 0x0000000C UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern void AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (void);
static Il2CppMethodPointer s_methodPointers[12] = 
{
	AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410,
	AssetBundle_LoadFromFile_Internal_mBADE7FF4DE42B855B626633622F8DE05820B4876,
	AssetBundle_LoadFromFile_mFED01CCB7121612FD98DC6D79ECD08F58DADA275,
	AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E,
	NULL,
	AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE,
	AssetBundle_LoadAsset_Internal_mD096392756815901FE982C1AF64DDF0846551433,
	AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B,
	AssetBundle_GetAllAssetNames_m44504DB9E055412F0DF2071A769A243219708CC3,
	AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE,
	AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21,
	AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C,
};
static const int32_t s_InvokerIndices[12] = 
{
	8315,
	10360,
	12756,
	5900,
	0,
	3013,
	3013,
	6468,
	8170,
	8170,
	8170,
	8170,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000005, { 0, 2 } },
};
extern const uint32_t g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57;
extern const uint32_t g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	12,
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
