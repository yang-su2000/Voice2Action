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

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_t80E1E12B0A5397910E616CA65BFEA673FF16934D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>
struct Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8;
// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tF03B8C48A736E5705A86C89209212CD695949C09;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>
struct IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_tB50E56B21736F2DC9837A4E83456632A7789B539;
// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Message_1_t8D3371E3AC395F37DBE65CD290E32DC3711A9767;
// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5;
// Oculus.Platform.Message`1<System.Object>
struct Message_1_tC4674D49302BAB6183CEF95D099A5F93211019CB;
// Oculus.Platform.Message`1<Oculus.Platform.Models.Room>
struct Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD;
// Oculus.Platform.Message`1<Oculus.Platform.Models.User>
struct Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D;
// Oculus.Platform.Request`1<System.Object>
struct Request_1_t4CB96621592A20B180089ED17BA12AE8564AF53F;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room>
struct Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Oculus.Platform.Matchmaking/CustomQuery/Criterion[]
struct CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Oculus.Platform.Samples.NetChat.DataEntry
struct DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck
struct EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D;
// Oculus.Platform.Models.Error
struct Error_t0A46640739F2057B84B1EE6489A55DDC224935A4;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// Oculus.Platform.Models.MatchmakingEnqueueResult
struct MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25;
// Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
struct MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF;
// Oculus.Platform.Models.MatchmakingEnqueuedUserList
struct MatchmakingEnqueuedUserList_t2F46EA165B2FE027EF5ABF9E0C4DC281C24F41EA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Oculus.Platform.Message
struct Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Oculus.Platform.Packet
struct Packet_t54871D991C39844C3642CBCD5573C87974DF6A32;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Oculus.Platform.Request
struct Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B;
// Oculus.Platform.Models.Room
struct Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Oculus.Platform.Models.TeamList
struct TeamList_t725F5CD46BE434E0B32962634D5BEFE4F41DECB6;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Oculus.Platform.Models.User
struct User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4;
// Oculus.Platform.Models.UserList
struct UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Oculus.Platform.Samples.NetChat.chatPacket
struct chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Oculus.Platform.Matchmaking/CustomQuery
struct CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340;
// Oculus.Platform.Message/Callback
struct Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_t1140ACF58BA319459C041E281C5BCC00FBD2D389;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B6ADD9BA4A2596DA37C86818DBB1FA5543BC90;
IL2CPP_EXTERN_C String_t* _stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63;
IL2CPP_EXTERN_C String_t* _stringLiteral0C392FDC40D4EE69177DB44E9470131CC933247D;
IL2CPP_EXTERN_C String_t* _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A;
IL2CPP_EXTERN_C String_t* _stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6;
IL2CPP_EXTERN_C String_t* _stringLiteral11AA1E19A60EAA84D99B1B63B0042B44D0231529;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C299BF5107D7E0629D16837F4C97C929EFE5861;
IL2CPP_EXTERN_C String_t* _stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8;
IL2CPP_EXTERN_C String_t* _stringLiteral21C17994972DD214893B82640E0D675E392FC185;
IL2CPP_EXTERN_C String_t* _stringLiteral21CF80100A176C5ABF31BAD31E39091BF9F7C6F0;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF;
IL2CPP_EXTERN_C String_t* _stringLiteral22CCD6204E1DE64F7D2BE6C2D8D4013154B2B101;
IL2CPP_EXTERN_C String_t* _stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C;
IL2CPP_EXTERN_C String_t* _stringLiteral25D51CC9D87AEDB20388919750B0D8FB1F3138F6;
IL2CPP_EXTERN_C String_t* _stringLiteral264036AC47852FD60740287CA60085B23C6659EA;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD3F1ADDCE85E66879EDA556C862F4E45829F83;
IL2CPP_EXTERN_C String_t* _stringLiteral37F5BA1C82DA8DAC6463BA85C1A8BC81E3461E6B;
IL2CPP_EXTERN_C String_t* _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral39B7A48F6B660564BD9FEF1C21619340A1F10F2F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A;
IL2CPP_EXTERN_C String_t* _stringLiteral461198D6A0E2DD2E1B416DF92C78033184D0D12D;
IL2CPP_EXTERN_C String_t* _stringLiteral48BADE6D41DD866A40A32C651C57B716AE37416F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBD08B18CC99B6FD20FDD9215C61B731F93C76A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0057598B4E8BEF6162B8E3305326C0F1A20E84;
IL2CPP_EXTERN_C String_t* _stringLiteral500CF30CCABB715DBF03EE4B03FFF7C1539DF0B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5BC8523900AE414198EA2E4D09442768E577938B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F75D76EF22085FECDB6F6F2B5C17354F406FD43;
IL2CPP_EXTERN_C String_t* _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B;
IL2CPP_EXTERN_C String_t* _stringLiteral66302616BC1BDF9D2409AB2485FCF016D5D6CDEE;
IL2CPP_EXTERN_C String_t* _stringLiteral6B195F37DD1176ECD61AC9E3DC377068C974FABF;
IL2CPP_EXTERN_C String_t* _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161;
IL2CPP_EXTERN_C String_t* _stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0;
IL2CPP_EXTERN_C String_t* _stringLiteral73B89F5C37122339EE4665AEF418ED056BB476AF;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral75685E145E5A73B802A53F0E146332038B24E134;
IL2CPP_EXTERN_C String_t* _stringLiteral791AEA70C83F9E51DF9CA11386F4F76F508F903E;
IL2CPP_EXTERN_C String_t* _stringLiteral7970A9EAFF2C28894F04C4600209CBA65BE905B8;
IL2CPP_EXTERN_C String_t* _stringLiteral7AADDB51D004EA589EB4E9DD5703135A929256F9;
IL2CPP_EXTERN_C String_t* _stringLiteral7E48DAB075275DC16F091D91060501E276CBB001;
IL2CPP_EXTERN_C String_t* _stringLiteral83035F9759A79E53CE6C6BE65BBD4A7A6484F128;
IL2CPP_EXTERN_C String_t* _stringLiteral877D0194FF556ABDE79FFD3AEFFED01B977F695B;
IL2CPP_EXTERN_C String_t* _stringLiteral8868BF62138D40BF2F806A9E8A0F634747FCCB1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE;
IL2CPP_EXTERN_C String_t* _stringLiteral8DFA8638FC7431EA5D6B04A7BF5D3C988A9C5639;
IL2CPP_EXTERN_C String_t* _stringLiteral920D0134A13224A01963C8D399951D7365029ACF;
IL2CPP_EXTERN_C String_t* _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C;
IL2CPP_EXTERN_C String_t* _stringLiteral959F4946E1BD750ACC2F8E6E3D57BA81F1674691;
IL2CPP_EXTERN_C String_t* _stringLiteral9731D7A1BCEAEBE1BFF036F15143DD1BADF4CB50;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA3501744B0773A50D3BF8BAEFE01A55DC50D5C50;
IL2CPP_EXTERN_C String_t* _stringLiteralA4AFF14AE5157F3A41CA32B8CAA514AC80B16DA0;
IL2CPP_EXTERN_C String_t* _stringLiteralAF841B88E21DACCF207C50AC522C0FE9DD847454;
IL2CPP_EXTERN_C String_t* _stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38;
IL2CPP_EXTERN_C String_t* _stringLiteralB17D0E550A67F8059F0FE5BCD905A402E97D9A6A;
IL2CPP_EXTERN_C String_t* _stringLiteralB349CA9BF27A5CB77BB09D3F1567AC751691CE68;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0BE7F36A753120388756ADC31357DF565C6C89;
IL2CPP_EXTERN_C String_t* _stringLiteralC2086D64681BE7D3EF06FECF7AB0D3C66A19EE71;
IL2CPP_EXTERN_C String_t* _stringLiteralC6910AD2A7F96FD67D641FF04075BA360893D7B9;
IL2CPP_EXTERN_C String_t* _stringLiteralCE4E3F628F25B19F1771C4E6CE4C83EC8BE0F1DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6137FE4C5927013C087EE74D84C2501852BED4;
IL2CPP_EXTERN_C String_t* _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53;
IL2CPP_EXTERN_C String_t* _stringLiteralD038D81FB9093934C691608A0A2F41B350086FBD;
IL2CPP_EXTERN_C String_t* _stringLiteralD518793363C83731F5EB512A4536332399C3B11C;
IL2CPP_EXTERN_C String_t* _stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A;
IL2CPP_EXTERN_C String_t* _stringLiteralD62E59118528817075980A32FDB5E9FE2406C285;
IL2CPP_EXTERN_C String_t* _stringLiteralD906C38E3D05EEE8C2F94A7E5F33BC8BDCC843E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE188B7082D61178A7D9F7C1D16955F8CCC096ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DAC14B7F3B7BF497E2310312C1186653CCAAC8;
IL2CPP_EXTERN_C String_t* _stringLiteralE43D4A7AF952C74D904C9FF52239662FAA7039A8;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB1CFA78FC529C4D6B26E2366F57FC652AB29AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB;
IL2CPP_EXTERN_C String_t* _stringLiteralF661C314CFE8F42EF8E01B97E23F30BC0B7CDFFE;
IL2CPP_EXTERN_C String_t* _stringLiteralF7423CA6FD92EF3F3989043A87E2B8793080DF03;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1C3DDA293E6E804ED02479C52960A53EC491F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFB5E996F4F3C7E6CCBB98C6CEC9328DF294F5C19;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tB50E56B21736F2DC9837A4E83456632A7789B539* ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t1828878FB092BA210A76238953E3118A4B8005CC_StaticFields
{
	// System.Int32 <PrivateImplementationDetails>::532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25
	int32_t ___532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25_0;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Oculus.Platform.Samples.NetChat.Constants
struct Constants_tF75E64A7B3494B5ACBD4B16810427A57173E96AD  : public RuntimeObject
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

// Oculus.Platform.Models.Error
struct Error_t0A46640739F2057B84B1EE6489A55DDC224935A4  : public RuntimeObject
{
	// System.Int32 Oculus.Platform.Models.Error::Code
	int32_t ___Code_0;
	// System.Int32 Oculus.Platform.Models.Error::HttpCode
	int32_t ___HttpCode_1;
	// System.String Oculus.Platform.Models.Error::Message
	String_t* ___Message_2;
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

// Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
struct MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF  : public RuntimeObject
{
	// Oculus.Platform.Models.MatchmakingEnqueueResult Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom::MatchmakingEnqueueResult
	MatchmakingEnqueueResult_t7097C20E321DC691596E80CC4C558AEDB29D5C25* ___MatchmakingEnqueueResult_0;
	// Oculus.Platform.Models.Room Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom::Room
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___Room_1;
};

// Oculus.Platform.Message
struct Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9  : public RuntimeObject
{
	// Oculus.Platform.Message/MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* ___error_2;
};

struct Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9_StaticFields
{
	// Oculus.Platform.Message/ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_t1140ACF58BA319459C041E281C5BCC00FBD2D389* ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;
};

// Oculus.Platform.Request
struct Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B  : public RuntimeObject
{
	// Oculus.Platform.Message/Callback Oculus.Platform.Request::callback_
	Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* ___callback__0;
	// System.UInt64 Oculus.Platform.Request::<RequestID>k__BackingField
	uint64_t ___U3CRequestIDU3Ek__BackingField_1;
};

// Oculus.Platform.Models.Room
struct Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C  : public RuntimeObject
{
	// System.UInt64 Oculus.Platform.Models.Room::ApplicationID
	uint64_t ___ApplicationID_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Oculus.Platform.Models.Room::DataStore
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___DataStore_1;
	// System.String Oculus.Platform.Models.Room::Description
	String_t* ___Description_2;
	// System.UInt64 Oculus.Platform.Models.Room::ID
	uint64_t ___ID_3;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::InvitedUsersOptional
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___InvitedUsersOptional_4;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::InvitedUsers
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___InvitedUsers_5;
	// System.Boolean Oculus.Platform.Models.Room::IsMembershipLocked
	bool ___IsMembershipLocked_6;
	// Oculus.Platform.RoomJoinPolicy Oculus.Platform.Models.Room::JoinPolicy
	int32_t ___JoinPolicy_7;
	// Oculus.Platform.RoomJoinability Oculus.Platform.Models.Room::Joinability
	int32_t ___Joinability_8;
	// Oculus.Platform.Models.MatchmakingEnqueuedUserList Oculus.Platform.Models.Room::MatchedUsersOptional
	MatchmakingEnqueuedUserList_t2F46EA165B2FE027EF5ABF9E0C4DC281C24F41EA* ___MatchedUsersOptional_9;
	// Oculus.Platform.Models.MatchmakingEnqueuedUserList Oculus.Platform.Models.Room::MatchedUsers
	MatchmakingEnqueuedUserList_t2F46EA165B2FE027EF5ABF9E0C4DC281C24F41EA* ___MatchedUsers_10;
	// System.UInt32 Oculus.Platform.Models.Room::MaxUsers
	uint32_t ___MaxUsers_11;
	// System.String Oculus.Platform.Models.Room::Name
	String_t* ___Name_12;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Room::OwnerOptional
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___OwnerOptional_13;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Room::Owner
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___Owner_14;
	// Oculus.Platform.Models.TeamList Oculus.Platform.Models.Room::TeamsOptional
	TeamList_t725F5CD46BE434E0B32962634D5BEFE4F41DECB6* ___TeamsOptional_15;
	// Oculus.Platform.Models.TeamList Oculus.Platform.Models.Room::Teams
	TeamList_t725F5CD46BE434E0B32962634D5BEFE4F41DECB6* ___Teams_16;
	// Oculus.Platform.RoomType Oculus.Platform.Models.Room::Type
	int32_t ___Type_17;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::UsersOptional
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___UsersOptional_18;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::Users
	UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* ___Users_19;
	// System.UInt32 Oculus.Platform.Models.Room::Version
	uint32_t ___Version_20;
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

// Oculus.Platform.Models.User
struct User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4  : public RuntimeObject
{
	// System.String Oculus.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.UInt64 Oculus.Platform.Models.User::ID
	uint64_t ___ID_1;
	// System.String Oculus.Platform.Models.User::ImageURL
	String_t* ___ImageURL_2;
	// System.String Oculus.Platform.Models.User::InviteToken
	String_t* ___InviteToken_3;
	// System.String Oculus.Platform.Models.User::OculusID
	String_t* ___OculusID_4;
	// System.String Oculus.Platform.Models.User::Presence
	String_t* ___Presence_5;
	// System.String Oculus.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_6;
	// System.String Oculus.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_7;
	// System.String Oculus.Platform.Models.User::PresenceLobbySessionId
	String_t* ___PresenceLobbySessionId_8;
	// System.String Oculus.Platform.Models.User::PresenceMatchSessionId
	String_t* ___PresenceMatchSessionId_9;
	// Oculus.Platform.UserPresenceStatus Oculus.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_10;
	// System.String Oculus.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_11;
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

// Oculus.Platform.Samples.NetChat.chatPacket
struct chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296  : public RuntimeObject
{
	// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::<packetID>k__BackingField
	int32_t ___U3CpacketIDU3Ek__BackingField_0;
	// System.String Oculus.Platform.Samples.NetChat.chatPacket::<textString>k__BackingField
	String_t* ___U3CtextStringU3Ek__BackingField_1;
};

// Oculus.Platform.Matchmaking/CustomQuery
struct CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery::data
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data_0;
	// Oculus.Platform.Matchmaking/CustomQuery/Criterion[] Oculus.Platform.Matchmaking/CustomQuery::criteria
	CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* ___criteria_1;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.Room>
struct Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___data_4;
};

// Oculus.Platform.Message`1<Oculus.Platform.Models.User>
struct Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A  : public Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9
{
	// T Oculus.Platform.Message`1::data
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___data_4;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.Room>
struct Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback__2;
};

// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259  : public Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B
{
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* ___callback__2;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// Oculus.Platform.Models.UserList
struct UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376  : public DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8
{
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

// Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t54B6224B146E04D495514C26CF62499652365BE2 
{
	// System.String Oculus.Platform.Matchmaking/CustomQuery/Criterion::key
	String_t* ___key_0;
	// Oculus.Platform.MatchmakingCriterionImportance Oculus.Platform.Matchmaking/CustomQuery/Criterion::importance
	int32_t ___importance_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery/Criterion::parameters
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_2;
};
// Native definition for P/Invoke marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t54B6224B146E04D495514C26CF62499652365BE2_marshaled_pinvoke
{
	char* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_2;
};
// Native definition for COM marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t54B6224B146E04D495514C26CF62499652365BE2_marshaled_com
{
	Il2CppChar* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// Oculus.Platform.Packet
struct Packet_t54871D991C39844C3642CBCD5573C87974DF6A32  : public RuntimeObject
{
	// System.UInt64 Oculus.Platform.Packet::size
	uint64_t ___size_0;
	// System.IntPtr Oculus.Platform.Packet::packetHandle
	intptr_t ___packetHandle_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResult>
struct Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>
struct Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>
struct Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764  : public MulticastDelegate_t
{
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8  : public MulticastDelegate_t
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

// Oculus.Platform.Message/Callback
struct Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Platform.Samples.NetChat.DataEntry
struct DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Oculus.Platform.Samples.NetChat.DataEntry::dataOutput
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dataOutput_4;
	// Oculus.Platform.Samples.NetChat.states Oculus.Platform.Samples.NetChat.DataEntry::currentState
	int32_t ___currentState_5;
	// Oculus.Platform.Models.User Oculus.Platform.Samples.NetChat.DataEntry::localUser
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___localUser_6;
	// Oculus.Platform.Models.User Oculus.Platform.Samples.NetChat.DataEntry::remoteUser
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* ___remoteUser_7;
	// Oculus.Platform.Models.Room Oculus.Platform.Samples.NetChat.DataEntry::currentRoom
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* ___currentRoom_8;
	// System.Int32 Oculus.Platform.Samples.NetChat.DataEntry::lastPacketID
	int32_t ___lastPacketID_9;
	// System.Boolean Oculus.Platform.Samples.NetChat.DataEntry::ratedMatchStarted
	bool ___ratedMatchStarted_10;
};

// Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck
struct EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::exitAppOnFailure
	bool ___exitAppOnFailure_4;
};

struct EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields
{
	// System.Action Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::UserFailedEntitlementCheck
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UserFailedEntitlementCheck_5;
	// System.Action Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::UserPassedEntitlementCheck
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UserPassedEntitlementCheck_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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
// Oculus.Platform.Matchmaking/CustomQuery/Criterion[]
struct CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA  : public RuntimeArray
{
	ALIGN_FIELD (8) Criterion_t54B6224B146E04D495514C26CF62499652365BE2 m_Items[1];

	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Criterion_t54B6224B146E04D495514C26CF62499652365BE2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parameters_2), (void*)NULL);
		#endif
	}
	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Criterion_t54B6224B146E04D495514C26CF62499652365BE2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Criterion_t54B6224B146E04D495514C26CF62499652365BE2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parameters_2), (void*)NULL);
		#endif
	}
};


// System.Void Oculus.Platform.Message`1/Callback<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared (Callback_t80E1E12B0A5397910E616CA65BFEA673FF16934D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Object>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t4CB96621592A20B180089ED17BA12AE8564AF53F* Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared (Request_1_t4CB96621592A20B180089ED17BA12AE8564AF53F* __this, Callback_t80E1E12B0A5397910E616CA65BFEA673FF16934D* ___callback0, const RuntimeMethod* method) ;
// T Oculus.Platform.Message`1<System.Object>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared (Message_1_tC4674D49302BAB6183CEF95D099A5F93211019CB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared (DeserializableList_1_tF03B8C48A736E5705A86C89209212CD695949C09* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Platform.Models.DeserializableList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializableList_1_get_Count_m8D2A16F510FEBC66136C64012BC482ED2007B478_gshared (DeserializableList_1_tF03B8C48A736E5705A86C89209212CD695949C09* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;

// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.String Oculus.Platform.Samples.NetChat.chatPacket::get_textString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_textString(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::get_packetID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_packetID(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Default_m20D9BEC170CED98C8D129F8BF51BEEDCA6A9FB3D (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Core::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Core_Initialize_m75C5B6CB99DCAE4BBCFF6855489A27D3F4472009 (String_t* ___appId0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68 (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.Rooms::SetUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetUpdateNotificationCallback_mFFE3FA365CFC0DDBEE8152646EBA5BFF5F9F6841 (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Matchmaking::SetMatchFoundNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matchmaking_SetMatchFoundNotificationCallback_mCE4F543CFEE7AD7E7FC6DEEA8A8F728DAFC91171 (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::checkEntitlement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_checkEntitlement_mEB4952576422487933805C610570A96F9C9725B7 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::SubmitCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_SubmitCommand_m2B2273D85F0E6C2B26BC3E291A5FA9A0AC98CBCF (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___command0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::processNetPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Request::RunCallbacks(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_RunCallbacks_m77081B642E6C05CB59873C0076CCDECACC4B2959 (uint32_t ___limit0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7FF5BB319D6F5D1AEF0959FCE61C58701A89B1EB (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateRoom_mE16812155228F93592F74725FB237F358E05AD15 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateFilterRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateFilterRoom_m070D6EFA28EE0839F92BBFEBDA1C84AE548F0992 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindMatch_m0EBABDA92E1917BB705978CD57833BC8795CC9EE (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindRoom_mFEBC2B3471414AA6ADE9DB27417783499794AE1E (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindFilteredRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindFilteredRoom_mEBDEE9D663FCF12E5A767EDFDD4AE2EF48B9A946 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_sendChat_m3CC704504D6548B5CD1FECE9247561891850EE04 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___chatMessage0, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestLeaveRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestStartRatedMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestStartRatedMatch_mC165EA843F2170E0440D796522EE872D7903E05A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestReportResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestReportResults_m7B9359AF8DC1E8DE209237856CFC304FC468A721 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::printOutputLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___newLine0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Entitlements::IsUserEntitledToApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Entitlements_IsUserEntitledToApplication_m0991406029D4228953B4F31614C263AF1E15A1D2 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92 (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Request::OnComplete(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE (Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* __this, Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* ___callback0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Message::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4 (Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* Users_GetLoggedInUser_mC75598E256AF585C1A77551CA031AD47574D5DFB (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.User>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* __this, Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* (*) (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259*, Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.User>::get_Data()
inline User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8 (Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* __this, const RuntimeMethod* method)
{
	return ((  User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* (*) (Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom> Oculus.Platform.Matchmaking::CreateAndEnqueueRoom(System.String,System.UInt32,System.Boolean,Oculus.Platform.Matchmaking/CustomQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* Matchmaking_CreateAndEnqueueRoom_mA3EFC4A056B91C7822A1EAB9E02AEFD50A5A9A4E (String_t* ___pool0, uint32_t ___maxUsers1, bool ___subscribeToUpdates2, CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* ___customQueryData3, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m42FB3BC4C5F799AAB256CA92E9D85BC0F64FF1E4 (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED (Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* __this, Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* (*) (Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D*, Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>::get_Data()
inline MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503 (Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* __this, const RuntimeMethod* method)
{
	return ((  MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* (*) (Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared)(__this, method);
}
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F (uint64_t* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Matchmaking/CustomQuery::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomQuery__ctor_m42DA97765E8CCC9AEDB5DEAC71C4B57642987ED5 (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Oculus.Platform.Matchmaking::Enqueue(System.String,Oculus.Platform.Matchmaking/CustomQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* Matchmaking_Enqueue_mA89756798D06A220A03BA5C65C6408B57894B7A8 (String_t* ___pool0, CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* ___customQueryData1, const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MatchmakingEnqueueResult>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6 (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Callback__ctor_mDDF8A95AA3B0FC55E738A76A86EEE75A5CCD53EA_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993 (Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* __this, Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* (*) (Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905*, Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.Room>::get_Data()
inline Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6 (Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* __this, const RuntimeMethod* method)
{
	return ((  Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* (*) (Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD*, const RuntimeMethod*))Message_1_get_Data_mD1E64D6ED8A65C626BADB30710BCF145A526E86B_gshared)(__this, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Join(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_Join_m884EB7EBF24605A35EFE9F5C65AEA46F714A2FA5 (uint64_t ___roomID0, bool ___subscribeToUpdates1, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.Room>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889 (Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* __this, Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* (*) (Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE*, Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*, const RuntimeMethod*))Request_1_OnComplete_m3838B2B4AB8C028A7CAF31EAFFA0D849EF990B18_gshared)(__this, ___callback0, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93 (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8*, const RuntimeMethod*))DeserializableList_1_GetEnumerator_m5BD9919C68A9CE0BAD70A5138DED5B35B59E6DC8_gshared)(__this, method);
}
// System.Int32 Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_Count()
inline int32_t DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9 (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8*, const RuntimeMethod*))DeserializableList_1_get_Count_m8D2A16F510FEBC66136C64012BC482ED2007B478_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Byte[] Oculus.Platform.Samples.NetChat.chatPacket::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* chatPacket_Serialize_mFE298B3EE45E1CC24F9239D336CC32F19F5C19DA (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Net::SendPacket(System.UInt64,System.Byte[],Oculus.Platform.SendPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Net_SendPacket_m02B839B788F5B38DE82430EB43DF7189376B88A2 (uint64_t ___userID0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___policy2, const RuntimeMethod* method) ;
// Oculus.Platform.Packet Oculus.Platform.Net::ReadPacket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* Net_ReadPacket_mD2E55E921B7DE0D6D909FB25B88F503F0C1A09C7 (const RuntimeMethod* method) ;
// System.UInt64 Oculus.Platform.Packet::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_get_Size_m1F2BE120F25A9738C6E6EEF99329E0816B358FA9 (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, const RuntimeMethod* method) ;
// System.UInt64 Oculus.Platform.Packet::ReadBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_ReadBytes_m63FC14879AE9EF7BAA377A0856FC58BFAA95135C (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination0, const RuntimeMethod* method) ;
// Oculus.Platform.Samples.NetChat.chatPacket Oculus.Platform.Samples.NetChat.chatPacket::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* chatPacket_Deserialize_mB3B31F29CF3D75341C000C08D21F751712A721C0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.UInt64 Oculus.Platform.Packet::get_SenderID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_get_SenderID_m5628E47F8EBF4A796EB145DF0CAC97FBE240C410 (Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Leave(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* Rooms_Leave_mCFCEE0D7E01097B086E4C8CB852184C8158F3F1D (uint64_t ___roomID0, const RuntimeMethod* method) ;
// Oculus.Platform.Request Oculus.Platform.Matchmaking::StartMatch(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Matchmaking_StartMatch_mD9B264635F70699E89EF4E4AC673A4CA32CBAAB6 (uint64_t ___roomID0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// Oculus.Platform.Request Oculus.Platform.Matchmaking::ReportResultsInsecure(System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* Matchmaking_ReportResultsInsecure_mCE35E4EDF44BD0754E0902AD8B3EF630753423ED (uint64_t ___roomID0, Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___data1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean Oculus.Platform.Core::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Core_IsInitialized_m2A9AF05BAD7A54490ED0EE266829C5A36FB4EAA8 (const RuntimeMethod* method) ;
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::HandleEntitlementCheckResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
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
// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::get_packetID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = __this->___U3CpacketIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_packetID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CpacketIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Oculus.Platform.Samples.NetChat.chatPacket::get_textString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = __this->___U3CtextStringU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_textString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = ___value0;
		__this->___U3CtextStringU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextStringU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Oculus.Platform.Samples.NetChat.chatPacket::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* chatPacket_Serialize_mFE298B3EE45E1CC24F9239D336CC32F19F5C19DA (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// using (MemoryStream m = new MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0088;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0088:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (BinaryWriter writer = new BinaryWriter(m))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_4, L_3, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006a_1:
					{// begin finally (depth: 2)
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0074_1;
							}
						}
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0074_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// if (textString.Length > Constants.BUFFER_SIZE)
						String_t* L_7;
						L_7 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(__this, NULL);
						NullCheck(L_7);
						int32_t L_8;
						L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
						V_2 = (bool)((((int32_t)L_8) > ((int32_t)((int32_t)512)))? 1 : 0);
						bool L_9 = V_2;
						if (!L_9)
						{
							goto IL_0040_2;
						}
					}
					{
						// textString = textString.Substring(0, Constants.BUFFER_SIZE-1);
						String_t* L_10;
						L_10 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(__this, NULL);
						NullCheck(L_10);
						String_t* L_11;
						L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, ((int32_t)511), NULL);
						chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline(__this, L_11, NULL);
					}

IL_0040_2:
					{
						// writer.Write(packetID);
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = V_1;
						int32_t L_13;
						L_13 = chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline(__this, NULL);
						NullCheck(L_12);
						VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_12, L_13);
						// writer.Write(textString.ToCharArray());
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = V_1;
						String_t* L_15;
						L_15 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(__this, NULL);
						NullCheck(L_15);
						CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16;
						L_16 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_15, NULL);
						NullCheck(L_14);
						VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_14, L_16);
						// writer.Write('\0');
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = V_1;
						NullCheck(L_17);
						VirtualActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Char) */, L_17, 0);
						goto IL_0075_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0075_1:
			{
				// return m.ToArray();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_0;
				NullCheck(L_18);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(39 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_18);
				V_3 = L_19;
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		return L_20;
	}
}
// Oculus.Platform.Samples.NetChat.chatPacket Oculus.Platform.Samples.NetChat.chatPacket::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* chatPacket_Deserialize_mB3B31F29CF3D75341C000C08D21F751712A721C0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_2 = NULL;
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_3 = NULL;
	{
		// chatPacket result = new chatPacket();
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_0 = (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296*)il2cpp_codegen_object_new(chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088(L_0, NULL);
		V_0 = L_0;
		// using (MemoryStream m = new MemoryStream(data))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_2, L_1, NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_1;
					if (!L_3)
					{
						goto IL_005b;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (BinaryReader reader = new BinaryReader(m))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_1;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_6, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0043_1:
					{// begin finally (depth: 2)
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = V_2;
							if (!L_7)
							{
								goto IL_004d_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = V_2;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_004d_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// result.packetID = reader.ReadInt32();
					chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_9 = V_0;
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = V_2;
					NullCheck(L_10);
					int32_t L_11;
					L_11 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_10);
					NullCheck(L_9);
					chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline(L_9, L_11, NULL);
					// result.textString = System.Text.Encoding.Default.GetString(reader.ReadBytes(Constants.BUFFER_SIZE));
					chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_12 = V_0;
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
					L_13 = Encoding_get_Default_m20D9BEC170CED98C8D129F8BF51BEEDCA6A9FB3D(NULL);
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_2;
					NullCheck(L_14);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
					L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_14, ((int32_t)512));
					NullCheck(L_13);
					String_t* L_16;
					L_16 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_13, L_15);
					NullCheck(L_12);
					chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline(L_12, L_16, NULL);
					goto IL_004e_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004e_1:
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
		// return result;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_17 = V_0;
		V_3 = L_17;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_18 = V_3;
		return L_18;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088 (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_Start_m7A8EF727847729453750E6EEDB46F7CA106755BB (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState = states.NOT_INIT;
		__this->___currentState_5 = 0;
		// localUser = null;
		__this->___localUser_6 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localUser_6), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		// remoteUser = null;
		__this->___remoteUser_7 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		// currentRoom = null;
		__this->___currentRoom_8 = (Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)(Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL);
		// lastPacketID = 0;
		__this->___lastPacketID_9 = 0;
		// ratedMatchStarted = false;
		__this->___ratedMatchStarted_10 = (bool)0;
		// Core.Initialize();
		il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		Core_Initialize_m75C5B6CB99DCAE4BBCFF6855489A27D3F4472009((String_t*)NULL, NULL);
		// Rooms.SetUpdateNotificationCallback(updateRoom);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_0 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_0, __this, (intptr_t)((void*)DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90_RuntimeMethod_var), NULL);
		Rooms_SetUpdateNotificationCallback_mFFE3FA365CFC0DDBEE8152646EBA5BFF5F9F6841(L_0, NULL);
		// Matchmaking.SetMatchFoundNotificationCallback(foundMatch);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_1 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_1, __this, (intptr_t)((void*)DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86_RuntimeMethod_var), NULL);
		Matchmaking_SetMatchFoundNotificationCallback_mCE4F543CFEE7AD7E7FC6DEEA8A8F728DAFC91171(L_1, NULL);
		// checkEntitlement();
		DataEntry_checkEntitlement_mEB4952576422487933805C610570A96F9C9725B7(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_Update_m36259A65AB37D5B8CA7C6B9DCF81B5511E2A65DA (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// string currentText = GetComponent<InputField>().text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0;
		L_0 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		V_0 = L_1;
		// if (Input.GetKey(KeyCode.Return))
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)13), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// if (currentText != "")
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// SubmitCommand(currentText);
		String_t* L_7 = V_0;
		DataEntry_SubmitCommand_m2B2273D85F0E6C2B26BC3E291A5FA9A0AC98CBCF(__this, L_7, NULL);
	}

IL_0032:
	{
		// GetComponent<InputField>().text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_8;
		L_8 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		NullCheck(L_8);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0044:
	{
		// processNetPackets();
		DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A(__this, NULL);
		// Request.RunCallbacks();
		Request_RunCallbacks_m77081B642E6C05CB59873C0076CCDECACC4B2959(0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::SubmitCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_SubmitCommand_m2B2273D85F0E6C2B26BC3E291A5FA9A0AC98CBCF (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___command0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		// string[] commandParams = command.Split('!');
		String_t* L_0 = ___command0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)33), 0, NULL);
		V_0 = L_1;
		// if (commandParams.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_01cf;
		}
	}
	{
		// switch (commandParams[0])
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		String_t* L_7 = V_3;
		V_2 = L_7;
		String_t* L_8 = V_2;
		uint32_t L_9;
		L_9 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7FF5BB319D6F5D1AEF0959FCE61C58701A89B1EB(L_8, NULL);
		V_4 = L_9;
		uint32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-502520314)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)923577301)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)873244444))))
		{
			goto IL_0140;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)923577301))))
		{
			goto IL_014f;
		}
	}
	{
		goto IL_01c0;
	}

IL_0057:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-519297933))))
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-502520314))))
		{
			goto IL_00f8;
		}
	}
	{
		goto IL_01c0;
	}

