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

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator
struct XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C;
// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI
struct XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1;
// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI
struct XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
struct XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD
struct XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformationMode_tA220E56CBD5D21963B86C8B7710FC9822F08B78B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A764E4251AC38D73244BF0497560A10A2A8B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D6F43F451E5A156511D4FA3F9B728127500A84D;
IL2CPP_EXTERN_C String_t* _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
IL2CPP_EXTERN_C String_t* _stringLiteral33A674C5B19A8E8CE70BB746840755D642FC6AAA;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589;
IL2CPP_EXTERN_C String_t* _stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral69E149C19EBE275A194380AED6A65C33679CF612;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C;
IL2CPP_EXTERN_C String_t* _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB505BDB3D74CEA5AF48A58F07A9848FE5F0059D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisXRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_m16D8340753559CE6BE4B1FDC8001ABA313C9F813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_mCDDFA2A82F2766BB6B04A316FBEB2F1200D0444F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m40E1B2191581E16FCBEBE5B653EFBDB8D039B797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m83C8DBC43D39A757C6346855FF0B7E8A4534C449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnCycleDevicesAction_m06D5E6B758F0962ED8DF77F44F160F2AF27CFABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnGripAction_m33135607635A751290AADD67F007A452216A56F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnKeyboardXTranslateAction_mD15F59FAAE0813CB8FB290DC92366EDEBEE17CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m1E41187896D73B09F2693D94227BB9440B43D46C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m878A205BB14E48CEF4D1323360F9B1BEC0B32BB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnManipulateHeadAction_m562653ABA3A03416C37690E25BD3D4941BF676E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnManipulateLeftAction_m4B6A407FA44F0F0D9780F2D94A23B309BBEC3832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnManipulateRightAction_m312F96E19C9256B6FA40E2A09F99540B340BBF47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnMenuAction_m06014E5810FBF8B8CB8575204F6C0B33D69F46AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnNegateModeAction_mC48377DE1D0E36F2E4DF4A61B8FD1E09081752EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnPrimaryButtonAction_mAEA274E9DE7E1EC10955EC2B4914B95C8B009F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnRestingHandAxis2DAction_mFD0FEAF0EF6E3581F7E7F420D68BFCB0047323C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnSecondaryButtonAction_m1E86508C1CC1AD1FBC2C5BBBC5B3DEDB0B07882E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnStopManipulationAction_m212983E80F4D415F2476EA74358748F5D1EB7235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleCursorLockAction_m0CD3BD8878447C011FC2A804BBF88AF03D729E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m3E2FF42E6E229E0B52D7212E98A40539D8D68942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m4425E496DDEACF85F83685BB8B0D07CB382E0676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleManipulateRightAction_m08E50EFFF01396EC2C00B78CD1BF70187B8CFB65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_mBCD407AAD41886BAEE366E3523251CD14BF222C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnTriggerAction_mBC71C10EB435D0FF5AFD68605BC8BCEBB9AA6099_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCFE5089C0337954D0C62AF0E5D911B875F5CB459 
{
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>
struct ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
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

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
struct XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::primary2DAxis
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::trigger
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::grip
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::secondary2DAxis
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					// System.UInt16 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::buttons
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::batteryLevel
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::trackingState
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::isTracked
					bool ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					bool ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::devicePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::deviceRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8__padding[63];
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
struct XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8__padding[63];
	};
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
struct XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8__padding[63];
	};
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::leftEyePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::leftEyeRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::rightEyePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::rightEyeRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::centerEyePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::centerEyeRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::trackingState
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::isTracked
					bool ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					bool ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::devicePosition
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::deviceRotation
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F__padding[117];
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F__padding[117];
	};
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F__padding[117];
	};
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator
struct XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_DeviceSimulatorActionAsset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_DeviceSimulatorActionAsset_7;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ControllerActionAsset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_ControllerActionAsset_8;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardXTranslateAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_KeyboardXTranslateAction_9;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardYTranslateAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_KeyboardYTranslateAction_10;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardZTranslateAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_KeyboardZTranslateAction_11;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulateLeftAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ManipulateLeftAction_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulateRightAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ManipulateRightAction_13;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleManipulateLeftAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleManipulateLeftAction_14;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleManipulateRightAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleManipulateRightAction_15;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleManipulateBodyAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleManipulateBodyAction_16;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulateHeadAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ManipulateHeadAction_17;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CycleDevicesAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_CycleDevicesAction_18;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_StopManipulationAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_StopManipulationAction_19;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseDeltaAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_MouseDeltaAction_20;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_MouseScrollAction_21;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RotateModeOverrideAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_RotateModeOverrideAction_22;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleMouseTransformationModeAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleMouseTransformationModeAction_23;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_NegateModeAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_NegateModeAction_24;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_XConstraintAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_XConstraintAction_25;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_YConstraintAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_YConstraintAction_26;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ZConstraintAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ZConstraintAction_27;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ResetAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ResetAction_28;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleCursorLockAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleCursorLockAction_29;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleDevicePositionTargetAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleDevicePositionTargetAction_30;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TogglePrimary2DAxisTargetAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TogglePrimary2DAxisTargetAction_31;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleSecondary2DAxisTargetAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ToggleSecondary2DAxisTargetAction_32;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Axis2DAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Axis2DAction_33;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RestingHandAxis2DAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_RestingHandAxis2DAction_34;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_GripAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_GripAction_35;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TriggerAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TriggerAction_36;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryButtonAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_PrimaryButtonAction_37;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryButtonAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_SecondaryButtonAction_38;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MenuAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_MenuAction_39;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisClickAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Primary2DAxisClickAction_40;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisClickAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Secondary2DAxisClickAction_41;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisTouchAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Primary2DAxisTouchAction_42;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisTouchAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Secondary2DAxisTouchAction_43;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryTouchAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_PrimaryTouchAction_44;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryTouchAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_SecondaryTouchAction_45;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CameraTransform_46;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardTranslateSpace
	int32_t ___m_KeyboardTranslateSpace_47;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseTranslateSpace
	int32_t ___m_MouseTranslateSpace_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardXTranslateSpeed
	float ___m_KeyboardXTranslateSpeed_49;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardYTranslateSpeed
	float ___m_KeyboardYTranslateSpeed_50;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardZTranslateSpeed
	float ___m_KeyboardZTranslateSpeed_51;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardBodyTranslateMultiplier
	float ___m_KeyboardBodyTranslateMultiplier_52;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseXTranslateSensitivity
	float ___m_MouseXTranslateSensitivity_53;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseYTranslateSensitivity
	float ___m_MouseYTranslateSensitivity_54;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollTranslateSensitivity
	float ___m_MouseScrollTranslateSensitivity_55;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseXRotateSensitivity
	float ___m_MouseXRotateSensitivity_56;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseYRotateSensitivity
	float ___m_MouseYRotateSensitivity_57;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollRotateSensitivity
	float ___m_MouseScrollRotateSensitivity_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseYRotateInvert
	bool ___m_MouseYRotateInvert_59;
	// UnityEngine.CursorLockMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_DesiredCursorLockMode
	int32_t ___m_DesiredCursorLockMode_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RemoveOtherHMDDevices
	bool ___m_RemoveOtherHMDDevices_61;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_DeviceSimulatorUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DeviceSimulatorUI_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_GripAmount
	float ___m_GripAmount_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TriggerAmount
	float ___m_TriggerAmount_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDIsTracked
	bool ___m_HMDIsTracked_65;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDTrackingState
	uint32_t ___m_HMDTrackingState_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerIsTracked
	bool ___m_LeftControllerIsTracked_67;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerTrackingState
	uint32_t ___m_LeftControllerTrackingState_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerIsTracked
	bool ___m_RightControllerIsTracked_69;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerTrackingState
	uint32_t ___m_RightControllerTrackingState_70;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<mouseTransformationMode>k__BackingField
	int32_t ___U3CmouseTransformationModeU3Ek__BackingField_71;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<negateMode>k__BackingField
	bool ___U3CnegateModeU3Ek__BackingField_72;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Axis2DTargets UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<axis2DTargets>k__BackingField
	int32_t ___U3Caxis2DTargetsU3Ek__BackingField_73;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TargetedDeviceInput
	int32_t ___m_TargetedDeviceInput_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardXTranslateInput
	float ___m_KeyboardXTranslateInput_76;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardYTranslateInput
	float ___m_KeyboardYTranslateInput_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardZTranslateInput
	float ___m_KeyboardZTranslateInput_78;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseDeltaInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MouseDeltaInput_79;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MouseScrollInput_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RotateModeOverrideInput
	bool ___m_RotateModeOverrideInput_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_XConstraintInput
	bool ___m_XConstraintInput_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_YConstraintInput
	bool ___m_YConstraintInput_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ZConstraintInput
	bool ___m_ZConstraintInput_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ResetInput
	bool ___m_ResetInput_85;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Axis2DInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Axis2DInput_86;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RestingHandAxis2DInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RestingHandAxis2DInput_87;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_GripInput
	bool ___m_GripInput_88;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TriggerInput
	bool ___m_TriggerInput_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryButtonInput
	bool ___m_PrimaryButtonInput_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryButtonInput
	bool ___m_SecondaryButtonInput_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MenuInput
	bool ___m_MenuInput_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisClickInput
	bool ___m_Primary2DAxisClickInput_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisClickInput
	bool ___m_Secondary2DAxisClickInput_94;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisTouchInput
	bool ___m_Primary2DAxisTouchInput_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisTouchInput
	bool ___m_Secondary2DAxisTouchInput_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryTouchInput
	bool ___m_PrimaryTouchInput_97;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryTouchInput
	bool ___m_SecondaryTouchInput_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulatedRestingHandAxis2D
	bool ___m_ManipulatedRestingHandAxis2D_99;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LeftControllerEuler_100;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RightControllerEuler_101;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CenterEyeEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CenterEyeEuler_102;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDState
	XRSimulatedHMDState_t9E3C40E32E5F2F862C2EC9214C289A7794DEA65F ___m_HMDState_103;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerState
	XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8 ___m_LeftControllerState_104;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerState
	XRSimulatedControllerState_t252B09A03B71DC2643A2B740881F4E3C337C94E8 ___m_RightControllerState_105;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDDevice
	XRSimulatedHMD_t7679B3251840703ACD265307EDB951D185079790* ___m_HMDDevice_106;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerDevice
	XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* ___m_LeftControllerDevice_107;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerDevice
	XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* ___m_RightControllerDevice_108;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_OnInputDeviceChangeSubscribed
	bool ___m_OnInputDeviceChangeSubscribed_109;
};

struct XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::s_LeftControllerDefaultInitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_LeftControllerDefaultInitialPosition_5;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::s_RightControllerDefaultInitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_RightControllerDefaultInitialPosition_6;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<instance>k__BackingField
	XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___U3CinstanceU3Ek__BackingField_74;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI
struct XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ControllerImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ControllerImage_4;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ControllerOverlayImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ControllerOverlayImage_5;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_PrimaryButtonImage_6;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_PrimaryButtonText_7;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_PrimaryButtonIcon_8;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_SecondaryButtonImage_9;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_SecondaryButtonText_10;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_SecondaryButtonIcon_11;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_TriggerButtonImage_12;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TriggerButtonText_13;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_TriggerButtonIcon_14;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_GripButtonImage_15;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_GripButtonText_16;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_GripButtonIcon_17;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ThumbstickButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ThumbstickButtonImage_18;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ThumbstickButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ThumbstickButtonText_19;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ThumbstickButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ThumbstickButtonIcon_20;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_MenuButtonImage_21;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_MenuButtonText_22;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_MenuButtonIcon_23;
	// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MainUIManager
	XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* ___m_MainUIManager_24;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonActivated
	bool ___m_PrimaryButtonActivated_25;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonActivated
	bool ___m_SecondaryButtonActivated_26;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerActivated
	bool ___m_TriggerActivated_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripActivated
	bool ___m_GripActivated_28;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuActivated
	bool ___m_MenuActivated_29;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_XAxisTranslateActivated
	bool ___m_XAxisTranslateActivated_30;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_YAxisTranslateActivated
	bool ___m_YAxisTranslateActivated_31;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI
struct XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_Simulator
	XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___m_Simulator_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_IsMenuOpen
	bool ___m_IsMenuOpen_8;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_XRDeviceSimulatorMainPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_XRDeviceSimulatorMainPanel_9;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_XRDeviceSimulatorCollapsedPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_XRDeviceSimulatorCollapsedPanel_10;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HmdSpriteDark
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HmdSpriteDark_11;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HmdSpriteLight
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HmdSpriteLight_12;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_KeyboardSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_KeyboardSprite_13;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_MouseSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_MouseSprite_14;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RMouseSpriteDark
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_RMouseSpriteDark_15;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RMouseSpriteLight
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_RMouseSpriteLight_16;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RMouseSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_RMouseSprite_17;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_CycleDevicesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CycleDevicesText_18;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_CurrentSelectedDeviceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CurrentSelectedDeviceText_19;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetImage_20;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetMoveButton_21;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveButtonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetMoveButtonIcon_22;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_HeadsetMoveButtonText_23;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveValueIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetMoveValueIcon_24;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_HeadsetMoveValueText_25;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetLookButton_26;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_HeadsetLookButtonText_27;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookValueIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetLookValueIcon_28;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_HeadsetLookValueText_29;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ShowCursorButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ShowCursorButton_30;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ShowCursorValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ShowCursorValueText_31;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_MouseModeButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_MouseModeButtonText_32;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_MouseModeValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_MouseModeValueText_33;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetSelectedButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_HeadsetSelectedButton_34;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetSelectedValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_HeadsetSelectedValueText_35;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ControllerSelectedButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ControllerSelectedButton_36;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ControllersSelectedValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ControllersSelectedValueText_37;
	// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_LeftController
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* ___m_LeftController_38;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_LeftControllerButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_LeftControllerButtonText_39;
	// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RightController
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* ___m_RightController_40;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RightControllerButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_RightControllerButtonText_41;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_EnabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_EnabledColor_44;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_47;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ButtonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ButtonColor_50;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DisabledButtonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledButtonColor_53;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_56;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_BackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_BackgroundColor_59;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DeviceColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DeviceColor_62;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DisabledDeviceColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledDeviceColor_65;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_XAxisActivated
	bool ___m_XAxisActivated_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ZAxisActivated
	bool ___m_ZAxisActivated_67;
};

struct XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields
{
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_EnabledColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_EnabledColorDark_42;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_EnabledColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_EnabledColorLight_43;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DisabledColorDark_45;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DisabledColorLight_46;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_ButtonColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_ButtonColorDark_48;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_ButtonColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_ButtonColorLight_49;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledButtonColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DisabledButtonColorDark_51;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledButtonColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DisabledButtonColorLight_52;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_SelectedColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_SelectedColorDark_54;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_SelectedColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_SelectedColorLight_55;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_BackgroundColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_BackgroundColorDark_57;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_BackgroundColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_BackgroundColorLight_58;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DeviceColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DeviceColorDark_60;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DeviceColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DeviceColorLight_61;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledDeviceColorDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DisabledDeviceColorDark_63;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledDeviceColorLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_DisabledDeviceColorLight_64;
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_get_Item_m20907EA946F72D55FC8BD8031EA4F9BF13AE164D_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI>()
inline XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* Component_GetComponent_TisXRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_mCDDFA2A82F2766BB6B04A316FBEB2F1200D0444F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_primaryButtonAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputAction::get_controls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>::get_Item(System.Int32)
inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A (ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* (*) (ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m20907EA946F72D55FC8BD8031EA4F9BF13AE164D_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.InputSystem.InputControl::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_secondaryButtonAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_gripAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_triggerAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_menuAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_disabledColor_mC000FAFE05980DA097DC89580B9EDFB22FE80C78 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledDeviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_disabledDeviceColor_m43DBF92FBE52AC2755AE9555D3AD677D33DA8FAA (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_axis2DAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_axis2DAction_mB6D4E7DB50DEAB354F634B5B97F4450DDF6DFDE7_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_restingHandAxis2DAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_restingHandAxis2DAction_m7A19F0EB497DEE03682C72218207BB96D0C4CCEA_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonVisuals(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Text,UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___active0, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonIcon1, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText2, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonColor(UnityEngine.UI.Image,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image0, bool ___activated1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_deviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_deviceColor_m112E6DA8155859BBD13FF31769641B057480B54D (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_enabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateDisableControllerButton(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Image,UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___active0, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___button1, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonIcon2, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_buttonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_selectedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_disabledButtonColor_m875DDF89DE23A6A769EBBBE4E9689BBBA1E5CC18 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::GetInputIcon(UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_GetInputIcon_mB9CDF23EC95E89E38BA562EEE9B9872D76088986 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputControl::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_keyboardSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_keyboardSprite_m3A43AAFB3F31DDF61E398E6C39AD06909F3B02F4_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator>()
inline XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* Component_GetComponentInParent_TisXRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_m16D8340753559CE6BE4B1FDC8001ABA313C9F813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_m425B01133D22C13F1D38B878155DDFC94406872B (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___simulator0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulateLeftAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_manipulateLeftAction_mF13D03BDD3B1691F40956156E6C00F12A381B7DF_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Unsubscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___reference0, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___performedOrCanceled1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulateRightAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_manipulateRightAction_mFD0D5FBC545703BC69919081932DBEE274EBB4AD_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleManipulateLeftAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleManipulateLeftAction_mB1AB1130B8FDB40CAB6664A3A2D75ED4475BBF14_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleManipulateRightAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleManipulateRightAction_m5808CB9748058EDC8ACF52B7B954A3BFBCFF852F_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleManipulateBodyAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleManipulateBodyAction_m70D872180AB7CDFBFE2C1730BADA0DD7806DDFE5_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulateHeadAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_manipulateHeadAction_m1948244C874F76443370EED81FD6899E4170AE04_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_cycleDevicesAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_cycleDevicesAction_m368365AAE278216A14A082948D9940AE3FC02F44_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_stopManipulationAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_stopManipulationAction_m5351720BE6385AC04E63D24A3CB1018152E67EE6_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleMouseTransformationModeAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleMouseTransformationModeAction_m8E831EA2AF126773BC928B09F5684CCEDD595FB4_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_negateModeAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_negateModeAction_m825088F34B7FDDF847F7E439CCECAA92BA82A3E0_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleCursorLockAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleCursorLockAction_mA230EB1D4709C3BFDEF7C784D8127436FFED7FFD_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_keyboardXTranslateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_keyboardXTranslateAction_m366F9B6E96C557A7B1CAB51FB10C4E2DA1692D51_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_keyboardYTranslateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_keyboardYTranslateAction_m4E77F2AAB63C5BD5C2131A852D37E7D1EFD0A377_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_keyboardZTranslateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_keyboardZTranslateAction_mBA7240AF7BF6271D5B6B0B635F041A86DB82199A_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::InitColorTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_InitColorTheme_m83254C50763AF914736363495F36A2A11593C0F3 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_mE0A53F5111B2AC5A0B2A36BE979BE21DD802F241 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSetMouseMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSetMouseMode_mEF57C0283E7FE9D7265692970D0A61619D0F06D0 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateHeadsetDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Image>(System.Boolean)
inline ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m40E1B2191581E16FCBEBE5B653EFBDB8D039B797 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Text>(System.Boolean)
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m83C8DBC43D39A757C6346855FF0B7E8A4534C449 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_backgroundColor_mF378ACE3D75AB279378BBED48C249E19154EFC8A (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_mouseTransformationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRDeviceSimulator_get_mouseTransformationMode_m4B1DA38C4DDCC9785B3B219F9A550A98E7DECEA1_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cursor_get_lockState_m99E97A23A051AA1167B9C49C3F6E8244E74531AE (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::get_device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_Initialize_m82ACC05D1F298764A40B8B1D9D56A9179EBFC363 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___simulator0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Subscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___reference0, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___performedOrCanceled1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_isMenuOpen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRDeviceSimulatorUI_get_isMenuOpen_m7BF140ABDA90813062F19E0387E03CEC3FB824FF_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_rMouseSprite_m0412C31A1AE04A801E9A246F1FBD07CAD246DE48 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_mouseSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_mouseSprite_m555D8F18EEB48C7D1FBD596960855E2C4A08FE9E_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::set_isMenuOpen(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_set_isMenuOpen_m839BAEEDE92E048CA2EF33ADEF1950C54A4B3A05_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateController(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateController_m617F507A893841B1C489A2E5129966DDC48749EB (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* ___controller0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::PushCurrentButtonState(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_PushCurrentButtonState_m44B81E41997DD79216A1268FED8E1A8CACEC9D8D (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* ___controller0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::SetAsActiveController(System.Boolean,UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___active0, XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___simulator1, bool ___isRestingHand2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::HeadDeviceSetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_HeadDeviceSetActive_m0392A433693A2558E34413A42FEBA15A6A498F8F (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_inProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnGrip_m86A43B1AE7E99FA688F86F9B74E3C3D629D854A0 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnTrigger_m815F2CDF6DBF3D5CE8AD89986DA3B4EEB07F344B (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnMenu_m85ED56869E8B75EB4D26B4D2B240FF97EF9E706E (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnPrimaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnPrimaryButton_m075B91C55B4A84AFC0D921B8786A0941948742AC (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnSecondaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnSecondaryButton_mA6BE705CCB42BD041CD2D585D25E606ACAD1FF03 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnXAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_mEF728B26A740B89F8AD987D528F1E63564B95A92 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnZAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m71730B8575DA5B161DAC1B7DFBA89B3FF190ACFA (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F (int32_t ___phase0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulatingLeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulatingRightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateBothControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateBothControllers_m1AE770B344C11718515901DAD7F2EBBD2FC16554 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateLeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateLeftController_mF17E09AD2336CD0F1E1960C354853F049828DC66 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateRightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateRightController_mB0B47BD67827B6B9544918A99F8AF64DD9DEBB45 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulatingFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538 (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnCursorLockChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnCursorLockChanged_mAC74593A9B0335BF439B40C306218C2F83005D9C (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnXAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m9ABE4BB056D160E1891409BB9199FD00A498C772 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnYAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnYAxisTranslatePerformed_mCA1B216AD5902D0070A7C66370EE80F408EAD189 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnZAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnZAxisTranslatePerformed_m82EB0AC6832C7DDB021FE98A10C3CB84A22315D5 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnGripPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnGripPerformed_m1A6210B656389E1522F1F95AE934D1426AAE8268 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnTriggerPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnTriggerPerformed_m1ECBB93FF7681376A594992C37C9181DC3F39ADE (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnMenuPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnMenuPerformed_mFC6D382875DCFA6A8F0334E689756F9DFBCED699 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnPrimaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnPrimaryButtonPerformed_m0488603E1F0A4136D6FB07B136705A4B371C05F1 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSecondaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSecondaryButtonPerformed_m8DE0AD38CD973260A8F15F08418C6687F57F97E1 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_negateMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_negateMode_m17E72AC63A85FAE5EA596F1F5CF341741E0E1ECB_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::Negate(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDeviceSimulator_Negate_mFDD855D432CF1EBB2C0CB7AF36B98D6749DCC5DE (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_Awake_mA1BF495C9EC4CE979FE6D58F1BCC3BD576CD56D0 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_mCDDFA2A82F2766BB6B04A316FBEB2F1200D0444F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MainUIManager = GetComponent<XRDeviceSimulatorUI>();
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_0;
		L_0 = Component_GetComponent_TisXRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_mCDDFA2A82F2766BB6B04A316FBEB2F1200D0444F(__this, Component_GetComponent_TisXRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_mCDDFA2A82F2766BB6B04A316FBEB2F1200D0444F_RuntimeMethod_var);
		__this->___m_MainUIManager_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MainUIManager_24), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_Initialize_m82ACC05D1F298764A40B8B1D9D56A9179EBFC363 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___simulator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_PrimaryButtonText.text = simulator.primaryButtonAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_PrimaryButtonText_7;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_1 = ___simulator0;
		NullCheck(L_1);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2;
		L_2 = XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline(L_1, NULL);
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_4;
		L_4 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_3, NULL);
		V_1 = L_4;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_5;
		L_5 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_5, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// m_SecondaryButtonText.text = simulator.secondaryButtonAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___m_SecondaryButtonText_10;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_8 = ___simulator0;
		NullCheck(L_8);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9;
		L_9 = XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline(L_8, NULL);
		NullCheck(L_9);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_9, NULL);
		NullCheck(L_10);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_11;
		L_11 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_10, NULL);
		V_1 = L_11;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_12;
		L_12 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		// m_GripButtonText.text = simulator.gripAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___m_GripButtonText_16;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_15 = ___simulator0;
		NullCheck(L_15);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_16;
		L_16 = XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline(L_15, NULL);
		NullCheck(L_16);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_16, NULL);
		NullCheck(L_17);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_18;
		L_18 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_17, NULL);
		V_1 = L_18;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_19;
		L_19 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_19, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_20);
		// m_TriggerButtonText.text = simulator.triggerAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___m_TriggerButtonText_13;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_22 = ___simulator0;
		NullCheck(L_22);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_23;
		L_23 = XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline(L_22, NULL);
		NullCheck(L_23);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_23, NULL);
		NullCheck(L_24);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_25;
		L_25 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_24, NULL);
		V_1 = L_25;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_26;
		L_26 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_26, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_27);
		// m_MenuButtonText.text = simulator.menuAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___m_MenuButtonText_22;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_29 = ___simulator0;
		NullCheck(L_29);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_30;
		L_30 = XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline(L_29, NULL);
		NullCheck(L_30);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_31;
		L_31 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_30, NULL);
		NullCheck(L_31);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_32;
		L_32 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_31, NULL);
		V_1 = L_32;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_33;
		L_33 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_33, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_34);
		// var disabledImgColor = m_MainUIManager.disabledColor;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_35 = __this->___m_MainUIManager_24;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = XRDeviceSimulatorUI_get_disabledColor_mC000FAFE05980DA097DC89580B9EDFB22FE80C78(L_35, NULL);
		V_0 = L_36;
		// m_ThumbstickButtonImage.color = disabledImgColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___m_ThumbstickButtonImage_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_0;
		NullCheck(L_37);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// m_ControllerImage.color = m_MainUIManager.disabledDeviceColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___m_ControllerImage_4;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_40 = __this->___m_MainUIManager_24;
		NullCheck(L_40);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = XRDeviceSimulatorUI_get_disabledDeviceColor_m43DBF92FBE52AC2755AE9555D3AD677D33DA8FAA(L_40, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_41);
		// m_ControllerOverlayImage.color = disabledImgColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___m_ControllerOverlayImage_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_0;
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::SetAsActiveController(System.Boolean,UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___active0, XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___simulator1, bool ___isRestingHand2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_0 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B6_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B5_0 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_1 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B7_2 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B11_0 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B12_1 = NULL;
	{
		// var controls = isRestingHand ?
		//     simulator.restingHandAxis2DAction.action.controls :
		//     simulator.axis2DAction.action.controls;
		bool L_0 = ___isRestingHand2;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_1 = ___simulator1;
		NullCheck(L_1);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2;
		L_2 = XRDeviceSimulator_get_axis2DAction_mB6D4E7DB50DEAB354F634B5B97F4450DDF6DFDE7_inline(L_1, NULL);
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_4;
		L_4 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0025;
	}

IL_0015:
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_5 = ___simulator1;
		NullCheck(L_5);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6;
		L_6 = XRDeviceSimulator_get_restingHandAxis2DAction_m7A19F0EB497DEE03682C72218207BB96D0C4CCEA_inline(L_5, NULL);
		NullCheck(L_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_6, NULL);
		NullCheck(L_7);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_8;
		L_8 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_7, NULL);
		G_B3_0 = L_8;
	}

IL_0025:
	{
		V_0 = G_B3_0;
		// m_ThumbstickButtonText.text = $"{controls[0].displayName}, {controls[1].displayName}, {controls[2].displayName}, {controls[3].displayName}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___m_ThumbstickButtonText_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_12;
		L_12 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_16;
		L_16 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), 1, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_20;
		L_20 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), 2, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_24;
		L_24 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_0), 3, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_24, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_23, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_26);
		// UpdateButtonVisuals(active, m_PrimaryButtonIcon, m_PrimaryButtonText, simulator.primaryButtonAction.action.controls[0]);
		bool L_27 = ___active0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___m_PrimaryButtonIcon_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___m_PrimaryButtonText_7;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_30 = ___simulator1;
		NullCheck(L_30);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_31;
		L_31 = XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline(L_30, NULL);
		NullCheck(L_31);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_31, NULL);
		NullCheck(L_32);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_33;
		L_33 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_32, NULL);
		V_1 = L_33;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_34;
		L_34 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26(__this, L_27, L_28, L_29, L_34, NULL);
		// UpdateButtonVisuals(active, m_SecondaryButtonIcon, m_SecondaryButtonText, simulator.secondaryButtonAction.action.controls[0]);
		bool L_35 = ___active0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = __this->___m_SecondaryButtonIcon_11;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->___m_SecondaryButtonText_10;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_38 = ___simulator1;
		NullCheck(L_38);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_39;
		L_39 = XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline(L_38, NULL);
		NullCheck(L_39);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_40;
		L_40 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_39, NULL);
		NullCheck(L_40);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_41;
		L_41 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_40, NULL);
		V_1 = L_41;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_42;
		L_42 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26(__this, L_35, L_36, L_37, L_42, NULL);
		// UpdateButtonVisuals(active, m_TriggerButtonIcon, m_TriggerButtonText, simulator.triggerAction.action.controls[0]);
		bool L_43 = ___active0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = __this->___m_TriggerButtonIcon_14;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = __this->___m_TriggerButtonText_13;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_46 = ___simulator1;
		NullCheck(L_46);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_47;
		L_47 = XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline(L_46, NULL);
		NullCheck(L_47);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_48;
		L_48 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_47, NULL);
		NullCheck(L_48);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_49;
		L_49 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_48, NULL);
		V_1 = L_49;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_50;
		L_50 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26(__this, L_43, L_44, L_45, L_50, NULL);
		// UpdateButtonVisuals(active, m_GripButtonIcon, m_GripButtonText, simulator.gripAction.action.controls[0]);
		bool L_51 = ___active0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_52 = __this->___m_GripButtonIcon_17;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53 = __this->___m_GripButtonText_16;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_54 = ___simulator1;
		NullCheck(L_54);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_55;
		L_55 = XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline(L_54, NULL);
		NullCheck(L_55);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_56;
		L_56 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_55, NULL);
		NullCheck(L_56);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_57;
		L_57 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_56, NULL);
		V_1 = L_57;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_58;
		L_58 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26(__this, L_51, L_52, L_53, L_58, NULL);
		// UpdateButtonVisuals(active, m_MenuButtonIcon, m_MenuButtonText, simulator.menuAction.action.controls[0]);
		bool L_59 = ___active0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60 = __this->___m_MenuButtonIcon_23;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_61 = __this->___m_MenuButtonText_22;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_62 = ___simulator1;
		NullCheck(L_62);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_63;
		L_63 = XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline(L_62, NULL);
		NullCheck(L_63);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_64;
		L_64 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_63, NULL);
		NullCheck(L_64);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_65;
		L_65 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_64, NULL);
		V_1 = L_65;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_66;
		L_66 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26(__this, L_59, L_60, L_61, L_66, NULL);
		// UpdateButtonVisuals(active || isRestingHand, m_ThumbstickButtonIcon, m_ThumbstickButtonText, simulator.axis2DAction.action.controls[0]);
		bool L_67 = ___active0;
		bool L_68 = ___isRestingHand2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = __this->___m_ThumbstickButtonIcon_20;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___m_ThumbstickButtonText_19;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_71 = ___simulator1;
		NullCheck(L_71);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_72;
		L_72 = XRDeviceSimulator_get_axis2DAction_mB6D4E7DB50DEAB354F634B5B97F4450DDF6DFDE7_inline(L_71, NULL);
		NullCheck(L_72);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_73;
		L_73 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_72, NULL);
		NullCheck(L_73);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_74;
		L_74 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_73, NULL);
		V_1 = L_74;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_75;
		L_75 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_1), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26(__this, (bool)((int32_t)((int32_t)L_67|(int32_t)L_68)), L_69, L_70, L_75, NULL);
		// if (active)
		bool L_76 = ___active0;
		if (!L_76)
		{
			goto IL_0248;
		}
	}
	{
		// UpdateButtonColor(m_PrimaryButtonImage, m_PrimaryButtonActivated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_77 = __this->___m_PrimaryButtonImage_6;
		bool L_78 = __this->___m_PrimaryButtonActivated_25;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_77, L_78, NULL);
		// UpdateButtonColor(m_SecondaryButtonImage, m_SecondaryButtonActivated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___m_SecondaryButtonImage_9;
		bool L_80 = __this->___m_SecondaryButtonActivated_26;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_79, L_80, NULL);
		// UpdateButtonColor(m_TriggerButtonImage, m_TriggerActivated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_81 = __this->___m_TriggerButtonImage_12;
		bool L_82 = __this->___m_TriggerActivated_27;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_81, L_82, NULL);
		// UpdateButtonColor(m_GripButtonImage, m_GripActivated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_83 = __this->___m_GripButtonImage_15;
		bool L_84 = __this->___m_GripActivated_28;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_83, L_84, NULL);
		// UpdateButtonColor(m_MenuButtonImage, m_MenuActivated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___m_MenuButtonImage_21;
		bool L_86 = __this->___m_MenuActivated_29;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_85, L_86, NULL);
		// UpdateButtonColor(m_ThumbstickButtonImage, m_XAxisTranslateActivated || m_YAxisTranslateActivated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_87 = __this->___m_ThumbstickButtonImage_18;
		bool L_88 = __this->___m_XAxisTranslateActivated_30;
		G_B5_0 = L_87;
		G_B5_1 = __this;
		if (L_88)
		{
			G_B6_0 = L_87;
			G_B6_1 = __this;
			goto IL_0215;
		}
	}
	{
		bool L_89 = __this->___m_YAxisTranslateActivated_31;
		G_B7_0 = ((int32_t)(L_89));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0216;
	}

IL_0215:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0216:
	{
		NullCheck(G_B7_2);
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(G_B7_2, G_B7_1, (bool)G_B7_0, NULL);
		// m_ControllerImage.color = m_MainUIManager.deviceColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_90 = __this->___m_ControllerImage_4;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_91 = __this->___m_MainUIManager_24;
		NullCheck(L_91);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_92;
		L_92 = XRDeviceSimulatorUI_get_deviceColor_m112E6DA8155859BBD13FF31769641B057480B54D(L_91, NULL);
		NullCheck(L_90);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_90, L_92);
		// m_ControllerOverlayImage.color = m_MainUIManager.enabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_93 = __this->___m_ControllerOverlayImage_5;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_94 = __this->___m_MainUIManager_24;
		NullCheck(L_94);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_95;
		L_95 = XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318(L_94, NULL);
		NullCheck(L_93);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_93, L_95);
		return;
	}