IL_0073:
	{
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-435409838)))))
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-485742695))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_0087;
	}

IL_0087:
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-435409838))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_01c0;
	}

IL_0095:
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-385076981))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_00a3;
	}

IL_00a3:
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-334744124))))
		{
			goto IL_010a;
		}
	}
	{
		goto IL_00ae;
	}

IL_00ae:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-166967934))))
		{
			goto IL_011c;
		}
	}
	{
		goto IL_01c0;
	}

IL_00bc:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (L_23)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_01c0;
	}

IL_00d1:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_25)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_01c0;
	}

IL_00e6:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
		if (L_27)
		{
			goto IL_0170;
		}
	}
	{
		goto IL_01c0;
	}

IL_00f8:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, NULL);
		if (L_29)
		{
			goto IL_0179;
		}
	}
	{
		goto IL_01c0;
	}

IL_010a:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, NULL);
		if (L_31)
		{
			goto IL_0182;
		}
	}
	{
		goto IL_01c0;
	}

IL_011c:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		if (L_33)
		{
			goto IL_018b;
		}
	}
	{
		goto IL_01c0;
	}

IL_012e:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (L_35)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01c0;
	}

IL_0140:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (L_37)
		{
			goto IL_01ae;
		}
	}
	{
		goto IL_01c0;
	}