IL_0248:
	{
		// UpdateDisableControllerButton(m_PrimaryButtonActivated, m_PrimaryButtonImage, m_PrimaryButtonIcon, m_PrimaryButtonText);
		bool L_96 = __this->___m_PrimaryButtonActivated_25;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_97 = __this->___m_PrimaryButtonImage_6;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_98 = __this->___m_PrimaryButtonIcon_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_99 = __this->___m_PrimaryButtonText_7;
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2(__this, L_96, L_97, L_98, L_99, NULL);
		// UpdateDisableControllerButton(m_SecondaryButtonActivated, m_SecondaryButtonImage, m_SecondaryButtonIcon, m_SecondaryButtonText);
		bool L_100 = __this->___m_SecondaryButtonActivated_26;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_101 = __this->___m_SecondaryButtonImage_9;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_102 = __this->___m_SecondaryButtonIcon_11;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_103 = __this->___m_SecondaryButtonText_10;
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2(__this, L_100, L_101, L_102, L_103, NULL);
		// UpdateDisableControllerButton(m_TriggerActivated, m_TriggerButtonImage, m_TriggerButtonIcon, m_TriggerButtonText);
		bool L_104 = __this->___m_TriggerActivated_27;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_105 = __this->___m_TriggerButtonImage_12;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_106 = __this->___m_TriggerButtonIcon_14;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_107 = __this->___m_TriggerButtonText_13;
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2(__this, L_104, L_105, L_106, L_107, NULL);
		// UpdateDisableControllerButton(m_GripActivated, m_GripButtonImage, m_GripButtonIcon, m_GripButtonText);
		bool L_108 = __this->___m_GripActivated_28;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_109 = __this->___m_GripButtonImage_15;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_110 = __this->___m_GripButtonIcon_17;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_111 = __this->___m_GripButtonText_16;
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2(__this, L_108, L_109, L_110, L_111, NULL);
		// UpdateDisableControllerButton(m_MenuActivated, m_MenuButtonImage, m_MenuButtonIcon, m_MenuButtonText);
		bool L_112 = __this->___m_MenuActivated_29;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_113 = __this->___m_MenuButtonImage_21;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_114 = __this->___m_MenuButtonIcon_23;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_115 = __this->___m_MenuButtonText_22;
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2(__this, L_112, L_113, L_114, L_115, NULL);
		// if (!isRestingHand)
		bool L_116 = ___isRestingHand2;
		if (L_116)
		{
			goto IL_030c;
		}
	}
	{
		// UpdateDisableControllerButton(m_XAxisTranslateActivated || m_YAxisTranslateActivated, m_ThumbstickButtonImage, m_ThumbstickButtonIcon, m_ThumbstickButtonText);
		bool L_117 = __this->___m_XAxisTranslateActivated_30;
		G_B10_0 = __this;
		if (L_117)
		{
			G_B11_0 = __this;
			goto IL_02f2;
		}
	}
	{
		bool L_118 = __this->___m_YAxisTranslateActivated_31;
		G_B12_0 = ((int32_t)(L_118));
		G_B12_1 = G_B10_0;
		goto IL_02f3;
	}

IL_02f2:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_02f3:
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_119 = __this->___m_ThumbstickButtonImage_18;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_120 = __this->___m_ThumbstickButtonIcon_20;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_121 = __this->___m_ThumbstickButtonText_19;
		NullCheck(G_B12_1);
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2(G_B12_1, (bool)G_B12_0, L_119, L_120, L_121, NULL);
		goto IL_0322;
	}

IL_030c:
	{
		// m_ThumbstickButtonImage.color = m_MainUIManager.buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_122 = __this->___m_ThumbstickButtonImage_18;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_123 = __this->___m_MainUIManager_24;
		NullCheck(L_123);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_124;
		L_124 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(L_123, NULL);
		NullCheck(L_122);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_122, L_124);
	}

IL_0322:
	{
		// m_ControllerImage.color = m_MainUIManager.disabledDeviceColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_125 = __this->___m_ControllerImage_4;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_126 = __this->___m_MainUIManager_24;
		NullCheck(L_126);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_127;
		L_127 = XRDeviceSimulatorUI_get_disabledDeviceColor_m43DBF92FBE52AC2755AE9555D3AD677D33DA8FAA(L_126, NULL);
		NullCheck(L_125);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_125, L_127);
		// m_ControllerOverlayImage.color = m_MainUIManager.disabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_128 = __this->___m_ControllerOverlayImage_5;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_129 = __this->___m_MainUIManager_24;
		NullCheck(L_129);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_130;
		L_130 = XRDeviceSimulatorUI_get_disabledColor_mC000FAFE05980DA097DC89580B9EDFB22FE80C78(L_129, NULL);
		NullCheck(L_128);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_128, L_130);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateDisableControllerButton(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Image,UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mA5125F7A6B0E371F21B4AE2390F381542E4ADED2 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___active0, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___button1, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonIcon2, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText3, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(active)
		bool L_0 = ___active0;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// var tmpColor = m_MainUIManager.selectedColor;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_1 = __this->___m_MainUIManager_24;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(L_1, NULL);
		V_0 = L_2;
		// tmpColor.a = 0.5f;
		(&V_0)->___a_3 = (0.5f);
		// button.color = tmpColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = ___button1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// buttonText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = ___buttonText3;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// buttonIcon.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = ___buttonIcon2;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		return;
	}

IL_003c:
	{
		// button.color = m_MainUIManager.disabledButtonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = ___button1;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_10 = __this->___m_MainUIManager_24;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = XRDeviceSimulatorUI_get_disabledButtonColor_m875DDF89DE23A6A769EBBBE4E9689BBBA1E5CC18(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// buttonText.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = ___buttonText3;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// buttonIcon.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = ___buttonIcon2;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonVisuals(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Text,UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m9306235EE681ED0997D1C78182441CAB45121E26 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___active0, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonIcon1, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText2, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A764E4251AC38D73244BF0497560A10A2A8B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33A674C5B19A8E8CE70BB746840755D642FC6AAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// buttonText.gameObject.SetActive(active);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___buttonText2;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___active0;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// buttonIcon.gameObject.SetActive(active);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = ___buttonIcon1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5 = ___active0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// var color = active ? m_MainUIManager.enabledColor : m_MainUIManager.disabledColor;
		bool L_6 = ___active0;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_7 = __this->___m_MainUIManager_24;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = XRDeviceSimulatorUI_get_disabledColor_mC000FAFE05980DA097DC89580B9EDFB22FE80C78(L_7, NULL);
		G_B3_0 = L_8;
		goto IL_0033;
	}

IL_0028:
	{
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_9 = __this->___m_MainUIManager_24;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318(L_9, NULL);
		G_B3_0 = L_10;
	}

IL_0033:
	{
		V_0 = G_B3_0;
		// buttonText.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = ___buttonText2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// buttonIcon.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = ___buttonIcon1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// buttonIcon.transform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = ___buttonIcon1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		// buttonIcon.sprite = m_MainUIManager.GetInputIcon(control);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = ___buttonIcon1;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_19 = __this->___m_MainUIManager_24;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_20 = ___control3;
		NullCheck(L_19);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21;
		L_21 = XRDeviceSimulatorUI_GetInputIcon_mB9CDF23EC95E89E38BA562EEE9B9872D76088986(L_19, L_20, NULL);
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_21, NULL);
		// switch (control.name)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_22 = ___control3;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_22, NULL);
		V_1 = L_23;
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, NULL);
		if (L_25)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B, NULL);
		if (L_27)
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_00d6;
	}

IL_0089:
	{
		// buttonText.text = "L Mouse";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = ___buttonText2;
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, _stringLiteral33A674C5B19A8E8CE70BB746840755D642FC6AAA);
		// buttonIcon.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = ___buttonIcon1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// buttonIcon.transform.localScale = new Vector3(-1f, 1f, 1f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = ___buttonIcon1;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_32, L_33, NULL);
		// break;
		return;
	}

IL_00bf:
	{
		// buttonText.text = "R Mouse";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = ___buttonText2;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, _stringLiteral02A764E4251AC38D73244BF0497560A10A2A8B6A);
		// buttonIcon.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = ___buttonIcon1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
		// break;
		return;
	}

IL_00d6:
	{
		// buttonIcon.sprite = m_MainUIManager.keyboardSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = ___buttonIcon1;
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_38 = __this->___m_MainUIManager_24;
		NullCheck(L_38);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_39;
		L_39 = XRDeviceSimulatorUI_get_keyboardSprite_m3A43AAFB3F31DDF61E398E6C39AD06909F3B02F4_inline(L_38, NULL);
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_39, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonColor(UnityEngine.UI.Image,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image0, bool ___activated1, const RuntimeMethod* method) 
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	{
		// image.color = activated ? m_MainUIManager.selectedColor : m_MainUIManager.buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___image0;
		bool L_1 = ___activated1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_2 = __this->___m_MainUIManager_24;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0011:
	{
		XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* L_4 = __this->___m_MainUIManager_24;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnPrimaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnPrimaryButton_m075B91C55B4A84AFC0D921B8786A0941948742AC (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_PrimaryButtonActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_PrimaryButtonActivated_25 = L_0;
		// UpdateButtonColor(m_PrimaryButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_PrimaryButtonImage_6;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnSecondaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnSecondaryButton_mA6BE705CCB42BD041CD2D585D25E606ACAD1FF03 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_SecondaryButtonActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_SecondaryButtonActivated_26 = L_0;
		// UpdateButtonColor(m_SecondaryButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_SecondaryButtonImage_9;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnTrigger_m815F2CDF6DBF3D5CE8AD89986DA3B4EEB07F344B (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_TriggerActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_TriggerActivated_27 = L_0;
		// UpdateButtonColor(m_TriggerButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_TriggerButtonImage_12;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnGrip_m86A43B1AE7E99FA688F86F9B74E3C3D629D854A0 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_GripActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_GripActivated_28 = L_0;
		// UpdateButtonColor(m_GripButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_GripButtonImage_15;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnMenu_m85ED56869E8B75EB4D26B4D2B240FF97EF9E706E (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_MenuActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_MenuActivated_29 = L_0;
		// UpdateButtonColor(m_MenuButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_MenuButtonImage_21;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnXAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_mEF728B26A740B89F8AD987D528F1E63564B95A92 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_XAxisTranslateActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_XAxisTranslateActivated_30 = L_0;
		// UpdateButtonColor(m_ThumbstickButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_ThumbstickButtonImage_18;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnZAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m71730B8575DA5B161DAC1B7DFBA89B3FF190ACFA (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// m_YAxisTranslateActivated = activated;
		bool L_0 = ___activated0;
		__this->___m_YAxisTranslateActivated_31 = L_0;
		// UpdateButtonColor(m_ThumbstickButtonImage, activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_ThumbstickButtonImage_18;
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mB1B3D999A05CA5CDD05002FBCCB49A10482FD815(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI__ctor_mE9C2B2D1F065C804B6C091104BA6971591C85E70 (XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_isMenuOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulatorUI_get_isMenuOpen_m7BF140ABDA90813062F19E0387E03CEC3FB824FF (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// return m_IsMenuOpen;
		bool L_0 = __this->___m_IsMenuOpen_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::set_isMenuOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_set_isMenuOpen_m839BAEEDE92E048CA2EF33ADEF1950C54A4B3A05 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_IsMenuOpen = value;
		bool L_0 = ___value0;
		__this->___m_IsMenuOpen_8 = L_0;
		// }
		return;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_keyboardSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_keyboardSprite_m3A43AAFB3F31DDF61E398E6C39AD06909F3B02F4 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// internal Sprite keyboardSprite => m_KeyboardSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_KeyboardSprite_13;
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_mouseSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_mouseSprite_m555D8F18EEB48C7D1FBD596960855E2C4A08FE9E (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// internal Sprite mouseSprite => m_MouseSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_MouseSprite_14;
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSpriteDark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_rMouseSpriteDark_m313DA442C957779187A66FFFD759D526F72BCDD2 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// internal Sprite rMouseSpriteDark => m_RMouseSpriteDark;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_RMouseSpriteDark_15;
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSpriteLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_rMouseSpriteLight_mB3B29C649156EAA17AA7084017C18687E44636B0 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// internal Sprite rMouseSpriteLight => m_RMouseSpriteLight;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_RMouseSpriteLight_16;
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_rMouseSprite_m0412C31A1AE04A801E9A246F1FBD07CAD246DE48 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_RMouseSprite == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_RMouseSprite_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_RMouseSprite = m_RMouseSpriteDark;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___m_RMouseSpriteDark_15;
		__this->___m_RMouseSprite_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RMouseSprite_17), (void*)L_2);
	}

IL_001a:
	{
		// return m_RMouseSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___m_RMouseSprite_17;
		return L_3;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_enabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_EnabledColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_EnabledColor_44;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_EnabledColor = k_EnabledColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_EnabledColorDark_42;
		__this->___m_EnabledColor_44 = L_3;
	}

IL_001d:
	{
		// return m_EnabledColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_EnabledColor_44;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_disabledColor_mC000FAFE05980DA097DC89580B9EDFB22FE80C78 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DisabledColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_DisabledColor_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_DisabledColor = k_DisabledColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledColorDark_45;
		__this->___m_DisabledColor_47 = L_3;
	}

IL_001d:
	{
		// return m_DisabledColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_DisabledColor_47;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_buttonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ButtonColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_ButtonColor_50;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_ButtonColor = k_ButtonColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_ButtonColorDark_48;
		__this->___m_ButtonColor_50 = L_3;
	}

IL_001d:
	{
		// return m_ButtonColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_ButtonColor_50;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_disabledButtonColor_m875DDF89DE23A6A769EBBBE4E9689BBBA1E5CC18 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DisabledButtonColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_DisabledButtonColor_53;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_DisabledButtonColor = k_DisabledButtonColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledButtonColorDark_51;
		__this->___m_DisabledButtonColor_53 = L_3;
	}

IL_001d:
	{
		// return m_DisabledButtonColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_DisabledButtonColor_53;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_selectedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SelectedColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_SelectedColor_56;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_SelectedColor = k_SelectedColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_SelectedColorDark_54;
		__this->___m_SelectedColor_56 = L_3;
	}

IL_001d:
	{
		// return m_SelectedColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_SelectedColor_56;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_backgroundColor_mF378ACE3D75AB279378BBED48C249E19154EFC8A (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_BackgroundColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_BackgroundColor_59;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_BackgroundColor = k_BackgroundColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_BackgroundColorDark_57;
		__this->___m_BackgroundColor_59 = L_3;
	}

IL_001d:
	{
		// return m_BackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_BackgroundColor_59;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_deviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_deviceColor_m112E6DA8155859BBD13FF31769641B057480B54D (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DeviceColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_DeviceColor_62;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_DeviceColor = k_DeviceColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DeviceColorDark_60;
		__this->___m_DeviceColor_62 = L_3;
	}

IL_001d:
	{
		// return m_DeviceColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_DeviceColor_62;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledDeviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F XRDeviceSimulatorUI_get_disabledDeviceColor_m43DBF92FBE52AC2755AE9555D3AD677D33DA8FAA (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DisabledDeviceColor == Color.clear)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_DisabledDeviceColor_65;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_DisabledDeviceColor = k_DisabledDeviceColorDark;
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledDeviceColorDark_63;
		__this->___m_DisabledDeviceColor_65 = L_3;
	}

IL_001d:
	{
		// return m_DisabledDeviceColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_DisabledDeviceColor_65;
		return L_4;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Start_m739C7F6F32D7C886F60D6A5FF5E1A2912AAA550D (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisXRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_m16D8340753559CE6BE4B1FDC8001ABA313C9F813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* V_0 = NULL;
	{
		// var simulator = GetComponentInParent<XRDeviceSimulator>();
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0;
		L_0 = Component_GetComponentInParent_TisXRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_m16D8340753559CE6BE4B1FDC8001ABA313C9F813(__this, Component_GetComponentInParent_TisXRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_m16D8340753559CE6BE4B1FDC8001ABA313C9F813_RuntimeMethod_var);
		V_0 = L_0;
		// if (simulator != null)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// Initialize(simulator);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_3 = V_0;
		XRDeviceSimulatorUI_Initialize_m425B01133D22C13F1D38B878155DDFC94406872B(__this, L_3, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnDestroy_mF98E3E18D765CD201F467EE9431E8D1AC618D6E1 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnCycleDevicesAction_m06D5E6B758F0962ED8DF77F44F160F2AF27CFABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnGripAction_m33135607635A751290AADD67F007A452216A56F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardXTranslateAction_mD15F59FAAE0813CB8FB290DC92366EDEBEE17CD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m1E41187896D73B09F2693D94227BB9440B43D46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m878A205BB14E48CEF4D1323360F9B1BEC0B32BB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateHeadAction_m562653ABA3A03416C37690E25BD3D4941BF676E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateLeftAction_m4B6A407FA44F0F0D9780F2D94A23B309BBEC3832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateRightAction_m312F96E19C9256B6FA40E2A09F99540B340BBF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnMenuAction_m06014E5810FBF8B8CB8575204F6C0B33D69F46AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnNegateModeAction_mC48377DE1D0E36F2E4DF4A61B8FD1E09081752EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnPrimaryButtonAction_mAEA274E9DE7E1EC10955EC2B4914B95C8B009F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnRestingHandAxis2DAction_mFD0FEAF0EF6E3581F7E7F420D68BFCB0047323C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnSecondaryButtonAction_m1E86508C1CC1AD1FBC2C5BBBC5B3DEDB0B07882E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnStopManipulationAction_m212983E80F4D415F2476EA74358748F5D1EB7235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleCursorLockAction_m0CD3BD8878447C011FC2A804BBF88AF03D729E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m3E2FF42E6E229E0B52D7212E98A40539D8D68942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m4425E496DDEACF85F83685BB8B0D07CB382E0676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateRightAction_m08E50EFFF01396EC2C00B78CD1BF70187B8CFB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_mBCD407AAD41886BAEE366E3523251CD14BF222C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnTriggerAction_mBC71C10EB435D0FF5AFD68605BC8BCEBB9AA6099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Simulator != null)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0241;
		}
	}
	{
		// Unsubscribe(m_Simulator.manipulateLeftAction, OnManipulateLeftAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3;
		L_3 = XRDeviceSimulator_get_manipulateLeftAction_mF13D03BDD3B1691F40956156E6C00F12A381B7DF_inline(L_2, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnManipulateLeftAction_m4B6A407FA44F0F0D9780F2D94A23B309BBEC3832_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_3, L_4, NULL);
		// Unsubscribe(m_Simulator.manipulateRightAction, OnManipulateRightAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_5 = __this->___m_Simulator_4;
		NullCheck(L_5);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6;
		L_6 = XRDeviceSimulator_get_manipulateRightAction_mFD0D5FBC545703BC69919081932DBEE274EBB4AD_inline(L_5, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnManipulateRightAction_m312F96E19C9256B6FA40E2A09F99540B340BBF47_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_6, L_7, NULL);
		// Unsubscribe(m_Simulator.toggleManipulateLeftAction, OnToggleManipulateLeftAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_8 = __this->___m_Simulator_4;
		NullCheck(L_8);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_9;
		L_9 = XRDeviceSimulator_get_toggleManipulateLeftAction_mB1AB1130B8FDB40CAB6664A3A2D75ED4475BBF14_inline(L_8, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_10 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_10, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m4425E496DDEACF85F83685BB8B0D07CB382E0676_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_9, L_10, NULL);
		// Unsubscribe(m_Simulator.toggleManipulateRightAction, OnToggleManipulateRightAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_11 = __this->___m_Simulator_4;
		NullCheck(L_11);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12;
		L_12 = XRDeviceSimulator_get_toggleManipulateRightAction_m5808CB9748058EDC8ACF52B7B954A3BFBCFF852F_inline(L_11, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_13 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_13, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleManipulateRightAction_m08E50EFFF01396EC2C00B78CD1BF70187B8CFB65_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_12, L_13, NULL);
		// Unsubscribe(m_Simulator.toggleManipulateBodyAction, OnToggleManipulateBodyAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_14 = __this->___m_Simulator_4;
		NullCheck(L_14);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15;
		L_15 = XRDeviceSimulator_get_toggleManipulateBodyAction_m70D872180AB7CDFBFE2C1730BADA0DD7806DDFE5_inline(L_14, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m3E2FF42E6E229E0B52D7212E98A40539D8D68942_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_15, L_16, NULL);
		// Unsubscribe(m_Simulator.manipulateHeadAction, OnManipulateHeadAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_17 = __this->___m_Simulator_4;
		NullCheck(L_17);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_18;
		L_18 = XRDeviceSimulator_get_manipulateHeadAction_m1948244C874F76443370EED81FD6899E4170AE04_inline(L_17, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_19 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_19, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnManipulateHeadAction_m562653ABA3A03416C37690E25BD3D4941BF676E1_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_18, L_19, NULL);
		// Unsubscribe(m_Simulator.cycleDevicesAction, OnCycleDevicesAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_20 = __this->___m_Simulator_4;
		NullCheck(L_20);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_21;
		L_21 = XRDeviceSimulator_get_cycleDevicesAction_m368365AAE278216A14A082948D9940AE3FC02F44_inline(L_20, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnCycleDevicesAction_m06D5E6B758F0962ED8DF77F44F160F2AF27CFABB_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_21, L_22, NULL);
		// Unsubscribe(m_Simulator.stopManipulationAction, OnStopManipulationAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_23 = __this->___m_Simulator_4;
		NullCheck(L_23);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_24;
		L_24 = XRDeviceSimulator_get_stopManipulationAction_m5351720BE6385AC04E63D24A3CB1018152E67EE6_inline(L_23, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_25 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_25, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnStopManipulationAction_m212983E80F4D415F2476EA74358748F5D1EB7235_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_24, L_25, NULL);
		// Unsubscribe(m_Simulator.toggleMouseTransformationModeAction, OnToggleMouseTransformationModeAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_26 = __this->___m_Simulator_4;
		NullCheck(L_26);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_27;
		L_27 = XRDeviceSimulator_get_toggleMouseTransformationModeAction_m8E831EA2AF126773BC928B09F5684CCEDD595FB4_inline(L_26, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_28 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_28, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_mBCD407AAD41886BAEE366E3523251CD14BF222C7_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_27, L_28, NULL);
		// Unsubscribe(m_Simulator.negateModeAction, OnNegateModeAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_29 = __this->___m_Simulator_4;
		NullCheck(L_29);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_30;
		L_30 = XRDeviceSimulator_get_negateModeAction_m825088F34B7FDDF847F7E439CCECAA92BA82A3E0_inline(L_29, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnNegateModeAction_mC48377DE1D0E36F2E4DF4A61B8FD1E09081752EC_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_30, L_31, NULL);
		// Unsubscribe(m_Simulator.toggleCursorLockAction, OnToggleCursorLockAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_32 = __this->___m_Simulator_4;
		NullCheck(L_32);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_33;
		L_33 = XRDeviceSimulator_get_toggleCursorLockAction_mA230EB1D4709C3BFDEF7C784D8127436FFED7FFD_inline(L_32, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_34 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_34, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleCursorLockAction_m0CD3BD8878447C011FC2A804BBF88AF03D729E06_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_33, L_34, NULL);
		// Unsubscribe(m_Simulator.keyboardXTranslateAction, OnKeyboardXTranslateAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_35 = __this->___m_Simulator_4;
		NullCheck(L_35);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_36;
		L_36 = XRDeviceSimulator_get_keyboardXTranslateAction_m366F9B6E96C557A7B1CAB51FB10C4E2DA1692D51_inline(L_35, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_37 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_37, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnKeyboardXTranslateAction_mD15F59FAAE0813CB8FB290DC92366EDEBEE17CD9_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_36, L_37, NULL);
		// Unsubscribe(m_Simulator.keyboardYTranslateAction, OnKeyboardYTranslateAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_38 = __this->___m_Simulator_4;
		NullCheck(L_38);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_39;
		L_39 = XRDeviceSimulator_get_keyboardYTranslateAction_m4E77F2AAB63C5BD5C2131A852D37E7D1EFD0A377_inline(L_38, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m1E41187896D73B09F2693D94227BB9440B43D46C_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_39, L_40, NULL);
		// Unsubscribe(m_Simulator.keyboardZTranslateAction, OnKeyboardZTranslateAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_41 = __this->___m_Simulator_4;
		NullCheck(L_41);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_42;
		L_42 = XRDeviceSimulator_get_keyboardZTranslateAction_mBA7240AF7BF6271D5B6B0B635F041A86DB82199A_inline(L_41, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_43 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_43, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m878A205BB14E48CEF4D1323360F9B1BEC0B32BB3_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_42, L_43, NULL);
		// Unsubscribe(m_Simulator.restingHandAxis2DAction, OnRestingHandAxis2DAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_44 = __this->___m_Simulator_4;
		NullCheck(L_44);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_45;
		L_45 = XRDeviceSimulator_get_restingHandAxis2DAction_m7A19F0EB497DEE03682C72218207BB96D0C4CCEA_inline(L_44, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnRestingHandAxis2DAction_mFD0FEAF0EF6E3581F7E7F420D68BFCB0047323C6_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_45, L_46, NULL);
		// Unsubscribe(m_Simulator.gripAction, OnGripAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_47 = __this->___m_Simulator_4;
		NullCheck(L_47);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_48;
		L_48 = XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline(L_47, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_49 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_49, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnGripAction_m33135607635A751290AADD67F007A452216A56F7_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_48, L_49, NULL);
		// Unsubscribe(m_Simulator.triggerAction, OnTriggerAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_50 = __this->___m_Simulator_4;
		NullCheck(L_50);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_51;
		L_51 = XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline(L_50, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnTriggerAction_mBC71C10EB435D0FF5AFD68605BC8BCEBB9AA6099_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_51, L_52, NULL);
		// Unsubscribe(m_Simulator.menuAction, OnMenuAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_53 = __this->___m_Simulator_4;
		NullCheck(L_53);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_54;
		L_54 = XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline(L_53, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_55 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_55, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnMenuAction_m06014E5810FBF8B8CB8575204F6C0B33D69F46AC_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_54, L_55, NULL);
		// Unsubscribe(m_Simulator.primaryButtonAction, OnPrimaryButtonAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_56 = __this->___m_Simulator_4;
		NullCheck(L_56);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_57;
		L_57 = XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline(L_56, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_58 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_58, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnPrimaryButtonAction_mAEA274E9DE7E1EC10955EC2B4914B95C8B009F5F_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_57, L_58, NULL);
		// Unsubscribe(m_Simulator.secondaryButtonAction, OnSecondaryButtonAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_59 = __this->___m_Simulator_4;
		NullCheck(L_59);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_60;
		L_60 = XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline(L_59, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnSecondaryButtonAction_m1E86508C1CC1AD1FBC2C5BBBC5B3DEDB0B07882E_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A(L_60, L_61, NULL);
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_m425B01133D22C13F1D38B878155DDFC94406872B (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* ___simulator0, const RuntimeMethod* method) 
{
	{
		// m_Simulator = simulator;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = ___simulator0;
		__this->___m_Simulator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Simulator_4), (void*)L_0);
		// InitColorTheme();
		XRDeviceSimulatorUI_InitColorTheme_m83254C50763AF914736363495F36A2A11593C0F3(__this, NULL);
		// Initialize();
		XRDeviceSimulatorUI_Initialize_mE0A53F5111B2AC5A0B2A36BE979BE21DD802F241(__this, NULL);
		// OnSetMouseMode();
		XRDeviceSimulatorUI_OnSetMouseMode_mEF57C0283E7FE9D7265692970D0A61619D0F06D0(__this, NULL);
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::InitColorTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_InitColorTheme_m83254C50763AF914736363495F36A2A11593C0F3 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_mE0A53F5111B2AC5A0B2A36BE979BE21DD802F241 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m40E1B2191581E16FCBEBE5B653EFBDB8D039B797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m83C8DBC43D39A757C6346855FF0B7E8A4534C449_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnCycleDevicesAction_m06D5E6B758F0962ED8DF77F44F160F2AF27CFABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnGripAction_m33135607635A751290AADD67F007A452216A56F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardXTranslateAction_mD15F59FAAE0813CB8FB290DC92366EDEBEE17CD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m1E41187896D73B09F2693D94227BB9440B43D46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m878A205BB14E48CEF4D1323360F9B1BEC0B32BB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateHeadAction_m562653ABA3A03416C37690E25BD3D4941BF676E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateLeftAction_m4B6A407FA44F0F0D9780F2D94A23B309BBEC3832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateRightAction_m312F96E19C9256B6FA40E2A09F99540B340BBF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnMenuAction_m06014E5810FBF8B8CB8575204F6C0B33D69F46AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnNegateModeAction_mC48377DE1D0E36F2E4DF4A61B8FD1E09081752EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnPrimaryButtonAction_mAEA274E9DE7E1EC10955EC2B4914B95C8B009F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnRestingHandAxis2DAction_mFD0FEAF0EF6E3581F7E7F420D68BFCB0047323C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnSecondaryButtonAction_m1E86508C1CC1AD1FBC2C5BBBC5B3DEDB0B07882E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnStopManipulationAction_m212983E80F4D415F2476EA74358748F5D1EB7235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleCursorLockAction_m0CD3BD8878447C011FC2A804BBF88AF03D729E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m3E2FF42E6E229E0B52D7212E98A40539D8D68942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m4425E496DDEACF85F83685BB8B0D07CB382E0676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateRightAction_m08E50EFFF01396EC2C00B78CD1BF70187B8CFB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_mBCD407AAD41886BAEE366E3523251CD14BF222C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnTriggerAction_mBC71C10EB435D0FF5AFD68605BC8BCEBB9AA6099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6F43F451E5A156511D4FA3F9B728127500A84D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* V_2 = NULL;
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* V_5 = NULL;
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* V_6 = NULL;
	int32_t V_7 = 0;
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* V_8 = NULL;
	ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	String_t* G_B11_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B13_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B16_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B15_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B17_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B23_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B22_0 = NULL;
	String_t* G_B24_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B24_1 = NULL;
	{
		// var bckgrdAlpha = m_XRDeviceSimulatorMainPanel.GetComponent<Image>().color.a;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_XRDeviceSimulatorMainPanel_9;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.___a_3;
		V_0 = L_3;
		// foreach (var image in GetComponentsInChildren<Image>(true))
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_4;
		L_4 = Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m40E1B2191581E16FCBEBE5B653EFBDB8D039B797(__this, (bool)1, Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m40E1B2191581E16FCBEBE5B653EFBDB8D039B797_RuntimeMethod_var);
		V_6 = L_4;
		V_7 = 0;
		goto IL_0050;
	}

IL_0024:
	{
		// foreach (var image in GetComponentsInChildren<Image>(true))
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_5 = V_6;
		int32_t L_6 = V_7;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// image.color = image.sprite == null ? buttonColor : enabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8;
		NullCheck(L_9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = L_9;
		if (L_11)
		{
			G_B3_0 = L_9;
			goto IL_003f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318(__this, NULL);
		G_B4_0 = L_12;
		G_B4_1 = G_B2_0;
		goto IL_0045;
	}

IL_003f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B3_0;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
		int32_t L_14 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0050:
	{
		// foreach (var image in GetComponentsInChildren<Image>(true))
		int32_t L_15 = V_7;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_16 = V_6;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// foreach (var text in GetComponentsInChildren<Text>(true))
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_17;
		L_17 = Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m83C8DBC43D39A757C6346855FF0B7E8A4534C449(__this, (bool)1, Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m83C8DBC43D39A757C6346855FF0B7E8A4534C449_RuntimeMethod_var);
		V_8 = L_17;
		V_7 = 0;
		goto IL_007c;
	}

IL_0066:
	{
		// foreach (var text in GetComponentsInChildren<Text>(true))
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_18 = V_8;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		// text.color = enabledColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318(__this, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007c:
	{
		// foreach (var text in GetComponentsInChildren<Text>(true))
		int32_t L_24 = V_7;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_25 = V_8;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		// m_HeadsetImage.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___m_HeadsetImage_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		// var bckgrdColor = backgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = XRDeviceSimulatorUI_get_backgroundColor_mF378ACE3D75AB279378BBED48C249E19154EFC8A(__this, NULL);
		V_1 = L_28;
		// bckgrdColor.a = bckgrdAlpha;
		float L_29 = V_0;
		(&V_1)->___a_3 = L_29;
		// m_XRDeviceSimulatorMainPanel.GetComponent<Image>().color = bckgrdColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___m_XRDeviceSimulatorMainPanel_9;
		NullCheck(L_30);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31;
		L_31 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_30, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = V_1;
		NullCheck(L_31);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_32);
		// m_XRDeviceSimulatorCollapsedPanel.GetComponent<Image>().color = bckgrdColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___m_XRDeviceSimulatorCollapsedPanel_10;
		NullCheck(L_33);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34;
		L_34 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_33, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_1;
		NullCheck(L_34);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_35);
		// m_CycleDevicesText.text = m_Simulator.cycleDevicesAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___m_CycleDevicesText_18;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_37 = __this->___m_Simulator_4;
		NullCheck(L_37);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_38;
		L_38 = XRDeviceSimulator_get_cycleDevicesAction_m368365AAE278216A14A082948D9940AE3FC02F44_inline(L_37, NULL);
		NullCheck(L_38);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39;
		L_39 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_38, NULL);
		NullCheck(L_39);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_40;
		L_40 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_39, NULL);
		V_9 = L_40;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_41;
		L_41 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_41, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_42);
		// var toggleManipulateBodyActionControl = m_Simulator.toggleManipulateBodyAction.action.controls[0];
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_43 = __this->___m_Simulator_4;
		NullCheck(L_43);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_44;
		L_44 = XRDeviceSimulator_get_toggleManipulateBodyAction_m70D872180AB7CDFBFE2C1730BADA0DD7806DDFE5_inline(L_43, NULL);
		NullCheck(L_44);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45;
		L_45 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_44, NULL);
		NullCheck(L_45);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_46;
		L_46 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_45, NULL);
		V_9 = L_46;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_47;
		L_47 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		V_2 = L_47;
		// m_HeadsetSelectedValueText.text = $"{toggleManipulateBodyActionControl.displayName}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->___m_HeadsetSelectedValueText_35;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_49 = V_2;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_49, NULL);
		String_t* L_51 = L_50;
		G_B10_0 = L_51;
		G_B10_1 = L_48;
		if (L_51)
		{
			G_B11_0 = L_51;
			G_B11_1 = L_48;
			goto IL_0129;
		}
	}
	{
		G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B11_1 = G_B10_1;
	}

IL_0129:
	{
		NullCheck(G_B11_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B11_1, G_B11_0);
		// var ctrlsBinding1 = m_Simulator.axis2DAction.action.controls;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_52 = __this->___m_Simulator_4;
		NullCheck(L_52);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_53;
		L_53 = XRDeviceSimulator_get_axis2DAction_mB6D4E7DB50DEAB354F634B5B97F4450DDF6DFDE7_inline(L_52, NULL);
		NullCheck(L_53);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_54;
		L_54 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_53, NULL);
		NullCheck(L_54);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_55;
		L_55 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_54, NULL);
		V_3 = L_55;
		// var ctrlsBinding2 = m_Simulator.keyboardYTranslateAction.action.controls;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_56 = __this->___m_Simulator_4;
		NullCheck(L_56);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_57;
		L_57 = XRDeviceSimulator_get_keyboardYTranslateAction_m4E77F2AAB63C5BD5C2131A852D37E7D1EFD0A377_inline(L_56, NULL);
		NullCheck(L_57);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58;
		L_58 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_57, NULL);
		NullCheck(L_58);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_59;
		L_59 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_58, NULL);
		V_4 = L_59;
		// m_HeadsetMoveValueText.text = $"{ctrlsBinding1[0].displayName},{ctrlsBinding1[1].displayName},{ctrlsBinding1[2].displayName},{ctrlsBinding1[3].displayName} + " +
		//     $"{ctrlsBinding2[0].displayName},{ctrlsBinding2[1].displayName}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->___m_HeadsetMoveValueText_25;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_63;
		L_63 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_3), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_63, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_62;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_67;
		L_67 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_3), 1, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_67, NULL);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_68);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = L_66;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_69;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_71;
		L_71 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_3), 2, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_71, NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_72);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_72);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_70;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_73;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_75;
		L_75 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_3), 3, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_75);
		String_t* L_76;
		L_76 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_75, NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_76);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_74;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_77;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_79;
		L_79 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_4), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_79);
		String_t* L_80;
		L_80 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_79, NULL);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_80);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_80);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_78;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_81;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_83;
		L_83 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_4), 1, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_83);
		String_t* L_84;
		L_84 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_83, NULL);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_84);
		String_t* L_85;
		L_85 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_82, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_85);
		// m_ShowCursorValueText.text = m_Simulator.toggleCursorLockAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_86 = __this->___m_ShowCursorValueText_31;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_87 = __this->___m_Simulator_4;
		NullCheck(L_87);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_88;
		L_88 = XRDeviceSimulator_get_toggleCursorLockAction_mA230EB1D4709C3BFDEF7C784D8127436FFED7FFD_inline(L_87, NULL);
		NullCheck(L_88);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_89;
		L_89 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_88, NULL);
		NullCheck(L_89);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_90;
		L_90 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_89, NULL);
		V_9 = L_90;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_91;
		L_91 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_91);
		String_t* L_92;
		L_92 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_91, NULL);
		NullCheck(L_86);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_86, L_92);
		// m_HeadsetLookButtonText.text = m_Simulator.mouseTransformationMode == XRDeviceSimulator.TransformationMode.Translate ? k_TranslateLookText : k_RotateLookText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_93 = __this->___m_HeadsetLookButtonText_27;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_94 = __this->___m_Simulator_4;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = XRDeviceSimulator_get_mouseTransformationMode_m4B1DA38C4DDCC9785B3B219F9A550A98E7DECEA1_inline(L_94, NULL);
		G_B12_0 = L_93;
		if (!L_95)
		{
			G_B13_0 = L_93;
			goto IL_0245;
		}
	}
	{
		G_B14_0 = _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
		G_B14_1 = G_B12_0;
		goto IL_024a;
	}