IL_014f:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		if (L_39)
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_01c0;
	}

IL_015e:
	{
		// requestCreateRoom();
		DataEntry_requestCreateRoom_mE16812155228F93592F74725FB237F358E05AD15(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_0167:
	{
		// requestCreateFilterRoom();
		DataEntry_requestCreateFilterRoom_m070D6EFA28EE0839F92BBFEBDA1C84AE548F0992(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_0170:
	{
		// requestFindMatch();
		DataEntry_requestFindMatch_m0EBABDA92E1917BB705978CD57833BC8795CC9EE(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_0179:
	{
		// requestFindRoom();
		DataEntry_requestFindRoom_mFEBC2B3471414AA6ADE9DB27417783499794AE1E(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_0182:
	{
		// requestFindFilteredRoom();
		DataEntry_requestFindFilteredRoom_mEBDEE9D663FCF12E5A767EDFDD4AE2EF48B9A946(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_018b:
	{
		// if (commandParams.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_0;
		NullCheck(L_40);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_01a3;
		}
	}
	{
		// sendChat(commandParams[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 1;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		DataEntry_sendChat_m3CC704504D6548B5CD1FECE9247561891850EE04(__this, L_44, NULL);
	}

IL_01a3:
	{
		// break;
		goto IL_01ce;
	}

IL_01a5:
	{
		// requestLeaveRoom();
		DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_01ae:
	{
		// requestStartRatedMatch();
		DataEntry_requestStartRatedMatch_mC165EA843F2170E0440D796522EE872D7903E05A(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_01b7:
	{
		// requestReportResults();
		DataEntry_requestReportResults_m7B9359AF8DC1E8DE209237856CFC304FC468A721(__this, NULL);
		// break;
		goto IL_01ce;
	}

IL_01c0:
	{
		// printOutputLine("Invalid Command");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD52663159C74DA2866AA1F68DDDD3093D5EFA30A, NULL);
		// break;
		goto IL_01ce;
	}

IL_01ce:
	{
	}

IL_01cf:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::printOutputLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___newLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dataOutput.text = "> " + newLine + System.Environment.NewLine + dataOutput.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___dataOutput_4;
		String_t* L_1 = ___newLine0;
		String_t* L_2;
		L_2 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___dataOutput_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, L_1, L_2, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::checkEntitlement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_checkEntitlement_mEB4952576422487933805C610570A96F9C9725B7 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Entitlements.IsUserEntitledToApplication().OnComplete(getEntitlementCallback);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_0;
		L_0 = Entitlements_IsUserEntitledToApplication_m0991406029D4228953B4F31614C263AF1E15A1D2(NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_1 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_1, __this, (intptr_t)((void*)DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_2;
		L_2 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::getEntitlementCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_getEntitlementCallback_mF3DDFE237801767B0A4B05A8F46E38BDEEA82F02 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!msg.IsError)
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// printOutputLine("You are entitled to use this app.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral20A83A66FE8FE287C8CFF751E41B23CF5E11B3A8, NULL);
		// Users.GetLoggedInUser().OnComplete(init);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_3;
		L_3 = Users_GetLoggedInUser_mC75598E256AF585C1A77551CA031AD47574D5DFB(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_4 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_4, __this, (intptr_t)((void*)DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_5;
		L_5 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_3, L_4, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		goto IL_0043;
	}

IL_0035:
	{
		// printOutputLine("You are NOT entitled to use this app.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral10B95C446BF3AB57A59EF85F7F1EDD1BD13BECC6, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::init(Oculus.Platform.Message`1<Oculus.Platform.Models.User>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral264036AC47852FD60740287CA60085B23C6659EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_1 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_2 = NULL;
	{
		// if (!msg.IsError)
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// User user = msg.Data;
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_3 = ___msg0;
		NullCheck(L_3);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_4;
		L_4 = Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8(L_3, Message_1_get_Data_m45982A65EE77ACDB145388C84BD877AA377188D8_RuntimeMethod_var);
		V_1 = L_4;
		// localUser = user;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_5 = V_1;
		__this->___localUser_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localUser_6), (void*)L_5);
		// currentState = states.IDLE;
		__this->___currentState_5 = 1;
		goto IL_0071;
	}

IL_0027:
	{
		// printOutputLine("Received get current user error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral264036AC47852FD60740287CA60085B23C6659EA, NULL);
		// Error error = msg.GetError();
		Message_1_tB77F82F1F4550955CAB92DBFEB260790E37A308A* L_6 = ___msg0;
		NullCheck(L_6);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_7;
		L_7 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_6);
		V_2 = L_7;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = L_8->___Message_2;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_9, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_10, NULL);
		// Users.GetLoggedInUser().OnComplete(init);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_11;
		L_11 = Users_GetLoggedInUser_mC75598E256AF585C1A77551CA031AD47574D5DFB(NULL);
		Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8* L_12 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8*)il2cpp_codegen_object_new(Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(L_12, __this, (intptr_t)((void*)DataEntry_init_mD9AF1F24A2EDE19F7FF12B71FE2031E3F6CA1170_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259* L_13;
		L_13 = Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E(L_11, L_12, Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E_RuntimeMethod_var);
		// currentState = states.NOT_INIT;
		__this->___currentState_5 = 0;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateRoom_mE16812155228F93592F74725FB237F358E05AD15 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_008c;
			}
			case 4:
			{
				goto IL_00b6;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_00a8;
			}
			case 7:
			{
				goto IL_00c4;
			}
			case 8:
			{
				goto IL_00d2;
			}
		}
	}
	{
		goto IL_00e0;
	}

IL_0039:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_00ee;
	}

IL_004a:
	{
		// printOutputLine("Trying to create a matchmaking room");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB, NULL);
		// Matchmaking.CreateAndEnqueueRoom(Constants.FILTER_POOL, 8, true, null).OnComplete(createRoomResponse);
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_3;
		L_3 = Matchmaking_CreateAndEnqueueRoom_mA3EFC4A056B91C7822A1EAB9E02AEFD50A5A9A4E(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, 8, (bool)1, (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)NULL, NULL);
		Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* L_4 = (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*)il2cpp_codegen_object_new(Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_m42FB3BC4C5F799AAB256CA92E9D85BC0F64FF1E4(L_4, __this, (intptr_t)((void*)DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_5;
		L_5 = Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED(L_3, L_4, Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		// currentState = states.REQUEST_CREATE;
		__this->___currentState_5 = 4;
		// break;
		goto IL_00ee;
	}

IL_007e:
	{
		// printOutputLine("You have already made a request to find a room.  Please wait for that request to complete.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		// break;
		goto IL_00ee;
	}

IL_008c:
	{
		// printOutputLine("You have already currently looking for a room.  Please wait for the match to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		// break;
		goto IL_00ee;
	}

IL_009a:
	{
		// printOutputLine("We are currently trying to join a room.  Please wait to see if we can join it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		// break;
		goto IL_00ee;
	}

IL_00a8:
	{
		// printOutputLine("We are currently trying to leave a room.  Please wait to see if we can leave it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		// break;
		goto IL_00ee;
	}

IL_00b6:
	{
		// printOutputLine("You have already requested a matchmaking room to be created.  Please wait for the room to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		// break;
		goto IL_00ee;
	}

IL_00c4:
	{
		// printOutputLine("You have already in a matchmaking room.  Please wait for an opponent to join.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		// break;
		goto IL_00ee;
	}

IL_00d2:
	{
		// printOutputLine("You have already in a match.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		// break;
		goto IL_00ee;
	}

IL_00e0:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_00ee;
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::createRoomResponse(Oculus.Platform.Message`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B89F5C37122339EE4665AEF418ED056BB476AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AADDB51D004EA589EB4E9DD5703135A929256F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E48DAB075275DC16F091D91060501E276CBB001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877D0194FF556ABDE79FFD3AEFFED01B977F695B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* V_1 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_2 = NULL;
	{
		// if (!msg.IsError)
		Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// printOutputLine("Received create matchmaking room success");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral73B89F5C37122339EE4665AEF418ED056BB476AF, NULL);
		// Room room = msg.Data.Room;
		Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* L_3 = ___msg0;
		NullCheck(L_3);
		MatchmakingEnqueueResultAndRoom_t1BB12CB3554190BD1698DAEB3FFAE937BDB99DCF* L_4;
		L_4 = Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503(L_3, Message_1_get_Data_m3ABFAAD6443C0AB559739DE8A37DE5C1C2DF2503_RuntimeMethod_var);
		NullCheck(L_4);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_5 = L_4->___Room_1;
		V_1 = L_5;
		// currentRoom = room;
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_6 = V_1;
		__this->___currentRoom_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)L_6);
		// printOutputLine("RoomID: " + room.ID.ToString());
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_7 = V_1;
		NullCheck(L_7);
		uint64_t* L_8 = (&L_7->___ID_3);
		String_t* L_9;
		L_9 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7E48DAB075275DC16F091D91060501E276CBB001, L_9, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_10, NULL);
		// currentState = states.IN_EMPTY_ROOM;
		__this->___currentState_5 = 7;
		goto IL_0093;
	}

IL_0054:
	{
		// printOutputLine("Received create matchmaking room Error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral7AADDB51D004EA589EB4E9DD5703135A929256F9, NULL);
		// Error error = msg.GetError();
		Message_1_t3EACAAD86B74B63EFA639D646AFEFB75703066D5* L_11 = ___msg0;
		NullCheck(L_11);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_12;
		L_12 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_11);
		V_2 = L_12;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_13 = V_2;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Message_2;
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_14, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_15, NULL);
		// printOutputLine("You can only create a matchmaking room for pools of mode Room.  Make sure you have an appropriate pool setup on the Developer portal.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral877D0194FF556ABDE79FFD3AEFFED01B977F695B, NULL);
		// currentState = states.IDLE;
		__this->___currentState_5 = 1;
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestCreateFilterRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestCreateFilterRoom_m070D6EFA28EE0839F92BBFEBDA1C84AE548F0992 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C392FDC40D4EE69177DB44E9470131CC933247D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CCD6204E1DE64F7D2BE6C2D8D4013154B2B101);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461198D6A0E2DD2E1B416DF92C78033184D0D12D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F75D76EF22085FECDB6F6F2B5C17354F406FD43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8868BF62138D40BF2F806A9E8A0F634747FCCB1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9731D7A1BCEAEBE1BFF036F15143DD1BADF4CB50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB349CA9BF27A5CB77BB09D3F1567AC751691CE68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6910AD2A7F96FD67D641FF04075BA360893D7B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DAC14B7F3B7BF497E2310312C1186653CCAAC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE43D4A7AF952C74D904C9FF52239662FAA7039A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFB1CFA78FC529C4D6B26E2366F57FC652AB29AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB);
		s_Il2CppMethodInitialized = true;
	}
	CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_00d0;
			}
			case 4:
			{
				goto IL_00fa;
			}
			case 5:
			{
				goto IL_00de;
			}
			case 6:
			{
				goto IL_00ec;
			}
			case 7:
			{
				goto IL_0108;
			}
			case 8:
			{
				goto IL_0116;
			}
		}
	}
	{
		goto IL_0124;
	}

IL_0039:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralEFB1CFA78FC529C4D6B26E2366F57FC652AB29AD, NULL);
		// break;
		goto IL_0132;
	}

IL_004a:
	{
		// printOutputLine("Trying to create a matchmaking room");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralF1F86582046ACBE3B0BE681DC12045C54188B7FB, NULL);
		// Matchmaking.CustomQuery roomCustomQuery = new Matchmaking.CustomQuery();
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_3 = (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)il2cpp_codegen_object_new(CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CustomQuery__ctor_m42DA97765E8CCC9AEDB5DEAC71C4B57642987ED5(L_3, NULL);
		V_0 = L_3;
		// roomCustomQuery.criteria = null;
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_4 = V_0;
		NullCheck(L_4);
		L_4->___criteria_1 = (CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___criteria_1), (void*)(CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)NULL);
		// roomCustomQuery.data = new Dictionary<string, object>();
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_5 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_6, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___data_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___data_0), (void*)L_6);
		// roomCustomQuery.data.Add("game_type_name", "CTF");
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_7 = V_0;
		NullCheck(L_7);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = L_7->___data_0;
		NullCheck(L_8);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_8, _stringLiteralB349CA9BF27A5CB77BB09D3F1567AC751691CE68, _stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// roomCustomQuery.data.Add("map_name", "Really_Big_Map");
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_9 = V_0;
		NullCheck(L_9);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = L_9->___data_0;
		NullCheck(L_10);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_10, _stringLiteral22CCD6204E1DE64F7D2BE6C2D8D4013154B2B101, _stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// Matchmaking.CreateAndEnqueueRoom(Constants.FILTER_POOL, 8, true, roomCustomQuery).OnComplete(createRoomResponse);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_11 = V_0;
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_12;
		L_12 = Matchmaking_CreateAndEnqueueRoom_mA3EFC4A056B91C7822A1EAB9E02AEFD50A5A9A4E(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, 8, (bool)1, L_11, NULL);
		Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75* L_13 = (Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75*)il2cpp_codegen_object_new(Callback_t72DB7FF146D5C7395B3AA83899244DD1E38A2E75_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Callback__ctor_m42FB3BC4C5F799AAB256CA92E9D85BC0F64FF1E4(L_13, __this, (intptr_t)((void*)DataEntry_createRoomResponse_m0648FA6FC3692E000420D7486D3FC3BD147B35EC_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		Request_1_t960E9EFA160E1208CC8E31836AE78BA72EA1E52D* L_14;
		L_14 = Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED(L_12, L_13, Request_1_OnComplete_m4CAA2EC5158C552515E1479BCDE9643D8DFA2EED_RuntimeMethod_var);
		// currentState = states.REQUEST_CREATE;
		__this->___currentState_5 = 4;
		// break;
		goto IL_0132;
	}

IL_00c2:
	{
		// printOutputLine("You have already made a request to find a room.  Please wait for that request to complete.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral0C392FDC40D4EE69177DB44E9470131CC933247D, NULL);
		// break;
		goto IL_0132;
	}

IL_00d0:
	{
		// printOutputLine("You have already currently looking for a room.  Please wait for the match to be made.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral461198D6A0E2DD2E1B416DF92C78033184D0D12D, NULL);
		// break;
		goto IL_0132;
	}

IL_00de:
	{
		// printOutputLine("We are currently trying to join a room.  Please wait to see if we can join it.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral9731D7A1BCEAEBE1BFF036F15143DD1BADF4CB50, NULL);
		// break;
		goto IL_0132;
	}

IL_00ec:
	{
		// printOutputLine("We are currently trying to leave a room.  Please wait to see if we can leave it.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8868BF62138D40BF2F806A9E8A0F634747FCCB1E, NULL);
		// break;
		goto IL_0132;
	}

IL_00fa:
	{
		// printOutputLine("You have already requested a matchmaking room to be created.  Please wait for the room to be made.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5F75D76EF22085FECDB6F6F2B5C17354F406FD43, NULL);
		// break;
		goto IL_0132;
	}

IL_0108:
	{
		// printOutputLine("You have already in a matchmaking room.  Please wait for an opponent to join.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralC6910AD2A7F96FD67D641FF04075BA360893D7B9, NULL);
		// break;
		goto IL_0132;
	}

IL_0116:
	{
		// printOutputLine("You have already in a match.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralE3DAC14B7F3B7BF497E2310312C1186653CCAAC8, NULL);
		// break;
		goto IL_0132;
	}

IL_0124:
	{
		// printOutputLine("You have hit an unknown state.\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralE43D4A7AF952C74D904C9FF52239662FAA7039A8, NULL);
		// break;
		goto IL_0132;
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindRoom_mFEBC2B3471414AA6ADE9DB27417783499794AE1E (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791AEA70C83F9E51DF9CA11386F4F76F508F903E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_00b4;
			}
			case 5:
			{
				goto IL_0098;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_00c2;
			}
			case 8:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_0039:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_00ec;
	}

IL_004a:
	{
		// printOutputLine("\nTrying to find a matchmaking room\n");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral791AEA70C83F9E51DF9CA11386F4F76F508F903E, NULL);
		// Matchmaking.Enqueue(Constants.FILTER_POOL, null).OnComplete(searchingStarted);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_3;
		L_3 = Matchmaking_Enqueue_mA89756798D06A220A03BA5C65C6408B57894B7A8(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)NULL, NULL);
		Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* L_4 = (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*)il2cpp_codegen_object_new(Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6(L_4, __this, (intptr_t)((void*)DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_5;
		L_5 = Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993(L_3, L_4, Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		// currentState = states.REQUEST_FIND;
		__this->___currentState_5 = 2;
		// break;
		goto IL_00ec;
	}

IL_007c:
	{
		// printOutputLine("You have already made a request to find a room.  Please wait for that request to complete.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		// break;
		goto IL_00ec;
	}

IL_008a:
	{
		// printOutputLine("You have already currently looking for a room.  Please wait for the match to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		// break;
		goto IL_00ec;
	}

IL_0098:
	{
		// printOutputLine("We are currently trying to join a room.  Please wait to see if we can join it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		// break;
		goto IL_00ec;
	}

IL_00a6:
	{
		// printOutputLine("We are currently trying to leave a room.  Please wait to see if we can leave it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		// break;
		goto IL_00ec;
	}

IL_00b4:
	{
		// printOutputLine("You have already requested a matchmaking room to be created.  Please wait for the room to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		// break;
		goto IL_00ec;
	}

IL_00c2:
	{
		// printOutputLine("You have already in a matchmaking room.  Please wait for an opponent to join.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		// break;
		goto IL_00ec;
	}

IL_00d0:
	{
		// printOutputLine("You have already in a match.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		// break;
		goto IL_00ec;
	}

IL_00de:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_00ec;
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindFilteredRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindFilteredRoom_mEBDEE9D663FCF12E5A767EDFDD4AE2EF48B9A946 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11AA1E19A60EAA84D99B1B63B0042B44D0231529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B195F37DD1176ECD61AC9E3DC377068C974FABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF841B88E21DACCF207C50AC522C0FE9DD847454);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1C3DDA293E6E804ED02479C52960A53EC491F5);
		s_Il2CppMethodInitialized = true;
	}
	CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* V_0 = NULL;
	CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_3 = L_0;
		int32_t L_1 = V_3;
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0138;
			}
			case 3:
			{
				goto IL_0146;
			}
			case 4:
			{
				goto IL_0170;
			}
			case 5:
			{
				goto IL_0154;
			}
			case 6:
			{
				goto IL_0162;
			}
			case 7:
			{
				goto IL_017e;
			}
			case 8:
			{
				goto IL_018c;
			}
		}
	}
	{
		goto IL_019a;
	}

IL_0039:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_01a8;
	}

IL_004a:
	{
		// printOutputLine("Trying to find a matchmaking room");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0, NULL);
		// Matchmaking.CustomQuery roomCustomQuery = new Matchmaking.CustomQuery();
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_3 = (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)il2cpp_codegen_object_new(CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CustomQuery__ctor_m42DA97765E8CCC9AEDB5DEAC71C4B57642987ED5(L_3, NULL);
		V_0 = L_3;
		// Matchmaking.CustomQuery.Criterion[] queries = new Matchmaking.CustomQuery.Criterion[2];
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_4 = (CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)(CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA*)SZArrayNew(CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_4;
		// queries[0].key = "map";
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_5 = V_1;
		NullCheck(L_5);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___key_0 = _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A;
		Il2CppCodeGenWriteBarrier((void**)(&((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___key_0), (void*)_stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A);
		// queries[0].importance = MatchmakingCriterionImportance.Required;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_6 = V_1;
		NullCheck(L_6);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___importance_1 = 0;
		// queries[0].parameters = new Dictionary<string, object>();
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_8, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2), (void*)L_8);
		// queries[0].parameters.Add("map_param_1","Really_Big_Map");
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_9 = V_1;
		NullCheck(L_9);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2;
		NullCheck(L_10);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_10, _stringLiteral6B195F37DD1176ECD61AC9E3DC377068C974FABF, _stringLiteral22475627EAFACA7AA01F4C0594A934DEA0D16ADF, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// queries[0].parameters.Add("map_param_2", "Big_Map");
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_11 = V_1;
		NullCheck(L_11);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___parameters_2;
		NullCheck(L_12);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_12, _stringLiteral11AA1E19A60EAA84D99B1B63B0042B44D0231529, _stringLiteralFA1C3DDA293E6E804ED02479C52960A53EC491F5, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// queries[1].key = "game_type";
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_13 = V_1;
		NullCheck(L_13);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___key_0 = _stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C;
		Il2CppCodeGenWriteBarrier((void**)(&((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___key_0), (void*)_stringLiteral24B257781890DA703048F1B0C84EC58A226FF17C);
		// queries[1].importance = MatchmakingCriterionImportance.Required;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_14 = V_1;
		NullCheck(L_14);
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___importance_1 = 0;
		// queries[1].parameters = new Dictionary<string, object>();
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_15 = V_1;
		NullCheck(L_15);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_16, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___parameters_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___parameters_2), (void*)L_16);
		// queries[1].parameters.Add("game_type_param", "CTF");
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_17 = V_1;
		NullCheck(L_17);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___parameters_2;
		NullCheck(L_18);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_18, _stringLiteralAF841B88E21DACCF207C50AC522C0FE9DD847454, _stringLiteral3C10ACDB2A4300D75FA9963DCAC3A3DF77292F5A, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// roomCustomQuery.criteria = queries;
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_19 = V_0;
		CriterionU5BU5D_t86F7E9BD8AFAA5376A45FED00E791D14A04B3DAA* L_20 = V_1;
		NullCheck(L_19);
		L_19->___criteria_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___criteria_1), (void*)L_20);
		// roomCustomQuery.data = null;
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_21 = V_0;
		NullCheck(L_21);
		L_21->___data_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___data_0), (void*)(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL);
		// Matchmaking.Enqueue(Constants.FILTER_POOL, roomCustomQuery);
		CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340* L_22 = V_0;
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_23;
		L_23 = Matchmaking_Enqueue_mA89756798D06A220A03BA5C65C6408B57894B7A8(_stringLiteralB10B8DB689ABAA8B91394AD641AFD75EFA739F38, L_22, NULL);
		// currentState = states.REQUEST_FIND;
		__this->___currentState_5 = 2;
		// break;
		goto IL_01a8;
	}

IL_0138:
	{
		// printOutputLine("You have already made a request to find a room.  Please wait for that request to complete.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		// break;
		goto IL_01a8;
	}

IL_0146:
	{
		// printOutputLine("You have already currently looking for a room.  Please wait for the match to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		// break;
		goto IL_01a8;
	}

IL_0154:
	{
		// printOutputLine("We are currently trying to join a room.  Please wait to see if we can join it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		// break;
		goto IL_01a8;
	}

IL_0162:
	{
		// printOutputLine("We are currently trying to leave a room.  Please wait to see if we can leave it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		// break;
		goto IL_01a8;
	}

IL_0170:
	{
		// printOutputLine("You have already requested a matchmaking room to be created.  Please wait for the room to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		// break;
		goto IL_01a8;
	}

IL_017e:
	{
		// printOutputLine("You have already in a matchmaking room.  Please wait for an opponent to join.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		// break;
		goto IL_01a8;
	}

IL_018c:
	{
		// printOutputLine("You have already in a match.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		// break;
		goto IL_01a8;
	}

IL_019a:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_01a8;
	}

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::foundMatch(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_foundMatch_m1260A859F105E040631EEC6AF88AF84B8CCB2C86 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F5BA1C82DA8DAC6463BA85C1A8BC81E3461E6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2086D64681BE7D3EF06FECF7AB0D3C66A19EE71);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* V_1 = NULL;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_2 = NULL;
	{
		// if (!msg.IsError)
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		// printOutputLine("Received find match success. We are now going to request to join the room.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral37F5BA1C82DA8DAC6463BA85C1A8BC81E3461E6B, NULL);
		// Room room = msg.Data;
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_3 = ___msg0;
		NullCheck(L_3);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_4;
		L_4 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6(L_3, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		V_1 = L_4;
		// Rooms.Join(room.ID, true).OnComplete(joinRoomResponse);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_5 = V_1;
		NullCheck(L_5);
		uint64_t L_6 = L_5->___ID_3;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_7;
		L_7 = Rooms_Join_m884EB7EBF24605A35EFE9F5C65AEA46F714A2FA5(L_6, (bool)1, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_8 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_8, __this, (intptr_t)((void*)DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_9;
		L_9 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_7, L_8, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		// currentState = states.REQUEST_JOIN;
		__this->___currentState_5 = 5;
		goto IL_007d;
	}

IL_004a:
	{
		// printOutputLine("Received find match error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralC2086D64681BE7D3EF06FECF7AB0D3C66A19EE71, NULL);
		// Error error = msg.GetError();
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_10 = ___msg0;
		NullCheck(L_10);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_11;
		L_11 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_10);
		V_2 = L_11;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = L_12->___Message_2;
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_13, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_14, NULL);
		// currentState = states.IDLE;
		__this->___currentState_5 = 1;
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::joinRoomResponse(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_joinRoomResponse_mA4A734758CA62FF619C60A9A9812FA789C6D7D06 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17D0E550A67F8059F0FE5BCD905A402E97D9A6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4E3F628F25B19F1771C4E6CE4C83EC8BE0F1DF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_3 = NULL;
	bool V_4 = false;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_5 = NULL;
	{
		// if (!msg.IsError)
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00a6;
		}
	}
	{
		// printOutputLine("Received join room success.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralB17D0E550A67F8059F0FE5BCD905A402E97D9A6A, NULL);
		// currentRoom = msg.Data;
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_3 = ___msg0;
		NullCheck(L_3);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_4;
		L_4 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6(L_3, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		__this->___currentRoom_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)L_4);
		// currentState = states.IN_EMPTY_ROOM;
		__this->___currentState_5 = 7;
		// if (currentRoom.UsersOptional != null)
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_5 = __this->___currentRoom_8;
		NullCheck(L_5);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_6 = L_5->___UsersOptional_18;
		V_1 = (bool)((!(((RuntimeObject*)(UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00a3;
		}
	}
	{
		// foreach (User element in currentRoom.UsersOptional)
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_8 = __this->___currentRoom_8;
		NullCheck(L_8);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_9 = L_8->___UsersOptional_18;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93(L_9, DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_0058_1:
			{
				// foreach (User element in currentRoom.UsersOptional)
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_14;
				L_14 = InterfaceFuncInvoker0< User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				// if (element.ID != localUser.ID)
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_15 = V_3;
				NullCheck(L_15);
				uint64_t L_16 = L_15->___ID_1;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_17 = __this->___localUser_6;
				NullCheck(L_17);
				uint64_t L_18 = L_17->___ID_1;
				V_4 = (bool)((((int32_t)((((int64_t)L_16) == ((int64_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_19 = V_4;
				if (!L_19)
				{
					goto IL_008c_1;
				}
			}
			{
				// remoteUser = element;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_20 = V_3;
				__this->___remoteUser_7 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)L_20);
				// currentState = states.IN_FULL_ROOM;
				__this->___currentState_5 = 8;
			}

IL_008c_1:
			{
			}

IL_008d_1:
			{
				// foreach (User element in currentRoom.UsersOptional)
				RuntimeObject* L_21 = V_2;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		goto IL_00e7;
	}

IL_00a6:
	{
		// printOutputLine("Received join room error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral0B75A483338886A5265C4753572AEA27ECC42D63, NULL);
		// printOutputLine("It's possible the room filled up before you could join it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCE4E3F628F25B19F1771C4E6CE4C83EC8BE0F1DF, NULL);
		// Error error = msg.GetError();
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_23 = ___msg0;
		NullCheck(L_23);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_24;
		L_24 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_23);
		V_5 = L_24;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_25 = V_5;
		NullCheck(L_25);
		String_t* L_26 = L_25->___Message_2;
		String_t* L_27;
		L_27 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_26, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_27, NULL);
		// currentState = states.IDLE;
		__this->___currentState_5 = 1;
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestFindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestFindMatch_m0EBABDA92E1917BB705978CD57833BC8795CC9EE (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D51CC9D87AEDB20388919750B0D8FB1F3138F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD518793363C83731F5EB512A4536332399C3B11C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_00b4;
			}
			case 5:
			{
				goto IL_0098;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_00c2;
			}
			case 8:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_0039:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_00ec;
	}

IL_004a:
	{
		// printOutputLine("Trying to find a matchmaking room");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral715E34704DEEC54C6788BF104CB10A34A780A1C0, NULL);
		// Matchmaking.Enqueue(Constants.BOUT_POOL, null).OnComplete(searchingStarted);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_3;
		L_3 = Matchmaking_Enqueue_mA89756798D06A220A03BA5C65C6408B57894B7A8(_stringLiteral25D51CC9D87AEDB20388919750B0D8FB1F3138F6, (CustomQuery_tD60F68A013CBAFC791A532E0FE921F372715E340*)NULL, NULL);
		Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F* L_4 = (Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F*)il2cpp_codegen_object_new(Callback_t2A94A02223801D94F04E26BD852435B464FD6E9F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Callback__ctor_mE9CBF36D1FEBC4581E577BE5D3DBE3CC2C4691F6(L_4, __this, (intptr_t)((void*)DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Request_1_t032FC07496E4AC093857E050A2BF5CEFB37C7905* L_5;
		L_5 = Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993(L_3, L_4, Request_1_OnComplete_mDFB58EBF0B3765367190E9F05BB8A08FB9D8E993_RuntimeMethod_var);
		// currentState = states.REQUEST_FIND;
		__this->___currentState_5 = 2;
		// break;
		goto IL_00ec;
	}

IL_007c:
	{
		// printOutputLine("You have already made a request to find a room.  Please wait for that request to complete.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF9AE8E6B3F7940F4B292762C0D996C7A5328A53, NULL);
		// break;
		goto IL_00ec;
	}

IL_008a:
	{
		// printOutputLine("You have already currently looking for a room.  Please wait for the match to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral386C5E208F5B84F8D339F51BCF7965BDED1F2D2C, NULL);
		// break;
		goto IL_00ec;
	}

IL_0098:
	{
		// printOutputLine("We are currently trying to join a room.  Please wait to see if we can join it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD518793363C83731F5EB512A4536332399C3B11C, NULL);
		// break;
		goto IL_00ec;
	}

IL_00a6:
	{
		// printOutputLine("We are currently trying to leave a room.  Please wait to see if we can leave it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		// break;
		goto IL_00ec;
	}

IL_00b4:
	{
		// printOutputLine("You have already requested a matchmaking room to be created.  Please wait for the room to be made.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral936C32D4BDFC8DD31E4AAD5AB9939DE70C3AA80C, NULL);
		// break;
		goto IL_00ec;
	}

IL_00c2:
	{
		// printOutputLine("You have already in a matchmaking room.  Please wait for an opponent to join.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8A53F8F3ECA62152883ED24CF051B6569FF2CACE, NULL);
		// break;
		goto IL_00ec;
	}

IL_00d0:
	{
		// printOutputLine("You have already in a match.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral6E4D5D6A29CC0A715A74DB4323BB6AB6D1239161, NULL);
		// break;
		goto IL_00ec;
	}

IL_00de:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_00ec;
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::searchingStarted(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_searchingStarted_m8E1EC3C17A376352DFC052C38DA6222015948632 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C299BF5107D7E0629D16837F4C97C929EFE5861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF6137FE4C5927013C087EE74D84C2501852BED4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		// if (!msg.IsError)
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// printOutputLine("Searching for a match successfully started");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralCF6137FE4C5927013C087EE74D84C2501852BED4, NULL);
		// currentState = states.REQUEST_FIND;
		__this->___currentState_5 = 2;
		goto IL_0051;
	}

IL_0025:
	{
		// printOutputLine("Searching for a match error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral1C299BF5107D7E0629D16837F4C97C929EFE5861, NULL);
		// Error error = msg.GetError();
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_3 = ___msg0;
		NullCheck(L_3);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4;
		L_4 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_3);
		V_1 = L_4;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Message_2;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_6, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_7, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::updateRoom(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_updateRoom_m84B51C87A098A1C9000AAB577AD70C799E1E5B90 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B6ADD9BA4A2596DA37C86818DBB1FA5543BC90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CF80100A176C5ABF31BAD31E39091BF9F7C6F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BC8523900AE414198EA2E4D09442768E577938B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66302616BC1BDF9D2409AB2485FCF016D5D6CDEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_8 = NULL;
	int32_t G_B18_0 = 0;
	{
		// if (!msg.IsError)
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0100;
		}
	}
	{
		// printOutputLine("Received room update notification");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5BC8523900AE414198EA2E4D09442768E577938B, NULL);
		// Room room = msg.Data;
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_3 = ___msg0;
		NullCheck(L_3);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_4;
		L_4 = Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6(L_3, Message_1_get_Data_mC0B4BB9BBDD1FDDF09D9483CA214772B743461F6_RuntimeMethod_var);
		V_1 = L_4;
		// if (currentState == states.IN_EMPTY_ROOM)
		int32_t L_5 = __this->___currentState_5;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)7))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00a6;
		}
	}
	{
		// if (room.UsersOptional != null)
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_7 = V_1;
		NullCheck(L_7);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_8 = L_7->___UsersOptional_18;
		V_3 = (bool)((!(((RuntimeObject*)(UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		// foreach (User element in room.UsersOptional)
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_10 = V_1;
		NullCheck(L_10);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_11 = L_10->___UsersOptional_18;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93(L_11, DeserializableList_1_GetEnumerator_m3EC3D6F7434A1D3224CEF4CEE07093C949C22D93_RuntimeMethod_var);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00a1:
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

IL_0051_1:
			{
				// foreach (User element in room.UsersOptional)
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_16;
				L_16 = InterfaceFuncInvoker0< User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tE626E5F857E8F1F61ADCDEA37411C8A3FB964F07_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				// if (element.ID != localUser.ID)
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_17 = V_5;
				NullCheck(L_17);
				uint64_t L_18 = L_17->___ID_1;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_19 = __this->___localUser_6;
				NullCheck(L_19);
				uint64_t L_20 = L_19->___ID_1;
				V_6 = (bool)((((int32_t)((((int64_t)L_18) == ((int64_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_21 = V_6;
				if (!L_21)
				{
					goto IL_0089_1;
				}
			}
			{
				// remoteUser = element;
				User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_22 = V_5;
				__this->___remoteUser_7 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)L_22);
				// currentState = states.IN_FULL_ROOM;
				__this->___currentState_5 = 8;
			}

IL_0089_1:
			{
			}

IL_008a_1:
			{
				// foreach (User element in room.UsersOptional)
				RuntimeObject* L_23 = V_4;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		goto IL_00fd;
	}

IL_00a6:
	{
		// if (room.UsersOptional != null && room.UsersOptional.Count == 1)
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_25 = V_1;
		NullCheck(L_25);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_26 = L_25->___UsersOptional_18;
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_27 = V_1;
		NullCheck(L_27);
		UserList_t5F3955235D184B6260F2376C7EA72B3E19FE6376* L_28 = L_27->___UsersOptional_18;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9(L_28, DeserializableList_1_get_Count_m167B8885DF16235DCF7955316266415BBADB49D9_RuntimeMethod_var);
		G_B18_0 = ((((int32_t)L_29) == ((int32_t)1))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B18_0 = 0;
	}

IL_00c0:
	{
		V_7 = (bool)G_B18_0;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		// printOutputLine("User ID: " + remoteUser.ID.ToString() + "has left");
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_31 = __this->___remoteUser_7;
		NullCheck(L_31);
		uint64_t* L_32 = (&L_31->___ID_1);
		String_t* L_33;
		L_33 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral66302616BC1BDF9D2409AB2485FCF016D5D6CDEE, L_33, _stringLiteral21CF80100A176C5ABF31BAD31E39091BF9F7C6F0, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_34, NULL);
		// remoteUser = null;
		__this->___remoteUser_7 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		// currentState = states.IN_EMPTY_ROOM;
		__this->___currentState_5 = 7;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
		goto IL_012e;
	}

IL_0100:
	{
		// printOutputLine("Received room update error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral00B6ADD9BA4A2596DA37C86818DBB1FA5543BC90, NULL);
		// Error error = msg.GetError();
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_35 = ___msg0;
		NullCheck(L_35);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_36;
		L_36 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_35);
		V_8 = L_36;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_37 = V_8;
		NullCheck(L_37);
		String_t* L_38 = L_37->___Message_2;
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_38, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_39, NULL);
	}

IL_012e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_sendChat_m3CC704504D6548B5CD1FECE9247561891850EE04 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, String_t* ___chatMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral500CF30CCABB715DBF03EE4B03FFF7C1539DF0B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_2 = NULL;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_0044;
			}
			case 6:
			{
				goto IL_0044;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0097;
	}

IL_0036:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_00a5;
	}

IL_0044:
	{
		// printOutputLine("You need to be in a room with another player to send a message.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral500CF30CCABB715DBF03EE4B03FFF7C1539DF0B1, NULL);
		// break;
		goto IL_00a5;
	}

IL_0052:
	{
		// chatPacket newMessage = new chatPacket();
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_3 = (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296*)il2cpp_codegen_object_new(chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		chatPacket__ctor_mD1333DD746DA23633F6A549706C1B612B82C0088(L_3, NULL);
		V_2 = L_3;
		// lastPacketID++;
		int32_t L_4 = __this->___lastPacketID_9;
		__this->___lastPacketID_9 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// newMessage.packetID = lastPacketID;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_5 = V_2;
		int32_t L_6 = __this->___lastPacketID_9;
		NullCheck(L_5);
		chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline(L_5, L_6, NULL);
		// newMessage.textString = chatMessage;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_7 = V_2;
		String_t* L_8 = ___chatMessage0;
		NullCheck(L_7);
		chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline(L_7, L_8, NULL);
		// Oculus.Platform.Net.SendPacket(remoteUser.ID, newMessage.Serialize(), SendPolicy.Reliable);
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_9 = __this->___remoteUser_7;
		NullCheck(L_9);
		uint64_t L_10 = L_9->___ID_1;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_11 = V_2;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = chatPacket_Serialize_mFE298B3EE45E1CC24F9239D336CC32F19F5C19DA(L_11, NULL);
		bool L_13;
		L_13 = Net_SendPacket_m02B839B788F5B38DE82430EB43DF7189376B88A2(L_10, L_12, 1, NULL);
		// break;
		goto IL_00a5;
	}

IL_0097:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::processNetPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75685E145E5A73B802A53F0E146332038B24E134);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83035F9759A79E53CE6C6BE65BBD4A7A6484F128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF661C314CFE8F42EF8E01B97E23F30BC0B7CDFFE);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* V_2 = NULL;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// Packet incomingPacket = Net.ReadPacket();
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_0;
		L_0 = Net_ReadPacket_mD2E55E921B7DE0D6D909FB25B88F503F0C1A09C7(NULL);
		V_0 = L_0;
		goto IL_0088;
	}

IL_0009:
	{
		// byte[] rawBits = new byte[incomingPacket.Size];
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_1 = V_0;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = Packet_get_Size_m1F2BE120F25A9738C6E6EEF99329E0816B358FA9(L_1, NULL);
		if ((uint64_t)(L_2) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DataEntry_processNetPackets_mD40EBB3EBD3A1EBE0CB0F96BBF0E03E3628FA67A_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_2));
		V_1 = L_3;
		// incomingPacket.ReadBytes(rawBits);
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_4);
		uint64_t L_6;
		L_6 = Packet_ReadBytes_m63FC14879AE9EF7BAA377A0856FC58BFAA95135C(L_4, L_5, NULL);
		// chatPacket newMessage = chatPacket.Deserialize(rawBits);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_8;
		L_8 = chatPacket_Deserialize_mB3B31F29CF3D75341C000C08D21F751712A721C0(L_7, NULL);
		V_2 = L_8;
		// printOutputLine("Chat Text: " + newMessage.textString.ToString());
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral83035F9759A79E53CE6C6BE65BBD4A7A6484F128, L_11, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_12, NULL);
		// printOutputLine("Received Packet from UserID: " + incomingPacket.SenderID.ToString());
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_13 = V_0;
		NullCheck(L_13);
		uint64_t L_14;
		L_14 = Packet_get_SenderID_m5628E47F8EBF4A796EB145DF0CAC97FBE240C410(L_13, NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F((&V_3), NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral75685E145E5A73B802A53F0E146332038B24E134, L_15, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_16, NULL);
		// printOutputLine("Received Packet ID: " + newMessage.packetID.ToString());
		chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline(L_17, NULL);
		V_4 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF661C314CFE8F42EF8E01B97E23F30BC0B7CDFFE, L_19, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_20, NULL);
		// incomingPacket = Net.ReadPacket();
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_21;
		L_21 = Net_ReadPacket_mD2E55E921B7DE0D6D909FB25B88F503F0C1A09C7(NULL);
		V_0 = L_21;
	}

IL_0088:
	{
		// while (incomingPacket != null)
		Packet_t54871D991C39844C3642CBCD5573C87974DF6A32* L_22 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(Packet_t54871D991C39844C3642CBCD5573C87974DF6A32*)L_22) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestLeaveRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0BE7F36A753120388756ADC31357DF565C6C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7423CA6FD92EF3F3989043A87E2B8793080DF03);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_0044;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0060;
			}
			case 8:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0036:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_009e;
	}

IL_0044:
	{
		// printOutputLine("You are currently not in a room to leave.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralBD0BE7F36A753120388756ADC31357DF565C6C89, NULL);
		// break;
		goto IL_009e;
	}

IL_0052:
	{
		// printOutputLine("We are currently trying to leave a room.  Please wait to see if we can leave it.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral652F04EEFDECE10846B1788468CF6D20446F289B, NULL);
		// break;
		goto IL_009e;
	}

IL_0060:
	{
		// printOutputLine("Trying to leave room.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralF7423CA6FD92EF3F3989043A87E2B8793080DF03, NULL);
		// Rooms.Leave(currentRoom.ID).OnComplete(leaveRoomResponse);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3 = __this->___currentRoom_8;
		NullCheck(L_3);
		uint64_t L_4 = L_3->___ID_3;
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_5;
		L_5 = Rooms_Leave_mCFCEE0D7E01097B086E4C8CB852184C8158F3F1D(L_4, NULL);
		Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764* L_6 = (Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764*)il2cpp_codegen_object_new(Callback_t9EC7A0EE57CE64F769946FF4B8F38764C84FD764_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Callback__ctor_mAE45A9D93694865CD8DB5339ADCC337C59156D68(L_6, __this, (intptr_t)((void*)DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Request_1_t3F874A2FE55A781BF568AD7106B9CD8FCBD16DAE* L_7;
		L_7 = Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889(L_5, L_6, Request_1_OnComplete_mD9378F7C06B8C4996C73AA6D62F289AD4D5A4889_RuntimeMethod_var);
		// break;
		goto IL_009e;
	}

IL_0090:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::leaveRoomResponse(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_leaveRoomResponse_m30FCAC168FAB3137F2B60DD6AFC4451756C5016B (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral920D0134A13224A01963C8D399951D7365029ACF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3501744B0773A50D3BF8BAEFE01A55DC50D5C50);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		// if (!msg.IsError)
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// printOutputLine("We were able to leave the room");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralA3501744B0773A50D3BF8BAEFE01A55DC50D5C50, NULL);
		// currentRoom = null;
		__this->___currentRoom_8 = (Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRoom_8), (void*)(Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C*)NULL);
		// remoteUser = null;
		__this->___remoteUser_7 = (User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteUser_7), (void*)(User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4*)NULL);
		// currentState = states.IDLE;
		__this->___currentState_5 = 1;
		goto IL_005f;
	}

IL_0033:
	{
		// printOutputLine("Leave room error");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral920D0134A13224A01963C8D399951D7365029ACF, NULL);
		// Error error = msg.GetError();
		Message_1_t6712B041CB9A6E0826F5AB64DF7897242DBC6CCD* L_3 = ___msg0;
		NullCheck(L_3);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4;
		L_4 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_3);
		V_1 = L_4;
		// printOutputLine("Error: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Message_2;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_6, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_7, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestStartRatedMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestStartRatedMatch_mC165EA843F2170E0440D796522EE872D7903E05A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F0057598B4E8BEF6162B8E3305326C0F1A20E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB5E996F4F3C7E6CCBB98C6CEC9328DF294F5C19);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_0044;
			}
			case 6:
			{
				goto IL_0044;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_0036:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_0090;
	}

IL_0044:
	{
		// printOutputLine("You need to be in a room with another player to start a rated match.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral4F0057598B4E8BEF6162B8E3305326C0F1A20E84, NULL);
		// break;
		goto IL_0090;
	}

IL_0052:
	{
		// printOutputLine("Trying to start a rated match.  This call should be made once a rated match begins so we will be able to submit results after the game is done.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralFB5E996F4F3C7E6CCBB98C6CEC9328DF294F5C19, NULL);
		// Matchmaking.StartMatch(currentRoom.ID).OnComplete(startRatedMatchResponse);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_3 = __this->___currentRoom_8;
		NullCheck(L_3);
		uint64_t L_4 = L_3->___ID_3;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_5;
		L_5 = Matchmaking_StartMatch_mD9B264635F70699E89EF4E4AC673A4CA32CBAAB6(L_4, NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_6 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_6, __this, (intptr_t)((void*)DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_7;
		L_7 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_5, L_6, NULL);
		// break;
		goto IL_0090;
	}

IL_0082:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_0090;
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::startRatedMatchResponse(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_startRatedMatchResponse_mA0AFA74172B0AD03E7A08CC8CE380E80185A2480 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B7A48F6B660564BD9FEF1C21619340A1F10F2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7970A9EAFF2C28894F04C4600209CBA65BE905B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD038D81FB9093934C691608A0A2F41B350086FBD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		// if(!msg.IsError)
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// printOutputLine("Started a rated match");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral7970A9EAFF2C28894F04C4600209CBA65BE905B8, NULL);
		// ratedMatchStarted = true;
		__this->___ratedMatchStarted_10 = (bool)1;
		goto IL_0051;
	}

IL_0025:
	{
		// Error error = msg.GetError();
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_3 = ___msg0;
		NullCheck(L_3);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4;
		L_4 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_3);
		V_1 = L_4;
		// printOutputLine("Received starting rated match failure: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Message_2;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral39B7A48F6B660564BD9FEF1C21619340A1F10F2F, L_6, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_7, NULL);
		// printOutputLine("Your matchmaking pool needs to have a skill pool associated with it to play rated matches");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD038D81FB9093934C691608A0A2F41B350086FBD, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::requestReportResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_requestReportResults_m7B9359AF8DC1E8DE209237856CFC304FC468A721 (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48BADE6D41DD866A40A32C651C57B716AE37416F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DFA8638FC7431EA5D6B04A7BF5D3C988A9C5639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD906C38E3D05EEE8C2F94A7E5F33BC8BDCC843E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* V_3 = NULL;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_004a;
			}
			case 5:
			{
				goto IL_004a;
			}
			case 6:
			{
				goto IL_004a;
			}
			case 7:
			{
				goto IL_005b;
			}
			case 8:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_0039:
	{
		// printOutputLine("The app has not initialized properly and we don't know your userID.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral5317A01CCED93EC6A1899755A75F643AE7F2B3E2, NULL);
		// break;
		goto IL_00ec;
	}

IL_004a:
	{
		// printOutputLine("You need to be in a room with another player to report results on a rated match.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral8DFA8638FC7431EA5D6B04A7BF5D3C988A9C5639, NULL);
		// break;
		goto IL_00ec;
	}

IL_005b:
	{
		// if (ratedMatchStarted)
		bool L_3 = __this->___ratedMatchStarted_10;
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00ce;
		}
	}
	{
		// printOutputLine("Submitting rated match results.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral48BADE6D41DD866A40A32C651C57B716AE37416F, NULL);
		// Dictionary <string, int> results = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_5 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_5, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_3 = L_5;
		// results.Add(localUser.ID.ToString(), 1);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_6 = V_3;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_7 = __this->___localUser_6;
		NullCheck(L_7);
		uint64_t* L_8 = (&L_7->___ID_1);
		String_t* L_9;
		L_9 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_8, NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_6, L_9, 1, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		// results.Add(remoteUser.ID.ToString(), 2);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = V_3;
		User_t63181B96DDD1EF4D5FDBE2E12C0A1510AF51F6F4* L_11 = __this->___remoteUser_7;
		NullCheck(L_11);
		uint64_t* L_12 = (&L_11->___ID_1);
		String_t* L_13;
		L_13 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_12, NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_10, L_13, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		// Matchmaking.ReportResultsInsecure(currentRoom.ID, results).OnComplete(reportResultsResponse);
		Room_t0FE13D1487F6CC3D1F413766BECE7EA63BDFBD2C* L_14 = __this->___currentRoom_8;
		NullCheck(L_14);
		uint64_t L_15 = L_14->___ID_3;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_16 = V_3;
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_17;
		L_17 = Matchmaking_ReportResultsInsecure_mCE35E4EDF44BD0754E0902AD8B3EF630753423ED(L_15, L_16, NULL);
		Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_18 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_18, __this, (intptr_t)((void*)DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_19;
		L_19 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_17, L_18, NULL);
		goto IL_00dc;
	}

IL_00ce:
	{
		// printOutputLine("You can't report results unless you've already started a rated match");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD906C38E3D05EEE8C2F94A7E5F33BC8BDCC843E2, NULL);
	}

IL_00dc:
	{
		// break;
		goto IL_00ec;
	}

IL_00de:
	{
		// printOutputLine("You have hit an unknown state.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteral38B9AAF2DB563783CB04442A47356D730A70CBDC, NULL);
		// break;
		goto IL_00ec;
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::reportResultsResponse(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry_reportResultsResponse_m8E4F9A77B44DAAB9E3F3E1C384892C5C23C9D88A (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral959F4946E1BD750ACC2F8E6E3D57BA81F1674691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62E59118528817075980A32FDB5E9FE2406C285);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* V_1 = NULL;
	{
		// if (!msg.IsError)
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// printOutputLine("Rated match results reported. Now attempting to leave room.");
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, _stringLiteralD62E59118528817075980A32FDB5E9FE2406C285, NULL);
		// ratedMatchStarted = false;
		__this->___ratedMatchStarted_10 = (bool)0;
		// requestLeaveRoom();
		DataEntry_requestLeaveRoom_mF0AE272B375B805E71CB7C9AE6D01DB08C9913C1(__this, NULL);
		goto IL_004c;
	}

IL_002c:
	{
		// Error error = msg.GetError();
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_3 = ___msg0;
		NullCheck(L_3);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_4;
		L_4 = VirtualFuncInvoker0< Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_3);
		V_1 = L_4;
		// printOutputLine("Received reporting rated match failure: " + error.Message);
		Error_t0A46640739F2057B84B1EE6489A55DDC224935A4* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___Message_2;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral959F4946E1BD750ACC2F8E6E3D57BA81F1674691, L_6, NULL);
		DataEntry_printOutputLine_m9FD415A02E58779567C4FD109605D13BBD6F5052(__this, L_7, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.DataEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntry__ctor_mE0BA4DE25380A3E1B9589FC55F07D9B2BACB149E (DataEntry_t045DE3FEA3E4C4CDA8EBD3E546EAC03C3888FA28* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::add_UserFailedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_add_UserFailedEntitlementCheck_m486CF12215B9576734EB70390D1004B4E6301997 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::remove_UserFailedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_remove_UserFailedEntitlementCheck_m85554E7525C7B8DA0D997922F1FA0A8CD7727E0E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::add_UserPassedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_add_UserPassedEntitlementCheck_mE29C8EC8ED477E37456744683F3D3FC2431C2487 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::remove_UserPassedEntitlementCheck(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_remove_UserPassedEntitlementCheck_m354F78AECAD64C5A13DA895923CC9426BB5F5DB4 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_Start_mF8533B057EF2F20C6C514FF0ECB047BD4CA3FDD4 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (!Oculus.Platform.Core.IsInitialized())
			il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
			bool L_0;
			L_0 = Core_IsInitialized_m2A9AF05BAD7A54490ED0EE266829C5A36FB4EAA8(NULL);
			V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0017_1;
			}
		}
		{
			// Oculus.Platform.Core.Initialize();
			il2cpp_codegen_runtime_class_init_inline(Core_t272580A990CA827C27F3116C5420EB2F87FE290C_il2cpp_TypeInfo_var);
			Core_Initialize_m75C5B6CB99DCAE4BBCFF6855489A27D3F4472009((String_t*)NULL, NULL);
		}

IL_0017_1:
		{
			// Entitlements.IsUserEntitledToApplication().OnComplete(EntitlementCheckCallback);
			Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_2;
			L_2 = Entitlements_IsUserEntitledToApplication_m0991406029D4228953B4F31614C263AF1E15A1D2(NULL);
			Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D* L_3 = (Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D*)il2cpp_codegen_object_new(Callback_t9228F6822067C9E1BBEE3F816F1D26C56CB2F30D_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92(L_3, __this, (intptr_t)((void*)EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0_RuntimeMethod_var), NULL);
			NullCheck(L_2);
			Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B* L_4;
			L_4 = Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(L_2, L_3, NULL);
			goto IL_003e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{// begin catch(System.Object)
		// catch
		// HandleEntitlementCheckResult(false);
		EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919(__this, (bool)0, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003e;
	}// end catch (depth: 1)

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::EntitlementCheckCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_EntitlementCheckCallback_m9D24743D51C5F99715DCFA28C2320AD8C746D8D0 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* ___msg0, const RuntimeMethod* method) 
{
	{
		// HandleEntitlementCheckResult(msg.IsError == false);
		Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9* L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(L_0, NULL);
		EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::HandleEntitlementCheckResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck_HandleEntitlementCheckResult_mDC6CB501975F2597EDA8BDE3373C90CDAA9B5919 (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, bool ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C17994972DD214893B82640E0D675E392FC185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD3F1ADDCE85E66879EDA556C862F4E45829F83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBD08B18CC99B6FD20FDD9215C61B731F93C76A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (result) // User passed entitlement check
		bool L_0 = ___result0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.Log("Oculus user entitlement check successful.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral4EBD08B18CC99B6FD20FDD9215C61B731F93C76A, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			// if (UserPassedEntitlementCheck != null)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
			V_1 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_002c_1;
			}
		}
		{
			// UserPassedEntitlementCheck();
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserPassedEntitlementCheck_6;
			NullCheck(L_4);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		}

IL_002c_1:
		{
			goto IL_003f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_002f:
	{// begin catch(System.Object)
		// catch
		// Debug.LogError("Suppressed exception in app-provided UserPassedEntitlementCheck() event handler.");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4AFF14AE5157F3A41CA32B8CAA514AC80B16DA0)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		goto IL_009d;
	}

IL_0042:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UserFailedEntitlementCheck != null)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
			V_2 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_005d_1;
			}
		}
		{
			// UserFailedEntitlementCheck();
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ((EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_StaticFields*)il2cpp_codegen_static_fields_for(EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D_il2cpp_TypeInfo_var))->___UserFailedEntitlementCheck_5;
			NullCheck(L_7);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
		}

IL_005d_1:
		{
			goto IL_0070;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0060;
		}
		throw e;
	}

CATCH_0060:
	{// begin catch(System.Object)
		// catch
		// Debug.LogError("Suppressed exception in app-provided UserFailedEntitlementCheck() event handler.");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE188B7082D61178A7D9F7C1D16955F8CCC096ED4)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0070;
	}// end catch (depth: 1)

IL_0070:
	{
		// if (exitAppOnFailure)
		bool L_8 = __this->___exitAppOnFailure_4;
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.LogError("Oculus user entitlement check failed. Exiting now.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral2CD3F1ADDCE85E66879EDA556C862F4E45829F83, NULL);
		// UnityEngine.Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		goto IL_009c;
	}

IL_008f:
	{
		// Debug.LogError("Oculus user entitlement check failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral21C17994972DD214893B82640E0D675E392FC185, NULL);
	}

IL_009c:
	{
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.EntitlementCheck.EntitlementCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntitlementCheck__ctor_m489DC2C35D364E52A2B9FA5361A084C34C9D660D (EntitlementCheck_tB040EAF15EA94AEE91DC479969A1284415FF613D* __this, const RuntimeMethod* method) 
{
	{
		// public bool exitAppOnFailure = true;
		__this->___exitAppOnFailure_4 = (bool)1;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7FF5BB319D6F5D1AEF0959FCE61C58701A89B1EB (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
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
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m3C5E89C63BE26EAC917D88CAE81659202BFDC693_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = __this->___U3CtextStringU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_textString_mEBA4AC9D0705ED5BCD06AF1C85C40224BEE3B257_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = ___value0;
		__this->___U3CtextStringU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextStringU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m9287C52E89E08D523A5F784439133015BDAA2ADB_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, const RuntimeMethod* method) 
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = __this->___U3CpacketIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m985A5813A85F87FE99B88BFB56D47B4F0ACA276B_inline (chatPacket_t06D2436F426E2A764F8438DC1DBC8119E9938296* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CpacketIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