IL_0245:
	{
		G_B14_0 = _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
		G_B14_1 = G_B13_0;
	}

IL_024a:
	{
		NullCheck(G_B14_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B14_1, G_B14_0);
		// m_MouseModeValueText.text = m_Simulator.toggleMouseTransformationModeAction.action.controls[0].displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_96 = __this->___m_MouseModeValueText_33;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_97 = __this->___m_Simulator_4;
		NullCheck(L_97);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_98;
		L_98 = XRDeviceSimulator_get_toggleMouseTransformationModeAction_m8E831EA2AF126773BC928B09F5684CCEDD595FB4_inline(L_97, NULL);
		NullCheck(L_98);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_99;
		L_99 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_98, NULL);
		NullCheck(L_99);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_100;
		L_100 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_99, NULL);
		V_9 = L_100;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_101;
		L_101 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_101);
		String_t* L_102;
		L_102 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_101, NULL);
		NullCheck(L_96);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_96, L_102);
		// m_ShowCursorButton.color = Cursor.lockState == CursorLockMode.Locked ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_103 = __this->___m_ShowCursorButton_30;
		int32_t L_104;
		L_104 = Cursor_get_lockState_m99E97A23A051AA1167B9C49C3F6E8244E74531AE(NULL);
		G_B15_0 = L_103;
		if ((((int32_t)L_104) == ((int32_t)1)))
		{
			G_B16_0 = L_103;
			goto IL_0294;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_105;
		L_105 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B17_0 = L_105;
		G_B17_1 = G_B15_0;
		goto IL_029a;
	}

IL_0294:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_106;
		L_106 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B17_0 = L_106;
		G_B17_1 = G_B16_0;
	}

IL_029a:
	{
		NullCheck(G_B17_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B17_1, G_B17_0);
		// var manipulateHeadActionControl = m_Simulator.manipulateHeadAction.action.controls[0];
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_107 = __this->___m_Simulator_4;
		NullCheck(L_107);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_108;
		L_108 = XRDeviceSimulator_get_manipulateHeadAction_m1948244C874F76443370EED81FD6899E4170AE04_inline(L_107, NULL);
		NullCheck(L_108);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_109;
		L_109 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_108, NULL);
		NullCheck(L_109);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_110;
		L_110 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_109, NULL);
		V_9 = L_110;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_111;
		L_111 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		V_5 = L_111;
		// m_HeadsetLookValueIcon.sprite = GetInputIcon(manipulateHeadActionControl);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_112 = __this->___m_HeadsetLookValueIcon_28;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_113 = V_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_114;
		L_114 = XRDeviceSimulatorUI_GetInputIcon_mB9CDF23EC95E89E38BA562EEE9B9872D76088986(__this, L_113, NULL);
		NullCheck(L_112);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_112, L_114, NULL);
		// if (manipulateHeadActionControl.name.Equals("leftButton") ||  manipulateHeadActionControl.name.Equals("rightButton"))
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_115 = V_5;
		NullCheck(L_115);
		String_t* L_116;
		L_116 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_115, NULL);
		NullCheck(L_116);
		bool L_117;
		L_117 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_116, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, NULL);
		if (L_117)
		{
			goto IL_02f9;
		}
	}
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_118 = V_5;
		NullCheck(L_118);
		String_t* L_119;
		L_119 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_118, NULL);
		NullCheck(L_119);
		bool L_120;
		L_120 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_119, _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B, NULL);
		if (!L_120)
		{
			goto IL_0340;
		}
	}

IL_02f9:
	{
		// m_HeadsetLookValueIcon.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_121 = __this->___m_HeadsetLookValueIcon_28;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_122;
		L_122 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_121);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_121, L_122);
		// if (manipulateHeadActionControl.name.Equals("leftButton"))
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_123 = V_5;
		NullCheck(L_123);
		String_t* L_124;
		L_124 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_123, NULL);
		NullCheck(L_124);
		bool L_125;
		L_125 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_124, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, NULL);
		if (!L_125)
		{
			goto IL_0340;
		}
	}
	{
		// m_HeadsetLookValueIcon.transform.localScale = new Vector3(-1f, 1f, 1f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_126 = __this->___m_HeadsetLookValueIcon_28;
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_126, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_128), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_127);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_127, L_128, NULL);
	}

IL_0340:
	{
		// m_HeadsetLookValueText.text = manipulateHeadActionControl.device.name == k_MouseDeviceType ? k_MouseDeviceType : manipulateHeadActionControl.displayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_129 = __this->___m_HeadsetLookValueText_29;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_130 = V_5;
		NullCheck(L_130);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_131;
		L_131 = InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline(L_130, NULL);
		NullCheck(L_131);
		String_t* L_132;
		L_132 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_131, NULL);
		bool L_133;
		L_133 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_132, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, NULL);
		G_B22_0 = L_129;
		if (L_133)
		{
			G_B23_0 = L_129;
			goto IL_0367;
		}
	}
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_134 = V_5;
		NullCheck(L_134);
		String_t* L_135;
		L_135 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_134, NULL);
		G_B24_0 = L_135;
		G_B24_1 = G_B22_0;
		goto IL_036c;
	}

IL_0367:
	{
		G_B24_0 = _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
		G_B24_1 = G_B23_0;
	}

IL_036c:
	{
		NullCheck(G_B24_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B24_1, G_B24_0);
		// m_LeftController.Initialize(m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_136 = __this->___m_LeftController_38;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_137 = __this->___m_Simulator_4;
		NullCheck(L_136);
		XRDeviceSimulatorControllerUI_Initialize_m82ACC05D1F298764A40B8B1D9D56A9179EBFC363(L_136, L_137, NULL);
		// m_LeftControllerButtonText.text = $"{m_Simulator.toggleManipulateLeftAction.action.controls[0].displayName} / {m_Simulator.manipulateLeftAction.action.controls[0].displayName} [Hold]";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_138 = __this->___m_LeftControllerButtonText_39;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_139 = __this->___m_Simulator_4;
		NullCheck(L_139);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_140;
		L_140 = XRDeviceSimulator_get_toggleManipulateLeftAction_mB1AB1130B8FDB40CAB6664A3A2D75ED4475BBF14_inline(L_139, NULL);
		NullCheck(L_140);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_141;
		L_141 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_140, NULL);
		NullCheck(L_141);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_142;
		L_142 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_141, NULL);
		V_9 = L_142;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_143;
		L_143 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_143);
		String_t* L_144;
		L_144 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_143, NULL);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_145 = __this->___m_Simulator_4;
		NullCheck(L_145);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_146;
		L_146 = XRDeviceSimulator_get_manipulateLeftAction_mF13D03BDD3B1691F40956156E6C00F12A381B7DF_inline(L_145, NULL);
		NullCheck(L_146);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_147;
		L_147 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_146, NULL);
		NullCheck(L_147);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_148;
		L_148 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_147, NULL);
		V_9 = L_148;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_149;
		L_149 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_149);
		String_t* L_150;
		L_150 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_149, NULL);
		String_t* L_151;
		L_151 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_144, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_150, _stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05, NULL);
		NullCheck(L_138);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_138, L_151);
		// m_RightController.Initialize(m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_152 = __this->___m_RightController_40;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_153 = __this->___m_Simulator_4;
		NullCheck(L_152);
		XRDeviceSimulatorControllerUI_Initialize_m82ACC05D1F298764A40B8B1D9D56A9179EBFC363(L_152, L_153, NULL);
		// m_RightControllerButtonText.text = $"{m_Simulator.toggleManipulateRightAction.action.controls[0].displayName} / {m_Simulator.manipulateRightAction.action.controls[0].displayName} [Hold]";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_154 = __this->___m_RightControllerButtonText_41;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_155 = __this->___m_Simulator_4;
		NullCheck(L_155);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_156;
		L_156 = XRDeviceSimulator_get_toggleManipulateRightAction_m5808CB9748058EDC8ACF52B7B954A3BFBCFF852F_inline(L_155, NULL);
		NullCheck(L_156);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_157;
		L_157 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_156, NULL);
		NullCheck(L_157);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_158;
		L_158 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_157, NULL);
		V_9 = L_158;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_159;
		L_159 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_159);
		String_t* L_160;
		L_160 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_159, NULL);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_161 = __this->___m_Simulator_4;
		NullCheck(L_161);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_162;
		L_162 = XRDeviceSimulator_get_manipulateRightAction_mFD0D5FBC545703BC69919081932DBEE274EBB4AD_inline(L_161, NULL);
		NullCheck(L_162);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_163;
		L_163 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_162, NULL);
		NullCheck(L_163);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_164;
		L_164 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_163, NULL);
		V_9 = L_164;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_165;
		L_165 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_165);
		String_t* L_166;
		L_166 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_165, NULL);
		String_t* L_167;
		L_167 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_160, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_166, _stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05, NULL);
		NullCheck(L_154);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_154, L_167);
		// m_ControllersSelectedValueText.text =
		//     $"{m_Simulator.toggleManipulateLeftAction.action.controls[0].displayName}, {m_Simulator.toggleManipulateRightAction.action.controls[0].displayName} [Toggle]";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_168 = __this->___m_ControllersSelectedValueText_37;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_169 = __this->___m_Simulator_4;
		NullCheck(L_169);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_170;
		L_170 = XRDeviceSimulator_get_toggleManipulateLeftAction_mB1AB1130B8FDB40CAB6664A3A2D75ED4475BBF14_inline(L_169, NULL);
		NullCheck(L_170);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_171;
		L_171 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_170, NULL);
		NullCheck(L_171);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_172;
		L_172 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_171, NULL);
		V_9 = L_172;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_173;
		L_173 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_173);
		String_t* L_174;
		L_174 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_173, NULL);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_175 = __this->___m_Simulator_4;
		NullCheck(L_175);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_176;
		L_176 = XRDeviceSimulator_get_toggleManipulateRightAction_m5808CB9748058EDC8ACF52B7B954A3BFBCFF852F_inline(L_175, NULL);
		NullCheck(L_176);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_177;
		L_177 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_176, NULL);
		NullCheck(L_177);
		ReadOnlyArray_1_tA1DF7A256AD2BF17FB155224CB2611ED215EFCD3 L_178;
		L_178 = InputAction_get_controls_mC677AD1ABF680C5D2175E704FFAF0C6C3A86FE82(L_177, NULL);
		V_9 = L_178;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_179;
		L_179 = ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A((&V_9), 0, ReadOnlyArray_1_get_Item_mF7217A9697E8EAA3A574FCDCB611597EC9C1836A_RuntimeMethod_var);
		NullCheck(L_179);
		String_t* L_180;
		L_180 = InputControl_get_displayName_m9F6CBDDD6B25EC0E25BEE1DD51105667F0BA9A23(L_179, NULL);
		String_t* L_181;
		L_181 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_174, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_180, _stringLiteral0D6F43F451E5A156511D4FA3F9B728127500A84D, NULL);
		NullCheck(L_168);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_168, L_181);
		// m_HeadsetMoveButtonIcon.color = enabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_182 = __this->___m_HeadsetMoveButtonIcon_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_183;
		L_183 = XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318(__this, NULL);
		NullCheck(L_182);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_182, L_183);
		// Subscribe(m_Simulator.manipulateLeftAction, OnManipulateLeftAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_184 = __this->___m_Simulator_4;
		NullCheck(L_184);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_185;
		L_185 = XRDeviceSimulator_get_manipulateLeftAction_mF13D03BDD3B1691F40956156E6C00F12A381B7DF_inline(L_184, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_186 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_186);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_186, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnManipulateLeftAction_m4B6A407FA44F0F0D9780F2D94A23B309BBEC3832_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_185, L_186, NULL);
		// Subscribe(m_Simulator.manipulateRightAction, OnManipulateRightAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_187 = __this->___m_Simulator_4;
		NullCheck(L_187);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_188;
		L_188 = XRDeviceSimulator_get_manipulateRightAction_mFD0D5FBC545703BC69919081932DBEE274EBB4AD_inline(L_187, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_189 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_189);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_189, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnManipulateRightAction_m312F96E19C9256B6FA40E2A09F99540B340BBF47_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_188, L_189, NULL);
		// Subscribe(m_Simulator.toggleManipulateLeftAction, OnToggleManipulateLeftAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_190 = __this->___m_Simulator_4;
		NullCheck(L_190);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_191;
		L_191 = XRDeviceSimulator_get_toggleManipulateLeftAction_mB1AB1130B8FDB40CAB6664A3A2D75ED4475BBF14_inline(L_190, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_192 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_192);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_192, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m4425E496DDEACF85F83685BB8B0D07CB382E0676_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_191, L_192, NULL);
		// Subscribe(m_Simulator.toggleManipulateRightAction, OnToggleManipulateRightAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_193 = __this->___m_Simulator_4;
		NullCheck(L_193);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_194;
		L_194 = XRDeviceSimulator_get_toggleManipulateRightAction_m5808CB9748058EDC8ACF52B7B954A3BFBCFF852F_inline(L_193, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_195 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_195);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_195, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleManipulateRightAction_m08E50EFFF01396EC2C00B78CD1BF70187B8CFB65_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_194, L_195, NULL);
		// Subscribe(m_Simulator.toggleManipulateBodyAction, OnToggleManipulateBodyAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_196 = __this->___m_Simulator_4;
		NullCheck(L_196);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_197;
		L_197 = XRDeviceSimulator_get_toggleManipulateBodyAction_m70D872180AB7CDFBFE2C1730BADA0DD7806DDFE5_inline(L_196, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_198 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_198);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_198, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m3E2FF42E6E229E0B52D7212E98A40539D8D68942_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_197, L_198, NULL);
		// Subscribe(m_Simulator.manipulateHeadAction, OnManipulateHeadAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_199 = __this->___m_Simulator_4;
		NullCheck(L_199);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_200;
		L_200 = XRDeviceSimulator_get_manipulateHeadAction_m1948244C874F76443370EED81FD6899E4170AE04_inline(L_199, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_201 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_201);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_201, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnManipulateHeadAction_m562653ABA3A03416C37690E25BD3D4941BF676E1_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_200, L_201, NULL);
		// Subscribe(m_Simulator.cycleDevicesAction, OnCycleDevicesAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_202 = __this->___m_Simulator_4;
		NullCheck(L_202);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_203;
		L_203 = XRDeviceSimulator_get_cycleDevicesAction_m368365AAE278216A14A082948D9940AE3FC02F44_inline(L_202, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_204 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_204);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_204, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnCycleDevicesAction_m06D5E6B758F0962ED8DF77F44F160F2AF27CFABB_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_203, L_204, NULL);
		// Subscribe(m_Simulator.stopManipulationAction, OnStopManipulationAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_205 = __this->___m_Simulator_4;
		NullCheck(L_205);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_206;
		L_206 = XRDeviceSimulator_get_stopManipulationAction_m5351720BE6385AC04E63D24A3CB1018152E67EE6_inline(L_205, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_207 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_207);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_207, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnStopManipulationAction_m212983E80F4D415F2476EA74358748F5D1EB7235_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_206, L_207, NULL);
		// Subscribe(m_Simulator.toggleMouseTransformationModeAction, OnToggleMouseTransformationModeAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_208 = __this->___m_Simulator_4;
		NullCheck(L_208);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_209;
		L_209 = XRDeviceSimulator_get_toggleMouseTransformationModeAction_m8E831EA2AF126773BC928B09F5684CCEDD595FB4_inline(L_208, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_210 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_210);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_210, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_mBCD407AAD41886BAEE366E3523251CD14BF222C7_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_209, L_210, NULL);
		// Subscribe(m_Simulator.negateModeAction, OnNegateModeAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_211 = __this->___m_Simulator_4;
		NullCheck(L_211);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_212;
		L_212 = XRDeviceSimulator_get_negateModeAction_m825088F34B7FDDF847F7E439CCECAA92BA82A3E0_inline(L_211, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_213 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_213);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_213, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnNegateModeAction_mC48377DE1D0E36F2E4DF4A61B8FD1E09081752EC_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_212, L_213, NULL);
		// Subscribe(m_Simulator.toggleCursorLockAction, OnToggleCursorLockAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_214 = __this->___m_Simulator_4;
		NullCheck(L_214);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_215;
		L_215 = XRDeviceSimulator_get_toggleCursorLockAction_mA230EB1D4709C3BFDEF7C784D8127436FFED7FFD_inline(L_214, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_216 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_216);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_216, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnToggleCursorLockAction_m0CD3BD8878447C011FC2A804BBF88AF03D729E06_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_215, L_216, NULL);
		// Subscribe(m_Simulator.keyboardXTranslateAction, OnKeyboardXTranslateAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_217 = __this->___m_Simulator_4;
		NullCheck(L_217);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_218;
		L_218 = XRDeviceSimulator_get_keyboardXTranslateAction_m366F9B6E96C557A7B1CAB51FB10C4E2DA1692D51_inline(L_217, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_219 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_219);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_219, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnKeyboardXTranslateAction_mD15F59FAAE0813CB8FB290DC92366EDEBEE17CD9_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_218, L_219, NULL);
		// Subscribe(m_Simulator.keyboardYTranslateAction, OnKeyboardYTranslateAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_220 = __this->___m_Simulator_4;
		NullCheck(L_220);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_221;
		L_221 = XRDeviceSimulator_get_keyboardYTranslateAction_m4E77F2AAB63C5BD5C2131A852D37E7D1EFD0A377_inline(L_220, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_222 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_222);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_222, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m1E41187896D73B09F2693D94227BB9440B43D46C_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_221, L_222, NULL);
		// Subscribe(m_Simulator.keyboardZTranslateAction, OnKeyboardZTranslateAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_223 = __this->___m_Simulator_4;
		NullCheck(L_223);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_224;
		L_224 = XRDeviceSimulator_get_keyboardZTranslateAction_mBA7240AF7BF6271D5B6B0B635F041A86DB82199A_inline(L_223, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_225 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_225);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_225, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m878A205BB14E48CEF4D1323360F9B1BEC0B32BB3_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_224, L_225, NULL);
		// Subscribe(m_Simulator.restingHandAxis2DAction, OnRestingHandAxis2DAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_226 = __this->___m_Simulator_4;
		NullCheck(L_226);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_227;
		L_227 = XRDeviceSimulator_get_restingHandAxis2DAction_m7A19F0EB497DEE03682C72218207BB96D0C4CCEA_inline(L_226, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_228 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_228);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_228, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnRestingHandAxis2DAction_mFD0FEAF0EF6E3581F7E7F420D68BFCB0047323C6_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_227, L_228, NULL);
		// Subscribe(m_Simulator.gripAction, OnGripAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_229 = __this->___m_Simulator_4;
		NullCheck(L_229);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_230;
		L_230 = XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline(L_229, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_231 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_231);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_231, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnGripAction_m33135607635A751290AADD67F007A452216A56F7_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_230, L_231, NULL);
		// Subscribe(m_Simulator.triggerAction, OnTriggerAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_232 = __this->___m_Simulator_4;
		NullCheck(L_232);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_233;
		L_233 = XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline(L_232, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_234 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_234);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_234, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnTriggerAction_mBC71C10EB435D0FF5AFD68605BC8BCEBB9AA6099_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_233, L_234, NULL);
		// Subscribe(m_Simulator.menuAction, OnMenuAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_235 = __this->___m_Simulator_4;
		NullCheck(L_235);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_236;
		L_236 = XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline(L_235, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_237 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_237);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_237, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnMenuAction_m06014E5810FBF8B8CB8575204F6C0B33D69F46AC_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_236, L_237, NULL);
		// Subscribe(m_Simulator.primaryButtonAction, OnPrimaryButtonAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_238 = __this->___m_Simulator_4;
		NullCheck(L_238);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_239;
		L_239 = XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline(L_238, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_240 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_240);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_240, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnPrimaryButtonAction_mAEA274E9DE7E1EC10955EC2B4914B95C8B009F5F_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_239, L_240, NULL);
		// Subscribe(m_Simulator.secondaryButtonAction, OnSecondaryButtonAction);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_241 = __this->___m_Simulator_4;
		NullCheck(L_241);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_242;
		L_242 = XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline(L_241, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_243 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_243);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_243, __this, (intptr_t)((void*)XRDeviceSimulatorUI_OnSecondaryButtonAction_m1E86508C1CC1AD1FBC2C5BBBC5B3DEDB0B07882E_RuntimeMethod_var), NULL);
		XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA(L_242, L_243, NULL);
		// m_XRDeviceSimulatorMainPanel.SetActive(isMenuOpen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_244 = __this->___m_XRDeviceSimulatorMainPanel_9;
		bool L_245;
		L_245 = XRDeviceSimulatorUI_get_isMenuOpen_m7BF140ABDA90813062F19E0387E03CEC3FB824FF_inline(__this, NULL);
		NullCheck(L_244);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_244, L_245, NULL);
		// m_XRDeviceSimulatorCollapsedPanel.SetActive(!isMenuOpen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246 = __this->___m_XRDeviceSimulatorCollapsedPanel_10;
		bool L_247;
		L_247 = XRDeviceSimulatorUI_get_isMenuOpen_m7BF140ABDA90813062F19E0387E03CEC3FB824FF_inline(__this, NULL);
		NullCheck(L_246);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_246, (bool)((((int32_t)L_247) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::GetInputIcon(UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_GetInputIcon_mB9CDF23EC95E89E38BA562EEE9B9872D76088986 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (control == null)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = ___control0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
	}

IL_0005:
	{
		// var icon = keyboardSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = XRDeviceSimulatorUI_get_keyboardSprite_m3A43AAFB3F31DDF61E398E6C39AD06909F3B02F4_inline(__this, NULL);
		V_0 = L_1;
		// if (control.device.name == k_MouseDeviceType)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_2 = ___control0;
		NullCheck(L_2);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3;
		L_3 = InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// switch (control.name)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_6 = ___control0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_6, NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}

IL_0044:
	{
		// icon = rMouseSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = XRDeviceSimulatorUI_get_rMouseSprite_m0412C31A1AE04A801E9A246F1FBD07CAD246DE48(__this, NULL);
		V_0 = L_12;
		// break;
		goto IL_0054;
	}

IL_004d:
	{
		// icon = mouseSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13;
		L_13 = XRDeviceSimulatorUI_get_mouseSprite_m555D8F18EEB48C7D1FBD596960855E2C4A08FE9E_inline(__this, NULL);
		V_0 = L_13;
	}

IL_0054:
	{
		// return icon;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = V_0;
		return L_14;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnClickCloseSimulatorUIPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnClickCloseSimulatorUIPanel_mCC552AA6E8926EF7CA0F5D3509D6C778492A8893 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// isMenuOpen = false;
		XRDeviceSimulatorUI_set_isMenuOpen_m839BAEEDE92E048CA2EF33ADEF1950C54A4B3A05_inline(__this, (bool)0, NULL);
		// m_XRDeviceSimulatorMainPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_XRDeviceSimulatorMainPanel_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m_XRDeviceSimulatorCollapsedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_XRDeviceSimulatorCollapsedPanel_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnClickOpenSimulatorUIPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnClickOpenSimulatorUIPanel_m32AF47151801F8D282AE1889FCC8320AE0C72513 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// isMenuOpen = true;
		XRDeviceSimulatorUI_set_isMenuOpen_m839BAEEDE92E048CA2EF33ADEF1950C54A4B3A05_inline(__this, (bool)1, NULL);
		// m_XRDeviceSimulatorMainPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_XRDeviceSimulatorMainPanel_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// m_XRDeviceSimulatorCollapsedPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_XRDeviceSimulatorCollapsedPanel_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateLeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateLeftController_mF17E09AD2336CD0F1E1960C354853F049828DC66 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentSelectedDeviceText.text = "Left Controller";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_CurrentSelectedDeviceText_19;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD);
		// OnActivateController(m_LeftController);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_1 = __this->___m_LeftController_38;
		XRDeviceSimulatorUI_OnActivateController_m617F507A893841B1C489A2E5129966DDC48749EB(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateRightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateRightController_mB0B47BD67827B6B9544918A99F8AF64DD9DEBB45 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentSelectedDeviceText.text = "Right Controller";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_CurrentSelectedDeviceText_19;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C);
		// OnActivateController(m_RightController);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_1 = __this->___m_RightController_40;
		XRDeviceSimulatorUI_OnActivateController_m617F507A893841B1C489A2E5129966DDC48749EB(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateController(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateController_m617F507A893841B1C489A2E5129966DDC48749EB (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B3_0 = NULL;
	{
		// PushCurrentButtonState(controller);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_0 = ___controller0;
		XRDeviceSimulatorUI_PushCurrentButtonState_m44B81E41997DD79216A1268FED8E1A8CACEC9D8D(__this, L_0, NULL);
		// controller.SetAsActiveController(true, m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_1 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_1);
		XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C(L_1, (bool)1, L_2, (bool)0, NULL);
		// var other = controller == m_LeftController ? m_RightController : m_LeftController;
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_3 = ___controller0;
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_4 = __this->___m_LeftController_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_6 = __this->___m_LeftController_38;
		G_B3_0 = L_6;
		goto IL_0031;
	}

IL_002b:
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_7 = __this->___m_RightController_40;
		G_B3_0 = L_7;
	}

IL_0031:
	{
		// other.SetAsActiveController(false, m_Simulator, true);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_8 = __this->___m_Simulator_4;
		NullCheck(G_B3_0);
		XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C(G_B3_0, (bool)0, L_8, (bool)1, NULL);
		// m_HeadsetImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___m_HeadsetImage_20;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// HeadDeviceSetActive(false);
		XRDeviceSimulatorUI_HeadDeviceSetActive_m0392A433693A2558E34413A42FEBA15A6A498F8F(__this, (bool)0, NULL);
		// m_ControllerSelectedButton.color = selectedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___m_ControllerSelectedButton_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateBothControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateBothControllers_m1AE770B344C11718515901DAD7F2EBBD2FC16554 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E149C19EBE275A194380AED6A65C33679CF612);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentSelectedDeviceText.text = "Left & Right Controllers";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_CurrentSelectedDeviceText_19;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral69E149C19EBE275A194380AED6A65C33679CF612);
		// PushCurrentButtonState(m_LeftController);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_1 = __this->___m_LeftController_38;
		XRDeviceSimulatorUI_PushCurrentButtonState_m44B81E41997DD79216A1268FED8E1A8CACEC9D8D(__this, L_1, NULL);
		// PushCurrentButtonState(m_RightController);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_RightController_40;
		XRDeviceSimulatorUI_PushCurrentButtonState_m44B81E41997DD79216A1268FED8E1A8CACEC9D8D(__this, L_2, NULL);
		// m_LeftController.SetAsActiveController(true, m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_3 = __this->___m_LeftController_38;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C(L_3, (bool)1, L_4, (bool)0, NULL);
		// m_RightController.SetAsActiveController(true, m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_5 = __this->___m_RightController_40;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_6 = __this->___m_Simulator_4;
		NullCheck(L_5);
		XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C(L_5, (bool)1, L_6, (bool)0, NULL);
		// m_HeadsetImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___m_HeadsetImage_20;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// HeadDeviceSetActive(false);
		XRDeviceSimulatorUI_HeadDeviceSetActive_m0392A433693A2558E34413A42FEBA15A6A498F8F(__this, (bool)0, NULL);
		// m_ControllerSelectedButton.color = selectedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___m_ControllerSelectedButton_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::PushCurrentButtonState(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_PushCurrentButtonState_m44B81E41997DD79216A1268FED8E1A8CACEC9D8D (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* ___controller0, const RuntimeMethod* method) 
{
	{
		// controller.OnGrip(m_Simulator.gripAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_0 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_1 = __this->___m_Simulator_4;
		NullCheck(L_1);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2;
		L_2 = XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline(L_1, NULL);
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_3, NULL);
		NullCheck(L_0);
		XRDeviceSimulatorControllerUI_OnGrip_m86A43B1AE7E99FA688F86F9B74E3C3D629D854A0(L_0, L_4, NULL);
		// controller.OnTrigger(m_Simulator.triggerAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_5 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_6 = __this->___m_Simulator_4;
		NullCheck(L_6);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_7;
		L_7 = XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline(L_6, NULL);
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_8, NULL);
		NullCheck(L_5);
		XRDeviceSimulatorControllerUI_OnTrigger_m815F2CDF6DBF3D5CE8AD89986DA3B4EEB07F344B(L_5, L_9, NULL);
		// controller.OnMenu(m_Simulator.menuAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_10 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_11 = __this->___m_Simulator_4;
		NullCheck(L_11);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12;
		L_12 = XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline(L_11, NULL);
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_13, NULL);
		NullCheck(L_10);
		XRDeviceSimulatorControllerUI_OnMenu_m85ED56869E8B75EB4D26B4D2B240FF97EF9E706E(L_10, L_14, NULL);
		// controller.OnPrimaryButton(m_Simulator.primaryButtonAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_15 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_16 = __this->___m_Simulator_4;
		NullCheck(L_16);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_17;
		L_17 = XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline(L_16, NULL);
		NullCheck(L_17);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_17, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_18, NULL);
		NullCheck(L_15);
		XRDeviceSimulatorControllerUI_OnPrimaryButton_m075B91C55B4A84AFC0D921B8786A0941948742AC(L_15, L_19, NULL);
		// controller.OnSecondaryButton(m_Simulator.secondaryButtonAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_20 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_21 = __this->___m_Simulator_4;
		NullCheck(L_21);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_22;
		L_22 = XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline(L_21, NULL);
		NullCheck(L_22);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_22, NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_23, NULL);
		NullCheck(L_20);
		XRDeviceSimulatorControllerUI_OnSecondaryButton_mA6BE705CCB42BD041CD2D585D25E606ACAD1FF03(L_20, L_24, NULL);
		// controller.OnXAxisTranslatePerformed(m_Simulator.keyboardXTranslateAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_25 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_26 = __this->___m_Simulator_4;
		NullCheck(L_26);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_27;
		L_27 = XRDeviceSimulator_get_keyboardXTranslateAction_m366F9B6E96C557A7B1CAB51FB10C4E2DA1692D51_inline(L_26, NULL);
		NullCheck(L_27);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_27, NULL);
		NullCheck(L_28);
		bool L_29;
		L_29 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_28, NULL);
		NullCheck(L_25);
		XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_mEF728B26A740B89F8AD987D528F1E63564B95A92(L_25, L_29, NULL);
		// controller.OnZAxisTranslatePerformed(m_Simulator.keyboardZTranslateAction.action.inProgress);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_30 = ___controller0;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_31 = __this->___m_Simulator_4;
		NullCheck(L_31);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_32;
		L_32 = XRDeviceSimulator_get_keyboardZTranslateAction_mBA7240AF7BF6271D5B6B0B635F041A86DB82199A_inline(L_31, NULL);
		NullCheck(L_32);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33;
		L_33 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_32, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = InputAction_get_inProgress_mB377612C6CA96C5E96C5D0434DDD7078A4DA740E(L_33, NULL);
		NullCheck(L_30);
		XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m71730B8575DA5B161DAC1B7DFBA89B3FF190ACFA(L_30, L_34, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateHeadsetDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB505BDB3D74CEA5AF48A58F07A9848FE5F0059D);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// m_LeftController.SetAsActiveController(false, m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_0 = __this->___m_LeftController_38;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_1 = __this->___m_Simulator_4;
		NullCheck(L_0);
		XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C(L_0, (bool)0, L_1, (bool)0, NULL);
		// m_RightController.SetAsActiveController(false, m_Simulator);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_RightController_40;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_3 = __this->___m_Simulator_4;
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_SetAsActiveController_m1550E62F7727558E451C7E260C3769AA2E33E56C(L_2, (bool)0, L_3, (bool)0, NULL);
		// m_CurrentSelectedDeviceText.text = activated ? "Head Mounted Display (HMD)" : "None";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___m_CurrentSelectedDeviceText_19;
		bool L_5 = ___activated0;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0036;
		}
	}
	{
		G_B3_0 = _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0036:
	{
		G_B3_0 = _stringLiteralEB505BDB3D74CEA5AF48A58F07A9848FE5F0059D;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// m_HeadsetImage.gameObject.SetActive(activated);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___m_HeadsetImage_20;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		bool L_8 = ___activated0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
		// HeadDeviceSetActive(activated);
		bool L_9 = ___activated0;
		XRDeviceSimulatorUI_HeadDeviceSetActive_m0392A433693A2558E34413A42FEBA15A6A498F8F(__this, L_9, NULL);
		// m_ControllerSelectedButton.color = buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___m_ControllerSelectedButton_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::HeadDeviceSetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_HeadDeviceSetActive_m0392A433693A2558E34413A42FEBA15A6A498F8F (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___active0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B8_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B9_1 = NULL;
	{
		// m_HeadsetSelectedButton.color = active ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_HeadsetSelectedButton_34;
		bool L_1 = ___active0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// var currentColor = active ? enabledColor : disabledColor;
		bool L_4 = ___active0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = XRDeviceSimulatorUI_get_disabledColor_mC000FAFE05980DA097DC89580B9EDFB22FE80C78(__this, NULL);
		G_B6_0 = L_5;
		goto IL_002d;
	}

IL_0027:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = XRDeviceSimulatorUI_get_enabledColor_mB975913853742DC6B1CF8A6BDB1A12C28FE37318(__this, NULL);
		G_B6_0 = L_6;
	}

IL_002d:
	{
		V_0 = G_B6_0;
		// m_HeadsetMoveButtonIcon.color = currentColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___m_HeadsetMoveButtonIcon_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// m_HeadsetMoveButtonText.color = currentColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___m_HeadsetMoveButtonText_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// m_HeadsetMoveValueIcon.color = currentColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___m_HeadsetMoveValueIcon_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// m_HeadsetMoveValueText.color = currentColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___m_HeadsetMoveValueText_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// m_HeadsetMoveButton.color = active ? buttonColor : disabledButtonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___m_HeadsetMoveButton_21;
		bool L_16 = ___active0;
		G_B7_0 = L_15;
		if (L_16)
		{
			G_B8_0 = L_15;
			goto IL_006f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = XRDeviceSimulatorUI_get_disabledButtonColor_m875DDF89DE23A6A769EBBBE4E9689BBBA1E5CC18(__this, NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B7_0;
		goto IL_0075;
	}

IL_006f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B9_0 = L_18;
		G_B9_1 = G_B8_0;
	}

IL_0075:
	{
		NullCheck(G_B9_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B9_1, G_B9_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Subscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Subscribe_m353BC8898DEF0F1F7F9204A5CBC7F4AF072F46CA (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___reference0, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___performedOrCanceled1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B3_0 = NULL;
	{
		// var action = reference != null ? reference.action : null;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___reference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___reference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// if (action != null && performedOrCanceled != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5 = ___performedOrCanceled1;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// action.performed += performedOrCanceled;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = ___performedOrCanceled1;
		NullCheck(L_6);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_6, L_7, NULL);
		// action.canceled += performedOrCanceled;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_9 = ___performedOrCanceled1;
		NullCheck(L_8);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_8, L_9, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Unsubscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Unsubscribe_mE5D7C6EEBD44F3E3784D30C83727F75DB2BB066A (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___reference0, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___performedOrCanceled1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B3_0 = NULL;
	{
		// var action = reference != null ? reference.action : null;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___reference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___reference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// if (action != null && performedOrCanceled != null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5 = ___performedOrCanceled1;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// action.performed -= performedOrCanceled;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = ___performedOrCanceled1;
		NullCheck(L_6);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_6, L_7, NULL);
		// action.canceled -= performedOrCanceled;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_9 = ___performedOrCanceled1;
		NullCheck(L_8);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_8, L_9, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnManipulateLeftAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnManipulateLeftAction_m4B6A407FA44F0F0D9780F2D94A23B309BBEC3832 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// if (m_Simulator.manipulatingLeftController && m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// OnActivateBothControllers();
		XRDeviceSimulatorUI_OnActivateBothControllers_m1AE770B344C11718515901DAD7F2EBBD2FC16554(__this, NULL);
		return;
	}

IL_002f:
	{
		// else if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_6 = __this->___m_Simulator_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_mF17E09AD2336CD0F1E1960C354853F049828DC66(__this, NULL);
		return;
	}

IL_0043:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_8 = __this->___m_Simulator_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_8, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mB0B47BD67827B6B9544918A99F8AF64DD9DEBB45(__this, NULL);
		return;
	}

IL_0057:
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_10 = __this->___m_Simulator_4;
		NullCheck(L_10);
		bool L_11;
		L_11 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_10, NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, L_11, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnManipulateRightAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnManipulateRightAction_m312F96E19C9256B6FA40E2A09F99540B340BBF47 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// if (m_Simulator.manipulatingLeftController && m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// OnActivateBothControllers();
		XRDeviceSimulatorUI_OnActivateBothControllers_m1AE770B344C11718515901DAD7F2EBBD2FC16554(__this, NULL);
		return;
	}

IL_002f:
	{
		// else if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_6 = __this->___m_Simulator_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mB0B47BD67827B6B9544918A99F8AF64DD9DEBB45(__this, NULL);
		return;
	}

IL_0043:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_8 = __this->___m_Simulator_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_8, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_mF17E09AD2336CD0F1E1960C354853F049828DC66(__this, NULL);
		return;
	}

IL_0057:
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_10 = __this->___m_Simulator_4;
		NullCheck(L_10);
		bool L_11;
		L_11 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_10, NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, L_11, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleManipulateLeftAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m4425E496DDEACF85F83685BB8B0D07CB382E0676 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_mF17E09AD2336CD0F1E1960C354853F049828DC66(__this, NULL);
		return;
	}

IL_0022:
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleManipulateRightAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleManipulateRightAction_m08E50EFFF01396EC2C00B78CD1BF70187B8CFB65 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mB0B47BD67827B6B9544918A99F8AF64DD9DEBB45(__this, NULL);
		return;
	}

IL_0022:
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleManipulateBodyAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m3E2FF42E6E229E0B52D7212E98A40539D8D68942 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, (bool)1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnManipulateHeadAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnManipulateHeadAction_m562653ABA3A03416C37690E25BD3D4941BF676E1 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B10_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B9_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B11_1 = NULL;
	{
		// var isInProgress = context.phase.IsInProgress();
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		V_0 = L_1;
		// var noControllers = !m_Simulator.manipulatingLeftController && !m_Simulator.manipulatingRightController;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B3_0;
		// if (isInProgress)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (m_Simulator.manipulatingFPS || noControllers)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_7 = __this->___m_Simulator_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_7, NULL);
		bool L_9 = V_1;
		if (!((int32_t)((int32_t)L_8|(int32_t)L_9)))
		{
			goto IL_005b;
		}
	}
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, (bool)1, NULL);
		goto IL_005b;
	}

IL_0047:
	{
		// else if (noControllers)
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_11 = __this->___m_Simulator_4;
		NullCheck(L_11);
		bool L_12;
		L_12 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_11, NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, L_12, NULL);
	}

IL_005b:
	{
		// m_HeadsetImage.gameObject.SetActive(isInProgress || noControllers);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___m_HeadsetImage_20;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		bool L_15 = V_0;
		bool L_16 = V_1;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)((int32_t)((int32_t)L_15|(int32_t)L_16)), NULL);
		// m_HeadsetLookButton.color = isInProgress ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___m_HeadsetLookButton_26;
		bool L_18 = V_0;
		G_B9_0 = L_17;
		if (L_18)
		{
			G_B10_0 = L_17;
			goto IL_007f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B11_0 = L_19;
		G_B11_1 = G_B9_0;
		goto IL_0085;
	}

IL_007f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B11_0 = L_20;
		G_B11_1 = G_B10_0;
	}

IL_0085:
	{
		NullCheck(G_B11_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B11_1, G_B11_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnCycleDevicesAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnCycleDevicesAction_m06D5E6B758F0962ED8DF77F44F160F2AF27CFABB (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, (bool)1, NULL);
	}

IL_0022:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_mF17E09AD2336CD0F1E1960C354853F049828DC66(__this, NULL);
	}

IL_0035:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_6 = __this->___m_Simulator_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mB0B47BD67827B6B9544918A99F8AF64DD9DEBB45(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnStopManipulationAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnStopManipulationAction_m212983E80F4D415F2476EA74358748F5D1EB7235 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_2 = __this->___m_Simulator_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_2, NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m10763B4667D62E69C21E889D1227DD11C78AE071(__this, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleMouseTransformationModeAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_mBCD407AAD41886BAEE366E3523251CD14BF222C7 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// OnSetMouseMode();
		XRDeviceSimulatorUI_OnSetMouseMode_mEF57C0283E7FE9D7265692970D0A61619D0F06D0(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnNegateModeAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnNegateModeAction_mC48377DE1D0E36F2E4DF4A61B8FD1E09081752EC (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnSetMouseMode();
		XRDeviceSimulatorUI_OnSetMouseMode_mEF57C0283E7FE9D7265692970D0A61619D0F06D0(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleCursorLockAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleCursorLockAction_m0CD3BD8878447C011FC2A804BBF88AF03D729E06 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// OnCursorLockChanged();
		XRDeviceSimulatorUI_OnCursorLockChanged_mAC74593A9B0335BF439B40C306218C2F83005D9C(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnKeyboardXTranslateAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnKeyboardXTranslateAction_mD15F59FAAE0813CB8FB290DC92366EDEBEE17CD9 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnXAxisTranslatePerformed(context.phase.IsInProgress(), false);
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m9ABE4BB056D160E1891409BB9199FD00A498C772(__this, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnKeyboardYTranslateAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m1E41187896D73B09F2693D94227BB9440B43D46C (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnYAxisTranslatePerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnYAxisTranslatePerformed_mCA1B216AD5902D0070A7C66370EE80F408EAD189(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnKeyboardZTranslateAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m878A205BB14E48CEF4D1323360F9B1BEC0B32BB3 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnZAxisTranslatePerformed(context.phase.IsInProgress(), false);
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnZAxisTranslatePerformed_m82EB0AC6832C7DDB021FE98A10C3CB84A22315D5(__this, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnRestingHandAxis2DAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnRestingHandAxis2DAction_mFD0FEAF0EF6E3581F7E7F420D68BFCB0047323C6 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var restingHandAxis2DInput = Vector2.ClampMagnitude(context.ReadValue<Vector2>(), 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830((&___context0), CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_0, (1.0f), NULL);
		V_0 = L_1;
		// if (context.phase.IsInProgress())
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// if (restingHandAxis2DInput.x != 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0035;
		}
	}
	{
		// OnXAxisTranslatePerformed(true, true);
		XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m9ABE4BB056D160E1891409BB9199FD00A498C772(__this, (bool)1, (bool)1, NULL);
	}

IL_0035:
	{
		// if (restingHandAxis2DInput.y != 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0075;
		}
	}
	{
		// OnZAxisTranslatePerformed(true, true);
		XRDeviceSimulatorUI_OnZAxisTranslatePerformed_m82EB0AC6832C7DDB021FE98A10C3CB84A22315D5(__this, (bool)1, (bool)1, NULL);
		return;
	}

IL_004b:
	{
		// if (restingHandAxis2DInput.x == 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// OnXAxisTranslatePerformed(false, true);
		XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m9ABE4BB056D160E1891409BB9199FD00A498C772(__this, (bool)0, (bool)1, NULL);
	}

IL_0060:
	{
		// if (restingHandAxis2DInput.y == 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		// OnZAxisTranslatePerformed(false, true);
		XRDeviceSimulatorUI_OnZAxisTranslatePerformed_m82EB0AC6832C7DDB021FE98A10C3CB84A22315D5(__this, (bool)0, (bool)1, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnGripAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnGripAction_m33135607635A751290AADD67F007A452216A56F7 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnGripPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnGripPerformed_m1A6210B656389E1522F1F95AE934D1426AAE8268(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnTriggerAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnTriggerAction_mBC71C10EB435D0FF5AFD68605BC8BCEBB9AA6099 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnTriggerPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnTriggerPerformed_m1ECBB93FF7681376A594992C37C9181DC3F39ADE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnMenuAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnMenuAction_m06014E5810FBF8B8CB8575204F6C0B33D69F46AC (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnMenuPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnMenuPerformed_mFC6D382875DCFA6A8F0334E689756F9DFBCED699(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnPrimaryButtonAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnPrimaryButtonAction_mAEA274E9DE7E1EC10955EC2B4914B95C8B009F5F (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnPrimaryButtonPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnPrimaryButtonPerformed_m0488603E1F0A4136D6FB07B136705A4B371C05F1(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSecondaryButtonAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSecondaryButtonAction_m1E86508C1CC1AD1FBC2C5BBBC5B3DEDB0B07882E (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// OnSecondaryButtonPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___context0), NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_m37300A7A5E1CB6A168453B66EE234EA43530544F(L_0, NULL);
		XRDeviceSimulatorUI_OnSecondaryButtonPerformed_m8DE0AD38CD973260A8F15F08418C6687F57F97E1(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSetMouseMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSetMouseMode_mEF57C0283E7FE9D7265692970D0A61619D0F06D0 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformationMode_tA220E56CBD5D21963B86C8B7710FC9822F08B78B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	{
		// m_MouseModeButtonText.text = m_Simulator.negateMode
		//     ? XRDeviceSimulator.Negate(m_Simulator.mouseTransformationMode).ToString()
		//     : m_Simulator.mouseTransformationMode.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_MouseModeButtonText_32;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_1 = __this->___m_Simulator_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = XRDeviceSimulator_get_negateMode_m17E72AC63A85FAE5EA596F1F5CF341741E0E1ECB_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_002e;
		}
	}
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_3 = __this->___m_Simulator_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XRDeviceSimulator_get_mouseTransformationMode_m4B1DA38C4DDCC9785B3B219F9A550A98E7DECEA1_inline(L_3, NULL);
		V_0 = L_4;
		Il2CppFakeBox<int32_t> L_5(TransformationMode_tA220E56CBD5D21963B86C8B7710FC9822F08B78B_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_004c;
	}

IL_002e:
	{
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_7 = __this->___m_Simulator_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = XRDeviceSimulator_get_mouseTransformationMode_m4B1DA38C4DDCC9785B3B219F9A550A98E7DECEA1_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = XRDeviceSimulator_Negate_mFDD855D432CF1EBB2C0CB7AF36B98D6749DCC5DE(L_8, NULL);
		V_0 = L_9;
		Il2CppFakeBox<int32_t> L_10(TransformationMode_tA220E56CBD5D21963B86C8B7710FC9822F08B78B_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_004c:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// m_HeadsetLookButtonText.text =
		//     m_Simulator.mouseTransformationMode == XRDeviceSimulator.TransformationMode.Translate
		//         ? k_TranslateLookText
		//         : k_RotateLookText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___m_HeadsetLookButtonText_27;
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_13 = __this->___m_Simulator_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = XRDeviceSimulator_get_mouseTransformationMode_m4B1DA38C4DDCC9785B3B219F9A550A98E7DECEA1_inline(L_13, NULL);
		G_B4_0 = L_12;
		if (!L_14)
		{
			G_B5_0 = L_12;
			goto IL_006b;
		}
	}
	{
		G_B6_0 = _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
		G_B6_1 = G_B4_0;
		goto IL_0070;
	}

IL_006b:
	{
		G_B6_0 = _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
		G_B6_1 = G_B5_0;
	}

IL_0070:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnCursorLockChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnCursorLockChanged_mAC74593A9B0335BF439B40C306218C2F83005D9C (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	{
		// m_ShowCursorButton.color = Cursor.lockState == CursorLockMode.Locked ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_ShowCursorButton_30;
		int32_t L_1;
		L_1 = Cursor_get_lockState_m99E97A23A051AA1167B9C49C3F6E8244E74531AE(NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0016:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnXAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m9ABE4BB056D160E1891409BB9199FD00A498C772 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B6_0 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B11_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B15_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B14_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B16_1 = NULL;
	{
		// var active = activated;
		bool L_0 = ___activated0;
		V_0 = L_0;
		// if (!restingHand)
		bool L_1 = ___restingHand1;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// m_XAxisActivated = activated;
		bool L_2 = ___activated0;
		__this->___m_XAxisActivated_66 = L_2;
		// active |= m_ZAxisActivated;
		bool L_3 = V_0;
		bool L_4 = __this->___m_ZAxisActivated_67;
		V_0 = (bool)((int32_t)((int32_t)L_3|(int32_t)L_4));
	}

IL_0015:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_5 = __this->___m_Simulator_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_5, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// var lController = restingHand ? m_RightController : m_LeftController;
		bool L_7 = ___restingHand1;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_8 = __this->___m_LeftController_38;
		G_B6_0 = L_8;
		goto IL_0033;
	}

IL_002d:
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_9 = __this->___m_RightController_40;
		G_B6_0 = L_9;
	}

IL_0033:
	{
		// lController.OnXAxisTranslatePerformed(active);
		bool L_10 = V_0;
		NullCheck(G_B6_0);
		XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_mEF728B26A740B89F8AD987D528F1E63564B95A92(G_B6_0, L_10, NULL);
	}

IL_0039:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_11 = __this->___m_Simulator_4;
		NullCheck(L_11);
		bool L_12;
		L_12 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_11, NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// var rController = restingHand ? m_LeftController : m_RightController;
		bool L_13 = ___restingHand1;
		if (L_13)
		{
			goto IL_0051;
		}
	}
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_14 = __this->___m_RightController_40;
		G_B11_0 = L_14;
		goto IL_0057;
	}

IL_0051:
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_15 = __this->___m_LeftController_38;
		G_B11_0 = L_15;
	}

IL_0057:
	{
		// rController.OnXAxisTranslatePerformed(active);
		bool L_16 = V_0;
		NullCheck(G_B11_0);
		XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_mEF728B26A740B89F8AD987D528F1E63564B95A92(G_B11_0, L_16, NULL);
	}

IL_005d:
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_17 = __this->___m_Simulator_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_17, NULL);
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		// m_HeadsetMoveButton.color = active ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___m_HeadsetMoveButton_21;
		bool L_20 = V_0;
		G_B14_0 = L_19;
		if (L_20)
		{
			G_B15_0 = L_19;
			goto IL_007b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B16_0 = L_21;
		G_B16_1 = G_B14_0;
		goto IL_0081;
	}

IL_007b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B16_0 = L_22;
		G_B16_1 = G_B15_0;
	}

IL_0081:
	{
		NullCheck(G_B16_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B16_1, G_B16_0);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnYAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnYAxisTranslatePerformed_mCA1B216AD5902D0070A7C66370EE80F408EAD189 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// m_HeadsetMoveButton.color = activated ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___m_HeadsetMoveButton_21;
		bool L_3 = ___activated0;
		G_B2_0 = L_2;
		if (L_3)
		{
			G_B3_0 = L_2;
			goto IL_001e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_001e:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnZAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnZAxisTranslatePerformed_m82EB0AC6832C7DDB021FE98A10C3CB84A22315D5 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B6_0 = NULL;
	XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* G_B11_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B15_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B14_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B16_1 = NULL;
	{
		// var active = activated;
		bool L_0 = ___activated0;
		V_0 = L_0;
		// if (!restingHand)
		bool L_1 = ___restingHand1;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// m_ZAxisActivated = activated;
		bool L_2 = ___activated0;
		__this->___m_ZAxisActivated_67 = L_2;
		// active |= m_XAxisActivated;
		bool L_3 = V_0;
		bool L_4 = __this->___m_XAxisActivated_66;
		V_0 = (bool)((int32_t)((int32_t)L_3|(int32_t)L_4));
	}

IL_0015:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_5 = __this->___m_Simulator_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_5, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// var lController = restingHand ? m_RightController : m_LeftController;
		bool L_7 = ___restingHand1;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_8 = __this->___m_LeftController_38;
		G_B6_0 = L_8;
		goto IL_0033;
	}

IL_002d:
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_9 = __this->___m_RightController_40;
		G_B6_0 = L_9;
	}

IL_0033:
	{
		// lController.OnZAxisTranslatePerformed(active);
		bool L_10 = V_0;
		NullCheck(G_B6_0);
		XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m71730B8575DA5B161DAC1B7DFBA89B3FF190ACFA(G_B6_0, L_10, NULL);
	}

IL_0039:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_11 = __this->___m_Simulator_4;
		NullCheck(L_11);
		bool L_12;
		L_12 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_11, NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// var rController = restingHand ? m_LeftController : m_RightController;
		bool L_13 = ___restingHand1;
		if (L_13)
		{
			goto IL_0051;
		}
	}
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_14 = __this->___m_RightController_40;
		G_B11_0 = L_14;
		goto IL_0057;
	}

IL_0051:
	{
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_15 = __this->___m_LeftController_38;
		G_B11_0 = L_15;
	}

IL_0057:
	{
		// rController.OnZAxisTranslatePerformed(active);
		bool L_16 = V_0;
		NullCheck(G_B11_0);
		XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m71730B8575DA5B161DAC1B7DFBA89B3FF190ACFA(G_B11_0, L_16, NULL);
	}

IL_005d:
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_17 = __this->___m_Simulator_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = XRDeviceSimulator_get_manipulatingFPS_m0CB8A7D646CD2555D1ACB067E5EAD000247F6538(L_17, NULL);
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		// m_HeadsetMoveButton.color = active ? selectedColor : buttonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___m_HeadsetMoveButton_21;
		bool L_20 = V_0;
		G_B14_0 = L_19;
		if (L_20)
		{
			G_B15_0 = L_19;
			goto IL_007b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = XRDeviceSimulatorUI_get_buttonColor_m9AB451B5FA796E3E6FA1FD994567E972D15D06E9(__this, NULL);
		G_B16_0 = L_21;
		G_B16_1 = G_B14_0;
		goto IL_0081;
	}

IL_007b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = XRDeviceSimulatorUI_get_selectedColor_m1A0333F7892987F43D726871D74A1A979CF16F7E(__this, NULL);
		G_B16_0 = L_22;
		G_B16_1 = G_B15_0;
	}

IL_0081:
	{
		NullCheck(G_B16_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B16_1, G_B16_0);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnMenuPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnMenuPerformed_mFC6D382875DCFA6A8F0334E689756F9DFBCED699 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_LeftController.OnMenu(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_LeftController_38;
		bool L_3 = ___activated0;
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_OnMenu_m85ED56869E8B75EB4D26B4D2B240FF97EF9E706E(L_2, L_3, NULL);
	}

IL_0019:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// m_RightController.OnMenu(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_6 = __this->___m_RightController_40;
		bool L_7 = ___activated0;
		NullCheck(L_6);
		XRDeviceSimulatorControllerUI_OnMenu_m85ED56869E8B75EB4D26B4D2B240FF97EF9E706E(L_6, L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnGripPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnGripPerformed_m1A6210B656389E1522F1F95AE934D1426AAE8268 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_LeftController.OnGrip(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_LeftController_38;
		bool L_3 = ___activated0;
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_OnGrip_m86A43B1AE7E99FA688F86F9B74E3C3D629D854A0(L_2, L_3, NULL);
	}

IL_0019:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// m_RightController.OnGrip(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_6 = __this->___m_RightController_40;
		bool L_7 = ___activated0;
		NullCheck(L_6);
		XRDeviceSimulatorControllerUI_OnGrip_m86A43B1AE7E99FA688F86F9B74E3C3D629D854A0(L_6, L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnTriggerPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnTriggerPerformed_m1ECBB93FF7681376A594992C37C9181DC3F39ADE (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_LeftController.OnTrigger(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_LeftController_38;
		bool L_3 = ___activated0;
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_OnTrigger_m815F2CDF6DBF3D5CE8AD89986DA3B4EEB07F344B(L_2, L_3, NULL);
	}

IL_0019:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// m_RightController.OnTrigger(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_6 = __this->___m_RightController_40;
		bool L_7 = ___activated0;
		NullCheck(L_6);
		XRDeviceSimulatorControllerUI_OnTrigger_m815F2CDF6DBF3D5CE8AD89986DA3B4EEB07F344B(L_6, L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnPrimaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnPrimaryButtonPerformed_m0488603E1F0A4136D6FB07B136705A4B371C05F1 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_LeftController.OnPrimaryButton(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_LeftController_38;
		bool L_3 = ___activated0;
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_OnPrimaryButton_m075B91C55B4A84AFC0D921B8786A0941948742AC(L_2, L_3, NULL);
	}

IL_0019:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// m_RightController.OnPrimaryButton(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_6 = __this->___m_RightController_40;
		bool L_7 = ___activated0;
		NullCheck(L_6);
		XRDeviceSimulatorControllerUI_OnPrimaryButton_m075B91C55B4A84AFC0D921B8786A0941948742AC(L_6, L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSecondaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSecondaryButtonPerformed_m8DE0AD38CD973260A8F15F08418C6687F57F97E1 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___activated0, const RuntimeMethod* method) 
{
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_0 = __this->___m_Simulator_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_mDE369FF689CAEC81BCE740D039A1C3BD7345099D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_LeftController.OnSecondaryButton(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_2 = __this->___m_LeftController_38;
		bool L_3 = ___activated0;
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_OnSecondaryButton_mA6BE705CCB42BD041CD2D585D25E606ACAD1FF03(L_2, L_3, NULL);
	}

IL_0019:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* L_4 = __this->___m_Simulator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_m3FC1D042D7E978DF8D9D902E0EBFF820B611D28E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// m_RightController.OnSecondaryButton(activated);
		XRDeviceSimulatorControllerUI_t9748C4B40D05E0409282C9AA2921E78339D0D0B1* L_6 = __this->___m_RightController_40;
		bool L_7 = ___activated0;
		NullCheck(L_6);
		XRDeviceSimulatorControllerUI_OnSecondaryButton_mA6BE705CCB42BD041CD2D585D25E606ACAD1FF03(L_6, L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI__ctor_mA10A376757C28B721BC6FF62B5D5EAB460C2FDE8 (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// bool m_IsMenuOpen = true;
		__this->___m_IsMenuOpen_8 = (bool)1;
		// Color m_EnabledColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_EnabledColor_44 = L_0;
		// Color m_DisabledColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_DisabledColor_47 = L_1;
		// Color m_ButtonColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_ButtonColor_50 = L_2;
		// Color m_DisabledButtonColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_DisabledButtonColor_53 = L_3;
		// Color m_SelectedColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_SelectedColor_56 = L_4;
		// Color m_BackgroundColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_BackgroundColor_59 = L_5;
		// Color m_DeviceColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_DeviceColor_62 = L_6;
		// Color m_DisabledDeviceColor = Color.clear;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		__this->___m_DisabledDeviceColor_65 = L_7;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI__cctor_m80575BA8D0658419E3B68388FA85AF6AC831A421 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Color k_EnabledColorDark = new Color(0xC4 / 255f, 0xC4 / 255f, 0xC4 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.768627465f), (0.768627465f), (0.768627465f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_EnabledColorDark_42 = L_0;
		// static readonly Color k_EnabledColorLight = new Color(0x55/255f, 0x55/255f, 0x55/255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.333333343f), (0.333333343f), (0.333333343f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_EnabledColorLight_43 = L_1;
		// static readonly Color k_DisabledColorDark = new Color(0xC4 / 255f, 0xC4 / 255f, 0xC4 / 255f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.768627465f), (0.768627465f), (0.768627465f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledColorDark_45 = L_2;
		// static readonly Color k_DisabledColorLight = new Color(0x55/255f, 0x55/255f, 0x55/255f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.333333343f), (0.333333343f), (0.333333343f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledColorLight_46 = L_3;
		// static readonly Color k_ButtonColorDark = new Color(0x55 / 255f, 0x55 / 255f, 0x55 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_4), (0.333333343f), (0.333333343f), (0.333333343f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_ButtonColorDark_48 = L_4;
		// static readonly Color k_ButtonColorLight = new Color(0xE4/255f, 0xE4/255f, 0xE4/255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_5), (0.894117653f), (0.894117653f), (0.894117653f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_ButtonColorLight_49 = L_5;
		// static readonly Color k_DisabledButtonColorDark = new Color(0x55 / 255f, 0x55 / 255f, 0x55 / 255f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (0.333333343f), (0.333333343f), (0.333333343f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledButtonColorDark_51 = L_6;
		// static readonly Color k_DisabledButtonColorLight = new Color(0xE4 / 255f, 0xE4 / 255f, 0xE4 / 255f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (0.894117653f), (0.894117653f), (0.894117653f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledButtonColorLight_52 = L_7;
		// static readonly Color k_SelectedColorDark = new Color(0x4F / 255f, 0x65 / 255f, 0x7F / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_8), (0.309803933f), (0.396078438f), (0.498039216f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_SelectedColorDark_54 = L_8;
		// static readonly Color k_SelectedColorLight = new Color(0x96/255f, 0xC3/255f, 0xFB/255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (0.588235319f), (0.764705896f), (0.984313726f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_SelectedColorLight_55 = L_9;
		// static readonly Color k_BackgroundColorDark = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_BackgroundColorDark_57 = L_10;
		// static readonly Color k_BackgroundColorLight = new Color(0xB6/255f, 0xB6/255f, 0xB6/255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_11), (0.713725507f), (0.713725507f), (0.713725507f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_BackgroundColorLight_58 = L_11;
		// static readonly Color k_DeviceColorDark = new Color(0x6E / 255f, 0x6E / 255f, 0x6E / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (0.431372553f), (0.431372553f), (0.431372553f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DeviceColorDark_60 = L_12;
		// static readonly Color k_DeviceColorLight = new Color(0xE4 / 255f, 0xE4 / 255f, 0xE4 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_13), (0.894117653f), (0.894117653f), (0.894117653f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DeviceColorLight_61 = L_13;
		// static readonly Color k_DisabledDeviceColorDark = new Color(0x58 / 255f, 0x58 / 255f, 0x58 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_14), (0.345098048f), (0.345098048f), (0.345098048f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledDeviceColorDark_63 = L_14;
		// static readonly Color k_DisabledDeviceColorLight = new Color(0xA2 / 255f, 0xA2 / 255f, 0xA2 / 255f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), (0.635294139f), (0.635294139f), (0.635294139f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53_il2cpp_TypeInfo_var))->___k_DisabledDeviceColorLight_64 = L_15;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_primaryButtonAction_m286F93EFAB14D74C8034F8BEEC084AC30231B032_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PrimaryButtonAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_PrimaryButtonAction_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_secondaryButtonAction_mBA85B7EB879C7FF29D445134DF724473F9EBA37B_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SecondaryButtonAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_SecondaryButtonAction_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_gripAction_mF8D3A50D9BA8A1E2822455ABA4D6EDAF67F841C9_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_GripAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_GripAction_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_triggerAction_m356C2FD6244EBAD3F3691EADDDAF06D6C41E418C_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TriggerAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TriggerAction_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_menuAction_m7AB8A4601FCF614B1B8A0952E7CEB273B0D6C846_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MenuAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_MenuAction_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_axis2DAction_mB6D4E7DB50DEAB354F634B5B97F4450DDF6DFDE7_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Axis2DAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Axis2DAction_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_restingHandAxis2DAction_m7A19F0EB497DEE03682C72218207BB96D0C4CCEA_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RestingHandAxis2DAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_RestingHandAxis2DAction_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_keyboardSprite_m3A43AAFB3F31DDF61E398E6C39AD06909F3B02F4_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// internal Sprite keyboardSprite => m_KeyboardSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_KeyboardSprite_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_manipulateLeftAction_mF13D03BDD3B1691F40956156E6C00F12A381B7DF_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ManipulateLeftAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ManipulateLeftAction_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_manipulateRightAction_mFD0D5FBC545703BC69919081932DBEE274EBB4AD_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ManipulateRightAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ManipulateRightAction_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleManipulateLeftAction_mB1AB1130B8FDB40CAB6664A3A2D75ED4475BBF14_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ToggleManipulateLeftAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ToggleManipulateLeftAction_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleManipulateRightAction_m5808CB9748058EDC8ACF52B7B954A3BFBCFF852F_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ToggleManipulateRightAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ToggleManipulateRightAction_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleManipulateBodyAction_m70D872180AB7CDFBFE2C1730BADA0DD7806DDFE5_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ToggleManipulateBodyAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ToggleManipulateBodyAction_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_manipulateHeadAction_m1948244C874F76443370EED81FD6899E4170AE04_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ManipulateHeadAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ManipulateHeadAction_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_cycleDevicesAction_m368365AAE278216A14A082948D9940AE3FC02F44_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CycleDevicesAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_CycleDevicesAction_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_stopManipulationAction_m5351720BE6385AC04E63D24A3CB1018152E67EE6_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_StopManipulationAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_StopManipulationAction_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleMouseTransformationModeAction_m8E831EA2AF126773BC928B09F5684CCEDD595FB4_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ToggleMouseTransformationModeAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ToggleMouseTransformationModeAction_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_negateModeAction_m825088F34B7FDDF847F7E439CCECAA92BA82A3E0_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_NegateModeAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_NegateModeAction_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_toggleCursorLockAction_mA230EB1D4709C3BFDEF7C784D8127436FFED7FFD_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ToggleCursorLockAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ToggleCursorLockAction_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_keyboardXTranslateAction_m366F9B6E96C557A7B1CAB51FB10C4E2DA1692D51_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_KeyboardXTranslateAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_KeyboardXTranslateAction_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_keyboardYTranslateAction_m4E77F2AAB63C5BD5C2131A852D37E7D1EFD0A377_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_KeyboardYTranslateAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_KeyboardYTranslateAction_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* XRDeviceSimulator_get_keyboardZTranslateAction_mBA7240AF7BF6271D5B6B0B635F041A86DB82199A_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_KeyboardZTranslateAction;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_KeyboardZTranslateAction_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRDeviceSimulator_get_mouseTransformationMode_m4B1DA38C4DDCC9785B3B219F9A550A98E7DECEA1_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// public TransformationMode mouseTransformationMode { get; set; } = TransformationMode.Rotate;
		int32_t L_0 = __this->___U3CmouseTransformationModeU3Ek__BackingField_71;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) 
{
	{
		// public InputDevice device => m_Device;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = __this->___m_Device_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRDeviceSimulatorUI_get_isMenuOpen_m7BF140ABDA90813062F19E0387E03CEC3FB824FF_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// return m_IsMenuOpen;
		bool L_0 = __this->___m_IsMenuOpen_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* XRDeviceSimulatorUI_get_mouseSprite_m555D8F18EEB48C7D1FBD596960855E2C4A08FE9E_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, const RuntimeMethod* method) 
{
	{
		// internal Sprite mouseSprite => m_MouseSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_MouseSprite_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_set_isMenuOpen_m839BAEEDE92E048CA2EF33ADEF1950C54A4B3A05_inline (XRDeviceSimulatorUI_t83558A12FEB0C923A821ED77A9214E829ABA8E53* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_IsMenuOpen = value;
		bool L_0 = ___value0;
		__this->___m_IsMenuOpen_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_negateMode_m17E72AC63A85FAE5EA596F1F5CF341741E0E1ECB_inline (XRDeviceSimulator_t2BEF1AB226D797BE78F5B291FCCB8A8B4274B30C* __this, const RuntimeMethod* method) 
{
	{
		// public bool negateMode { get; private set; }
		bool L_0 = __this->___U3CnegateModeU3Ek__BackingField_72;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
