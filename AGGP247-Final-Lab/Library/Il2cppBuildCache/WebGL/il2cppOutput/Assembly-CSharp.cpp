#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>
struct List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>
struct Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Drawing.Glint.GLCommand[]
struct GLCommandU5BU5D_t04C88EF5C0FAC02F884A221E0BB38360F9452BA9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Drawing.Glint.ICommandInstruction[]
struct ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AstroidAdder
struct AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917;
// AstroidManager
struct AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE;
// Canon
struct Canon_tABB651B118B502B15DB83EF6531CDBB626290C88;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// CollisionExample
struct CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DrawingObject
struct DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A;
// DrawingTest
struct DrawingTest_t5CAA178DBBA279B66C724A1D56C19E4A9EF06DDE;
// DrawingTools
struct DrawingTools_t360A9BA68C97EE1072EB0E72B949DD636DC01B17;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Glint
struct Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7;
// Drawing.Glint.ICommandInstruction
struct ICommandInstruction_t0A1D72890C7210C228512722CC40F44A482B62FF;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Lab1
struct Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// ShipFlying
struct ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// a2
struct a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7;
// a3
struct a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD;
// astroid
struct astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939;
// died
struct died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014;
// menu
struct menu_tE5FA1740AE0DD6F386AF3E646994D5116D686FBC;
// shot
struct shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2;
// Lab1/<WUP>d__33
struct U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF;
// Lab1/Grid2D
struct Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// died/<Died>d__2
struct U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586;

IL2CPP_EXTERN_C RuntimeClass* AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICommandInstruction_t0A1D72890C7210C228512722CC40F44A482B62FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral3262D05B5F4A52792BB908BD05A6268B291CD5FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral63ABA6F7D63C173B0A343FB3CEA0F7243C8949F9;
IL2CPP_EXTERN_C String_t* _stringLiteral68117DD4CA956FBED8998897536097E8F4D493F5;
IL2CPP_EXTERN_C String_t* _stringLiteral8414DE4EFFA3DEE7A7B7D33D0D43F95BCE330CA6;
IL2CPP_EXTERN_C String_t* _stringLiteralB08A4DC0266063098080257C6BE1EDE91272EA9B;
IL2CPP_EXTERN_C String_t* _stringLiteralC639AEFB98077EF99F4B7A149A3BAA89903206F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E;
IL2CPP_EXTERN_C String_t* _stringLiteralEDFD4D20C33290BB70BBA904B4E928860ABAE131;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m9C27B9CF2FF94D7D9E144D262DAAC3E638A97514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4CB80386AA3F49180E18A898DCB8BBDC5E413678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7324377712EDCE3D0FE09162FD6B3698B94A516D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDiedU3Ed__2_System_Collections_IEnumerator_Reset_m6E2473A200960EDD08ECA61D214C0B991C65625C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWUPU3Ed__33_System_Collections_IEnumerator_Reset_m5AB0607AE74AFE203FFEFF697956C662EAC0E2C6_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>
struct List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3, ____items_1)); }
	inline ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9* get__items_1() const { return ____items_1; }
	inline ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3_StaticFields, ____emptyArray_5)); }
	inline ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ICommandInstructionU5BU5D_t8E3DC7C6B25E6E6534E350A21207D499C19D72F9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>
struct Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GLCommandU5BU5D_t04C88EF5C0FAC02F884A221E0BB38360F9452BA9* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC, ____array_0)); }
	inline GLCommandU5BU5D_t04C88EF5C0FAC02F884A221E0BB38360F9452BA9* get__array_0() const { return ____array_0; }
	inline GLCommandU5BU5D_t04C88EF5C0FAC02F884A221E0BB38360F9452BA9** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GLCommandU5BU5D_t04C88EF5C0FAC02F884A221E0BB38360F9452BA9* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Lab1/<WUP>d__33
struct U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF  : public RuntimeObject
{
public:
	// System.Int32 Lab1/<WUP>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Lab1/<WUP>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Lab1 Lab1/<WUP>d__33::<>4__this
	Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF, ___U3CU3E4__this_2)); }
	inline Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// died/<Died>d__2
struct U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586  : public RuntimeObject
{
public:
	// System.Int32 died/<Died>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object died/<Died>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Drawing.Glint.DrawMode
struct DrawMode_tF2856635DDD1540BE907B3B21B707FFF9D5FAD48 
{
public:
	// System.Int32 Drawing.Glint.DrawMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DrawMode_tF2856635DDD1540BE907B3B21B707FFF9D5FAD48, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Line
struct Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A 
{
public:
	// UnityEngine.Vector3 Line::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_0;
	// UnityEngine.Vector3 Line::end
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end_1;
	// UnityEngine.Color Line::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A, ___start_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_0() const { return ___start_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A, ___end_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_end_1() const { return ___end_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___end_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A, ___color_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_2() const { return ___color_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Lab1/Grid2D
struct Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Lab1/Grid2D::screenSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screenSize_0;
	// UnityEngine.Vector3 Lab1/Grid2D::origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin_1;
	// System.Single Lab1/Grid2D::gridSize
	float ___gridSize_2;
	// System.Single Lab1/Grid2D::minGridSize
	float ___minGridSize_3;
	// System.Single Lab1/Grid2D::originSize
	float ___originSize_4;
	// System.Int32 Lab1/Grid2D::divisionCount
	int32_t ___divisionCount_5;
	// System.Int32 Lab1/Grid2D::minDivisionCount
	int32_t ___minDivisionCount_6;

public:
	inline static int32_t get_offset_of_screenSize_0() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___screenSize_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screenSize_0() const { return ___screenSize_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screenSize_0() { return &___screenSize_0; }
	inline void set_screenSize_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screenSize_0 = value;
	}

	inline static int32_t get_offset_of_origin_1() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___origin_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_origin_1() const { return ___origin_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_origin_1() { return &___origin_1; }
	inline void set_origin_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___origin_1 = value;
	}

	inline static int32_t get_offset_of_gridSize_2() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___gridSize_2)); }
	inline float get_gridSize_2() const { return ___gridSize_2; }
	inline float* get_address_of_gridSize_2() { return &___gridSize_2; }
	inline void set_gridSize_2(float value)
	{
		___gridSize_2 = value;
	}

	inline static int32_t get_offset_of_minGridSize_3() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___minGridSize_3)); }
	inline float get_minGridSize_3() const { return ___minGridSize_3; }
	inline float* get_address_of_minGridSize_3() { return &___minGridSize_3; }
	inline void set_minGridSize_3(float value)
	{
		___minGridSize_3 = value;
	}

	inline static int32_t get_offset_of_originSize_4() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___originSize_4)); }
	inline float get_originSize_4() const { return ___originSize_4; }
	inline float* get_address_of_originSize_4() { return &___originSize_4; }
	inline void set_originSize_4(float value)
	{
		___originSize_4 = value;
	}

	inline static int32_t get_offset_of_divisionCount_5() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___divisionCount_5)); }
	inline int32_t get_divisionCount_5() const { return ___divisionCount_5; }
	inline int32_t* get_address_of_divisionCount_5() { return &___divisionCount_5; }
	inline void set_divisionCount_5(int32_t value)
	{
		___divisionCount_5 = value;
	}

	inline static int32_t get_offset_of_minDivisionCount_6() { return static_cast<int32_t>(offsetof(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7, ___minDivisionCount_6)); }
	inline int32_t get_minDivisionCount_6() const { return ___minDivisionCount_6; }
	inline int32_t* get_address_of_minDivisionCount_6() { return &___minDivisionCount_6; }
	inline void set_minDivisionCount_6(int32_t value)
	{
		___minDivisionCount_6 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Drawing.Glint.GLCommand
struct GLCommand_t543C351B305431E33C445653348726CB79795C73 
{
public:
	// Drawing.Glint.DrawMode Drawing.Glint.GLCommand::mode
	int32_t ___mode_0;
	// UnityEngine.Color Drawing.Glint.GLCommand::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.Vector3[] Drawing.Glint.GLCommand::verts
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___verts_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(GLCommand_t543C351B305431E33C445653348726CB79795C73, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(GLCommand_t543C351B305431E33C445653348726CB79795C73, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_verts_2() { return static_cast<int32_t>(offsetof(GLCommand_t543C351B305431E33C445653348726CB79795C73, ___verts_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_verts_2() const { return ___verts_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_verts_2() { return &___verts_2; }
	inline void set_verts_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___verts_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verts_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Drawing.Glint.GLCommand
struct GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_pinvoke
{
	int32_t ___mode_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___verts_2;
};
// Native definition for COM marshalling of Drawing.Glint.GLCommand
struct GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_com
{
	int32_t ___mode_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___verts_2;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AstroidAdder
struct AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AstroidAdder::cam
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cam_4;
	// System.Single AstroidAdder::timer
	float ___timer_5;
	// System.Single AstroidAdder::astroidNum
	float ___astroidNum_6;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917, ___cam_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cam_4() const { return ___cam_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_astroidNum_6() { return static_cast<int32_t>(offsetof(AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917, ___astroidNum_6)); }
	inline float get_astroidNum_6() const { return ___astroidNum_6; }
	inline float* get_address_of_astroidNum_6() { return &___astroidNum_6; }
	inline void set_astroidNum_6(float value)
	{
		___astroidNum_6 = value;
	}
};

struct AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917_StaticFields
{
public:
	// AstroidAdder AstroidAdder::instance
	AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917_StaticFields, ___instance_7)); }
	inline AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 * get_instance_7() const { return ___instance_7; }
	inline AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// AstroidManager
struct AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 AstroidManager::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_4;
	// UnityEngine.GameObject AstroidManager::asteroid
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asteroid_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AstroidManager::asteroids
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___asteroids_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AstroidManager::bullets
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___bullets_7;
	// System.Single AstroidManager::timer
	float ___timer_8;
	// System.Single AstroidManager::astroidNum
	float ___astroidNum_9;

public:
	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE, ___start_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_4() const { return ___start_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_4 = value;
	}

	inline static int32_t get_offset_of_asteroid_5() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE, ___asteroid_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asteroid_5() const { return ___asteroid_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asteroid_5() { return &___asteroid_5; }
	inline void set_asteroid_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asteroid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asteroid_5), (void*)value);
	}

	inline static int32_t get_offset_of_asteroids_6() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE, ___asteroids_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_asteroids_6() const { return ___asteroids_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_asteroids_6() { return &___asteroids_6; }
	inline void set_asteroids_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___asteroids_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asteroids_6), (void*)value);
	}

	inline static int32_t get_offset_of_bullets_7() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE, ___bullets_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_bullets_7() const { return ___bullets_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_bullets_7() { return &___bullets_7; }
	inline void set_bullets_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___bullets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullets_7), (void*)value);
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}

	inline static int32_t get_offset_of_astroidNum_9() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE, ___astroidNum_9)); }
	inline float get_astroidNum_9() const { return ___astroidNum_9; }
	inline float* get_address_of_astroidNum_9() { return &___astroidNum_9; }
	inline void set_astroidNum_9(float value)
	{
		___astroidNum_9 = value;
	}
};

struct AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_StaticFields
{
public:
	// AstroidManager AstroidManager::instance
	AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_StaticFields, ___instance_10)); }
	inline AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * get_instance_10() const { return ___instance_10; }
	inline AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_10), (void*)value);
	}
};


// Canon
struct Canon_tABB651B118B502B15DB83EF6531CDBB626290C88  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CollisionExample
struct CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Lab1/Grid2D CollisionExample::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_4;
	// UnityEngine.Color CollisionExample::lineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lineColor_5;
	// UnityEngine.Color CollisionExample::divisionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___divisionColor_6;
	// System.Boolean CollisionExample::isDrawingDivisions
	bool ___isDrawingDivisions_7;
	// System.Boolean CollisionExample::fillCircle
	bool ___fillCircle_8;
	// System.Boolean CollisionExample::fillRectangle
	bool ___fillRectangle_9;
	// System.Boolean CollisionExample::fillTriangle
	bool ___fillTriangle_10;
	// UnityEngine.Vector3 CollisionExample::thePoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___thePoint_11;
	// DrawingObject CollisionExample::rectangle
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___rectangle_12;
	// DrawingObject CollisionExample::triangle
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___triangle_13;
	// DrawingObject CollisionExample::filledTriangle
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___filledTriangle_14;
	// DrawingObject CollisionExample::filledRectangle
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___filledRectangle_15;

public:
	inline static int32_t get_offset_of_grid_4() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___grid_4)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_4() const { return ___grid_4; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_4() { return &___grid_4; }
	inline void set_grid_4(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_4), (void*)value);
	}

	inline static int32_t get_offset_of_lineColor_5() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___lineColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lineColor_5() const { return ___lineColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lineColor_5() { return &___lineColor_5; }
	inline void set_lineColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lineColor_5 = value;
	}

	inline static int32_t get_offset_of_divisionColor_6() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___divisionColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_divisionColor_6() const { return ___divisionColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_divisionColor_6() { return &___divisionColor_6; }
	inline void set_divisionColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___divisionColor_6 = value;
	}

	inline static int32_t get_offset_of_isDrawingDivisions_7() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___isDrawingDivisions_7)); }
	inline bool get_isDrawingDivisions_7() const { return ___isDrawingDivisions_7; }
	inline bool* get_address_of_isDrawingDivisions_7() { return &___isDrawingDivisions_7; }
	inline void set_isDrawingDivisions_7(bool value)
	{
		___isDrawingDivisions_7 = value;
	}

	inline static int32_t get_offset_of_fillCircle_8() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___fillCircle_8)); }
	inline bool get_fillCircle_8() const { return ___fillCircle_8; }
	inline bool* get_address_of_fillCircle_8() { return &___fillCircle_8; }
	inline void set_fillCircle_8(bool value)
	{
		___fillCircle_8 = value;
	}

	inline static int32_t get_offset_of_fillRectangle_9() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___fillRectangle_9)); }
	inline bool get_fillRectangle_9() const { return ___fillRectangle_9; }
	inline bool* get_address_of_fillRectangle_9() { return &___fillRectangle_9; }
	inline void set_fillRectangle_9(bool value)
	{
		___fillRectangle_9 = value;
	}

	inline static int32_t get_offset_of_fillTriangle_10() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___fillTriangle_10)); }
	inline bool get_fillTriangle_10() const { return ___fillTriangle_10; }
	inline bool* get_address_of_fillTriangle_10() { return &___fillTriangle_10; }
	inline void set_fillTriangle_10(bool value)
	{
		___fillTriangle_10 = value;
	}

	inline static int32_t get_offset_of_thePoint_11() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___thePoint_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_thePoint_11() const { return ___thePoint_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_thePoint_11() { return &___thePoint_11; }
	inline void set_thePoint_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___thePoint_11 = value;
	}

	inline static int32_t get_offset_of_rectangle_12() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___rectangle_12)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_rectangle_12() const { return ___rectangle_12; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_rectangle_12() { return &___rectangle_12; }
	inline void set_rectangle_12(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___rectangle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectangle_12), (void*)value);
	}

	inline static int32_t get_offset_of_triangle_13() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___triangle_13)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_triangle_13() const { return ___triangle_13; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_triangle_13() { return &___triangle_13; }
	inline void set_triangle_13(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___triangle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangle_13), (void*)value);
	}

	inline static int32_t get_offset_of_filledTriangle_14() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___filledTriangle_14)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_filledTriangle_14() const { return ___filledTriangle_14; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_filledTriangle_14() { return &___filledTriangle_14; }
	inline void set_filledTriangle_14(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___filledTriangle_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filledTriangle_14), (void*)value);
	}

	inline static int32_t get_offset_of_filledRectangle_15() { return static_cast<int32_t>(offsetof(CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4, ___filledRectangle_15)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_filledRectangle_15() const { return ___filledRectangle_15; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_filledRectangle_15() { return &___filledRectangle_15; }
	inline void set_filledRectangle_15(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___filledRectangle_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filledRectangle_15), (void*)value);
	}
};


// DrawingObject
struct DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean DrawingObject::PerformDraw
	bool ___PerformDraw_4;
	// System.Single DrawingObject::Roation
	float ___Roation_5;
	// UnityEngine.Vector3 DrawingObject::Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Scale_6;
	// UnityEngine.Vector3 DrawingObject::Location
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Location_7;
	// System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction> DrawingObject::Lines
	List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * ___Lines_8;

public:
	inline static int32_t get_offset_of_PerformDraw_4() { return static_cast<int32_t>(offsetof(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A, ___PerformDraw_4)); }
	inline bool get_PerformDraw_4() const { return ___PerformDraw_4; }
	inline bool* get_address_of_PerformDraw_4() { return &___PerformDraw_4; }
	inline void set_PerformDraw_4(bool value)
	{
		___PerformDraw_4 = value;
	}

	inline static int32_t get_offset_of_Roation_5() { return static_cast<int32_t>(offsetof(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A, ___Roation_5)); }
	inline float get_Roation_5() const { return ___Roation_5; }
	inline float* get_address_of_Roation_5() { return &___Roation_5; }
	inline void set_Roation_5(float value)
	{
		___Roation_5 = value;
	}

	inline static int32_t get_offset_of_Scale_6() { return static_cast<int32_t>(offsetof(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A, ___Scale_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Scale_6() const { return ___Scale_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Scale_6() { return &___Scale_6; }
	inline void set_Scale_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Scale_6 = value;
	}

	inline static int32_t get_offset_of_Location_7() { return static_cast<int32_t>(offsetof(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A, ___Location_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Location_7() const { return ___Location_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Location_7() { return &___Location_7; }
	inline void set_Location_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Location_7 = value;
	}

	inline static int32_t get_offset_of_Lines_8() { return static_cast<int32_t>(offsetof(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A, ___Lines_8)); }
	inline List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * get_Lines_8() const { return ___Lines_8; }
	inline List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 ** get_address_of_Lines_8() { return &___Lines_8; }
	inline void set_Lines_8(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * value)
	{
		___Lines_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lines_8), (void*)value);
	}
};


// DrawingTest
struct DrawingTest_t5CAA178DBBA279B66C724A1D56C19E4A9EF06DDE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DrawingTools
struct DrawingTools_t360A9BA68C97EE1072EB0E72B949DD636DC01B17  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Glint
struct Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand> Glint::commands
	Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * ___commands_5;
	// UnityEngine.Material Glint::mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat_6;

public:
	inline static int32_t get_offset_of_commands_5() { return static_cast<int32_t>(offsetof(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7, ___commands_5)); }
	inline Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * get_commands_5() const { return ___commands_5; }
	inline Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC ** get_address_of_commands_5() { return &___commands_5; }
	inline void set_commands_5(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * value)
	{
		___commands_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commands_5), (void*)value);
	}

	inline static int32_t get_offset_of_mat_6() { return static_cast<int32_t>(offsetof(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7, ___mat_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mat_6() const { return ___mat_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mat_6() { return &___mat_6; }
	inline void set_mat_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_6), (void*)value);
	}
};

struct Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_StaticFields
{
public:
	// Glint Glint::self
	Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * ___self_4;

public:
	inline static int32_t get_offset_of_self_4() { return static_cast<int32_t>(offsetof(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_StaticFields, ___self_4)); }
	inline Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * get_self_4() const { return ___self_4; }
	inline Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 ** get_address_of_self_4() { return &___self_4; }
	inline void set_self_4(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * value)
	{
		___self_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___self_4), (void*)value);
	}
};


// Lab1
struct Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Lab1::radius
	float ___radius_4;
	// System.Int32 Lab1::side
	int32_t ___side_5;
	// System.Single Lab1::width
	float ___width_6;
	// UnityEngine.Color Lab1::axisColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___axisColor_7;
	// UnityEngine.Color Lab1::lineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lineColor_8;
	// UnityEngine.Color Lab1::divisionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___divisionColor_9;
	// System.Boolean Lab1::isDrawingOrigin
	bool ___isDrawingOrigin_10;
	// System.Boolean Lab1::isDrawingAxis
	bool ___isDrawingAxis_11;
	// System.Boolean Lab1::isDrawingDivisions
	bool ___isDrawingDivisions_12;
	// System.Boolean Lab1::isDrawingDiamond
	bool ___isDrawingDiamond_13;
	// System.Boolean Lab1::isDrawingHexagon
	bool ___isDrawingHexagon_14;
	// System.Boolean Lab1::isDrawingE
	bool ___isDrawingE_15;
	// System.Boolean Lab1::isDrawingCircle
	bool ___isDrawingCircle_16;
	// System.Boolean Lab1::isDrawingEllipse
	bool ___isDrawingEllipse_17;
	// System.Boolean Lab1::porabing1
	bool ___porabing1_18;
	// System.Boolean Lab1::porabing2
	bool ___porabing2_19;
	// System.Boolean Lab1::porabing3
	bool ___porabing3_20;
	// System.Boolean Lab1::porabing4
	bool ___porabing4_21;
	// Lab1/Grid2D Lab1::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_22;
	// DrawingObject Lab1::diamond
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___diamond_23;
	// DrawingObject Lab1::spinDiamond
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___spinDiamond_24;
	// DrawingObject Lab1::hexigon
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___hexigon_25;
	// DrawingObject Lab1::E
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___E_26;
	// DrawingObject Lab1::parabola1
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___parabola1_27;
	// DrawingObject Lab1::parabola2
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___parabola2_28;
	// DrawingObject Lab1::parabola3
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___parabola3_29;
	// DrawingObject Lab1::parabola4
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___parabola4_30;
	// UnityEngine.Coroutine Lab1::waitForFiveSeconds
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___waitForFiveSeconds_31;
	// System.Single Lab1::numb
	float ___numb_32;
	// System.Int32 Lab1::count
	int32_t ___count_33;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_side_5() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___side_5)); }
	inline int32_t get_side_5() const { return ___side_5; }
	inline int32_t* get_address_of_side_5() { return &___side_5; }
	inline void set_side_5(int32_t value)
	{
		___side_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___width_6)); }
	inline float get_width_6() const { return ___width_6; }
	inline float* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(float value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_axisColor_7() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___axisColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_axisColor_7() const { return ___axisColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_axisColor_7() { return &___axisColor_7; }
	inline void set_axisColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___axisColor_7 = value;
	}

	inline static int32_t get_offset_of_lineColor_8() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___lineColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lineColor_8() const { return ___lineColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lineColor_8() { return &___lineColor_8; }
	inline void set_lineColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lineColor_8 = value;
	}

	inline static int32_t get_offset_of_divisionColor_9() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___divisionColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_divisionColor_9() const { return ___divisionColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_divisionColor_9() { return &___divisionColor_9; }
	inline void set_divisionColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___divisionColor_9 = value;
	}

	inline static int32_t get_offset_of_isDrawingOrigin_10() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingOrigin_10)); }
	inline bool get_isDrawingOrigin_10() const { return ___isDrawingOrigin_10; }
	inline bool* get_address_of_isDrawingOrigin_10() { return &___isDrawingOrigin_10; }
	inline void set_isDrawingOrigin_10(bool value)
	{
		___isDrawingOrigin_10 = value;
	}

	inline static int32_t get_offset_of_isDrawingAxis_11() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingAxis_11)); }
	inline bool get_isDrawingAxis_11() const { return ___isDrawingAxis_11; }
	inline bool* get_address_of_isDrawingAxis_11() { return &___isDrawingAxis_11; }
	inline void set_isDrawingAxis_11(bool value)
	{
		___isDrawingAxis_11 = value;
	}

	inline static int32_t get_offset_of_isDrawingDivisions_12() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingDivisions_12)); }
	inline bool get_isDrawingDivisions_12() const { return ___isDrawingDivisions_12; }
	inline bool* get_address_of_isDrawingDivisions_12() { return &___isDrawingDivisions_12; }
	inline void set_isDrawingDivisions_12(bool value)
	{
		___isDrawingDivisions_12 = value;
	}

	inline static int32_t get_offset_of_isDrawingDiamond_13() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingDiamond_13)); }
	inline bool get_isDrawingDiamond_13() const { return ___isDrawingDiamond_13; }
	inline bool* get_address_of_isDrawingDiamond_13() { return &___isDrawingDiamond_13; }
	inline void set_isDrawingDiamond_13(bool value)
	{
		___isDrawingDiamond_13 = value;
	}

	inline static int32_t get_offset_of_isDrawingHexagon_14() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingHexagon_14)); }
	inline bool get_isDrawingHexagon_14() const { return ___isDrawingHexagon_14; }
	inline bool* get_address_of_isDrawingHexagon_14() { return &___isDrawingHexagon_14; }
	inline void set_isDrawingHexagon_14(bool value)
	{
		___isDrawingHexagon_14 = value;
	}

	inline static int32_t get_offset_of_isDrawingE_15() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingE_15)); }
	inline bool get_isDrawingE_15() const { return ___isDrawingE_15; }
	inline bool* get_address_of_isDrawingE_15() { return &___isDrawingE_15; }
	inline void set_isDrawingE_15(bool value)
	{
		___isDrawingE_15 = value;
	}

	inline static int32_t get_offset_of_isDrawingCircle_16() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingCircle_16)); }
	inline bool get_isDrawingCircle_16() const { return ___isDrawingCircle_16; }
	inline bool* get_address_of_isDrawingCircle_16() { return &___isDrawingCircle_16; }
	inline void set_isDrawingCircle_16(bool value)
	{
		___isDrawingCircle_16 = value;
	}

	inline static int32_t get_offset_of_isDrawingEllipse_17() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___isDrawingEllipse_17)); }
	inline bool get_isDrawingEllipse_17() const { return ___isDrawingEllipse_17; }
	inline bool* get_address_of_isDrawingEllipse_17() { return &___isDrawingEllipse_17; }
	inline void set_isDrawingEllipse_17(bool value)
	{
		___isDrawingEllipse_17 = value;
	}

	inline static int32_t get_offset_of_porabing1_18() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___porabing1_18)); }
	inline bool get_porabing1_18() const { return ___porabing1_18; }
	inline bool* get_address_of_porabing1_18() { return &___porabing1_18; }
	inline void set_porabing1_18(bool value)
	{
		___porabing1_18 = value;
	}

	inline static int32_t get_offset_of_porabing2_19() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___porabing2_19)); }
	inline bool get_porabing2_19() const { return ___porabing2_19; }
	inline bool* get_address_of_porabing2_19() { return &___porabing2_19; }
	inline void set_porabing2_19(bool value)
	{
		___porabing2_19 = value;
	}

	inline static int32_t get_offset_of_porabing3_20() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___porabing3_20)); }
	inline bool get_porabing3_20() const { return ___porabing3_20; }
	inline bool* get_address_of_porabing3_20() { return &___porabing3_20; }
	inline void set_porabing3_20(bool value)
	{
		___porabing3_20 = value;
	}

	inline static int32_t get_offset_of_porabing4_21() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___porabing4_21)); }
	inline bool get_porabing4_21() const { return ___porabing4_21; }
	inline bool* get_address_of_porabing4_21() { return &___porabing4_21; }
	inline void set_porabing4_21(bool value)
	{
		___porabing4_21 = value;
	}

	inline static int32_t get_offset_of_grid_22() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___grid_22)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_22() const { return ___grid_22; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_22() { return &___grid_22; }
	inline void set_grid_22(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_22), (void*)value);
	}

	inline static int32_t get_offset_of_diamond_23() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___diamond_23)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_diamond_23() const { return ___diamond_23; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_diamond_23() { return &___diamond_23; }
	inline void set_diamond_23(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___diamond_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diamond_23), (void*)value);
	}

	inline static int32_t get_offset_of_spinDiamond_24() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___spinDiamond_24)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_spinDiamond_24() const { return ___spinDiamond_24; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_spinDiamond_24() { return &___spinDiamond_24; }
	inline void set_spinDiamond_24(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___spinDiamond_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spinDiamond_24), (void*)value);
	}

	inline static int32_t get_offset_of_hexigon_25() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___hexigon_25)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_hexigon_25() const { return ___hexigon_25; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_hexigon_25() { return &___hexigon_25; }
	inline void set_hexigon_25(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___hexigon_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexigon_25), (void*)value);
	}

	inline static int32_t get_offset_of_E_26() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___E_26)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_E_26() const { return ___E_26; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_E_26() { return &___E_26; }
	inline void set_E_26(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___E_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___E_26), (void*)value);
	}

	inline static int32_t get_offset_of_parabola1_27() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___parabola1_27)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_parabola1_27() const { return ___parabola1_27; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_parabola1_27() { return &___parabola1_27; }
	inline void set_parabola1_27(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___parabola1_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parabola1_27), (void*)value);
	}

	inline static int32_t get_offset_of_parabola2_28() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___parabola2_28)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_parabola2_28() const { return ___parabola2_28; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_parabola2_28() { return &___parabola2_28; }
	inline void set_parabola2_28(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___parabola2_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parabola2_28), (void*)value);
	}

	inline static int32_t get_offset_of_parabola3_29() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___parabola3_29)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_parabola3_29() const { return ___parabola3_29; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_parabola3_29() { return &___parabola3_29; }
	inline void set_parabola3_29(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___parabola3_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parabola3_29), (void*)value);
	}

	inline static int32_t get_offset_of_parabola4_30() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___parabola4_30)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_parabola4_30() const { return ___parabola4_30; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_parabola4_30() { return &___parabola4_30; }
	inline void set_parabola4_30(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___parabola4_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parabola4_30), (void*)value);
	}

	inline static int32_t get_offset_of_waitForFiveSeconds_31() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___waitForFiveSeconds_31)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_waitForFiveSeconds_31() const { return ___waitForFiveSeconds_31; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_waitForFiveSeconds_31() { return &___waitForFiveSeconds_31; }
	inline void set_waitForFiveSeconds_31(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___waitForFiveSeconds_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForFiveSeconds_31), (void*)value);
	}

	inline static int32_t get_offset_of_numb_32() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___numb_32)); }
	inline float get_numb_32() const { return ___numb_32; }
	inline float* get_address_of_numb_32() { return &___numb_32; }
	inline void set_numb_32(float value)
	{
		___numb_32 = value;
	}

	inline static int32_t get_offset_of_count_33() { return static_cast<int32_t>(offsetof(Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3, ___count_33)); }
	inline int32_t get_count_33() const { return ___count_33; }
	inline int32_t* get_address_of_count_33() { return &___count_33; }
	inline void set_count_33(int32_t value)
	{
		___count_33 = value;
	}
};


// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Score::lives
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___lives_4;
	// UnityEngine.UI.Text Score::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_5;
	// System.Int32 Score::score
	int32_t ___score_6;

public:
	inline static int32_t get_offset_of_lives_4() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___lives_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_lives_4() const { return ___lives_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_lives_4() { return &___lives_4; }
	inline void set_lives_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___lives_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lives_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_5() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___scoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_5() const { return ___scoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_5() { return &___scoreText_5; }
	inline void set_scoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}
};

struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields
{
public:
	// Score Score::instace
	Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * ___instace_7;

public:
	inline static int32_t get_offset_of_instace_7() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields, ___instace_7)); }
	inline Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * get_instace_7() const { return ___instace_7; }
	inline Score_tE07CBD9780DFC212BE43719819F512E8861103C7 ** get_address_of_instace_7() { return &___instace_7; }
	inline void set_instace_7(Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * value)
	{
		___instace_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instace_7), (void*)value);
	}
};


// ShipFlying
struct ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ShipFlying::gameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOver_4;
	// UnityEngine.GameObject ShipFlying::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_5;
	// Lab1/Grid2D ShipFlying::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_7;
	// DrawingObject ShipFlying::ship
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___ship_8;
	// System.Single ShipFlying::rotationSpee
	float ___rotationSpee_9;
	// System.Single ShipFlying::accelerate
	float ___accelerate_10;
	// System.Single ShipFlying::mass
	float ___mass_11;
	// System.Single ShipFlying::force
	float ___force_12;
	// UnityEngine.Vector3 ShipFlying::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_13;
	// System.Single ShipFlying::angleRotation
	float ___angleRotation_14;
	// System.Single ShipFlying::lives
	float ___lives_15;
	// System.Single ShipFlying::radians
	float ___radians_16;
	// UnityEngine.Vector3 ShipFlying::t1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___t1_17;
	// UnityEngine.Vector3 ShipFlying::t2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___t2_18;
	// UnityEngine.Vector3 ShipFlying::t3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___t3_19;
	// UnityEngine.Vector3 ShipFlying::tmid
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___tmid_20;
	// System.Boolean ShipFlying::hit
	bool ___hit_21;

public:
	inline static int32_t get_offset_of_gameOver_4() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___gameOver_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOver_4() const { return ___gameOver_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOver_4() { return &___gameOver_4; }
	inline void set_gameOver_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOver_4), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_5() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___bullet_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_5() const { return ___bullet_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_5() { return &___bullet_5; }
	inline void set_bullet_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_5), (void*)value);
	}

	inline static int32_t get_offset_of_grid_7() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___grid_7)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_7() const { return ___grid_7; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_7() { return &___grid_7; }
	inline void set_grid_7(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_7), (void*)value);
	}

	inline static int32_t get_offset_of_ship_8() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___ship_8)); }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * get_ship_8() const { return ___ship_8; }
	inline DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A ** get_address_of_ship_8() { return &___ship_8; }
	inline void set_ship_8(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * value)
	{
		___ship_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ship_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationSpee_9() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___rotationSpee_9)); }
	inline float get_rotationSpee_9() const { return ___rotationSpee_9; }
	inline float* get_address_of_rotationSpee_9() { return &___rotationSpee_9; }
	inline void set_rotationSpee_9(float value)
	{
		___rotationSpee_9 = value;
	}

	inline static int32_t get_offset_of_accelerate_10() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___accelerate_10)); }
	inline float get_accelerate_10() const { return ___accelerate_10; }
	inline float* get_address_of_accelerate_10() { return &___accelerate_10; }
	inline void set_accelerate_10(float value)
	{
		___accelerate_10 = value;
	}

	inline static int32_t get_offset_of_mass_11() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___mass_11)); }
	inline float get_mass_11() const { return ___mass_11; }
	inline float* get_address_of_mass_11() { return &___mass_11; }
	inline void set_mass_11(float value)
	{
		___mass_11 = value;
	}

	inline static int32_t get_offset_of_force_12() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___force_12)); }
	inline float get_force_12() const { return ___force_12; }
	inline float* get_address_of_force_12() { return &___force_12; }
	inline void set_force_12(float value)
	{
		___force_12 = value;
	}

	inline static int32_t get_offset_of_velocity_13() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___velocity_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_13() const { return ___velocity_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_13() { return &___velocity_13; }
	inline void set_velocity_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_13 = value;
	}

	inline static int32_t get_offset_of_angleRotation_14() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___angleRotation_14)); }
	inline float get_angleRotation_14() const { return ___angleRotation_14; }
	inline float* get_address_of_angleRotation_14() { return &___angleRotation_14; }
	inline void set_angleRotation_14(float value)
	{
		___angleRotation_14 = value;
	}

	inline static int32_t get_offset_of_lives_15() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___lives_15)); }
	inline float get_lives_15() const { return ___lives_15; }
	inline float* get_address_of_lives_15() { return &___lives_15; }
	inline void set_lives_15(float value)
	{
		___lives_15 = value;
	}

	inline static int32_t get_offset_of_radians_16() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___radians_16)); }
	inline float get_radians_16() const { return ___radians_16; }
	inline float* get_address_of_radians_16() { return &___radians_16; }
	inline void set_radians_16(float value)
	{
		___radians_16 = value;
	}

	inline static int32_t get_offset_of_t1_17() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___t1_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_t1_17() const { return ___t1_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_t1_17() { return &___t1_17; }
	inline void set_t1_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___t1_17 = value;
	}

	inline static int32_t get_offset_of_t2_18() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___t2_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_t2_18() const { return ___t2_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_t2_18() { return &___t2_18; }
	inline void set_t2_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___t2_18 = value;
	}

	inline static int32_t get_offset_of_t3_19() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___t3_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_t3_19() const { return ___t3_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_t3_19() { return &___t3_19; }
	inline void set_t3_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___t3_19 = value;
	}

	inline static int32_t get_offset_of_tmid_20() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___tmid_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_tmid_20() const { return ___tmid_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_tmid_20() { return &___tmid_20; }
	inline void set_tmid_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___tmid_20 = value;
	}

	inline static int32_t get_offset_of_hit_21() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863, ___hit_21)); }
	inline bool get_hit_21() const { return ___hit_21; }
	inline bool* get_address_of_hit_21() { return &___hit_21; }
	inline void set_hit_21(bool value)
	{
		___hit_21 = value;
	}
};

struct ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields
{
public:
	// ShipFlying ShipFlying::instance
	ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields, ___instance_6)); }
	inline ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * get_instance_6() const { return ___instance_6; }
	inline ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// a2
struct a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Lab1/Grid2D a2::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_4;
	// UnityEngine.Vector3 a2::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_5;
	// UnityEngine.Vector3 a2::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_6;
	// System.Int32 a2::ID
	int32_t ___ID_7;
	// System.Single a2::radius
	float ___radius_8;
	// System.Single a2::acc
	float ___acc_9;
	// System.Single a2::radiusMin
	float ___radiusMin_10;
	// System.Single a2::radiusMax
	float ___radiusMax_11;
	// System.Single a2::radians
	float ___radians_12;
	// System.Single a2::angleRotation
	float ___angleRotation_13;
	// System.Boolean a2::destroyed
	bool ___destroyed_14;

public:
	inline static int32_t get_offset_of_grid_4() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___grid_4)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_4() const { return ___grid_4; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_4() { return &___grid_4; }
	inline void set_grid_4(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_4), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___velocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_5() const { return ___velocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_5 = value;
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___start_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_6() const { return ___start_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_ID_7() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___ID_7)); }
	inline int32_t get_ID_7() const { return ___ID_7; }
	inline int32_t* get_address_of_ID_7() { return &___ID_7; }
	inline void set_ID_7(int32_t value)
	{
		___ID_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_acc_9() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___acc_9)); }
	inline float get_acc_9() const { return ___acc_9; }
	inline float* get_address_of_acc_9() { return &___acc_9; }
	inline void set_acc_9(float value)
	{
		___acc_9 = value;
	}

	inline static int32_t get_offset_of_radiusMin_10() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___radiusMin_10)); }
	inline float get_radiusMin_10() const { return ___radiusMin_10; }
	inline float* get_address_of_radiusMin_10() { return &___radiusMin_10; }
	inline void set_radiusMin_10(float value)
	{
		___radiusMin_10 = value;
	}

	inline static int32_t get_offset_of_radiusMax_11() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___radiusMax_11)); }
	inline float get_radiusMax_11() const { return ___radiusMax_11; }
	inline float* get_address_of_radiusMax_11() { return &___radiusMax_11; }
	inline void set_radiusMax_11(float value)
	{
		___radiusMax_11 = value;
	}

	inline static int32_t get_offset_of_radians_12() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___radians_12)); }
	inline float get_radians_12() const { return ___radians_12; }
	inline float* get_address_of_radians_12() { return &___radians_12; }
	inline void set_radians_12(float value)
	{
		___radians_12 = value;
	}

	inline static int32_t get_offset_of_angleRotation_13() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___angleRotation_13)); }
	inline float get_angleRotation_13() const { return ___angleRotation_13; }
	inline float* get_address_of_angleRotation_13() { return &___angleRotation_13; }
	inline void set_angleRotation_13(float value)
	{
		___angleRotation_13 = value;
	}

	inline static int32_t get_offset_of_destroyed_14() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7, ___destroyed_14)); }
	inline bool get_destroyed_14() const { return ___destroyed_14; }
	inline bool* get_address_of_destroyed_14() { return &___destroyed_14; }
	inline void set_destroyed_14(bool value)
	{
		___destroyed_14 = value;
	}
};

struct a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7_StaticFields
{
public:
	// a2 a2::instance
	a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * ___instance_15;

public:
	inline static int32_t get_offset_of_instance_15() { return static_cast<int32_t>(offsetof(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7_StaticFields, ___instance_15)); }
	inline a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * get_instance_15() const { return ___instance_15; }
	inline a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 ** get_address_of_instance_15() { return &___instance_15; }
	inline void set_instance_15(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * value)
	{
		___instance_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_15), (void*)value);
	}
};


// a3
struct a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Lab1/Grid2D a3::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_4;
	// UnityEngine.Vector3 a3::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_5;
	// UnityEngine.Vector3 a3::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_6;
	// System.Int32 a3::ID
	int32_t ___ID_7;
	// System.Single a3::radius
	float ___radius_8;
	// System.Single a3::acc
	float ___acc_9;
	// System.Single a3::radiusMin
	float ___radiusMin_10;
	// System.Single a3::radiusMax
	float ___radiusMax_11;
	// System.Single a3::radians
	float ___radians_12;
	// System.Single a3::angleRotation
	float ___angleRotation_13;
	// System.Boolean a3::destroyed
	bool ___destroyed_14;

public:
	inline static int32_t get_offset_of_grid_4() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___grid_4)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_4() const { return ___grid_4; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_4() { return &___grid_4; }
	inline void set_grid_4(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_4), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___velocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_5() const { return ___velocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_5 = value;
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___start_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_6() const { return ___start_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_ID_7() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___ID_7)); }
	inline int32_t get_ID_7() const { return ___ID_7; }
	inline int32_t* get_address_of_ID_7() { return &___ID_7; }
	inline void set_ID_7(int32_t value)
	{
		___ID_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_acc_9() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___acc_9)); }
	inline float get_acc_9() const { return ___acc_9; }
	inline float* get_address_of_acc_9() { return &___acc_9; }
	inline void set_acc_9(float value)
	{
		___acc_9 = value;
	}

	inline static int32_t get_offset_of_radiusMin_10() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___radiusMin_10)); }
	inline float get_radiusMin_10() const { return ___radiusMin_10; }
	inline float* get_address_of_radiusMin_10() { return &___radiusMin_10; }
	inline void set_radiusMin_10(float value)
	{
		___radiusMin_10 = value;
	}

	inline static int32_t get_offset_of_radiusMax_11() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___radiusMax_11)); }
	inline float get_radiusMax_11() const { return ___radiusMax_11; }
	inline float* get_address_of_radiusMax_11() { return &___radiusMax_11; }
	inline void set_radiusMax_11(float value)
	{
		___radiusMax_11 = value;
	}

	inline static int32_t get_offset_of_radians_12() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___radians_12)); }
	inline float get_radians_12() const { return ___radians_12; }
	inline float* get_address_of_radians_12() { return &___radians_12; }
	inline void set_radians_12(float value)
	{
		___radians_12 = value;
	}

	inline static int32_t get_offset_of_angleRotation_13() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___angleRotation_13)); }
	inline float get_angleRotation_13() const { return ___angleRotation_13; }
	inline float* get_address_of_angleRotation_13() { return &___angleRotation_13; }
	inline void set_angleRotation_13(float value)
	{
		___angleRotation_13 = value;
	}

	inline static int32_t get_offset_of_destroyed_14() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD, ___destroyed_14)); }
	inline bool get_destroyed_14() const { return ___destroyed_14; }
	inline bool* get_address_of_destroyed_14() { return &___destroyed_14; }
	inline void set_destroyed_14(bool value)
	{
		___destroyed_14 = value;
	}
};

struct a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD_StaticFields
{
public:
	// a3 a3::instance
	a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * ___instance_15;

public:
	inline static int32_t get_offset_of_instance_15() { return static_cast<int32_t>(offsetof(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD_StaticFields, ___instance_15)); }
	inline a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * get_instance_15() const { return ___instance_15; }
	inline a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD ** get_address_of_instance_15() { return &___instance_15; }
	inline void set_instance_15(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * value)
	{
		___instance_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_15), (void*)value);
	}
};


// astroid
struct astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject astroid::holder
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___holder_4;
	// Lab1/Grid2D astroid::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_5;
	// UnityEngine.Vector3 astroid::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_6;
	// UnityEngine.Vector3 astroid::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_7;
	// System.Int32 astroid::ID
	int32_t ___ID_8;
	// System.Single astroid::radius
	float ___radius_9;
	// System.Single astroid::acc
	float ___acc_10;
	// System.Single astroid::radiusMin
	float ___radiusMin_11;
	// System.Single astroid::radiusMax
	float ___radiusMax_12;
	// System.Single astroid::radians
	float ___radians_13;
	// System.Single astroid::angleRotation
	float ___angleRotation_14;
	// System.Boolean astroid::destroyed
	bool ___destroyed_15;

public:
	inline static int32_t get_offset_of_holder_4() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___holder_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_holder_4() const { return ___holder_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_holder_4() { return &___holder_4; }
	inline void set_holder_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___holder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holder_4), (void*)value);
	}

	inline static int32_t get_offset_of_grid_5() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___grid_5)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_5() const { return ___grid_5; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_5() { return &___grid_5; }
	inline void set_grid_5(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_5), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___velocity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_6() const { return ___velocity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_6 = value;
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___start_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_7() const { return ___start_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_7 = value;
	}

	inline static int32_t get_offset_of_ID_8() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___ID_8)); }
	inline int32_t get_ID_8() const { return ___ID_8; }
	inline int32_t* get_address_of_ID_8() { return &___ID_8; }
	inline void set_ID_8(int32_t value)
	{
		___ID_8 = value;
	}

	inline static int32_t get_offset_of_radius_9() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___radius_9)); }
	inline float get_radius_9() const { return ___radius_9; }
	inline float* get_address_of_radius_9() { return &___radius_9; }
	inline void set_radius_9(float value)
	{
		___radius_9 = value;
	}

	inline static int32_t get_offset_of_acc_10() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___acc_10)); }
	inline float get_acc_10() const { return ___acc_10; }
	inline float* get_address_of_acc_10() { return &___acc_10; }
	inline void set_acc_10(float value)
	{
		___acc_10 = value;
	}

	inline static int32_t get_offset_of_radiusMin_11() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___radiusMin_11)); }
	inline float get_radiusMin_11() const { return ___radiusMin_11; }
	inline float* get_address_of_radiusMin_11() { return &___radiusMin_11; }
	inline void set_radiusMin_11(float value)
	{
		___radiusMin_11 = value;
	}

	inline static int32_t get_offset_of_radiusMax_12() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___radiusMax_12)); }
	inline float get_radiusMax_12() const { return ___radiusMax_12; }
	inline float* get_address_of_radiusMax_12() { return &___radiusMax_12; }
	inline void set_radiusMax_12(float value)
	{
		___radiusMax_12 = value;
	}

	inline static int32_t get_offset_of_radians_13() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___radians_13)); }
	inline float get_radians_13() const { return ___radians_13; }
	inline float* get_address_of_radians_13() { return &___radians_13; }
	inline void set_radians_13(float value)
	{
		___radians_13 = value;
	}

	inline static int32_t get_offset_of_angleRotation_14() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___angleRotation_14)); }
	inline float get_angleRotation_14() const { return ___angleRotation_14; }
	inline float* get_address_of_angleRotation_14() { return &___angleRotation_14; }
	inline void set_angleRotation_14(float value)
	{
		___angleRotation_14 = value;
	}

	inline static int32_t get_offset_of_destroyed_15() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939, ___destroyed_15)); }
	inline bool get_destroyed_15() const { return ___destroyed_15; }
	inline bool* get_address_of_destroyed_15() { return &___destroyed_15; }
	inline void set_destroyed_15(bool value)
	{
		___destroyed_15 = value;
	}
};

struct astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_StaticFields
{
public:
	// astroid astroid::instance
	astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * ___instance_16;

public:
	inline static int32_t get_offset_of_instance_16() { return static_cast<int32_t>(offsetof(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_StaticFields, ___instance_16)); }
	inline astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * get_instance_16() const { return ___instance_16; }
	inline astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 ** get_address_of_instance_16() { return &___instance_16; }
	inline void set_instance_16(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * value)
	{
		___instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_16), (void*)value);
	}
};


// died
struct died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// menu
struct menu_tE5FA1740AE0DD6F386AF3E646994D5116D686FBC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject menu::cam
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cam_4;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(menu_tE5FA1740AE0DD6F386AF3E646994D5116D686FBC, ___cam_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cam_4() const { return ___cam_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}
};


// shot
struct shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject shot::holder
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___holder_4;
	// Lab1/Grid2D shot::grid
	Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid_6;
	// UnityEngine.Vector3 shot::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_7;
	// UnityEngine.Vector3 shot::bulletspot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bulletspot_8;
	// System.Single shot::radians
	float ___radians_9;
	// System.Single shot::acc
	float ___acc_10;
	// System.Single shot::rotation
	float ___rotation_11;
	// System.Boolean shot::destroyed
	bool ___destroyed_12;

public:
	inline static int32_t get_offset_of_holder_4() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___holder_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_holder_4() const { return ___holder_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_holder_4() { return &___holder_4; }
	inline void set_holder_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___holder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holder_4), (void*)value);
	}

	inline static int32_t get_offset_of_grid_6() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___grid_6)); }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * get_grid_6() const { return ___grid_6; }
	inline Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 ** get_address_of_grid_6() { return &___grid_6; }
	inline void set_grid_6(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * value)
	{
		___grid_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_6), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_7() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___velocity_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_7() const { return ___velocity_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_7() { return &___velocity_7; }
	inline void set_velocity_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_7 = value;
	}

	inline static int32_t get_offset_of_bulletspot_8() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___bulletspot_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bulletspot_8() const { return ___bulletspot_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bulletspot_8() { return &___bulletspot_8; }
	inline void set_bulletspot_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bulletspot_8 = value;
	}

	inline static int32_t get_offset_of_radians_9() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___radians_9)); }
	inline float get_radians_9() const { return ___radians_9; }
	inline float* get_address_of_radians_9() { return &___radians_9; }
	inline void set_radians_9(float value)
	{
		___radians_9 = value;
	}

	inline static int32_t get_offset_of_acc_10() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___acc_10)); }
	inline float get_acc_10() const { return ___acc_10; }
	inline float* get_address_of_acc_10() { return &___acc_10; }
	inline void set_acc_10(float value)
	{
		___acc_10 = value;
	}

	inline static int32_t get_offset_of_rotation_11() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___rotation_11)); }
	inline float get_rotation_11() const { return ___rotation_11; }
	inline float* get_address_of_rotation_11() { return &___rotation_11; }
	inline void set_rotation_11(float value)
	{
		___rotation_11 = value;
	}

	inline static int32_t get_offset_of_destroyed_12() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2, ___destroyed_12)); }
	inline bool get_destroyed_12() const { return ___destroyed_12; }
	inline bool* get_address_of_destroyed_12() { return &___destroyed_12; }
	inline void set_destroyed_12(bool value)
	{
		___destroyed_12 = value;
	}
};

struct shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_StaticFields
{
public:
	// shot shot::instance
	shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_StaticFields, ___instance_5)); }
	inline shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * get_instance_5() const { return ___instance_5; }
	inline shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_gshared_inline (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLCommand_t543C351B305431E33C445653348726CB79795C73  Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5_gshared (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_gshared (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, GLCommand_t543C351B305431E33C445653348726CB79795C73  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F_gshared (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<astroid>()
inline astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * GameObject_AddComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m9C27B9CF2FF94D7D9E144D262DAAC3E638A97514 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<shot>()
inline shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<astroid>()
inline astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void DrawingTools::DrawCircle(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color,Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools_DrawCircle_m057013DCF7424C6141BF578775E307B0FB28584F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position0, float ___Radius1, int32_t ___Sides2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean CollisionExample::PointInTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollisionExample_PointInTriangle_m6169E233ADD9164F53767AA15E92A8C5C0561C01 (CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void Line::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void Glint::AddCommand(Drawing.Glint.ICommandInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B (RuntimeObject* ___instruction0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>::Add(!0)
inline void List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6 (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>::Clear()
inline void List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6 (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void Lab1/Grid2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void DrawingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3 (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>::get_Count()
inline int32_t List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_inline (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m7324377712EDCE3D0FE09162FD6B3698B94A516D_inline (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Drawing.Glint.ICommandInstruction>::.ctor()
inline void List_1__ctor_m4CB80386AA3F49180E18A898DCB8BBDC5E413678 (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Single DrawingTools::ToDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_ToDegrees_m4292CBF1204EDD2F99A6EACDD1DA9F291CADD149 (float ___radian0, const RuntimeMethod* method);
// System.Single DrawingTools::V3ToAngle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_V3ToAngle_m09CAA1768EC31CD4BD8A4C457CD28635B62580A0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint1, const RuntimeMethod* method);
// System.Single DrawingTools::ToRadians(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_ToRadians_m21E7F0E40B31E430C90DD03F9CF1023C89C5853C (float ___degree0, const RuntimeMethod* method);
// UnityEngine.Vector3 DrawingTools::CircleRadiusPoint(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DrawingTools_CircleRadiusPoint_mB5B3093C4DBF4DECE30F6B959D8AF6DAB559B76D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin0, float ___angle1, float ___radius2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 DrawingTools::EllipseRadiusPoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DrawingTools_EllipseRadiusPoint_m53C08C2B6D7471713A8890FC1234FC1969AA1B70 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin0, float ___angle1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Axis2, const RuntimeMethod* method);
// System.Void Drawing.Glint.GLCommand::.ctor(Drawing.Glint.DrawMode,UnityEngine.Color,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLCommand__ctor_m206ABB49FF898460073D7A19441965D62AF95B64 (GLCommand_t543C351B305431E33C445653348726CB79795C73 * __this, int32_t ___mode0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___verts2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::get_Count()
inline int32_t Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_inline (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC *, const RuntimeMethod*))Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::LoadPixelMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadPixelMatrix_m4B0075F6BAA57F3FB9658DF5FA4226C6ECC0B721 (const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::Dequeue()
inline GLCommand_t543C351B305431E33C445653348726CB79795C73  Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5 (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method)
{
	return ((  GLCommand_t543C351B305431E33C445653348726CB79795C73  (*) (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC *, const RuntimeMethod*))Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5_gshared)(__this, method);
}
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Color_m2BD2AE19C310AF14D34EE5FCB7AAA1562828590A (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::Enqueue(!0)
inline void Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8 (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, GLCommand_t543C351B305431E33C445653348726CB79795C73  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC *, GLCommand_t543C351B305431E33C445653348726CB79795C73 , const RuntimeMethod*))Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<Drawing.Glint.GLCommand>::.ctor()
inline void Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC *, const RuntimeMethod*))Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// UnityEngine.Vector3 DrawingTools::RotatePoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Center0, float ___angle1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointIN2, const RuntimeMethod* method);
// System.Collections.IEnumerator Lab1::WUP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lab1_WUP_m0D86E1EA3DC6E07E23D256BFAF91F36E39A9E2D8 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void DrawingTools::DrawEllipse(UnityEngine.Vector3,UnityEngine.Vector2,System.Int32,UnityEngine.Color,Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools_DrawEllipse_m1B79F206BD44C1B9ECD2E90B1466055B2624F7CA (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Axis1, int32_t ___Sides2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid4, const RuntimeMethod* method);
// System.Void Lab1/<WUP>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWUPU3Ed__33__ctor_m17B8DFCE3F1555B683617F18F8FCE14AA0F677EB (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Lab1/Grid2D::DrawLine(Line,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_DrawLine_m49F8747DBB7214FF5E8098AADD0687B90AD474A5 (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  ___line0, bool ___DrawOnGrid1, const RuntimeMethod* method);
// System.Void Line::Draw(Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line_Draw_m4BB0B4E20F0230E2D495D59E958044C2BB643292 (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * __this, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid0, const RuntimeMethod* method);
// Drawing.Glint.GLCommand Line::ToCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLCommand_t543C351B305431E33C445653348726CB79795C73  Line_ToCommand_m3FD63C111C7A0CFFAD749EA56D9A23683B15B77D (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void ShipFlying::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying_Movement_mB122CD298A51ADF0A4F448865B347E9C32CE4F7E (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, float ___accelerateion0, const RuntimeMethod* method);
// System.Void ShipFlying::Driftin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying_Driftin_m3BB9CE3755188C6D383A522F8D522BCF47050381 (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void AstroidManager::AstroidDrawing(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color,Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidManager_AstroidDrawing_mAEBFE66AD84734948CCCB0DE206DD305A1C432EF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position0, float ___Radius1, int32_t ___Sides2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid4, const RuntimeMethod* method);
// System.Void a2::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a2_Movement_mB117126805E38D0363A5FB5ED47AE3A92DB1790D (a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * __this, float ___accelerateion0, const RuntimeMethod* method);
// System.Void a3::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a3_Movement_m23696D4E13CFC36AA12377DBA9E4959435295F2D (a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * __this, float ___accelerateion0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void astroid::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void astroid_Movement_mDC0B6291AD60C24E38B1C65514CBB1440CCD6385 (astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * __this, float ___accelerateion0, const RuntimeMethod* method);
// System.Collections.IEnumerator died::Died()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* died_Died_m8EE686E6A341A74493FEA41C10150B006BA924DD (died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014 * __this, const RuntimeMethod* method);
// System.Void died/<Died>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDiedU3Ed__2__ctor_m85CA836FBD486D6854087BC23DF7C13082A84802 (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void shot::Movement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shot_Movement_mAD04342463FBAD09282969234AB827B1395EC835 (shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * __this, float ___accelerateion0, float ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single Lab1::test(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Lab1_test_m9F8E9F3EFC43740E32C36A419CADD6EB6A64F697 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, float ___num0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AstroidAdder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidAdder_Start_mD9B0B49A24DB2FD7C18BA855D3D95C40FB9049C0 (AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917_StaticFields*)il2cpp_codegen_static_fields_for(AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917_il2cpp_TypeInfo_var))->set_instance_7(__this);
		// }
		return;
	}
}
// System.Void AstroidAdder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidAdder_Update_mBC8A60B89FCBB9F7820D92AD41383F6137669885 (AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m9C27B9CF2FF94D7D9E144D262DAAC3E638A97514_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->get_timer_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if(timer >= 300)
		float L_2 = __this->get_timer_5();
		if ((!(((float)L_2) >= ((float)(300.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// cam.AddComponent<astroid>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_cam_4();
		astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * L_4;
		L_4 = GameObject_AddComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m9C27B9CF2FF94D7D9E144D262DAAC3E638A97514(L_3, /*hidden argument*/GameObject_AddComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m9C27B9CF2FF94D7D9E144D262DAAC3E638A97514_RuntimeMethod_var);
		// timer = 0;
		__this->set_timer_5((0.0f));
		// astroidNum++;
		float L_5 = __this->get_astroidNum_6();
		__this->set_astroidNum_6(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void AstroidAdder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidAdder__ctor_mE09A3BC22D96A649054F6CCE1E1CC8CE41B32BD5 (AstroidAdder_tE21414AEF977C0188AFBE299D6CD3F94261CD917 * __this, const RuntimeMethod* method)
{
	{
		// public float astroidNum = 3;
		__this->set_astroidNum_6((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AstroidManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidManager_Start_m4D732290C97B9C32DA76E487CFD3AFA409E2323F (AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_StaticFields*)il2cpp_codegen_static_fields_for(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_il2cpp_TypeInfo_var))->set_instance_10(__this);
		// asteroids.Add(Instantiate(asteroid));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_asteroids_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_asteroid_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_0, L_2, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// asteroids.Add(Instantiate(asteroid));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_asteroids_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_asteroid_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_3, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// asteroids.Add(Instantiate(asteroid));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_asteroids_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_asteroid_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_8, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AstroidManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidManager_Update_mCA1551C9AB4F238B5C9A7FC8982C1F5F7809EE28 (AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// timer += Time.deltaTime;
		float L_0 = __this->get_timer_8();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_8(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timer >= 10)
		float L_2 = __this->get_timer_8();
		if ((!(((float)L_2) >= ((float)(10.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// asteroids.Add(Instantiate(asteroid));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_asteroids_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_asteroid_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_3, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// timer = 0;
		__this->set_timer_8((0.0f));
		// astroidNum++;
		float L_6 = __this->get_astroidNum_9();
		__this->set_astroidNum_9(((float)il2cpp_codegen_add((float)L_6, (float)(1.0f))));
	}

IL_0052:
	{
		// foreach(GameObject bullet in bullets)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = __this->get_bullets_7();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_8;
		L_8 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_7, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0161;
		}

IL_0063:
		{
			// foreach(GameObject bullet in bullets)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_9;
			// if(bullet == null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_11;
			L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0086;
			}
		}

IL_0074:
		{
			// bullets.Remove(bullet);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = __this->get_bullets_7();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
			bool L_14;
			L_14 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_12, L_13, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
			// }
			goto IL_0161;
		}

IL_0086:
		{
			// foreach (GameObject troid in asteroids)
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_asteroids_6();
			Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_16;
			L_16 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_15, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
			V_2 = L_16;
		}

IL_0092:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0145;
			}

IL_0097:
			{
				// foreach (GameObject troid in asteroids)
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
				L_17 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
				V_3 = L_17;
				// if (((bullet.GetComponent<shot>().bulletspot.x - troid.GetComponent<astroid>().start.x) * (bullet.GetComponent<shot>().bulletspot.x - troid.GetComponent<astroid>().start.x)) + ((bullet.GetComponent<shot>().bulletspot.y - troid.GetComponent<astroid>().start.y) * (bullet.GetComponent<shot>().bulletspot.y - troid.GetComponent<astroid>().start.y)) <= 2500)
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_1;
				shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * L_19;
				L_19 = GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB(L_18, /*hidden argument*/GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = L_19->get_address_of_bulletspot_8();
				float L_21 = L_20->get_x_2();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_3;
				astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * L_23;
				L_23 = GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B(L_22, /*hidden argument*/GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = L_23->get_address_of_start_7();
				float L_25 = L_24->get_x_2();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_1;
				shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * L_27;
				L_27 = GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB(L_26, /*hidden argument*/GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = L_27->get_address_of_bulletspot_8();
				float L_29 = L_28->get_x_2();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_3;
				astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * L_31;
				L_31 = GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B(L_30, /*hidden argument*/GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = L_31->get_address_of_start_7();
				float L_33 = L_32->get_x_2();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_1;
				shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * L_35;
				L_35 = GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB(L_34, /*hidden argument*/GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = L_35->get_address_of_bulletspot_8();
				float L_37 = L_36->get_y_3();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_3;
				astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * L_39;
				L_39 = GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B(L_38, /*hidden argument*/GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = L_39->get_address_of_start_7();
				float L_41 = L_40->get_y_3();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_1;
				shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * L_43;
				L_43 = GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB(L_42, /*hidden argument*/GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_44 = L_43->get_address_of_bulletspot_8();
				float L_45 = L_44->get_y_3();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_3;
				astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * L_47;
				L_47 = GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B(L_46, /*hidden argument*/GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = L_47->get_address_of_start_7();
				float L_49 = L_48->get_y_3();
				if ((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_25)), (float)((float)il2cpp_codegen_subtract((float)L_29, (float)L_33)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_41)), (float)((float)il2cpp_codegen_subtract((float)L_45, (float)L_49))))))) <= ((float)(2500.0f)))))
				{
					goto IL_0145;
				}
			}

IL_012d:
			{
				// troid.GetComponent<astroid>().destroyed = true;
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_3;
				astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * L_51;
				L_51 = GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B(L_50, /*hidden argument*/GameObject_GetComponent_Tisastroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_m916E06CC0F06F8E7B4F63A5E3E45FFFAFC7FE28B_RuntimeMethod_var);
				L_51->set_destroyed_15((bool)1);
				// bullet.GetComponent<shot>().destroyed = true;
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = V_1;
				shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * L_53;
				L_53 = GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB(L_52, /*hidden argument*/GameObject_GetComponent_Tisshot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_m5731381AC080EA176F07EE0275753508104950CB_RuntimeMethod_var);
				L_53->set_destroyed_12((bool)1);
			}

IL_0145:
			{
				// foreach (GameObject troid in asteroids)
				bool L_54;
				L_54 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
				if (L_54)
				{
					goto IL_0097;
				}
			}

IL_0151:
			{
				IL2CPP_LEAVE(0x161, FINALLY_0153);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0153;
		}

FINALLY_0153:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
			IL2CPP_END_FINALLY(339)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(339)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x161, IL_0161)
		}

IL_0161:
		{
			// foreach(GameObject bullet in bullets)
			bool L_55;
			L_55 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_55)
			{
				goto IL_0063;
			}
		}

IL_016d:
		{
			IL2CPP_LEAVE(0x17D, FINALLY_016f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_016f;
	}

FINALLY_016f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(367)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(367)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17D, IL_017d)
	}

IL_017d:
	{
		// }
		return;
	}
}
// System.Void AstroidManager::AstroidDrawing(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color,Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidManager_AstroidDrawing_mAEBFE66AD84734948CCCB0DE206DD305A1C432EF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position0, float ___Radius1, int32_t ___Sides2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid4, const RuntimeMethod* method)
{
	{
		// DrawingTools.DrawCircle(Position, Radius, Sides, color, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___Position0;
		float L_1 = ___Radius1;
		int32_t L_2 = ___Sides2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color3;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_4 = ___grid4;
		DrawingTools_DrawCircle_m057013DCF7424C6141BF578775E307B0FB28584F(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AstroidManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AstroidManager__ctor_m6F104C1A8E0E9F5B5FE473A31C03D97655B281DF (AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> asteroids = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_asteroids_6(L_0);
		// public List<GameObject> bullets = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_bullets_7(L_1);
		// public float astroidNum = 3;
		__this->set_astroidNum_9((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Canon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canon_Start_m6CBE45F5509398FAB8E949AA4791D1A99E82778E (Canon_tABB651B118B502B15DB83EF6531CDBB626290C88 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Canon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canon_Update_m5466DFB6CD948E6F9FE8AD37E65CA77FC77D39A2 (Canon_tABB651B118B502B15DB83EF6531CDBB626290C88 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		// if (Input.GetKey(KeyCode.S))
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		// if (Input.GetKey(KeyCode.A))
		bool L_2;
		L_2 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		// if (Input.GetKey(KeyCode.D))
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Canon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canon__ctor_m068A8FABCDA3C823AD5186A3FD2E55A3632FB7DE (Canon_tABB651B118B502B15DB83EF6531CDBB626290C88 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CollisionExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionExample_Start_m5134544D5D9B8E07D0B508A0CDC4DC76B48C97FC (CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4 * __this, const RuntimeMethod* method)
{
	{
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = __this->get_grid_4();
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_3), ((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), /*hidden argument*/NULL);
		L_0->set_origin_1(L_3);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_4 = __this->get_grid_4();
		int32_t L_5;
		L_5 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), ((float)((float)L_5)), ((float)((float)L_6)), /*hidden argument*/NULL);
		L_4->set_screenSize_0(L_7);
		// }
		return;
	}
}
// System.Void CollisionExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionExample_Update_mCE7CF5CD6828BB6A623CB5C368D35C6CA3CA942C (CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	{
		// Vector3 r1 = new Vector3(878, 184);
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (878.0f), (184.0f), /*hidden argument*/NULL);
		// Vector3 r2 = new Vector3(818 - 60, 184);
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), (758.0f), (184.0f), /*hidden argument*/NULL);
		// Vector3 r3 = new Vector3(818 - 60, 124);
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (758.0f), (124.0f), /*hidden argument*/NULL);
		// Vector3 r4 = new Vector3(878, 124);
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), (878.0f), (124.0f), /*hidden argument*/NULL);
		// Vector3 t1 = new Vector3(grid.origin.x, grid.origin.y + 100);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = L_0->get_address_of_origin_1();
		float L_2 = L_1->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_3 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = L_3->get_address_of_origin_1();
		float L_5 = L_4->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), L_2, ((float)il2cpp_codegen_add((float)L_5, (float)(100.0f))), /*hidden argument*/NULL);
		// Vector3 t2 = new Vector3(grid.origin.x + 100, grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_6 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = L_6->get_address_of_origin_1();
		float L_8 = L_7->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_9 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = L_9->get_address_of_origin_1();
		float L_11 = L_10->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), ((float)il2cpp_codegen_add((float)L_8, (float)(100.0f))), L_11, /*hidden argument*/NULL);
		// Vector3 t3 = new Vector3(grid.origin.x - 100, grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_12 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = L_12->get_address_of_origin_1();
		float L_14 = L_13->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_15 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = L_15->get_address_of_origin_1();
		float L_17 = L_16->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), ((float)il2cpp_codegen_subtract((float)L_14, (float)(100.0f))), L_17, /*hidden argument*/NULL);
		// thePoint = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_thePoint_11(L_18);
		// Debug.Log(Vector3.Dot(thePoint.normalized, new Vector3(225, 601).normalized));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_thePoint_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_21), (225.0f), (601.0f), /*hidden argument*/NULL);
		V_7 = L_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		float L_23;
		L_23 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_20, L_22, /*hidden argument*/NULL);
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
		// if(thePoint.x <= 878 && thePoint.x >= 818-60 && thePoint.y <= 184 && thePoint.y >= 124)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_thePoint_11();
		float L_27 = L_26->get_x_2();
		if ((!(((float)L_27) <= ((float)(878.0f)))))
		{
			goto IL_0159;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_thePoint_11();
		float L_29 = L_28->get_x_2();
		if ((!(((float)L_29) >= ((float)(758.0f)))))
		{
			goto IL_0159;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_thePoint_11();
		float L_31 = L_30->get_y_3();
		if ((!(((float)L_31) <= ((float)(184.0f)))))
		{
			goto IL_0159;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_thePoint_11();
		float L_33 = L_32->get_y_3();
		if ((!(((float)L_33) >= ((float)(124.0f)))))
		{
			goto IL_0159;
		}
	}
	{
		// fillRectangle = true;
		__this->set_fillRectangle_9((bool)1);
		// }
		goto IL_0160;
	}

IL_0159:
	{
		// fillRectangle = false;
		__this->set_fillRectangle_9((bool)0);
	}

IL_0160:
	{
		// if(PointInTriangle(thePoint, t3, t1, t2))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_thePoint_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_5;
		bool L_38;
		L_38 = CollisionExample_PointInTriangle_m6169E233ADD9164F53767AA15E92A8C5C0561C01(__this, L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_017d;
		}
	}
	{
		// fillTriangle = true;
		__this->set_fillTriangle_10((bool)1);
		// }
		goto IL_0184;
	}

IL_017d:
	{
		// fillTriangle = false;
		__this->set_fillTriangle_10((bool)0);
	}

IL_0184:
	{
		// if(((thePoint.x - 225)* (thePoint.x - 225)) +((thePoint.y - 601)* (thePoint.y - 601)) <= 2500)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_thePoint_11();
		float L_40 = L_39->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_41 = __this->get_address_of_thePoint_11();
		float L_42 = L_41->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = __this->get_address_of_thePoint_11();
		float L_44 = L_43->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_45 = __this->get_address_of_thePoint_11();
		float L_46 = L_45->get_y_3();
		if ((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_40, (float)(225.0f))), (float)((float)il2cpp_codegen_subtract((float)L_42, (float)(225.0f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_44, (float)(601.0f))), (float)((float)il2cpp_codegen_subtract((float)L_46, (float)(601.0f)))))))) <= ((float)(2500.0f)))))
		{
			goto IL_01db;
		}
	}
	{
		// fillCircle = true;
		__this->set_fillCircle_8((bool)1);
		// }
		goto IL_01e2;
	}

IL_01db:
	{
		// fillCircle = false;
		__this->set_fillCircle_8((bool)0);
	}

IL_01e2:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Keypad1))
		bool L_47;
		L_47 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_01f7;
		}
	}
	{
		bool L_48;
		L_48 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)257), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_020f;
		}
	}

IL_01f7:
	{
		// if (isDrawingDivisions == true)
		bool L_49 = __this->get_isDrawingDivisions_7();
		if (!L_49)
		{
			goto IL_0208;
		}
	}
	{
		// isDrawingDivisions = false;
		__this->set_isDrawingDivisions_7((bool)0);
		// }
		goto IL_020f;
	}

IL_0208:
	{
		// isDrawingDivisions = true;
		__this->set_isDrawingDivisions_7((bool)1);
	}

IL_020f:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_50 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = L_50->get_address_of_origin_1();
		float L_52 = L_51->get_x_2();
		V_8 = L_52;
		goto IL_02e8;
	}

IL_0226:
	{
		// if (i == grid.origin.x)
		float L_53 = V_8;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_54 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_55 = L_54->get_address_of_origin_1();
		float L_56 = L_55->get_x_2();
		if ((!(((float)L_53) == ((float)L_56))))
		{
			goto IL_028f;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.screenSize.y), new Vector3(grid.origin.x, 0), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_57 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_58 = L_57->get_address_of_origin_1();
		float L_59 = L_58->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_60 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_61 = L_60->get_address_of_screenSize_0();
		float L_62 = L_61->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_63), L_59, L_62, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_64 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_65 = L_64->get_address_of_origin_1();
		float L_66 = L_65->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_67), L_66, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
		L_68 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_69), L_63, L_67, L_68, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_70 = L_69;
		RuntimeObject * L_71 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_70);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_71, /*hidden argument*/NULL);
		// }
		goto IL_02c7;
	}

IL_028f:
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), lineColor));
		float L_72 = V_8;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_73 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_74 = L_73->get_address_of_screenSize_0();
		float L_75 = L_74->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_76), L_72, L_75, /*hidden argument*/NULL);
		float L_77 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_78), L_77, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79 = __this->get_lineColor_5();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_80;
		memset((&L_80), 0, sizeof(L_80));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_80), L_76, L_78, L_79, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_81 = L_80;
		RuntimeObject * L_82 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_81);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_82, /*hidden argument*/NULL);
	}

IL_02c7:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
		float L_83 = V_8;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_84 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = L_84->get_address_of_origin_1();
		float L_86 = L_85->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_87 = __this->get_grid_4();
		float L_88 = L_87->get_gridSize_2();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_83, (float)((float)((float)L_86/(float)L_88))));
	}

IL_02e8:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
		float L_89 = V_8;
		if ((((float)L_89) >= ((float)(0.0f))))
		{
			goto IL_0226;
		}
	}
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_90 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_91 = L_90->get_address_of_origin_1();
		float L_92 = L_91->get_x_2();
		V_9 = L_92;
		goto IL_03cd;
	}

IL_030b:
	{
		// if (i == grid.origin.x)
		float L_93 = V_9;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_94 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_95 = L_94->get_address_of_origin_1();
		float L_96 = L_95->get_x_2();
		if ((!(((float)L_93) == ((float)L_96))))
		{
			goto IL_0374;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.screenSize.y), new Vector3(grid.origin.x, 0), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_97 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_98 = L_97->get_address_of_origin_1();
		float L_99 = L_98->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_100 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_101 = L_100->get_address_of_screenSize_0();
		float L_102 = L_101->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_103), L_99, L_102, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_104 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_105 = L_104->get_address_of_origin_1();
		float L_106 = L_105->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_107), L_106, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_108;
		L_108 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_109), L_103, L_107, L_108, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_110 = L_109;
		RuntimeObject * L_111 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_110);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_111, /*hidden argument*/NULL);
		// }
		goto IL_03ac;
	}

IL_0374:
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), lineColor));
		float L_112 = V_9;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_113 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_114 = L_113->get_address_of_screenSize_0();
		float L_115 = L_114->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_116), L_112, L_115, /*hidden argument*/NULL);
		float L_117 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		memset((&L_118), 0, sizeof(L_118));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_118), L_117, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_119 = __this->get_lineColor_5();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_120;
		memset((&L_120), 0, sizeof(L_120));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_120), L_116, L_118, L_119, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_121 = L_120;
		RuntimeObject * L_122 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_121);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_122, /*hidden argument*/NULL);
	}

IL_03ac:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
		float L_123 = V_9;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_124 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_125 = L_124->get_address_of_origin_1();
		float L_126 = L_125->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_127 = __this->get_grid_4();
		float L_128 = L_127->get_gridSize_2();
		V_9 = ((float)il2cpp_codegen_add((float)L_123, (float)((float)((float)L_126/(float)L_128))));
	}

IL_03cd:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
		float L_129 = V_9;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_130 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_131 = L_130->get_address_of_screenSize_0();
		float L_132 = L_131->get_x_2();
		if ((((float)L_129) <= ((float)L_132)))
		{
			goto IL_030b;
		}
	}
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_133 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_134 = L_133->get_address_of_origin_1();
		float L_135 = L_134->get_y_3();
		V_10 = L_135;
		goto IL_04bd;
	}

IL_03fb:
	{
		// if (i == grid.origin.y)
		float L_136 = V_10;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_137 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_138 = L_137->get_address_of_origin_1();
		float L_139 = L_138->get_y_3();
		if ((!(((float)L_136) == ((float)L_139))))
		{
			goto IL_0464;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, grid.origin.y), new Vector3(0, grid.origin.y), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_140 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_141 = L_140->get_address_of_screenSize_0();
		float L_142 = L_141->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_143 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_144 = L_143->get_address_of_origin_1();
		float L_145 = L_144->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		memset((&L_146), 0, sizeof(L_146));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_146), L_142, L_145, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_147 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_148 = L_147->get_address_of_origin_1();
		float L_149 = L_148->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150;
		memset((&L_150), 0, sizeof(L_150));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_150), (0.0f), L_149, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_151;
		L_151 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_152;
		memset((&L_152), 0, sizeof(L_152));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_152), L_146, L_150, L_151, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_153 = L_152;
		RuntimeObject * L_154 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_153);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_154, /*hidden argument*/NULL);
		// }
		goto IL_049c;
	}

IL_0464:
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), lineColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_155 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_156 = L_155->get_address_of_screenSize_0();
		float L_157 = L_156->get_x_2();
		float L_158 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_159), L_157, L_158, /*hidden argument*/NULL);
		float L_160 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161;
		memset((&L_161), 0, sizeof(L_161));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_161), (0.0f), L_160, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_162 = __this->get_lineColor_5();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_163;
		memset((&L_163), 0, sizeof(L_163));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_163), L_159, L_161, L_162, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_164 = L_163;
		RuntimeObject * L_165 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_164);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_165, /*hidden argument*/NULL);
	}

IL_049c:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
		float L_166 = V_10;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_167 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_168 = L_167->get_address_of_origin_1();
		float L_169 = L_168->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_170 = __this->get_grid_4();
		float L_171 = L_170->get_gridSize_2();
		V_10 = ((float)il2cpp_codegen_subtract((float)L_166, (float)((float)((float)L_169/(float)L_171))));
	}

IL_04bd:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
		float L_172 = V_10;
		if ((((float)L_172) >= ((float)(0.0f))))
		{
			goto IL_03fb;
		}
	}
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_173 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_174 = L_173->get_address_of_origin_1();
		float L_175 = L_174->get_y_3();
		V_11 = L_175;
		goto IL_05a2;
	}

IL_04e0:
	{
		// if (i == grid.origin.y)
		float L_176 = V_11;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_177 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_178 = L_177->get_address_of_origin_1();
		float L_179 = L_178->get_y_3();
		if ((!(((float)L_176) == ((float)L_179))))
		{
			goto IL_0549;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, grid.origin.y), new Vector3(0, grid.origin.y), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_180 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_181 = L_180->get_address_of_screenSize_0();
		float L_182 = L_181->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_183 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_184 = L_183->get_address_of_origin_1();
		float L_185 = L_184->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_186;
		memset((&L_186), 0, sizeof(L_186));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_186), L_182, L_185, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_187 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_188 = L_187->get_address_of_origin_1();
		float L_189 = L_188->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_190;
		memset((&L_190), 0, sizeof(L_190));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_190), (0.0f), L_189, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_191;
		L_191 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_192;
		memset((&L_192), 0, sizeof(L_192));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_192), L_186, L_190, L_191, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_193 = L_192;
		RuntimeObject * L_194 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_193);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_194, /*hidden argument*/NULL);
		// }
		goto IL_0581;
	}

IL_0549:
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), lineColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_195 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_196 = L_195->get_address_of_screenSize_0();
		float L_197 = L_196->get_x_2();
		float L_198 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199;
		memset((&L_199), 0, sizeof(L_199));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_199), L_197, L_198, /*hidden argument*/NULL);
		float L_200 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		memset((&L_201), 0, sizeof(L_201));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_201), (0.0f), L_200, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_202 = __this->get_lineColor_5();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_203;
		memset((&L_203), 0, sizeof(L_203));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_203), L_199, L_201, L_202, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_204 = L_203;
		RuntimeObject * L_205 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_204);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_205, /*hidden argument*/NULL);
	}

IL_0581:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
		float L_206 = V_11;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_207 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_208 = L_207->get_address_of_origin_1();
		float L_209 = L_208->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_210 = __this->get_grid_4();
		float L_211 = L_210->get_gridSize_2();
		V_11 = ((float)il2cpp_codegen_add((float)L_206, (float)((float)((float)L_209/(float)L_211))));
	}

IL_05a2:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
		float L_212 = V_11;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_213 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_214 = L_213->get_address_of_screenSize_0();
		float L_215 = L_214->get_y_3();
		if ((((float)L_212) <= ((float)L_215)))
		{
			goto IL_04e0;
		}
	}
	{
		// if (isDrawingDivisions)
		bool L_216 = __this->get_isDrawingDivisions_7();
		if (!L_216)
		{
			goto IL_080c;
		}
	}
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_217 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_218 = L_217->get_address_of_origin_1();
		float L_219 = L_218->get_x_2();
		V_12 = L_219;
		goto IL_0646;
	}

IL_05d8:
	{
		// if (i != grid.origin.x)
		float L_220 = V_12;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_221 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_222 = L_221->get_address_of_origin_1();
		float L_223 = L_222->get_x_2();
		if ((((float)L_220) == ((float)L_223)))
		{
			goto IL_0624;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), divisionColor));
		float L_224 = V_12;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_225 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_226 = L_225->get_address_of_screenSize_0();
		float L_227 = L_226->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_228;
		memset((&L_228), 0, sizeof(L_228));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_228), L_224, L_227, /*hidden argument*/NULL);
		float L_229 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_230;
		memset((&L_230), 0, sizeof(L_230));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_230), L_229, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_231 = __this->get_divisionColor_6();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_232;
		memset((&L_232), 0, sizeof(L_232));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_232), L_228, L_230, L_231, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_233 = L_232;
		RuntimeObject * L_234 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_233);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_234, /*hidden argument*/NULL);
	}

IL_0624:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
		float L_235 = V_12;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_236 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_237 = L_236->get_address_of_origin_1();
		float L_238 = L_237->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_239 = __this->get_grid_4();
		int32_t L_240 = L_239->get_divisionCount_5();
		V_12 = ((float)il2cpp_codegen_subtract((float)L_235, (float)((float)((float)L_238/(float)((float)((float)L_240))))));
	}

IL_0646:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
		float L_241 = V_12;
		if ((((float)L_241) >= ((float)(0.0f))))
		{
			goto IL_05d8;
		}
	}
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_242 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_243 = L_242->get_address_of_origin_1();
		float L_244 = L_243->get_x_2();
		V_13 = L_244;
		goto IL_06d1;
	}

IL_0663:
	{
		// if (i != grid.origin.x)
		float L_245 = V_13;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_246 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_247 = L_246->get_address_of_origin_1();
		float L_248 = L_247->get_x_2();
		if ((((float)L_245) == ((float)L_248)))
		{
			goto IL_06af;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), divisionColor));
		float L_249 = V_13;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_250 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_251 = L_250->get_address_of_screenSize_0();
		float L_252 = L_251->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_253;
		memset((&L_253), 0, sizeof(L_253));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_253), L_249, L_252, /*hidden argument*/NULL);
		float L_254 = V_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_255;
		memset((&L_255), 0, sizeof(L_255));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_255), L_254, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_256 = __this->get_divisionColor_6();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_257;
		memset((&L_257), 0, sizeof(L_257));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_257), L_253, L_255, L_256, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_258 = L_257;
		RuntimeObject * L_259 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_258);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_259, /*hidden argument*/NULL);
	}

IL_06af:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
		float L_260 = V_13;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_261 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_262 = L_261->get_address_of_origin_1();
		float L_263 = L_262->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_264 = __this->get_grid_4();
		int32_t L_265 = L_264->get_divisionCount_5();
		V_13 = ((float)il2cpp_codegen_add((float)L_260, (float)((float)((float)L_263/(float)((float)((float)L_265))))));
	}

IL_06d1:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
		float L_266 = V_13;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_267 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_268 = L_267->get_address_of_screenSize_0();
		float L_269 = L_268->get_x_2();
		if ((((float)L_266) <= ((float)L_269)))
		{
			goto IL_0663;
		}
	}
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_270 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_271 = L_270->get_address_of_origin_1();
		float L_272 = L_271->get_y_3();
		V_14 = L_272;
		goto IL_076a;
	}

IL_06fc:
	{
		// if (i != grid.origin.y)
		float L_273 = V_14;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_274 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_275 = L_274->get_address_of_origin_1();
		float L_276 = L_275->get_y_3();
		if ((((float)L_273) == ((float)L_276)))
		{
			goto IL_0748;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), divisionColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_277 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_278 = L_277->get_address_of_screenSize_0();
		float L_279 = L_278->get_x_2();
		float L_280 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_281;
		memset((&L_281), 0, sizeof(L_281));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_281), L_279, L_280, /*hidden argument*/NULL);
		float L_282 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_283;
		memset((&L_283), 0, sizeof(L_283));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_283), (0.0f), L_282, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_284 = __this->get_divisionColor_6();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_285;
		memset((&L_285), 0, sizeof(L_285));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_285), L_281, L_283, L_284, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_286 = L_285;
		RuntimeObject * L_287 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_286);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_287, /*hidden argument*/NULL);
	}

IL_0748:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
		float L_288 = V_14;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_289 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_290 = L_289->get_address_of_origin_1();
		float L_291 = L_290->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_292 = __this->get_grid_4();
		int32_t L_293 = L_292->get_divisionCount_5();
		V_14 = ((float)il2cpp_codegen_subtract((float)L_288, (float)((float)((float)L_291/(float)((float)((float)L_293))))));
	}

IL_076a:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
		float L_294 = V_14;
		if ((((float)L_294) >= ((float)(0.0f))))
		{
			goto IL_06fc;
		}
	}
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_295 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_296 = L_295->get_address_of_origin_1();
		float L_297 = L_296->get_y_3();
		V_15 = L_297;
		goto IL_07f5;
	}

IL_0787:
	{
		// if (i != grid.origin.y)
		float L_298 = V_15;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_299 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_300 = L_299->get_address_of_origin_1();
		float L_301 = L_300->get_y_3();
		if ((((float)L_298) == ((float)L_301)))
		{
			goto IL_07d3;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), divisionColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_302 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_303 = L_302->get_address_of_screenSize_0();
		float L_304 = L_303->get_x_2();
		float L_305 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_306;
		memset((&L_306), 0, sizeof(L_306));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_306), L_304, L_305, /*hidden argument*/NULL);
		float L_307 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_308;
		memset((&L_308), 0, sizeof(L_308));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_308), (0.0f), L_307, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_309 = __this->get_divisionColor_6();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_310;
		memset((&L_310), 0, sizeof(L_310));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_310), L_306, L_308, L_309, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_311 = L_310;
		RuntimeObject * L_312 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_311);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_312, /*hidden argument*/NULL);
	}

IL_07d3:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
		float L_313 = V_15;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_314 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_315 = L_314->get_address_of_origin_1();
		float L_316 = L_315->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_317 = __this->get_grid_4();
		int32_t L_318 = L_317->get_divisionCount_5();
		V_15 = ((float)il2cpp_codegen_add((float)L_313, (float)((float)((float)L_316/(float)((float)((float)L_318))))));
	}

IL_07f5:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
		float L_319 = V_15;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_320 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_321 = L_320->get_address_of_screenSize_0();
		float L_322 = L_321->get_y_3();
		if ((((float)L_319) <= ((float)L_322)))
		{
			goto IL_0787;
		}
	}

IL_080c:
	{
		// if (fillCircle)
		bool L_323 = __this->get_fillCircle_8();
		if (!L_323)
		{
			goto IL_0849;
		}
	}
	{
		// for(int i = 0; i <= 50; i++)
		V_16 = 0;
		goto IL_0843;
	}

IL_0819:
	{
		// DrawingTools.DrawCircle(new Vector3(225, 601), i, 32, Color.red, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_324;
		memset((&L_324), 0, sizeof(L_324));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_324), (225.0f), (601.0f), /*hidden argument*/NULL);
		int32_t L_325 = V_16;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_326;
		L_326 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_327 = __this->get_grid_4();
		DrawingTools_DrawCircle_m057013DCF7424C6141BF578775E307B0FB28584F(L_324, ((float)((float)L_325)), ((int32_t)32), L_326, L_327, /*hidden argument*/NULL);
		// for(int i = 0; i <= 50; i++)
		int32_t L_328 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_328, (int32_t)1));
	}

IL_0843:
	{
		// for(int i = 0; i <= 50; i++)
		int32_t L_329 = V_16;
		if ((((int32_t)L_329) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0819;
		}
	}

IL_0849:
	{
		// DrawingTools.DrawCircle(new Vector3(225, 601), 50, 32, Color.red, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_330;
		memset((&L_330), 0, sizeof(L_330));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_330), (225.0f), (601.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_331;
		L_331 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_332 = __this->get_grid_4();
		DrawingTools_DrawCircle_m057013DCF7424C6141BF578775E307B0FB28584F(L_330, (50.0f), ((int32_t)32), L_331, L_332, /*hidden argument*/NULL);
		// if (fillRectangle)
		bool L_333 = __this->get_fillRectangle_9();
		if (!L_333)
		{
			goto IL_08eb;
		}
	}
	{
		// for(float i = 818 - 60; i <= 878; i++)
		V_17 = (758.0f);
		goto IL_08c1;
	}

IL_0880:
	{
		// filledRectangle.Lines.Add(new Line(new Vector3(i, 184), new Vector3(i,124), Color.green));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_334 = __this->get_filledRectangle_15();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_335 = L_334->get_Lines_8();
		float L_336 = V_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_337;
		memset((&L_337), 0, sizeof(L_337));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_337), L_336, (184.0f), /*hidden argument*/NULL);
		float L_338 = V_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_339;
		memset((&L_339), 0, sizeof(L_339));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_339), L_338, (124.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_340;
		L_340 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_341;
		memset((&L_341), 0, sizeof(L_341));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_341), L_337, L_339, L_340, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_342 = L_341;
		RuntimeObject * L_343 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_342);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_335, (RuntimeObject*)L_343, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// for(float i = 818 - 60; i <= 878; i++)
		float L_344 = V_17;
		V_17 = ((float)il2cpp_codegen_add((float)L_344, (float)(1.0f)));
	}

IL_08c1:
	{
		// for(float i = 818 - 60; i <= 878; i++)
		float L_345 = V_17;
		if ((((float)L_345) <= ((float)(878.0f))))
		{
			goto IL_0880;
		}
	}
	{
		// filledRectangle.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_346 = __this->get_filledRectangle_15();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_347 = __this->get_grid_4();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_346, L_347);
		// filledRectangle.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_348 = __this->get_filledRectangle_15();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_349 = L_348->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_349, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_08eb:
	{
		// rectangle.Lines.Add(new Line(r1, r2, Color.green));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_350 = __this->get_rectangle_12();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_351 = L_350->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_352 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_353 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_354;
		L_354 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_355;
		memset((&L_355), 0, sizeof(L_355));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_355), L_352, L_353, L_354, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_356 = L_355;
		RuntimeObject * L_357 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_356);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_351, (RuntimeObject*)L_357, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// rectangle.Lines.Add(new Line(r2, r3, Color.green));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_358 = __this->get_rectangle_12();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_359 = L_358->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_360 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_361 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_362;
		L_362 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_363;
		memset((&L_363), 0, sizeof(L_363));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_363), L_360, L_361, L_362, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_364 = L_363;
		RuntimeObject * L_365 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_364);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_359, (RuntimeObject*)L_365, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// rectangle.Lines.Add(new Line(r3, r4, Color.green));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_366 = __this->get_rectangle_12();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_367 = L_366->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_368 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_369 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_370;
		L_370 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_371;
		memset((&L_371), 0, sizeof(L_371));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_371), L_368, L_369, L_370, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_372 = L_371;
		RuntimeObject * L_373 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_372);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_367, (RuntimeObject*)L_373, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// rectangle.Lines.Add(new Line(r4, r1, Color.green));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_374 = __this->get_rectangle_12();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_375 = L_374->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_376 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_377 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_378;
		L_378 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_379;
		memset((&L_379), 0, sizeof(L_379));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_379), L_376, L_377, L_378, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_380 = L_379;
		RuntimeObject * L_381 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_380);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_375, (RuntimeObject*)L_381, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// rectangle.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_382 = __this->get_rectangle_12();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_383 = __this->get_grid_4();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_382, L_383);
		// if (fillTriangle)
		bool L_384 = __this->get_fillTriangle_10();
		if (!L_384)
		{
			goto IL_0a4e;
		}
	}
	{
		// for(float i = grid.origin.x - 100; i <= grid.origin.x + 100; i++)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_385 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_386 = L_385->get_address_of_origin_1();
		float L_387 = L_386->get_x_2();
		V_18 = ((float)il2cpp_codegen_subtract((float)L_387, (float)(100.0f)));
		goto IL_0a10;
	}

IL_09a5:
	{
		// filledTriangle.Lines.Add(new Line(new Vector3(grid.origin.x, grid.origin.y + 100), new Vector3(i,grid.origin.y), Color.blue));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_388 = __this->get_filledTriangle_14();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_389 = L_388->get_Lines_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_390 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_391 = L_390->get_address_of_origin_1();
		float L_392 = L_391->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_393 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_394 = L_393->get_address_of_origin_1();
		float L_395 = L_394->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_396;
		memset((&L_396), 0, sizeof(L_396));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_396), L_392, ((float)il2cpp_codegen_add((float)L_395, (float)(100.0f))), /*hidden argument*/NULL);
		float L_397 = V_18;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_398 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_399 = L_398->get_address_of_origin_1();
		float L_400 = L_399->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_401;
		memset((&L_401), 0, sizeof(L_401));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_401), L_397, L_400, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_402;
		L_402 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_403;
		memset((&L_403), 0, sizeof(L_403));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_403), L_396, L_401, L_402, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_404 = L_403;
		RuntimeObject * L_405 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_404);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_389, (RuntimeObject*)L_405, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// for(float i = grid.origin.x - 100; i <= grid.origin.x + 100; i++)
		float L_406 = V_18;
		V_18 = ((float)il2cpp_codegen_add((float)L_406, (float)(1.0f)));
	}

IL_0a10:
	{
		// for(float i = grid.origin.x - 100; i <= grid.origin.x + 100; i++)
		float L_407 = V_18;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_408 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_409 = L_408->get_address_of_origin_1();
		float L_410 = L_409->get_x_2();
		if ((((float)L_407) <= ((float)((float)il2cpp_codegen_add((float)L_410, (float)(100.0f))))))
		{
			goto IL_09a5;
		}
	}
	{
		// filledTriangle.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_411 = __this->get_filledTriangle_14();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_412 = __this->get_grid_4();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_411, L_412);
		// filledTriangle.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_413 = __this->get_filledTriangle_14();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_414 = L_413->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_414, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_0a4e:
	{
		// triangle.Lines.Add(new Line(t1, t2, Color.blue));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_415 = __this->get_triangle_13();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_416 = L_415->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_417 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_418 = V_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_419;
		L_419 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_420;
		memset((&L_420), 0, sizeof(L_420));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_420), L_417, L_418, L_419, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_421 = L_420;
		RuntimeObject * L_422 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_421);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_416, (RuntimeObject*)L_422, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// triangle.Lines.Add(new Line(t2, t3, Color.blue));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_423 = __this->get_triangle_13();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_424 = L_423->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_425 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_426 = V_6;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_427;
		L_427 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_428;
		memset((&L_428), 0, sizeof(L_428));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_428), L_425, L_426, L_427, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_429 = L_428;
		RuntimeObject * L_430 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_429);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_424, (RuntimeObject*)L_430, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// triangle.Lines.Add(new Line(t3, t1, Color.blue));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_431 = __this->get_triangle_13();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_432 = L_431->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_433 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_434 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_435;
		L_435 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_436;
		memset((&L_436), 0, sizeof(L_436));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_436), L_433, L_434, L_435, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_437 = L_436;
		RuntimeObject * L_438 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_437);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_432, (RuntimeObject*)L_438, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// triangle.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_439 = __this->get_triangle_13();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_440 = __this->get_grid_4();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_439, L_440);
		// triangle.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_441 = __this->get_triangle_13();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_442 = L_441->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_442, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		// rectangle.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_443 = __this->get_rectangle_12();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_444 = L_443->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_444, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean CollisionExample::PointInTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollisionExample_PointInTriangle_m6169E233ADD9164F53767AA15E92A8C5C0561C01 (CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		// Vector3 v0 = c - a;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___c3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___a1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		// Vector3 v1 = b - a;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___b2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector3 v2 = p - a;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___p0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___a1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// float dot00 = Vector3.Dot(v0, v0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9;
		float L_11;
		L_11 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_10, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float dot01 = Vector3.Dot(v0, v1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14;
		L_14 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// float dot02 = Vector3.Dot(v0, v2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16;
		L_16 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_12, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		// float dot11 = Vector3.Dot(v1, v1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		float L_19;
		L_19 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_17, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		// float dot12 = Vector3.Dot(v1, v2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_1;
		float L_22;
		L_22 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_20, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		// float invDenom = 1 / (dot00 * dot11 - dot01 * dot01);
		float L_23 = V_2;
		float L_24 = V_5;
		float L_25 = V_3;
		float L_26 = V_3;
		V_7 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), (float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26))))));
		// float u = (dot11 * dot02 - dot01 * dot12) * invDenom;
		float L_27 = V_5;
		float L_28 = V_4;
		float L_29 = V_3;
		float L_30 = V_6;
		float L_31 = V_7;
		V_8 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)), (float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)))), (float)L_31));
		// float v = (dot00 * dot12 - dot01 * dot02) * invDenom;
		float L_32 = V_2;
		float L_33 = V_6;
		float L_34 = V_3;
		float L_35 = V_4;
		float L_36 = V_7;
		V_9 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)))), (float)L_36));
		// if (u >=0 && v>=0 && u+v < 1)
		float L_37 = V_8;
		if ((!(((float)L_37) >= ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		float L_38 = V_9;
		if ((!(((float)L_38) >= ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		float L_39 = V_8;
		float L_40 = V_9;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_39, (float)L_40))) < ((float)(1.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void CollisionExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionExample__ctor_m5CA809FB925AE06FB44D1D2E107B7EBFE846D5C9 (CollisionExample_tE252508DE34B87A4FEE34C9280A18FA90DC94FF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Lab1.Grid2D grid = new Lab1.Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_0, /*hidden argument*/NULL);
		__this->set_grid_4(L_0);
		// public Color lineColor = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		__this->set_lineColor_5(L_1);
		// public Color divisionColor = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		__this->set_divisionColor_6(L_2);
		// public bool isDrawingDivisions = true;
		__this->set_isDrawingDivisions_7((bool)1);
		// DrawingObject rectangle = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_3 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_3, /*hidden argument*/NULL);
		__this->set_rectangle_12(L_3);
		// DrawingObject triangle = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_4 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_4, /*hidden argument*/NULL);
		__this->set_triangle_13(L_4);
		// DrawingObject filledTriangle = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_5 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_5, /*hidden argument*/NULL);
		__this->set_filledTriangle_14(L_5);
		// DrawingObject filledRectangle = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_6 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_6, /*hidden argument*/NULL);
		__this->set_filledRectangle_15(L_6);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DrawingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingObject_Start_m908215CD2BC496C26EA3D0181D8D95AFE53212F6 (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * __this, const RuntimeMethod* method)
{
	{
		// Initalize();
		VirtActionInvoker0::Invoke(4 /* System.Void DrawingObject::Initalize() */, __this);
		// }
		return;
	}
}
// System.Void DrawingObject::Initalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingObject_Initalize_mE7CF04B0AA53B712290A84B3E5DA39705AFF054E (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DrawingObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingObject_Update_m151AC8A3024E910FDCE3F56898EC7B3E1ABB9428 (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * __this, const RuntimeMethod* method)
{
	{
		// if (PerformDraw)
		bool L_0 = __this->get_PerformDraw_4();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Draw();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, __this, (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void DrawingObject::Draw(Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingObject_Draw_m339D7BF485B494EDF2E647F46EB9019E5BDA12BB (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * __this, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommandInstruction_t0A1D72890C7210C228512722CC40F44A482B62FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7324377712EDCE3D0FE09162FD6B3698B94A516D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Lines.Count != 0)
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_0 = __this->get_Lines_8();
		int32_t L_1;
		L_1 = List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_inline(L_0, /*hidden argument*/List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// for (int i = 0; i < Lines.Count; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0011:
	{
		// Lines[i].Draw(grid);
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_2 = __this->get_Lines_8();
		int32_t L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m7324377712EDCE3D0FE09162FD6B3698B94A516D_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m7324377712EDCE3D0FE09162FD6B3698B94A516D_RuntimeMethod_var);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_5 = ___grid0;
		InterfaceActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(1 /* System.Void Drawing.Glint.ICommandInstruction::Draw(Lab1/Grid2D) */, ICommandInstruction_t0A1D72890C7210C228512722CC40F44A482B62FF_il2cpp_TypeInfo_var, L_4, L_5);
		// for (int i = 0; i < Lines.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < Lines.Count; i++)
		int32_t L_7 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_8 = __this->get_Lines_8();
		int32_t L_9;
		L_9 = List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_inline(L_8, /*hidden argument*/List_1_get_Count_m55FEB0B591C9C60A18E366BF26E9CE993FD424A0_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0011;
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void DrawingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3 (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CB80386AA3F49180E18A898DCB8BBDC5E413678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool PerformDraw = true;
		__this->set_PerformDraw_4((bool)1);
		// public Vector3 Scale = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_Scale_6(L_0);
		// public Vector3 Location = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_Location_7(L_1);
		// public List<ICommandInstruction> Lines = new List<ICommandInstruction>();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_2 = (List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 *)il2cpp_codegen_object_new(List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3_il2cpp_TypeInfo_var);
		List_1__ctor_m4CB80386AA3F49180E18A898DCB8BBDC5E413678(L_2, /*hidden argument*/List_1__ctor_m4CB80386AA3F49180E18A898DCB8BBDC5E413678_RuntimeMethod_var);
		__this->set_Lines_8(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DrawingTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTest_Update_mB040C54C5C3135B8238FA5EBF7E3F4B7B94FC2AD (DrawingTest_t5CAA178DBBA279B66C724A1D56C19E4A9EF06DDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Glint.AddCommand(new Line(new Vector3(0,            0,                0), Input.mousePosition, Color.black));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_4 = L_3;
		RuntimeObject * L_5 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_4);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_5, /*hidden argument*/NULL);
		// Glint.AddCommand(new Line(new Vector3(Screen.width, 0,                0), Input.mousePosition, Color.red));
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)((float)L_6)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_11 = L_10;
		RuntimeObject * L_12 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_11);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_12, /*hidden argument*/NULL);
		// Glint.AddCommand(new Line(new Vector3(0,            Screen.height,    0), Input.mousePosition, Color.green));
		int32_t L_13;
		L_13 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (0.0f), ((float)((float)L_13)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_18 = L_17;
		RuntimeObject * L_19 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_18);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_19, /*hidden argument*/NULL);
		// Glint.AddCommand(new Line(new Vector3(Screen.width, Screen.height,    0), Input.mousePosition, Color.blue));
		int32_t L_20;
		L_20 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_21;
		L_21 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), ((float)((float)L_20)), ((float)((float)L_21)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_25), L_22, L_23, L_24, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_26 = L_25;
		RuntimeObject * L_27 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_26);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DrawingTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTest__ctor_m9A4CEFCE7E995E17711016FDD7198AB2616F9FD4 (DrawingTest_t5CAA178DBBA279B66C724A1D56C19E4A9EF06DDE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DrawingTools::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools_Start_m32F2D17ACCD5710DA44AA40812DD301DB08150CF (DrawingTools_t360A9BA68C97EE1072EB0E72B949DD636DC01B17 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DrawingTools::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools_Update_m9A5F69D93FFC5CE4F04A8C5477118D7C41707F0F (DrawingTools_t360A9BA68C97EE1072EB0E72B949DD636DC01B17 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single DrawingTools::ToDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_ToDegrees_m4292CBF1204EDD2F99A6EACDD1DA9F291CADD149 (float ___radian0, const RuntimeMethod* method)
{
	{
		// return (radian * (180/Mathf.PI));
		float L_0 = ___radian0;
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)(57.2957764f)));
	}
}
// System.Single DrawingTools::ToRadians(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_ToRadians_m21E7F0E40B31E430C90DD03F9CF1023C89C5853C (float ___degree0, const RuntimeMethod* method)
{
	{
		// return(degree * (Mathf.PI/180));
		float L_0 = ___degree0;
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f)));
	}
}
// System.Single DrawingTools::V3ToAngle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_V3ToAngle_m09CAA1768EC31CD4BD8A4C457CD28635B62580A0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float start = Mathf.Atan2(startPoint.y, startPoint.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___startPoint0;
		float L_1 = L_0.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___startPoint0;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = atan2f(L_1, L_3);
		// float end = Mathf.Atan2(endPoint.y, endPoint.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___endPoint1;
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___endPoint1;
		float L_8 = L_7.get_x_2();
		float L_9;
		L_9 = atan2f(L_6, L_8);
		V_0 = L_9;
		// float angle = Mathf.Atan2(start, end);
		float L_10 = V_0;
		float L_11;
		L_11 = atan2f(L_4, L_10);
		// return (ToDegrees(angle));
		float L_12;
		L_12 = DrawingTools_ToDegrees_m4292CBF1204EDD2F99A6EACDD1DA9F291CADD149(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single DrawingTools::LineToAngle(Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawingTools_LineToAngle_mB18C3550A96505DEE6B12BFE20644BF639E33642 (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  ___line0, const RuntimeMethod* method)
{
	{
		// return (V3ToAngle(line.start, line.end));
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_0 = ___line0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_start_0();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_2 = ___line0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_end_1();
		float L_4;
		L_4 = DrawingTools_V3ToAngle_m09CAA1768EC31CD4BD8A4C457CD28635B62580A0(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 DrawingTools::RotatePoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Center0, float ___angle1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointIN2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float newX = (pointIN.x - Center.x) * Mathf.Cos(angle) - (pointIN.y - Center.y) * Mathf.Sin(angle);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pointIN2;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___Center0;
		float L_3 = L_2.get_x_2();
		float L_4 = ___angle1;
		float L_5;
		L_5 = cosf(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___pointIN2;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___Center0;
		float L_9 = L_8.get_y_3();
		float L_10 = ___angle1;
		float L_11;
		L_11 = sinf(L_10);
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)), (float)L_11))));
		// float newY = (pointIN.x - Center.x) * Mathf.Sin(angle) + (pointIN.y - Center.y) * Mathf.Cos(angle);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___pointIN2;
		float L_13 = L_12.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___Center0;
		float L_15 = L_14.get_x_2();
		float L_16 = ___angle1;
		float L_17;
		L_17 = sinf(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___pointIN2;
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___Center0;
		float L_21 = L_20.get_y_3();
		float L_22 = ___angle1;
		float L_23;
		L_23 = cosf(L_22);
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_23))));
		// pointOUT = new Vector3(Center.x + newX, Center.y + newY);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___Center0;
		float L_25 = L_24.get_x_2();
		float L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___Center0;
		float L_28 = L_27.get_y_3();
		float L_29 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_30), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), ((float)il2cpp_codegen_add((float)L_28, (float)L_29)), /*hidden argument*/NULL);
		// return (pointOUT);
		return L_30;
	}
}
// UnityEngine.Vector3 DrawingTools::CircleRadiusPoint(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DrawingTools_CircleRadiusPoint_mB5B3093C4DBF4DECE30F6B959D8AF6DAB559B76D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin0, float ___angle1, float ___radius2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float radian = ToRadians(angle);
		float L_0 = ___angle1;
		float L_1;
		L_1 = DrawingTools_ToRadians_m21E7F0E40B31E430C90DD03F9CF1023C89C5853C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (new Vector3((radius * Mathf.Cos(radian))+Origin.x, (radius*Mathf.Sin(radian)) + Origin.y));
		float L_2 = ___radius2;
		float L_3 = V_0;
		float L_4;
		L_4 = cosf(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___Origin0;
		float L_6 = L_5.get_x_2();
		float L_7 = ___radius2;
		float L_8 = V_0;
		float L_9;
		L_9 = sinf(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___Origin0;
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_12), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)), (float)L_6)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), (float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void DrawingTools::DrawCircle(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color,Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools_DrawCircle_m057013DCF7424C6141BF578775E307B0FB28584F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position0, float ___Radius1, int32_t ___Sides2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// DrawingObject circle = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_0 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 lastPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 firstPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_2;
		// if (Sides >= 3)
		int32_t L_3 = ___Sides2;
		if ((((int32_t)L_3) < ((int32_t)3)))
		{
			goto IL_00a7;
		}
	}
	{
		// for (float i = 0; i <= 360; i += 360f / Sides)
		V_3 = (0.0f);
		goto IL_009a;
	}

IL_0021:
	{
		// Vector3 curentPoint = CircleRadiusPoint(Position, i, Radius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___Position0;
		float L_5 = V_3;
		float L_6 = ___Radius1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = DrawingTools_CircleRadiusPoint_mB5B3093C4DBF4DECE30F6B959D8AF6DAB559B76D(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// if (lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_10;
		L_10 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// circle.Lines.Add(new Line(lastPoint, curentPoint, color));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_11 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_12 = L_11->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = ___color3;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_16), L_13, L_14, L_15, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_17 = L_16;
		RuntimeObject * L_18 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_17);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_12, (RuntimeObject*)L_18, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// }
		goto IL_006b;
	}

IL_0053:
	{
		// else if (lastPoint == Vector3.zero && i != 360)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_21;
		L_21 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		float L_22 = V_3;
		if ((((float)L_22) == ((float)(360.0f))))
		{
			goto IL_006b;
		}
	}
	{
		// firstPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_4;
		V_2 = L_23;
	}

IL_006b:
	{
		// if(i == 360)
		float L_24 = V_3;
		if ((!(((float)L_24) == ((float)(360.0f)))))
		{
			goto IL_008c;
		}
	}
	{
		// circle.Lines.Add(new Line(curentPoint, firstPoint, color));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_25 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_26 = L_25->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = ___color3;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_30), L_27, L_28, L_29, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_31 = L_30;
		RuntimeObject * L_32 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_31);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_26, (RuntimeObject*)L_32, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_008c:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_4;
		V_1 = L_33;
		// for (float i = 0; i <= 360; i += 360f / Sides)
		float L_34 = V_3;
		int32_t L_35 = ___Sides2;
		V_3 = ((float)il2cpp_codegen_add((float)L_34, (float)((float)((float)(360.0f)/(float)((float)((float)L_35))))));
	}

IL_009a:
	{
		// for (float i = 0; i <= 360; i += 360f / Sides)
		float L_36 = V_3;
		if ((((float)L_36) <= ((float)(360.0f))))
		{
			goto IL_0021;
		}
	}
	{
		// }
		goto IL_00f1;
	}

IL_00a7:
	{
		// for (int i = 0; i <= 360; i += 360 / 3)
		V_5 = 0;
		goto IL_00e8;
	}

IL_00ac:
	{
		// Vector3 curentPoint = CircleRadiusPoint(Position, i, Radius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = ___Position0;
		int32_t L_38 = V_5;
		float L_39 = ___Radius1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = DrawingTools_CircleRadiusPoint_mB5B3093C4DBF4DECE30F6B959D8AF6DAB559B76D(L_37, ((float)((float)L_38)), L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		// if (lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_43;
		L_43 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00de;
		}
	}
	{
		// circle.Lines.Add(new Line(lastPoint, curentPoint, color));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_44 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_45 = L_44->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_6;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48 = ___color3;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_49), L_46, L_47, L_48, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_50 = L_49;
		RuntimeObject * L_51 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_50);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_45, (RuntimeObject*)L_51, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_00de:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_6;
		V_1 = L_52;
		// for (int i = 0; i <= 360; i += 360 / 3)
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)120)));
	}

IL_00e8:
	{
		// for (int i = 0; i <= 360; i += 360 / 3)
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) <= ((int32_t)((int32_t)360))))
		{
			goto IL_00ac;
		}
	}

IL_00f1:
	{
		// circle.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_55 = V_0;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_56 = ___grid4;
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_55, L_56);
		// circle.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_57 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_58 = L_57->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_58, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector3 DrawingTools::EllipseRadiusPoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DrawingTools_EllipseRadiusPoint_m53C08C2B6D7471713A8890FC1234FC1969AA1B70 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin0, float ___angle1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Axis2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float radian = ToRadians(angle);
		float L_0 = ___angle1;
		float L_1;
		L_1 = DrawingTools_ToRadians_m21E7F0E40B31E430C90DD03F9CF1023C89C5853C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (new Vector3((Axis.x*Mathf.Cos(radian)) + Origin.x, (Axis.y*Mathf.Sin(radian))+Origin.y));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___Axis2;
		float L_3 = L_2.get_x_2();
		float L_4 = V_0;
		float L_5;
		L_5 = cosf(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___Origin0;
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___Axis2;
		float L_9 = L_8.get_y_3();
		float L_10 = V_0;
		float L_11;
		L_11 = sinf(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___Origin0;
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_14), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), (float)L_7)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), (float)L_13)), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void DrawingTools::DrawEllipse(UnityEngine.Vector3,UnityEngine.Vector2,System.Int32,UnityEngine.Color,Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools_DrawEllipse_m1B79F206BD44C1B9ECD2E90B1466055B2624F7CA (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Axis1, int32_t ___Sides2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// DrawingObject ellipse = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_0 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 lastPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 firstPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_2;
		// if (Sides >=3)
		int32_t L_3 = ___Sides2;
		if ((((int32_t)L_3) < ((int32_t)3)))
		{
			goto IL_00b8;
		}
	}
	{
		// for (float i = 0; i <= 360; i += 360f / Sides)
		V_3 = (0.0f);
		goto IL_00ab;
	}

IL_0024:
	{
		// Vector3 curentPoint = EllipseRadiusPoint(Position, i, Axis);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___Position0;
		float L_5 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___Axis1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = DrawingTools_EllipseRadiusPoint_m53C08C2B6D7471713A8890FC1234FC1969AA1B70(L_4, L_5, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// if(lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_11;
		L_11 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// ellipse.Lines.Add(new Line(lastPoint, curentPoint, color));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_12 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_13 = L_12->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = ___color3;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_18 = L_17;
		RuntimeObject * L_19 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_18);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_13, (RuntimeObject*)L_19, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// }
		goto IL_0073;
	}

IL_005b:
	{
		// else if (lastPoint == Vector3.zero && i != 360)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_22;
		L_22 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		float L_23 = V_3;
		if ((((float)L_23) == ((float)(360.0f))))
		{
			goto IL_0073;
		}
	}
	{
		// firstPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_4;
		V_2 = L_24;
	}

IL_0073:
	{
		// if (i == 360 - (360 / Sides))
		float L_25 = V_3;
		int32_t L_26 = ___Sides2;
		if ((!(((float)L_25) == ((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)360), (int32_t)((int32_t)((int32_t)((int32_t)360)/(int32_t)L_26))))))))))
		{
			goto IL_009d;
		}
	}
	{
		// ellipse.Lines.Add(new Line(firstPoint, curentPoint, color));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_27 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_28 = L_27->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = ___color3;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_32), L_29, L_30, L_31, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_33 = L_32;
		RuntimeObject * L_34 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_33);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_28, (RuntimeObject*)L_34, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_009d:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_4;
		V_1 = L_35;
		// for (float i = 0; i <= 360; i += 360f / Sides)
		float L_36 = V_3;
		int32_t L_37 = ___Sides2;
		V_3 = ((float)il2cpp_codegen_add((float)L_36, (float)((float)((float)(360.0f)/(float)((float)((float)L_37))))));
	}

IL_00ab:
	{
		// for (float i = 0; i <= 360; i += 360f / Sides)
		float L_38 = V_3;
		if ((((float)L_38) <= ((float)(360.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// }
		goto IL_0107;
	}

IL_00b8:
	{
		// for (int i = 0; i <= 360; i += 360 / 3)
		V_5 = 0;
		goto IL_00fe;
	}

IL_00bd:
	{
		// Vector3 curentPoint = EllipseRadiusPoint(Position, i, Axis);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = ___Position0;
		int32_t L_40 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = ___Axis1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = DrawingTools_EllipseRadiusPoint_m53C08C2B6D7471713A8890FC1234FC1969AA1B70(L_39, ((float)((float)L_40)), L_42, /*hidden argument*/NULL);
		V_6 = L_43;
		// if (lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_46;
		L_46 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_00f4;
		}
	}
	{
		// ellipse.Lines.Add(new Line(lastPoint, curentPoint, color));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_47 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_48 = L_47->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_6;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = ___color3;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_52), L_49, L_50, L_51, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_53 = L_52;
		RuntimeObject * L_54 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_53);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_48, (RuntimeObject*)L_54, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_00f4:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_6;
		V_1 = L_55;
		// for (int i = 0; i <= 360; i += 360 / 3)
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)((int32_t)120)));
	}

IL_00fe:
	{
		// for (int i = 0; i <= 360; i += 360 / 3)
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) <= ((int32_t)((int32_t)360))))
		{
			goto IL_00bd;
		}
	}

IL_0107:
	{
		// ellipse.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_58 = V_0;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_59 = ___grid4;
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_58, L_59);
		// ellipse.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_60 = V_0;
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_61 = L_60->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_61, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DrawingTools::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingTools__ctor_m13F2A0331F905DB0A5FD9B4EF292A17F2D9163BE (DrawingTools_t360A9BA68C97EE1072EB0E72B949DD636DC01B17 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Drawing.Glint.GLCommand
IL2CPP_EXTERN_C void GLCommand_t543C351B305431E33C445653348726CB79795C73_marshal_pinvoke(const GLCommand_t543C351B305431E33C445653348726CB79795C73& unmarshaled, GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_pinvoke& marshaled)
{
	marshaled.___mode_0 = unmarshaled.get_mode_0();
	marshaled.___color_1 = unmarshaled.get_color_1();
	if (unmarshaled.get_verts_2() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_verts_Length = (unmarshaled.get_verts_2())->max_length;
		marshaled.___verts_2 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_verts_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_verts_Length); i++)
		{
			(marshaled.___verts_2)[i] = (unmarshaled.get_verts_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___verts_2 = NULL;
	}
}
IL2CPP_EXTERN_C void GLCommand_t543C351B305431E33C445653348726CB79795C73_marshal_pinvoke_back(const GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_pinvoke& marshaled, GLCommand_t543C351B305431E33C445653348726CB79795C73& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_mode_temp_0 = 0;
	unmarshaled_mode_temp_0 = marshaled.___mode_0;
	unmarshaled.set_mode_0(unmarshaled_mode_temp_0);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_color_temp_1;
	memset((&unmarshaled_color_temp_1), 0, sizeof(unmarshaled_color_temp_1));
	unmarshaled_color_temp_1 = marshaled.___color_1;
	unmarshaled.set_color_1(unmarshaled_color_temp_1);
	if (marshaled.___verts_2 != NULL)
	{
		if (unmarshaled.get_verts_2() == NULL)
		{
			unmarshaled.set_verts_2(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_verts_2())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_verts_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___verts_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Drawing.Glint.GLCommand
IL2CPP_EXTERN_C void GLCommand_t543C351B305431E33C445653348726CB79795C73_marshal_pinvoke_cleanup(GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_pinvoke& marshaled)
{
	if (marshaled.___verts_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___verts_2);
		marshaled.___verts_2 = NULL;
	}
}
// Conversion methods for marshalling of: Drawing.Glint.GLCommand
IL2CPP_EXTERN_C void GLCommand_t543C351B305431E33C445653348726CB79795C73_marshal_com(const GLCommand_t543C351B305431E33C445653348726CB79795C73& unmarshaled, GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_com& marshaled)
{
	marshaled.___mode_0 = unmarshaled.get_mode_0();
	marshaled.___color_1 = unmarshaled.get_color_1();
	if (unmarshaled.get_verts_2() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_verts_Length = (unmarshaled.get_verts_2())->max_length;
		marshaled.___verts_2 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_verts_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_verts_Length); i++)
		{
			(marshaled.___verts_2)[i] = (unmarshaled.get_verts_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___verts_2 = NULL;
	}
}
IL2CPP_EXTERN_C void GLCommand_t543C351B305431E33C445653348726CB79795C73_marshal_com_back(const GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_com& marshaled, GLCommand_t543C351B305431E33C445653348726CB79795C73& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_mode_temp_0 = 0;
	unmarshaled_mode_temp_0 = marshaled.___mode_0;
	unmarshaled.set_mode_0(unmarshaled_mode_temp_0);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_color_temp_1;
	memset((&unmarshaled_color_temp_1), 0, sizeof(unmarshaled_color_temp_1));
	unmarshaled_color_temp_1 = marshaled.___color_1;
	unmarshaled.set_color_1(unmarshaled_color_temp_1);
	if (marshaled.___verts_2 != NULL)
	{
		if (unmarshaled.get_verts_2() == NULL)
		{
			unmarshaled.set_verts_2(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_verts_2())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_verts_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___verts_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Drawing.Glint.GLCommand
IL2CPP_EXTERN_C void GLCommand_t543C351B305431E33C445653348726CB79795C73_marshal_com_cleanup(GLCommand_t543C351B305431E33C445653348726CB79795C73_marshaled_com& marshaled)
{
	if (marshaled.___verts_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___verts_2);
		marshaled.___verts_2 = NULL;
	}
}
// System.Void Drawing.Glint.GLCommand::.ctor(Drawing.Glint.DrawMode,UnityEngine.Color,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLCommand__ctor_m206ABB49FF898460073D7A19441965D62AF95B64 (GLCommand_t543C351B305431E33C445653348726CB79795C73 * __this, int32_t ___mode0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___verts2, const RuntimeMethod* method)
{
	{
		// this.mode = mode;
		int32_t L_0 = ___mode0;
		__this->set_mode_0(L_0);
		// this.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___color1;
		__this->set_color_1(L_1);
		// this.verts = verts;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = ___verts2;
		__this->set_verts_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GLCommand__ctor_m206ABB49FF898460073D7A19441965D62AF95B64_AdjustorThunk (RuntimeObject * __this, int32_t ___mode0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___verts2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GLCommand_t543C351B305431E33C445653348726CB79795C73 * _thisAdjusted = reinterpret_cast<GLCommand_t543C351B305431E33C445653348726CB79795C73 *>(__this + _offset);
	GLCommand__ctor_m206ABB49FF898460073D7A19441965D62AF95B64(_thisAdjusted, ___mode0, ___color1, ___verts2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Glint::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glint_Awake_m3553C08C9D261945CE8163AABBDA8A2CB67E66F6 (Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (self == null)
		Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * L_0 = ((Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_StaticFields*)il2cpp_codegen_static_fields_for(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var))->get_self_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// self = this;
		((Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_StaticFields*)il2cpp_codegen_static_fields_for(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var))->set_self_4(__this);
		// }
		goto IL_0021;
	}

IL_0015:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0021:
	{
		// mat = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_4, L_3, /*hidden argument*/NULL);
		__this->set_mat_6(L_4);
		// }
		return;
	}
}
// System.Void Glint::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glint_OnPostRender_m34ED8FC9774C4E46AE465C710055DA83D6A20A24 (Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GLCommand_t543C351B305431E33C445653348726CB79795C73  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (commands.Count > 0)
		Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * L_0 = __this->get_commands_5();
		int32_t L_1;
		L_1 = Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_inline(L_0, /*hidden argument*/Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// mat.SetPass(0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_mat_6();
		bool L_3;
		L_3 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_2, 0, /*hidden argument*/NULL);
		// GL.LoadPixelMatrix();
		GL_LoadPixelMatrix_m4B0075F6BAA57F3FB9658DF5FA4226C6ECC0B721(/*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0027:
	{
		// cmd = commands.Dequeue();
		Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * L_4 = __this->get_commands_5();
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_5;
		L_5 = Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5(L_4, /*hidden argument*/Queue_1_Dequeue_mB8DF7CA0C4F6301241DA11B27169F5407B91F7C5_RuntimeMethod_var);
		V_0 = L_5;
		// GL.Begin((int)cmd.mode);
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_6 = V_0;
		int32_t L_7 = L_6.get_mode_0();
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(L_7, /*hidden argument*/NULL);
		// GL.Color(cmd.color);
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_8 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = L_8.get_color_1();
		GL_Color_m2BD2AE19C310AF14D34EE5FCB7AAA1562828590A(L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < cmd.verts.Length; i++)
		V_1 = 0;
		goto IL_0062;
	}

IL_004d:
	{
		// GL.Vertex(cmd.verts[i]);
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_10 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = L_10.get_verts_2();
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		GL_Vertex_mDC7977D6400538B576D96E239BFECF39AE41022E(L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < cmd.verts.Length; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0062:
	{
		// for (int i = 0; i < cmd.verts.Length; i++)
		int32_t L_16 = V_1;
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_17 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = L_17.get_verts_2();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_004d;
		}
	}
	{
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
	}

IL_0072:
	{
		// while (commands.Count > 0)
		Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * L_19 = __this->get_commands_5();
		int32_t L_20;
		L_20 = Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_inline(L_19, /*hidden argument*/Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_RuntimeMethod_var);
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Glint::AddCommand(Drawing.Glint.GLCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glint_AddCommand_m993B4A2DFCFFF08E6161C256C25EB3B4EE7F70CD (GLCommand_t543C351B305431E33C445653348726CB79795C73  ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// self.commands.Enqueue(command);
		Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * L_0 = ((Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_StaticFields*)il2cpp_codegen_static_fields_for(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var))->get_self_4();
		Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * L_1 = L_0->get_commands_5();
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_2 = ___command0;
		Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8(L_1, L_2, /*hidden argument*/Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Glint::AddCommand(Drawing.Glint.ICommandInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B (RuntimeObject* ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommandInstruction_t0A1D72890C7210C228512722CC40F44A482B62FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// self.commands.Enqueue(instruction.ToCommand());
		Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * L_0 = ((Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_StaticFields*)il2cpp_codegen_static_fields_for(Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7_il2cpp_TypeInfo_var))->get_self_4();
		Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * L_1 = L_0->get_commands_5();
		RuntimeObject* L_2 = ___instruction0;
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_3;
		L_3 = InterfaceFuncInvoker0< GLCommand_t543C351B305431E33C445653348726CB79795C73  >::Invoke(0 /* Drawing.Glint.GLCommand Drawing.Glint.ICommandInstruction::ToCommand() */, ICommandInstruction_t0A1D72890C7210C228512722CC40F44A482B62FF_il2cpp_TypeInfo_var, L_2);
		Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8(L_1, L_3, /*hidden argument*/Queue_1_Enqueue_mDB374CB1D8FA38DAD3EE53BFB17341485F7845C8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Glint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glint__ctor_mDECFF3CB1E5D7819AF1170AD5BDC66250E56C991 (Glint_tB88DAE4256E273145043F524CF06AE32B7713FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<GLCommand> commands = new Queue<GLCommand>();
		Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * L_0 = (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC *)il2cpp_codegen_object_new(Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F(L_0, /*hidden argument*/Queue_1__ctor_m6C2CAF5559D8FB7764A33EF255C3621EF2580D8F_RuntimeMethod_var);
		__this->set_commands_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Lab1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lab1_Start_mCEC7D005169D954E7A11F65254DB5A695101A4C7 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, const RuntimeMethod* method)
{
	{
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = __this->get_grid_22();
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_3), ((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), /*hidden argument*/NULL);
		L_0->set_origin_1(L_3);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_4 = __this->get_grid_22();
		int32_t L_5;
		L_5 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), ((float)((float)L_5)), ((float)((float)L_6)), /*hidden argument*/NULL);
		L_4->set_screenSize_0(L_7);
		// }
		return;
	}
}
// System.Void Lab1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lab1_Update_m2BFA3EEB26A0892592981732B8F072E1E31443D0 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3262D05B5F4A52792BB908BD05A6268B291CD5FF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_23;
	memset((&V_23), 0, sizeof(V_23));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_25;
	memset((&V_25), 0, sizeof(V_25));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_26;
	memset((&V_26), 0, sizeof(V_26));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_27;
	memset((&V_27), 0, sizeof(V_27));
	float V_28 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_29;
	memset((&V_29), 0, sizeof(V_29));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_30;
	memset((&V_30), 0, sizeof(V_30));
	float V_31 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_32;
	memset((&V_32), 0, sizeof(V_32));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_33;
	memset((&V_33), 0, sizeof(V_33));
	float V_34 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_35;
	memset((&V_35), 0, sizeof(V_35));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_36;
	memset((&V_36), 0, sizeof(V_36));
	float V_37 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_38;
	memset((&V_38), 0, sizeof(V_38));
	{
		// if(Input.GetKeyDown(KeyCode.Minus) && grid.gridSize != 5)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)45), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_1 = __this->get_grid_22();
		float L_2 = L_1->get_gridSize_2();
		if ((((float)L_2) == ((float)(5.0f))))
		{
			goto IL_0032;
		}
	}
	{
		// grid.gridSize -= 5;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_3 = __this->get_grid_22();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_4 = L_3;
		float L_5 = L_4->get_gridSize_2();
		L_4->set_gridSize_2(((float)il2cpp_codegen_subtract((float)L_5, (float)(5.0f))));
	}

IL_0032:
	{
		// if(Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.Equals) && grid.gridSize != 100)
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)43), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)61), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_8 = __this->get_grid_22();
		float L_9 = L_8->get_gridSize_2();
		if ((((float)L_9) == ((float)(100.0f))))
		{
			goto IL_006d;
		}
	}

IL_0056:
	{
		// grid.gridSize += 5;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_10 = __this->get_grid_22();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_11 = L_10;
		float L_12 = L_11->get_gridSize_2();
		L_11->set_gridSize_2(((float)il2cpp_codegen_add((float)L_12, (float)(5.0f))));
	}

IL_006d:
	{
		// if (Input.GetKeyDown(KeyCode.Minus) && Input.GetKeyDown(KeyCode.LeftControl) && grid.divisionCount != 5)
		bool L_13;
		L_13 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)45), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_14;
		L_14 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)306), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a3;
		}
	}
	{
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_15 = __this->get_grid_22();
		int32_t L_16 = L_15->get_divisionCount_5();
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_00a3;
		}
	}
	{
		// grid.divisionCount -= 1;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_17 = __this->get_grid_22();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_18 = L_17;
		int32_t L_19 = L_18->get_divisionCount_5();
		L_18->set_divisionCount_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
	}

IL_00a3:
	{
		// if (Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.Equals) && Input.GetKeyDown(KeyCode.LeftControl) && grid.divisionCount != 100)
		bool L_20;
		L_20 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)43), /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00d0;
		}
	}
	{
		bool L_21;
		L_21 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)61), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)306), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e3;
		}
	}
	{
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_23 = __this->get_grid_22();
		int32_t L_24 = L_23->get_divisionCount_5();
		if ((((int32_t)L_24) == ((int32_t)((int32_t)100))))
		{
			goto IL_00e3;
		}
	}

IL_00d0:
	{
		// grid.divisionCount += 1;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_25 = __this->get_grid_22();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_26 = L_25;
		int32_t L_27 = L_26->get_divisionCount_5();
		L_26->set_divisionCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
	}

IL_00e3:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_28 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = L_28->get_address_of_origin_1();
		float L_30 = L_29->get_x_2();
		V_0 = L_30;
		goto IL_01b6;
	}

IL_00f9:
	{
		// if(i == grid.origin.x)
		float L_31 = V_0;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_32 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = L_32->get_address_of_origin_1();
		float L_34 = L_33->get_x_2();
		if ((!(((float)L_31) == ((float)L_34))))
		{
			goto IL_0161;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.screenSize.y), new Vector3(grid.origin.x, 0), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_35 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = L_35->get_address_of_origin_1();
		float L_37 = L_36->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_38 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = L_38->get_address_of_screenSize_0();
		float L_40 = L_39->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_41), L_37, L_40, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_42 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = L_42->get_address_of_origin_1();
		float L_44 = L_43->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_45), L_44, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		L_46 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_47), L_41, L_45, L_46, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_48 = L_47;
		RuntimeObject * L_49 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_48);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_49, /*hidden argument*/NULL);
		// }
		goto IL_0197;
	}

IL_0161:
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), lineColor));
		float L_50 = V_0;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_51 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_52 = L_51->get_address_of_screenSize_0();
		float L_53 = L_52->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_54), L_50, L_53, /*hidden argument*/NULL);
		float L_55 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_56), L_55, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57 = __this->get_lineColor_8();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_58), L_54, L_56, L_57, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_59 = L_58;
		RuntimeObject * L_60 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_59);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_60, /*hidden argument*/NULL);
	}

IL_0197:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
		float L_61 = V_0;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_62 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_63 = L_62->get_address_of_origin_1();
		float L_64 = L_63->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_65 = __this->get_grid_22();
		float L_66 = L_65->get_gridSize_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_61, (float)((float)((float)L_64/(float)L_66))));
	}

IL_01b6:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
		float L_67 = V_0;
		if ((((float)L_67) >= ((float)(0.0f))))
		{
			goto IL_00f9;
		}
	}
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_68 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_69 = L_68->get_address_of_origin_1();
		float L_70 = L_69->get_x_2();
		V_1 = L_70;
		goto IL_0294;
	}

IL_01d7:
	{
		// if (i == grid.origin.x)
		float L_71 = V_1;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_72 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_73 = L_72->get_address_of_origin_1();
		float L_74 = L_73->get_x_2();
		if ((!(((float)L_71) == ((float)L_74))))
		{
			goto IL_023f;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.screenSize.y), new Vector3(grid.origin.x, 0), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_75 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_76 = L_75->get_address_of_origin_1();
		float L_77 = L_76->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_78 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_79 = L_78->get_address_of_screenSize_0();
		float L_80 = L_79->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_81), L_77, L_80, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_82 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_83 = L_82->get_address_of_origin_1();
		float L_84 = L_83->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_85), L_84, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_86;
		L_86 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_87;
		memset((&L_87), 0, sizeof(L_87));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_87), L_81, L_85, L_86, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_88 = L_87;
		RuntimeObject * L_89 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_88);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_89, /*hidden argument*/NULL);
		// }
		goto IL_0275;
	}

IL_023f:
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), lineColor));
		float L_90 = V_1;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_91 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_92 = L_91->get_address_of_screenSize_0();
		float L_93 = L_92->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_94), L_90, L_93, /*hidden argument*/NULL);
		float L_95 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_96), L_95, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_97 = __this->get_lineColor_8();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_98;
		memset((&L_98), 0, sizeof(L_98));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_98), L_94, L_96, L_97, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_99 = L_98;
		RuntimeObject * L_100 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_99);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_100, /*hidden argument*/NULL);
	}

IL_0275:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
		float L_101 = V_1;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_102 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_103 = L_102->get_address_of_origin_1();
		float L_104 = L_103->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_105 = __this->get_grid_22();
		float L_106 = L_105->get_gridSize_2();
		V_1 = ((float)il2cpp_codegen_add((float)L_101, (float)((float)((float)L_104/(float)L_106))));
	}

IL_0294:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
		float L_107 = V_1;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_108 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_109 = L_108->get_address_of_screenSize_0();
		float L_110 = L_109->get_x_2();
		if ((((float)L_107) <= ((float)L_110)))
		{
			goto IL_01d7;
		}
	}
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_111 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_112 = L_111->get_address_of_origin_1();
		float L_113 = L_112->get_y_3();
		V_2 = L_113;
		goto IL_037d;
	}

IL_02c0:
	{
		// if (i == grid.origin.y)
		float L_114 = V_2;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_115 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_116 = L_115->get_address_of_origin_1();
		float L_117 = L_116->get_y_3();
		if ((!(((float)L_114) == ((float)L_117))))
		{
			goto IL_0328;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, grid.origin.y), new Vector3(0, grid.origin.y), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_118 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_119 = L_118->get_address_of_screenSize_0();
		float L_120 = L_119->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_121 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_122 = L_121->get_address_of_origin_1();
		float L_123 = L_122->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_124), L_120, L_123, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_125 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_126 = L_125->get_address_of_origin_1();
		float L_127 = L_126->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_128), (0.0f), L_127, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_129;
		L_129 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_130;
		memset((&L_130), 0, sizeof(L_130));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_130), L_124, L_128, L_129, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_131 = L_130;
		RuntimeObject * L_132 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_131);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_132, /*hidden argument*/NULL);
		// }
		goto IL_035e;
	}

IL_0328:
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), lineColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_133 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_134 = L_133->get_address_of_screenSize_0();
		float L_135 = L_134->get_x_2();
		float L_136 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_137), L_135, L_136, /*hidden argument*/NULL);
		float L_138 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_139), (0.0f), L_138, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_140 = __this->get_lineColor_8();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_141), L_137, L_139, L_140, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_142 = L_141;
		RuntimeObject * L_143 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_142);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_143, /*hidden argument*/NULL);
	}

IL_035e:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
		float L_144 = V_2;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_145 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_146 = L_145->get_address_of_origin_1();
		float L_147 = L_146->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_148 = __this->get_grid_22();
		float L_149 = L_148->get_gridSize_2();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_144, (float)((float)((float)L_147/(float)L_149))));
	}

IL_037d:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
		float L_150 = V_2;
		if ((((float)L_150) >= ((float)(0.0f))))
		{
			goto IL_02c0;
		}
	}
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_151 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_152 = L_151->get_address_of_origin_1();
		float L_153 = L_152->get_y_3();
		V_3 = L_153;
		goto IL_045b;
	}

IL_039e:
	{
		// if (i == grid.origin.y)
		float L_154 = V_3;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_155 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_156 = L_155->get_address_of_origin_1();
		float L_157 = L_156->get_y_3();
		if ((!(((float)L_154) == ((float)L_157))))
		{
			goto IL_0406;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, grid.origin.y), new Vector3(0, grid.origin.y), Color.cyan));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_158 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_159 = L_158->get_address_of_screenSize_0();
		float L_160 = L_159->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_161 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_162 = L_161->get_address_of_origin_1();
		float L_163 = L_162->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164;
		memset((&L_164), 0, sizeof(L_164));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_164), L_160, L_163, /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_165 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_166 = L_165->get_address_of_origin_1();
		float L_167 = L_166->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_168), (0.0f), L_167, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_169;
		L_169 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_170;
		memset((&L_170), 0, sizeof(L_170));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_170), L_164, L_168, L_169, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_171 = L_170;
		RuntimeObject * L_172 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_171);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_172, /*hidden argument*/NULL);
		// }
		goto IL_043c;
	}

IL_0406:
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), lineColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_173 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_174 = L_173->get_address_of_screenSize_0();
		float L_175 = L_174->get_x_2();
		float L_176 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_177;
		memset((&L_177), 0, sizeof(L_177));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_177), L_175, L_176, /*hidden argument*/NULL);
		float L_178 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_179;
		memset((&L_179), 0, sizeof(L_179));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_179), (0.0f), L_178, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_180 = __this->get_lineColor_8();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_181;
		memset((&L_181), 0, sizeof(L_181));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_181), L_177, L_179, L_180, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_182 = L_181;
		RuntimeObject * L_183 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_182);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_183, /*hidden argument*/NULL);
	}

IL_043c:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
		float L_184 = V_3;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_185 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_186 = L_185->get_address_of_origin_1();
		float L_187 = L_186->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_188 = __this->get_grid_22();
		float L_189 = L_188->get_gridSize_2();
		V_3 = ((float)il2cpp_codegen_add((float)L_184, (float)((float)((float)L_187/(float)L_189))));
	}

IL_045b:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
		float L_190 = V_3;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_191 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_192 = L_191->get_address_of_screenSize_0();
		float L_193 = L_192->get_y_3();
		if ((((float)L_190) <= ((float)L_193)))
		{
			goto IL_039e;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_194;
		L_194 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (!L_194)
		{
			goto IL_0492;
		}
	}
	{
		// if(isDrawingOrigin == true)
		bool L_195 = __this->get_isDrawingOrigin_10();
		if (!L_195)
		{
			goto IL_048b;
		}
	}
	{
		// isDrawingOrigin = false;
		__this->set_isDrawingOrigin_10((bool)0);
		// }
		goto IL_0492;
	}

IL_048b:
	{
		// isDrawingOrigin = true;
		__this->set_isDrawingOrigin_10((bool)1);
	}

IL_0492:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_196;
		L_196 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (!L_196)
		{
			goto IL_04b3;
		}
	}
	{
		// if (isDrawingAxis == true)
		bool L_197 = __this->get_isDrawingAxis_11();
		if (!L_197)
		{
			goto IL_04ac;
		}
	}
	{
		// isDrawingAxis = false;
		__this->set_isDrawingAxis_11((bool)0);
		// }
		goto IL_04b3;
	}

IL_04ac:
	{
		// isDrawingAxis = true;
		__this->set_isDrawingAxis_11((bool)1);
	}

IL_04b3:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_198;
		L_198 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		if (!L_198)
		{
			goto IL_04d4;
		}
	}
	{
		// if (isDrawingDivisions == true)
		bool L_199 = __this->get_isDrawingDivisions_12();
		if (!L_199)
		{
			goto IL_04cd;
		}
	}
	{
		// isDrawingDivisions = false;
		__this->set_isDrawingDivisions_12((bool)0);
		// }
		goto IL_04d4;
	}

IL_04cd:
	{
		// isDrawingDivisions = true;
		__this->set_isDrawingDivisions_12((bool)1);
	}

IL_04d4:
	{
		// if (Input.GetKey(KeyCode.Mouse2) || Input.GetKeyDown(KeyCode.O))
		bool L_200;
		L_200 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)325), /*hidden argument*/NULL);
		if (L_200)
		{
			goto IL_04e9;
		}
	}
	{
		bool L_201;
		L_201 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)111), /*hidden argument*/NULL);
		if (!L_201)
		{
			goto IL_04f9;
		}
	}

IL_04e9:
	{
		// grid.origin = Input.mousePosition;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_202 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203;
		L_203 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		L_202->set_origin_1(L_203);
	}

IL_04f9:
	{
		// if(Input.GetKey(KeyCode.Mouse0))
		bool L_204;
		L_204 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)323), /*hidden argument*/NULL);
		if (!L_204)
		{
			goto IL_053f;
		}
	}
	{
		// Debug.Log("x:"+Input.mousePosition.x + " y:" + Input.mousePosition.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205;
		L_205 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		V_4 = L_205;
		float* L_206 = (&V_4)->get_address_of_x_2();
		String_t* L_207;
		L_207 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_206, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208;
		L_208 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		V_4 = L_208;
		float* L_209 = (&V_4)->get_address_of_y_3();
		String_t* L_210;
		L_210 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_209, /*hidden argument*/NULL);
		String_t* L_211;
		L_211 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral3262D05B5F4A52792BB908BD05A6268B291CD5FF, L_207, _stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D, L_210, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_211, /*hidden argument*/NULL);
	}

IL_053f:
	{
		// if (isDrawingDivisions)
		bool L_212 = __this->get_isDrawingDivisions_12();
		if (!L_212)
		{
			goto IL_0792;
		}
	}
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_213 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_214 = L_213->get_address_of_origin_1();
		float L_215 = L_214->get_x_2();
		V_5 = L_215;
		goto IL_05cc;
	}

IL_055e:
	{
		// if(i != grid.origin.x)
		float L_216 = V_5;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_217 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_218 = L_217->get_address_of_origin_1();
		float L_219 = L_218->get_x_2();
		if ((((float)L_216) == ((float)L_219)))
		{
			goto IL_05aa;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), divisionColor));
		float L_220 = V_5;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_221 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_222 = L_221->get_address_of_screenSize_0();
		float L_223 = L_222->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_224;
		memset((&L_224), 0, sizeof(L_224));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_224), L_220, L_223, /*hidden argument*/NULL);
		float L_225 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_226;
		memset((&L_226), 0, sizeof(L_226));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_226), L_225, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_227 = __this->get_divisionColor_9();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_228;
		memset((&L_228), 0, sizeof(L_228));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_228), L_224, L_226, L_227, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_229 = L_228;
		RuntimeObject * L_230 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_229);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_230, /*hidden argument*/NULL);
	}

IL_05aa:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
		float L_231 = V_5;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_232 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_233 = L_232->get_address_of_origin_1();
		float L_234 = L_233->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_235 = __this->get_grid_22();
		int32_t L_236 = L_235->get_divisionCount_5();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_231, (float)((float)((float)L_234/(float)((float)((float)L_236))))));
	}

IL_05cc:
	{
		// for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
		float L_237 = V_5;
		if ((((float)L_237) >= ((float)(0.0f))))
		{
			goto IL_055e;
		}
	}
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_238 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_239 = L_238->get_address_of_origin_1();
		float L_240 = L_239->get_x_2();
		V_6 = L_240;
		goto IL_0657;
	}

IL_05e9:
	{
		// if (i != grid.origin.x)
		float L_241 = V_6;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_242 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_243 = L_242->get_address_of_origin_1();
		float L_244 = L_243->get_x_2();
		if ((((float)L_241) == ((float)L_244)))
		{
			goto IL_0635;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), divisionColor));
		float L_245 = V_6;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_246 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_247 = L_246->get_address_of_screenSize_0();
		float L_248 = L_247->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_249;
		memset((&L_249), 0, sizeof(L_249));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_249), L_245, L_248, /*hidden argument*/NULL);
		float L_250 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_251;
		memset((&L_251), 0, sizeof(L_251));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_251), L_250, (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_252 = __this->get_divisionColor_9();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_253;
		memset((&L_253), 0, sizeof(L_253));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_253), L_249, L_251, L_252, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_254 = L_253;
		RuntimeObject * L_255 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_254);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_255, /*hidden argument*/NULL);
	}

IL_0635:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
		float L_256 = V_6;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_257 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_258 = L_257->get_address_of_origin_1();
		float L_259 = L_258->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_260 = __this->get_grid_22();
		int32_t L_261 = L_260->get_divisionCount_5();
		V_6 = ((float)il2cpp_codegen_add((float)L_256, (float)((float)((float)L_259/(float)((float)((float)L_261))))));
	}

IL_0657:
	{
		// for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
		float L_262 = V_6;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_263 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_264 = L_263->get_address_of_screenSize_0();
		float L_265 = L_264->get_x_2();
		if ((((float)L_262) <= ((float)L_265)))
		{
			goto IL_05e9;
		}
	}
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_266 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_267 = L_266->get_address_of_origin_1();
		float L_268 = L_267->get_y_3();
		V_7 = L_268;
		goto IL_06f0;
	}

IL_0682:
	{
		// if(i != grid.origin.y)
		float L_269 = V_7;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_270 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_271 = L_270->get_address_of_origin_1();
		float L_272 = L_271->get_y_3();
		if ((((float)L_269) == ((float)L_272)))
		{
			goto IL_06ce;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), divisionColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_273 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_274 = L_273->get_address_of_screenSize_0();
		float L_275 = L_274->get_x_2();
		float L_276 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_277;
		memset((&L_277), 0, sizeof(L_277));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_277), L_275, L_276, /*hidden argument*/NULL);
		float L_278 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_279;
		memset((&L_279), 0, sizeof(L_279));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_279), (0.0f), L_278, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_280 = __this->get_divisionColor_9();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_281;
		memset((&L_281), 0, sizeof(L_281));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_281), L_277, L_279, L_280, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_282 = L_281;
		RuntimeObject * L_283 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_282);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_283, /*hidden argument*/NULL);
	}

IL_06ce:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
		float L_284 = V_7;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_285 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_286 = L_285->get_address_of_origin_1();
		float L_287 = L_286->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_288 = __this->get_grid_22();
		int32_t L_289 = L_288->get_divisionCount_5();
		V_7 = ((float)il2cpp_codegen_subtract((float)L_284, (float)((float)((float)L_287/(float)((float)((float)L_289))))));
	}

IL_06f0:
	{
		// for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
		float L_290 = V_7;
		if ((((float)L_290) >= ((float)(0.0f))))
		{
			goto IL_0682;
		}
	}
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_291 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_292 = L_291->get_address_of_origin_1();
		float L_293 = L_292->get_y_3();
		V_8 = L_293;
		goto IL_077b;
	}

IL_070d:
	{
		// if (i != grid.origin.y)
		float L_294 = V_8;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_295 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_296 = L_295->get_address_of_origin_1();
		float L_297 = L_296->get_y_3();
		if ((((float)L_294) == ((float)L_297)))
		{
			goto IL_0759;
		}
	}
	{
		// Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), divisionColor));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_298 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_299 = L_298->get_address_of_screenSize_0();
		float L_300 = L_299->get_x_2();
		float L_301 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_302;
		memset((&L_302), 0, sizeof(L_302));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_302), L_300, L_301, /*hidden argument*/NULL);
		float L_303 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_304;
		memset((&L_304), 0, sizeof(L_304));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_304), (0.0f), L_303, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_305 = __this->get_divisionColor_9();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_306;
		memset((&L_306), 0, sizeof(L_306));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_306), L_302, L_304, L_305, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_307 = L_306;
		RuntimeObject * L_308 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_307);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_308, /*hidden argument*/NULL);
	}

IL_0759:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
		float L_309 = V_8;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_310 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_311 = L_310->get_address_of_origin_1();
		float L_312 = L_311->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_313 = __this->get_grid_22();
		int32_t L_314 = L_313->get_divisionCount_5();
		V_8 = ((float)il2cpp_codegen_add((float)L_309, (float)((float)((float)L_312/(float)((float)((float)L_314))))));
	}

IL_077b:
	{
		// for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
		float L_315 = V_8;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_316 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_317 = L_316->get_address_of_screenSize_0();
		float L_318 = L_317->get_y_3();
		if ((((float)L_315) <= ((float)L_318)))
		{
			goto IL_070d;
		}
	}

IL_0792:
	{
		// if(isDrawingAxis)
		bool L_319 = __this->get_isDrawingAxis_11();
		if (!L_319)
		{
			goto IL_09bc;
		}
	}
	{
		// Vector3 p1 = new Vector3(grid.origin.x, grid.origin.y + (grid.gridSize * 7.5f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_320 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_321 = L_320->get_address_of_origin_1();
		float L_322 = L_321->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_323 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_324 = L_323->get_address_of_origin_1();
		float L_325 = L_324->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_326 = __this->get_grid_22();
		float L_327 = L_326->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), L_322, ((float)il2cpp_codegen_add((float)L_325, (float)((float)il2cpp_codegen_multiply((float)L_327, (float)(7.5f))))), /*hidden argument*/NULL);
		// Vector3 p2 = new Vector3(grid.origin.x + (grid.gridSize * 7.5f), grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_328 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_329 = L_328->get_address_of_origin_1();
		float L_330 = L_329->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_331 = __this->get_grid_22();
		float L_332 = L_331->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_333 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_334 = L_333->get_address_of_origin_1();
		float L_335 = L_334->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), ((float)il2cpp_codegen_add((float)L_330, (float)((float)il2cpp_codegen_multiply((float)L_332, (float)(7.5f))))), L_335, /*hidden argument*/NULL);
		// Vector3 p3 = new Vector3(grid.origin.x, grid.origin.y - (grid.gridSize * 7.5f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_336 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_337 = L_336->get_address_of_origin_1();
		float L_338 = L_337->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_339 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_340 = L_339->get_address_of_origin_1();
		float L_341 = L_340->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_342 = __this->get_grid_22();
		float L_343 = L_342->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_11), L_338, ((float)il2cpp_codegen_subtract((float)L_341, (float)((float)il2cpp_codegen_multiply((float)L_343, (float)(7.5f))))), /*hidden argument*/NULL);
		// Vector3 p4 = new Vector3(grid.origin.x - (grid.gridSize * 7.5f), grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_344 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_345 = L_344->get_address_of_origin_1();
		float L_346 = L_345->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_347 = __this->get_grid_22();
		float L_348 = L_347->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_349 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_350 = L_349->get_address_of_origin_1();
		float L_351 = L_350->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), ((float)il2cpp_codegen_subtract((float)L_346, (float)((float)il2cpp_codegen_multiply((float)L_348, (float)(7.5f))))), L_351, /*hidden argument*/NULL);
		// Vector3 newP1 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p1);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_352 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_353 = L_352->get_origin_1();
		float L_354 = __this->get_numb_32();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_355 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_356;
		L_356 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_353, ((float)il2cpp_codegen_multiply((float)L_354, (float)(0.0174532924f))), L_355, /*hidden argument*/NULL);
		V_13 = L_356;
		// Vector3 newP2 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_357 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_358 = L_357->get_origin_1();
		float L_359 = __this->get_numb_32();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_360 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_361;
		L_361 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_358, ((float)il2cpp_codegen_multiply((float)L_359, (float)(0.0174532924f))), L_360, /*hidden argument*/NULL);
		V_14 = L_361;
		// Vector3 newP3 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p3);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_362 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_363 = L_362->get_origin_1();
		float L_364 = __this->get_numb_32();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_365 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_366;
		L_366 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_363, ((float)il2cpp_codegen_multiply((float)L_364, (float)(0.0174532924f))), L_365, /*hidden argument*/NULL);
		V_15 = L_366;
		// Vector3 newP4 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p4);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_367 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_368 = L_367->get_origin_1();
		float L_369 = __this->get_numb_32();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_370 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_371;
		L_371 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_368, ((float)il2cpp_codegen_multiply((float)L_369, (float)(0.0174532924f))), L_370, /*hidden argument*/NULL);
		V_16 = L_371;
		// spinDiamond.Lines.Add(new Line(newP1, newP2, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_372 = __this->get_spinDiamond_24();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_373 = L_372->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_374 = V_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_375 = V_14;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_376 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_377;
		memset((&L_377), 0, sizeof(L_377));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_377), L_374, L_375, L_376, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_378 = L_377;
		RuntimeObject * L_379 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_378);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_373, (RuntimeObject*)L_379, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// spinDiamond.Lines.Add(new Line(newP2, newP3, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_380 = __this->get_spinDiamond_24();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_381 = L_380->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_382 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_383 = V_15;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_384 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_385;
		memset((&L_385), 0, sizeof(L_385));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_385), L_382, L_383, L_384, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_386 = L_385;
		RuntimeObject * L_387 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_386);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_381, (RuntimeObject*)L_387, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// spinDiamond.Lines.Add(new Line(newP3, newP4, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_388 = __this->get_spinDiamond_24();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_389 = L_388->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_390 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_391 = V_16;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_392 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_393;
		memset((&L_393), 0, sizeof(L_393));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_393), L_390, L_391, L_392, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_394 = L_393;
		RuntimeObject * L_395 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_394);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_389, (RuntimeObject*)L_395, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// spinDiamond.Lines.Add(new Line(newP4, newP1, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_396 = __this->get_spinDiamond_24();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_397 = L_396->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_398 = V_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_399 = V_13;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_400 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_401;
		memset((&L_401), 0, sizeof(L_401));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_401), L_398, L_399, L_400, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_402 = L_401;
		RuntimeObject * L_403 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_402);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_397, (RuntimeObject*)L_403, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// spinDiamond.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_404 = __this->get_spinDiamond_24();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_405 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_404, L_405);
		// if (waitForFiveSeconds == null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_406 = __this->get_waitForFiveSeconds_31();
		if (L_406)
		{
			goto IL_09bc;
		}
	}
	{
		// waitForFiveSeconds = StartCoroutine(WUP());
		RuntimeObject* L_407;
		L_407 = Lab1_WUP_m0D86E1EA3DC6E07E23D256BFAF91F36E39A9E2D8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_408;
		L_408 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_407, /*hidden argument*/NULL);
		__this->set_waitForFiveSeconds_31(L_408);
	}

IL_09bc:
	{
		// if(isDrawingHexagon)
		bool L_409 = __this->get_isDrawingHexagon_14();
		if (!L_409)
		{
			goto IL_0cb2;
		}
	}
	{
		// Vector3 p1 = new Vector3(grid.origin.x + (grid.gridSize * 1.3f), grid.origin.y + (grid.gridSize * 1.8f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_410 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_411 = L_410->get_address_of_origin_1();
		float L_412 = L_411->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_413 = __this->get_grid_22();
		float L_414 = L_413->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_415 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_416 = L_415->get_address_of_origin_1();
		float L_417 = L_416->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_418 = __this->get_grid_22();
		float L_419 = L_418->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_17), ((float)il2cpp_codegen_add((float)L_412, (float)((float)il2cpp_codegen_multiply((float)L_414, (float)(1.29999995f))))), ((float)il2cpp_codegen_add((float)L_417, (float)((float)il2cpp_codegen_multiply((float)L_419, (float)(1.79999995f))))), /*hidden argument*/NULL);
		// Vector3 p2 = new Vector3(grid.origin.x - (grid.gridSize * 1.3f), grid.origin.y + (grid.gridSize * 1.8f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_420 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_421 = L_420->get_address_of_origin_1();
		float L_422 = L_421->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_423 = __this->get_grid_22();
		float L_424 = L_423->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_425 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_426 = L_425->get_address_of_origin_1();
		float L_427 = L_426->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_428 = __this->get_grid_22();
		float L_429 = L_428->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_18), ((float)il2cpp_codegen_subtract((float)L_422, (float)((float)il2cpp_codegen_multiply((float)L_424, (float)(1.29999995f))))), ((float)il2cpp_codegen_add((float)L_427, (float)((float)il2cpp_codegen_multiply((float)L_429, (float)(1.79999995f))))), /*hidden argument*/NULL);
		// Vector3 p3 = new Vector3(grid.origin.x - (grid.gridSize * 2.1f), grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_430 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_431 = L_430->get_address_of_origin_1();
		float L_432 = L_431->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_433 = __this->get_grid_22();
		float L_434 = L_433->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_435 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_436 = L_435->get_address_of_origin_1();
		float L_437 = L_436->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_19), ((float)il2cpp_codegen_subtract((float)L_432, (float)((float)il2cpp_codegen_multiply((float)L_434, (float)(2.0999999f))))), L_437, /*hidden argument*/NULL);
		// Vector3 p4 = new Vector3(grid.origin.x - (grid.gridSize * 1.3f), grid.origin.y - (grid.gridSize * 1.8f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_438 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_439 = L_438->get_address_of_origin_1();
		float L_440 = L_439->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_441 = __this->get_grid_22();
		float L_442 = L_441->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_443 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_444 = L_443->get_address_of_origin_1();
		float L_445 = L_444->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_446 = __this->get_grid_22();
		float L_447 = L_446->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_20), ((float)il2cpp_codegen_subtract((float)L_440, (float)((float)il2cpp_codegen_multiply((float)L_442, (float)(1.29999995f))))), ((float)il2cpp_codegen_subtract((float)L_445, (float)((float)il2cpp_codegen_multiply((float)L_447, (float)(1.79999995f))))), /*hidden argument*/NULL);
		// Vector3 p5 = new Vector3(grid.origin.x + (grid.gridSize * 1.3f), grid.origin.y - (grid.gridSize * 1.8f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_448 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_449 = L_448->get_address_of_origin_1();
		float L_450 = L_449->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_451 = __this->get_grid_22();
		float L_452 = L_451->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_453 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_454 = L_453->get_address_of_origin_1();
		float L_455 = L_454->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_456 = __this->get_grid_22();
		float L_457 = L_456->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_21), ((float)il2cpp_codegen_add((float)L_450, (float)((float)il2cpp_codegen_multiply((float)L_452, (float)(1.29999995f))))), ((float)il2cpp_codegen_subtract((float)L_455, (float)((float)il2cpp_codegen_multiply((float)L_457, (float)(1.79999995f))))), /*hidden argument*/NULL);
		// Vector3 p6 = new Vector3(grid.origin.x + (grid.gridSize * 2.1f), grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_458 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_459 = L_458->get_address_of_origin_1();
		float L_460 = L_459->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_461 = __this->get_grid_22();
		float L_462 = L_461->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_463 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_464 = L_463->get_address_of_origin_1();
		float L_465 = L_464->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_22), ((float)il2cpp_codegen_add((float)L_460, (float)((float)il2cpp_codegen_multiply((float)L_462, (float)(2.0999999f))))), L_465, /*hidden argument*/NULL);
		// hexigon.Lines.Add(new Line(p1, p2, new Color(255, 165, 0)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_466 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_467 = L_466->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_468 = V_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_469 = V_18;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_470;
		memset((&L_470), 0, sizeof(L_470));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_470), (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_471;
		memset((&L_471), 0, sizeof(L_471));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_471), L_468, L_469, L_470, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_472 = L_471;
		RuntimeObject * L_473 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_472);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_467, (RuntimeObject*)L_473, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// hexigon.Lines.Add(new Line(p2, p3, new Color(255, 165, 0)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_474 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_475 = L_474->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_476 = V_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_477 = V_19;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_478;
		memset((&L_478), 0, sizeof(L_478));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_478), (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_479;
		memset((&L_479), 0, sizeof(L_479));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_479), L_476, L_477, L_478, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_480 = L_479;
		RuntimeObject * L_481 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_480);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_475, (RuntimeObject*)L_481, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// hexigon.Lines.Add(new Line(p3, p4, new Color(255, 165, 0)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_482 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_483 = L_482->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_484 = V_19;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_485 = V_20;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_486;
		memset((&L_486), 0, sizeof(L_486));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_486), (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_487;
		memset((&L_487), 0, sizeof(L_487));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_487), L_484, L_485, L_486, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_488 = L_487;
		RuntimeObject * L_489 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_488);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_483, (RuntimeObject*)L_489, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// hexigon.Lines.Add(new Line(p4, p5, new Color(255, 165, 0)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_490 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_491 = L_490->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_492 = V_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_493 = V_21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_494;
		memset((&L_494), 0, sizeof(L_494));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_494), (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_495;
		memset((&L_495), 0, sizeof(L_495));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_495), L_492, L_493, L_494, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_496 = L_495;
		RuntimeObject * L_497 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_496);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_491, (RuntimeObject*)L_497, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// hexigon.Lines.Add(new Line(p5, p6, new Color(255, 165, 0)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_498 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_499 = L_498->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_500 = V_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_501 = V_22;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_502;
		memset((&L_502), 0, sizeof(L_502));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_502), (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_503;
		memset((&L_503), 0, sizeof(L_503));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_503), L_500, L_501, L_502, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_504 = L_503;
		RuntimeObject * L_505 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_504);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_499, (RuntimeObject*)L_505, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// hexigon.Lines.Add(new Line(p6, p1, new Color(255, 165, 0)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_506 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_507 = L_506->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_508 = V_22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_509 = V_17;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_510;
		memset((&L_510), 0, sizeof(L_510));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_510), (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_511;
		memset((&L_511), 0, sizeof(L_511));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_511), L_508, L_509, L_510, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_512 = L_511;
		RuntimeObject * L_513 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_512);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_507, (RuntimeObject*)L_513, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// hexigon.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_514 = __this->get_hexigon_25();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_515 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_514, L_515);
		// hexigon.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_516 = __this->get_hexigon_25();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_517 = L_516->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_517, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_0cb2:
	{
		// if(isDrawingDiamond)
		bool L_518 = __this->get_isDrawingDiamond_13();
		if (!L_518)
		{
			goto IL_0e52;
		}
	}
	{
		// Vector3 p1 = new Vector3(grid.origin.x, grid.origin.y + (grid.gridSize * .2f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_519 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_520 = L_519->get_address_of_origin_1();
		float L_521 = L_520->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_522 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_523 = L_522->get_address_of_origin_1();
		float L_524 = L_523->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_525 = __this->get_grid_22();
		float L_526 = L_525->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_23), L_521, ((float)il2cpp_codegen_add((float)L_524, (float)((float)il2cpp_codegen_multiply((float)L_526, (float)(0.200000003f))))), /*hidden argument*/NULL);
		// Vector3 p2 = new Vector3(grid.origin.x + (grid.gridSize * .2f), grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_527 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_528 = L_527->get_address_of_origin_1();
		float L_529 = L_528->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_530 = __this->get_grid_22();
		float L_531 = L_530->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_532 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_533 = L_532->get_address_of_origin_1();
		float L_534 = L_533->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_24), ((float)il2cpp_codegen_add((float)L_529, (float)((float)il2cpp_codegen_multiply((float)L_531, (float)(0.200000003f))))), L_534, /*hidden argument*/NULL);
		// Vector3 p3 = new Vector3(grid.origin.x, grid.origin.y - (grid.gridSize * .2f));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_535 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_536 = L_535->get_address_of_origin_1();
		float L_537 = L_536->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_538 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_539 = L_538->get_address_of_origin_1();
		float L_540 = L_539->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_541 = __this->get_grid_22();
		float L_542 = L_541->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_25), L_537, ((float)il2cpp_codegen_subtract((float)L_540, (float)((float)il2cpp_codegen_multiply((float)L_542, (float)(0.200000003f))))), /*hidden argument*/NULL);
		// Vector3 p4 = new Vector3(grid.origin.x - (grid.gridSize * .2f), grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_543 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_544 = L_543->get_address_of_origin_1();
		float L_545 = L_544->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_546 = __this->get_grid_22();
		float L_547 = L_546->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_548 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_549 = L_548->get_address_of_origin_1();
		float L_550 = L_549->get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_26), ((float)il2cpp_codegen_subtract((float)L_545, (float)((float)il2cpp_codegen_multiply((float)L_547, (float)(0.200000003f))))), L_550, /*hidden argument*/NULL);
		// diamond.Lines.Add(new Line(p1, p2, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_551 = __this->get_diamond_23();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_552 = L_551->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_553 = V_23;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_554 = V_24;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_555 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_556;
		memset((&L_556), 0, sizeof(L_556));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_556), L_553, L_554, L_555, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_557 = L_556;
		RuntimeObject * L_558 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_557);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_552, (RuntimeObject*)L_558, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// diamond.Lines.Add(new Line(p2, p3, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_559 = __this->get_diamond_23();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_560 = L_559->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_561 = V_24;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_562 = V_25;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_563 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_564;
		memset((&L_564), 0, sizeof(L_564));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_564), L_561, L_562, L_563, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_565 = L_564;
		RuntimeObject * L_566 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_565);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_560, (RuntimeObject*)L_566, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// diamond.Lines.Add(new Line(p3, p4, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_567 = __this->get_diamond_23();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_568 = L_567->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_569 = V_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_570 = V_26;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_571 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_572;
		memset((&L_572), 0, sizeof(L_572));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_572), L_569, L_570, L_571, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_573 = L_572;
		RuntimeObject * L_574 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_573);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_568, (RuntimeObject*)L_574, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// diamond.Lines.Add(new Line(p4, p1, axisColor));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_575 = __this->get_diamond_23();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_576 = L_575->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_577 = V_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_578 = V_23;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_579 = __this->get_axisColor_7();
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_580;
		memset((&L_580), 0, sizeof(L_580));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_580), L_577, L_578, L_579, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_581 = L_580;
		RuntimeObject * L_582 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_581);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_576, (RuntimeObject*)L_582, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// diamond.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_583 = __this->get_diamond_23();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_584 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_583, L_584);
		// diamond.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_585 = __this->get_diamond_23();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_586 = L_585->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_586, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_0e52:
	{
		// if(isDrawingE)
		bool L_587 = __this->get_isDrawingE_15();
		if (!L_587)
		{
			goto IL_1152;
		}
	}
	{
		// E.Lines.Add(new Line(grid.origin / 10, new Vector3((grid.origin.x / 10) + 10, grid.origin.y / 10), new Color(255, 53, 184)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_588 = __this->get_E_26();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_589 = L_588->get_Lines_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_590 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_591 = L_590->get_origin_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_592;
		L_592 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_591, (10.0f), /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_593 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_594 = L_593->get_address_of_origin_1();
		float L_595 = L_594->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_596 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_597 = L_596->get_address_of_origin_1();
		float L_598 = L_597->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_599;
		memset((&L_599), 0, sizeof(L_599));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_599), ((float)il2cpp_codegen_add((float)((float)((float)L_595/(float)(10.0f))), (float)(10.0f))), ((float)((float)L_598/(float)(10.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_600;
		memset((&L_600), 0, sizeof(L_600));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_600), (255.0f), (53.0f), (184.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_601;
		memset((&L_601), 0, sizeof(L_601));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_601), L_592, L_599, L_600, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_602 = L_601;
		RuntimeObject * L_603 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_602);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_589, (RuntimeObject*)L_603, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// E.Lines.Add(new Line(grid.origin / 10, new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 10), new Color(255, 53, 184)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_604 = __this->get_E_26();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_605 = L_604->get_Lines_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_606 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_607 = L_606->get_origin_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_608;
		L_608 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_607, (10.0f), /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_609 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_610 = L_609->get_address_of_origin_1();
		float L_611 = L_610->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_612 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_613 = L_612->get_address_of_origin_1();
		float L_614 = L_613->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_615;
		memset((&L_615), 0, sizeof(L_615));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_615), ((float)((float)L_611/(float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_614/(float)(10.0f))), (float)(10.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_616;
		memset((&L_616), 0, sizeof(L_616));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_616), (255.0f), (53.0f), (184.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_617;
		memset((&L_617), 0, sizeof(L_617));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_617), L_608, L_615, L_616, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_618 = L_617;
		RuntimeObject * L_619 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_618);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_605, (RuntimeObject*)L_619, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// E.Lines.Add(new Line(new Vector3((grid.origin.x / 10) + 10, (grid.origin.y / 10) + 10), new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 10), new Color(255, 53, 184)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_620 = __this->get_E_26();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_621 = L_620->get_Lines_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_622 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_623 = L_622->get_address_of_origin_1();
		float L_624 = L_623->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_625 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_626 = L_625->get_address_of_origin_1();
		float L_627 = L_626->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_628;
		memset((&L_628), 0, sizeof(L_628));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_628), ((float)il2cpp_codegen_add((float)((float)((float)L_624/(float)(10.0f))), (float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_627/(float)(10.0f))), (float)(10.0f))), /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_629 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_630 = L_629->get_address_of_origin_1();
		float L_631 = L_630->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_632 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_633 = L_632->get_address_of_origin_1();
		float L_634 = L_633->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_635;
		memset((&L_635), 0, sizeof(L_635));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_635), ((float)((float)L_631/(float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_634/(float)(10.0f))), (float)(10.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_636;
		memset((&L_636), 0, sizeof(L_636));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_636), (255.0f), (53.0f), (184.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_637;
		memset((&L_637), 0, sizeof(L_637));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_637), L_628, L_635, L_636, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_638 = L_637;
		RuntimeObject * L_639 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_638);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_621, (RuntimeObject*)L_639, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// E.Lines.Add(new Line(new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 10), new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 20), new Color(255, 53, 184)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_640 = __this->get_E_26();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_641 = L_640->get_Lines_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_642 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_643 = L_642->get_address_of_origin_1();
		float L_644 = L_643->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_645 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_646 = L_645->get_address_of_origin_1();
		float L_647 = L_646->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_648;
		memset((&L_648), 0, sizeof(L_648));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_648), ((float)((float)L_644/(float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_647/(float)(10.0f))), (float)(10.0f))), /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_649 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_650 = L_649->get_address_of_origin_1();
		float L_651 = L_650->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_652 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_653 = L_652->get_address_of_origin_1();
		float L_654 = L_653->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_655;
		memset((&L_655), 0, sizeof(L_655));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_655), ((float)((float)L_651/(float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_654/(float)(10.0f))), (float)(20.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_656;
		memset((&L_656), 0, sizeof(L_656));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_656), (255.0f), (53.0f), (184.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_657;
		memset((&L_657), 0, sizeof(L_657));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_657), L_648, L_655, L_656, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_658 = L_657;
		RuntimeObject * L_659 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_658);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_641, (RuntimeObject*)L_659, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// E.Lines.Add(new Line(new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 20), new Vector3((grid.origin.x / 10) + 10, (grid.origin.y / 10) + 20), new Color(255, 53, 184)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_660 = __this->get_E_26();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_661 = L_660->get_Lines_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_662 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_663 = L_662->get_address_of_origin_1();
		float L_664 = L_663->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_665 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_666 = L_665->get_address_of_origin_1();
		float L_667 = L_666->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_668;
		memset((&L_668), 0, sizeof(L_668));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_668), ((float)((float)L_664/(float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_667/(float)(10.0f))), (float)(20.0f))), /*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_669 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_670 = L_669->get_address_of_origin_1();
		float L_671 = L_670->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_672 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_673 = L_672->get_address_of_origin_1();
		float L_674 = L_673->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_675;
		memset((&L_675), 0, sizeof(L_675));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_675), ((float)il2cpp_codegen_add((float)((float)((float)L_671/(float)(10.0f))), (float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)((float)L_674/(float)(10.0f))), (float)(20.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_676;
		memset((&L_676), 0, sizeof(L_676));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_676), (255.0f), (53.0f), (184.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_677;
		memset((&L_677), 0, sizeof(L_677));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_677), L_668, L_675, L_676, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_678 = L_677;
		RuntimeObject * L_679 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_678);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_661, (RuntimeObject*)L_679, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// E.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_680 = __this->get_E_26();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_681 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_680, L_681);
		// E.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_682 = __this->get_E_26();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_683 = L_682->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_683, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_1152:
	{
		// if(porabing1)
		bool L_684 = __this->get_porabing1_18();
		if (!L_684)
		{
			goto IL_1231;
		}
	}
	{
		// Vector3 lastPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_685;
		L_685 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_27 = L_685;
		// for(float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_686 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_687 = L_686->get_address_of_screenSize_0();
		float L_688 = L_687->get_x_2();
		V_28 = ((float)il2cpp_codegen_multiply((float)L_688, (float)(-1.0f)));
		goto IL_11f9;
	}

IL_117e:
	{
		// Vector3 curentPoint = new Vector3(grid.origin.x + i, grid.origin.y + ((i*i)/grid.gridSize));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_689 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_690 = L_689->get_address_of_origin_1();
		float L_691 = L_690->get_x_2();
		float L_692 = V_28;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_693 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_694 = L_693->get_address_of_origin_1();
		float L_695 = L_694->get_y_3();
		float L_696 = V_28;
		float L_697 = V_28;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_698 = __this->get_grid_22();
		float L_699 = L_698->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_29), ((float)il2cpp_codegen_add((float)L_691, (float)L_692)), ((float)il2cpp_codegen_add((float)L_695, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_696, (float)L_697))/(float)L_699)))), /*hidden argument*/NULL);
		// if(lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_700 = V_27;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_701;
		L_701 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_702;
		L_702 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_700, L_701, /*hidden argument*/NULL);
		if (!L_702)
		{
			goto IL_11eb;
		}
	}
	{
		// parabola1.Lines.Add(new Line(lastPoint, curentPoint, Color.red));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_703 = __this->get_parabola1_27();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_704 = L_703->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_705 = V_27;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_706 = V_29;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_707;
		L_707 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_708;
		memset((&L_708), 0, sizeof(L_708));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_708), L_705, L_706, L_707, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_709 = L_708;
		RuntimeObject * L_710 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_709);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_704, (RuntimeObject*)L_710, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_11eb:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_711 = V_29;
		V_27 = L_711;
		// for(float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		float L_712 = V_28;
		V_28 = ((float)il2cpp_codegen_add((float)L_712, (float)(1.0f)));
	}

IL_11f9:
	{
		// for(float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		float L_713 = V_28;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_714 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_715 = L_714->get_address_of_screenSize_0();
		float L_716 = L_715->get_x_2();
		if ((((float)L_713) <= ((float)L_716)))
		{
			goto IL_117e;
		}
	}
	{
		// parabola1.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_717 = __this->get_parabola1_27();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_718 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_717, L_718);
		// parabola1.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_719 = __this->get_parabola1_27();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_720 = L_719->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_720, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_1231:
	{
		// if(porabing2)
		bool L_721 = __this->get_porabing2_19();
		if (!L_721)
		{
			goto IL_133f;
		}
	}
	{
		// Vector3 lastPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_722;
		L_722 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_30 = L_722;
		// for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_723 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_724 = L_723->get_address_of_screenSize_0();
		float L_725 = L_724->get_x_2();
		V_31 = ((float)il2cpp_codegen_multiply((float)L_725, (float)(-1.0f)));
		goto IL_1307;
	}

IL_1260:
	{
		// Vector3 curentPoint = new Vector3((grid.origin.x - grid.origin.x/grid.gridSize) + i, grid.origin.y + (((i * i) + (2*i) + 1)/grid.gridSize));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_726 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_727 = L_726->get_address_of_origin_1();
		float L_728 = L_727->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_729 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_730 = L_729->get_address_of_origin_1();
		float L_731 = L_730->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_732 = __this->get_grid_22();
		float L_733 = L_732->get_gridSize_2();
		float L_734 = V_31;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_735 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_736 = L_735->get_address_of_origin_1();
		float L_737 = L_736->get_y_3();
		float L_738 = V_31;
		float L_739 = V_31;
		float L_740 = V_31;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_741 = __this->get_grid_22();
		float L_742 = L_741->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_32), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_728, (float)((float)((float)L_731/(float)L_733)))), (float)L_734)), ((float)il2cpp_codegen_add((float)L_737, (float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_738, (float)L_739)), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_740)))), (float)(1.0f)))/(float)L_742)))), /*hidden argument*/NULL);
		// if (lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_743 = V_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_744;
		L_744 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_745;
		L_745 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_743, L_744, /*hidden argument*/NULL);
		if (!L_745)
		{
			goto IL_12f9;
		}
	}
	{
		// parabola1.Lines.Add(new Line(lastPoint, curentPoint, Color.green));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_746 = __this->get_parabola1_27();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_747 = L_746->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_748 = V_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_749 = V_32;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_750;
		L_750 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_751;
		memset((&L_751), 0, sizeof(L_751));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_751), L_748, L_749, L_750, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_752 = L_751;
		RuntimeObject * L_753 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_752);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_747, (RuntimeObject*)L_753, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_12f9:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_754 = V_32;
		V_30 = L_754;
		// for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		float L_755 = V_31;
		V_31 = ((float)il2cpp_codegen_add((float)L_755, (float)(1.0f)));
	}

IL_1307:
	{
		// for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		float L_756 = V_31;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_757 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_758 = L_757->get_address_of_screenSize_0();
		float L_759 = L_758->get_x_2();
		if ((((float)L_756) <= ((float)L_759)))
		{
			goto IL_1260;
		}
	}
	{
		// parabola2.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_760 = __this->get_parabola2_28();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_761 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_760, L_761);
		// parabola2.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_762 = __this->get_parabola2_28();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_763 = L_762->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_763, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_133f:
	{
		// if(porabing3)
		bool L_764 = __this->get_porabing3_20();
		if (!L_764)
		{
			goto IL_148b;
		}
	}
	{
		// Vector3 lastPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_765;
		L_765 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_33 = L_765;
		// for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_766 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_767 = L_766->get_address_of_screenSize_0();
		float L_768 = L_767->get_x_2();
		V_34 = ((float)il2cpp_codegen_multiply((float)L_768, (float)(-1.0f)));
		goto IL_1453;
	}

IL_136e:
	{
		// Vector3 curentPoint = new Vector3((grid.origin.x + ((grid.origin.x / grid.gridSize)*2.5f)) + i, (grid.origin.y +((grid.origin.x / grid.gridSize)*24.5f)) + ((-2*(i * i) +(10*i)+12)/grid.gridSize));
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_769 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_770 = L_769->get_address_of_origin_1();
		float L_771 = L_770->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_772 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_773 = L_772->get_address_of_origin_1();
		float L_774 = L_773->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_775 = __this->get_grid_22();
		float L_776 = L_775->get_gridSize_2();
		float L_777 = V_34;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_778 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_779 = L_778->get_address_of_origin_1();
		float L_780 = L_779->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_781 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_782 = L_781->get_address_of_origin_1();
		float L_783 = L_782->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_784 = __this->get_grid_22();
		float L_785 = L_784->get_gridSize_2();
		float L_786 = V_34;
		float L_787 = V_34;
		float L_788 = V_34;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_789 = __this->get_grid_22();
		float L_790 = L_789->get_gridSize_2();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_35), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_771, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_774/(float)L_776)), (float)(2.5f))))), (float)L_777)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_780, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_783/(float)L_785)), (float)(24.5f))))), (float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)((float)il2cpp_codegen_multiply((float)L_786, (float)L_787)))), (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_788)))), (float)(12.0f)))/(float)L_790)))), /*hidden argument*/NULL);
		// if (lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_791 = V_33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_792;
		L_792 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_793;
		L_793 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_791, L_792, /*hidden argument*/NULL);
		if (!L_793)
		{
			goto IL_1445;
		}
	}
	{
		// parabola3.Lines.Add(new Line(lastPoint, curentPoint, new Color(230, 230, 250)));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_794 = __this->get_parabola3_29();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_795 = L_794->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_796 = V_33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_797 = V_35;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_798;
		memset((&L_798), 0, sizeof(L_798));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_798), (230.0f), (230.0f), (250.0f), /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_799;
		memset((&L_799), 0, sizeof(L_799));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_799), L_796, L_797, L_798, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_800 = L_799;
		RuntimeObject * L_801 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_800);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_795, (RuntimeObject*)L_801, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_1445:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_802 = V_35;
		V_33 = L_802;
		// for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		float L_803 = V_34;
		V_34 = ((float)il2cpp_codegen_add((float)L_803, (float)(1.0f)));
	}

IL_1453:
	{
		// for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
		float L_804 = V_34;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_805 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_806 = L_805->get_address_of_screenSize_0();
		float L_807 = L_806->get_x_2();
		if ((((float)L_804) <= ((float)L_807)))
		{
			goto IL_136e;
		}
	}
	{
		// parabola3.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_808 = __this->get_parabola3_29();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_809 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_808, L_809);
		// parabola3.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_810 = __this->get_parabola3_29();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_811 = L_810->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_811, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_148b:
	{
		// if(porabing4)
		bool L_812 = __this->get_porabing4_21();
		if (!L_812)
		{
			goto IL_1573;
		}
	}
	{
		// Vector3 lastPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_813;
		L_813 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_36 = L_813;
		// for (float i = (grid.screenSize.y * -1); i <= grid.screenSize.y; i++)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_814 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_815 = L_814->get_address_of_screenSize_0();
		float L_816 = L_815->get_y_3();
		V_37 = ((float)il2cpp_codegen_multiply((float)L_816, (float)(-1.0f)));
		goto IL_153b;
	}

IL_14ba:
	{
		// Vector3 curentPoint = new Vector3(grid.origin.x + ((-i*-i*-i)/grid.gridSize), grid.origin.y + i);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_817 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_818 = L_817->get_address_of_origin_1();
		float L_819 = L_818->get_x_2();
		float L_820 = V_37;
		float L_821 = V_37;
		float L_822 = V_37;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_823 = __this->get_grid_22();
		float L_824 = L_823->get_gridSize_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_825 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_826 = L_825->get_address_of_origin_1();
		float L_827 = L_826->get_y_3();
		float L_828 = V_37;
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_38), ((float)il2cpp_codegen_add((float)L_819, (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((-L_820)), (float)((-L_821)))), (float)((-L_822))))/(float)L_824)))), ((float)il2cpp_codegen_add((float)L_827, (float)L_828)), /*hidden argument*/NULL);
		// if (lastPoint != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_829 = V_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_830;
		L_830 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_831;
		L_831 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_829, L_830, /*hidden argument*/NULL);
		if (!L_831)
		{
			goto IL_152d;
		}
	}
	{
		// parabola4.Lines.Add(new Line(lastPoint, curentPoint, Color.blue));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_832 = __this->get_parabola4_30();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_833 = L_832->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_834 = V_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_835 = V_38;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_836;
		L_836 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_837;
		memset((&L_837), 0, sizeof(L_837));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_837), L_834, L_835, L_836, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_838 = L_837;
		RuntimeObject * L_839 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_838);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_833, (RuntimeObject*)L_839, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
	}

IL_152d:
	{
		// lastPoint = curentPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_840 = V_38;
		V_36 = L_840;
		// for (float i = (grid.screenSize.y * -1); i <= grid.screenSize.y; i++)
		float L_841 = V_37;
		V_37 = ((float)il2cpp_codegen_add((float)L_841, (float)(1.0f)));
	}

IL_153b:
	{
		// for (float i = (grid.screenSize.y * -1); i <= grid.screenSize.y; i++)
		float L_842 = V_37;
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_843 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_844 = L_843->get_address_of_screenSize_0();
		float L_845 = L_844->get_y_3();
		if ((((float)L_842) <= ((float)L_845)))
		{
			goto IL_14ba;
		}
	}
	{
		// parabola4.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_846 = __this->get_parabola4_30();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_847 = __this->get_grid_22();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_846, L_847);
		// parabola4.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_848 = __this->get_parabola4_30();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_849 = L_848->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_849, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
	}

IL_1573:
	{
		// if(isDrawingCircle)
		bool L_850 = __this->get_isDrawingCircle_16();
		if (!L_850)
		{
			goto IL_15a9;
		}
	}
	{
		// isDrawingEllipse = false;
		__this->set_isDrawingEllipse_17((bool)0);
		// DrawingTools.DrawCircle(grid.origin, radius, side, Color.white, grid);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_851 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_852 = L_851->get_origin_1();
		float L_853 = __this->get_radius_4();
		int32_t L_854 = __this->get_side_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_855;
		L_855 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_856 = __this->get_grid_22();
		DrawingTools_DrawCircle_m057013DCF7424C6141BF578775E307B0FB28584F(L_852, L_853, L_854, L_855, L_856, /*hidden argument*/NULL);
	}

IL_15a9:
	{
		// if(isDrawingEllipse)
		bool L_857 = __this->get_isDrawingEllipse_17();
		if (!L_857)
		{
			goto IL_15f8;
		}
	}
	{
		// isDrawingCircle = false;
		__this->set_isDrawingCircle_16((bool)0);
		// DrawingTools.DrawEllipse(grid.origin, new Vector3(side * width, side), side, Color.white, grid);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_858 = __this->get_grid_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_859 = L_858->get_origin_1();
		int32_t L_860 = __this->get_side_5();
		float L_861 = __this->get_width_6();
		int32_t L_862 = __this->get_side_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_863;
		memset((&L_863), 0, sizeof(L_863));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_863), ((float)il2cpp_codegen_multiply((float)((float)((float)L_860)), (float)L_861)), ((float)((float)L_862)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_864;
		L_864 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_863, /*hidden argument*/NULL);
		int32_t L_865 = __this->get_side_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_866;
		L_866 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_867 = __this->get_grid_22();
		DrawingTools_DrawEllipse_m1B79F206BD44C1B9ECD2E90B1466055B2624F7CA(L_859, L_864, L_865, L_866, L_867, /*hidden argument*/NULL);
	}

IL_15f8:
	{
		// if(isDrawingOrigin)
		bool L_868 = __this->get_isDrawingOrigin_10();
		// }
		return;
	}
}
// System.Collections.IEnumerator Lab1::WUP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lab1_WUP_m0D86E1EA3DC6E07E23D256BFAF91F36E39A9E2D8 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * L_0 = (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF *)il2cpp_codegen_object_new(U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF_il2cpp_TypeInfo_var);
		U3CWUPU3Ed__33__ctor_m17B8DFCE3F1555B683617F18F8FCE14AA0F677EB(L_0, 0, /*hidden argument*/NULL);
		U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Single Lab1::test(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Lab1_test_m9F8E9F3EFC43740E32C36A419CADD6EB6A64F697 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, float ___num0, const RuntimeMethod* method)
{
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	{
		// float import = 22.5f;
		// if (num > 8)
		float L_0 = ___num0;
		G_B1_0 = (22.5f);
		if ((!(((float)L_0) > ((float)(8.0f)))))
		{
			G_B2_0 = (22.5f);
			goto IL_0014;
		}
	}
	{
		// count = 1;
		__this->set_count_33(1);
		G_B2_0 = G_B1_0;
	}

IL_0014:
	{
		// import *= num;
		float L_1 = ___num0;
		// return (import);
		return ((float)il2cpp_codegen_multiply((float)G_B2_0, (float)L_1));
	}
}
// System.Void Lab1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lab1__ctor_m5296B52E436855F4B696298984FF183FD0D054B8 (Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float radius = 10;
		__this->set_radius_4((10.0f));
		// public int side = 32;
		__this->set_side_5(((int32_t)32));
		// public float width = 2.0f;
		__this->set_width_6((2.0f));
		// public Color axisColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_axisColor_7(L_0);
		// public Color lineColor = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		__this->set_lineColor_8(L_1);
		// public Color divisionColor = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		__this->set_divisionColor_9(L_2);
		// public bool isDrawingAxis = true;
		__this->set_isDrawingAxis_11((bool)1);
		// public bool isDrawingDivisions = true;
		__this->set_isDrawingDivisions_12((bool)1);
		// public bool isDrawingDiamond = true;
		__this->set_isDrawingDiamond_13((bool)1);
		// public bool isDrawingHexagon = true;
		__this->set_isDrawingHexagon_14((bool)1);
		// public bool isDrawingE = true;
		__this->set_isDrawingE_15((bool)1);
		// public bool isDrawingCircle = true;
		__this->set_isDrawingCircle_16((bool)1);
		// public bool porabing1 = true;
		__this->set_porabing1_18((bool)1);
		// public bool porabing2 = true;
		__this->set_porabing2_19((bool)1);
		// public bool porabing3 = true;
		__this->set_porabing3_20((bool)1);
		// public bool porabing4 = true;
		__this->set_porabing4_21((bool)1);
		// Grid2D grid = new Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_3 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_3, /*hidden argument*/NULL);
		__this->set_grid_22(L_3);
		// DrawingObject diamond = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_4 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_4, /*hidden argument*/NULL);
		__this->set_diamond_23(L_4);
		// DrawingObject spinDiamond = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_5 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_5, /*hidden argument*/NULL);
		__this->set_spinDiamond_24(L_5);
		// DrawingObject hexigon = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_6 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_6, /*hidden argument*/NULL);
		__this->set_hexigon_25(L_6);
		// DrawingObject E = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_7 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_7, /*hidden argument*/NULL);
		__this->set_E_26(L_7);
		// DrawingObject parabola1 = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_8 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_8, /*hidden argument*/NULL);
		__this->set_parabola1_27(L_8);
		// DrawingObject parabola2 = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_9 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_9, /*hidden argument*/NULL);
		__this->set_parabola2_28(L_9);
		// DrawingObject parabola3 = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_10 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_10, /*hidden argument*/NULL);
		__this->set_parabola3_29(L_10);
		// DrawingObject parabola4 = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_11 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_11, /*hidden argument*/NULL);
		__this->set_parabola4_30(L_11);
		// public float numb = 22.5f;
		__this->set_numb_32((22.5f));
		// public int count = 1;
		__this->set_count_33(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Line::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	{
		// this.start = start;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___start0;
		__this->set_start_0(L_0);
		// this.end = end;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___end1;
		__this->set_end_1(L_1);
		// this.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color2;
		__this->set_color_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * _thisAdjusted = reinterpret_cast<Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A *>(__this + _offset);
	Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E(_thisAdjusted, ___start0, ___end1, ___color2, method);
}
// System.Void Line::Draw(Lab1/Grid2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line_Draw_m4BB0B4E20F0230E2D495D59E958044C2BB643292 (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * __this, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (grid != null)
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = ___grid0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// grid.DrawLine(this);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_1 = ___grid0;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_2 = (*(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A *)__this);
		Grid2D_DrawLine_m49F8747DBB7214FF5E8098AADD0687B90AD474A5(L_1, L_2, (bool)1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0011:
	{
		// Glint.AddCommand(this);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_3 = (*(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A *)__this);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_4 = L_3;
		RuntimeObject * L_5 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_4);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Line_Draw_m4BB0B4E20F0230E2D495D59E958044C2BB643292_AdjustorThunk (RuntimeObject * __this, Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * ___grid0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * _thisAdjusted = reinterpret_cast<Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A *>(__this + _offset);
	Line_Draw_m4BB0B4E20F0230E2D495D59E958044C2BB643292(_thisAdjusted, ___grid0, method);
}
// Drawing.Glint.GLCommand Line::ToCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLCommand_t543C351B305431E33C445653348726CB79795C73  Line_ToCommand_m3FD63C111C7A0CFFAD749EA56D9A23683B15B77D (Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new GLCommand(DrawMode.Lines, color, start, end);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_color_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_start_0();
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_end_1();
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		GLCommand_t543C351B305431E33C445653348726CB79795C73  L_6;
		memset((&L_6), 0, sizeof(L_6));
		GLCommand__ctor_m206ABB49FF898460073D7A19441965D62AF95B64((&L_6), 1, L_0, L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  GLCommand_t543C351B305431E33C445653348726CB79795C73  Line_ToCommand_m3FD63C111C7A0CFFAD749EA56D9A23683B15B77D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A * _thisAdjusted = reinterpret_cast<Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A *>(__this + _offset);
	GLCommand_t543C351B305431E33C445653348726CB79795C73  _returnValue;
	_returnValue = Line_ToCommand_m3FD63C111C7A0CFFAD749EA56D9A23683B15B77D(_thisAdjusted, method);
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
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m65B0DAC30D1A9E246D4CF14672D8138B53EDA564 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instace = this;
		((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->set_instace_7(__this);
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_mB696B161F91F1AE220BCD4F47028DE039D9697D2 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8414DE4EFFA3DEE7A7B7D33D0D43F95BCE330CA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_5();
		int32_t* L_1 = __this->get_address_of_score_6();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if(ShipFlying.instance != null)
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_4 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// lives.text = "Lives: " + ShipFlying.instance.lives.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_lives_4();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_7 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		float* L_8 = L_7->get_address_of_lives_15();
		String_t* L_9;
		L_9 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD5DB5CE68088BFE98F775E6EFA86049E7C63AC8E, L_9, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// }
		return;
	}

IL_0052:
	{
		// lives.text = "Lives: 0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_lives_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral8414DE4EFFA3DEE7A7B7D33D0D43F95BCE330CA6);
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mEE9186D20D9B28A735262B29AB6E8D9FF1380FB6 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShipFlying::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying_Start_m70A80C90090D762807343E07919E5E5A019C8A78 (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = __this->get_grid_7();
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_3), ((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), /*hidden argument*/NULL);
		L_0->set_origin_1(L_3);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_4 = __this->get_grid_7();
		int32_t L_5;
		L_5 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), ((float)((float)L_5)), ((float)((float)L_6)), /*hidden argument*/NULL);
		L_4->set_screenSize_0(L_7);
		// tmid = new Vector3(grid.origin.x, grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_8 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_origin_1();
		float L_10 = L_9->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_11 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = L_11->get_address_of_origin_1();
		float L_13 = L_12->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_14), L_10, L_13, /*hidden argument*/NULL);
		__this->set_tmid_20(L_14);
		// t1 = new Vector3(tmid.x + 15f, tmid.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_tmid_20();
		float L_16 = L_15->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_tmid_20();
		float L_18 = L_17->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_19), ((float)il2cpp_codegen_add((float)L_16, (float)(15.0f))), L_18, /*hidden argument*/NULL);
		__this->set_t1_17(L_19);
		// t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_tmid_20();
		float L_21 = L_20->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_tmid_20();
		float L_23 = L_22->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_24), ((float)il2cpp_codegen_subtract((float)L_21, (float)(7.5f))), ((float)il2cpp_codegen_subtract((float)L_23, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t2_18(L_24);
		// t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_tmid_20();
		float L_26 = L_25->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_tmid_20();
		float L_28 = L_27->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_29), ((float)il2cpp_codegen_subtract((float)L_26, (float)(7.5f))), ((float)il2cpp_codegen_add((float)L_28, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t3_19(L_29);
		// }
		return;
	}
}
// System.Void ShipFlying::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying_Update_m41F2BE55038875F53CB537CC7A93F0821CBA2A75 (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB08A4DC0266063098080257C6BE1EDE91272EA9B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if(tmid.x >= grid.screenSize.x + 1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_tmid_20();
		float L_1 = L_0->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_2 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = L_2->get_address_of_screenSize_0();
		float L_4 = L_3->get_x_2();
		if ((!(((float)L_1) >= ((float)((float)il2cpp_codegen_add((float)L_4, (float)(1.0f)))))))
		{
			goto IL_0120;
		}
	}
	{
		// tmid.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_tmid_20();
		L_5->set_x_2((0.0f));
		// t1 = new Vector3(tmid.x + 15f, tmid.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_tmid_20();
		float L_7 = L_6->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_tmid_20();
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_10), ((float)il2cpp_codegen_add((float)L_7, (float)(15.0f))), L_9, /*hidden argument*/NULL);
		__this->set_t1_17(L_10);
		// t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_tmid_20();
		float L_12 = L_11->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_tmid_20();
		float L_14 = L_13->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_15), ((float)il2cpp_codegen_subtract((float)L_12, (float)(7.5f))), ((float)il2cpp_codegen_subtract((float)L_14, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t2_18(L_15);
		// t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_tmid_20();
		float L_17 = L_16->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_tmid_20();
		float L_19 = L_18->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_20), ((float)il2cpp_codegen_subtract((float)L_17, (float)(7.5f))), ((float)il2cpp_codegen_add((float)L_19, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t3_19(L_20);
		// t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_tmid_20();
		float L_22 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_21, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_22)), L_23, /*hidden argument*/NULL);
		__this->set_t1_17(L_24);
		// t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_tmid_20();
		float L_26 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_25, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_26)), L_27, /*hidden argument*/NULL);
		__this->set_t2_18(L_28);
		// t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_tmid_20();
		float L_30 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_29, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_30)), L_31, /*hidden argument*/NULL);
		__this->set_t3_19(L_32);
	}

IL_0120:
	{
		// if (tmid.x <= -1 )
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_tmid_20();
		float L_34 = L_33->get_x_2();
		if ((!(((float)L_34) <= ((float)(-1.0f)))))
		{
			goto IL_023a;
		}
	}
	{
		// tmid.x = grid.screenSize.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = __this->get_address_of_tmid_20();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_36 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = L_36->get_address_of_screenSize_0();
		float L_38 = L_37->get_x_2();
		L_35->set_x_2(L_38);
		// t1 = new Vector3(tmid.x + 15f, tmid.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_tmid_20();
		float L_40 = L_39->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_41 = __this->get_address_of_tmid_20();
		float L_42 = L_41->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_43), ((float)il2cpp_codegen_add((float)L_40, (float)(15.0f))), L_42, /*hidden argument*/NULL);
		__this->set_t1_17(L_43);
		// t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_44 = __this->get_address_of_tmid_20();
		float L_45 = L_44->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = __this->get_address_of_tmid_20();
		float L_47 = L_46->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_48), ((float)il2cpp_codegen_subtract((float)L_45, (float)(7.5f))), ((float)il2cpp_codegen_subtract((float)L_47, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t2_18(L_48);
		// t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_49 = __this->get_address_of_tmid_20();
		float L_50 = L_49->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of_tmid_20();
		float L_52 = L_51->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_53), ((float)il2cpp_codegen_subtract((float)L_50, (float)(7.5f))), ((float)il2cpp_codegen_add((float)L_52, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t3_19(L_53);
		// t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = __this->get_tmid_20();
		float L_55 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_54, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_55)), L_56, /*hidden argument*/NULL);
		__this->set_t1_17(L_57);
		// t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = __this->get_tmid_20();
		float L_59 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_58, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_59)), L_60, /*hidden argument*/NULL);
		__this->set_t2_18(L_61);
		// t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = __this->get_tmid_20();
		float L_63 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_62, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_63)), L_64, /*hidden argument*/NULL);
		__this->set_t3_19(L_65);
	}

IL_023a:
	{
		// if (tmid.y >= grid.screenSize.y + 1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_66 = __this->get_address_of_tmid_20();
		float L_67 = L_66->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_68 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_69 = L_68->get_address_of_screenSize_0();
		float L_70 = L_69->get_y_3();
		if ((!(((float)L_67) >= ((float)((float)il2cpp_codegen_add((float)L_70, (float)(1.0f)))))))
		{
			goto IL_035a;
		}
	}
	{
		// tmid.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_71 = __this->get_address_of_tmid_20();
		L_71->set_y_3((0.0f));
		// t1 = new Vector3(tmid.x + 15f, tmid.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_72 = __this->get_address_of_tmid_20();
		float L_73 = L_72->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_74 = __this->get_address_of_tmid_20();
		float L_75 = L_74->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_76), ((float)il2cpp_codegen_add((float)L_73, (float)(15.0f))), L_75, /*hidden argument*/NULL);
		__this->set_t1_17(L_76);
		// t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_77 = __this->get_address_of_tmid_20();
		float L_78 = L_77->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_79 = __this->get_address_of_tmid_20();
		float L_80 = L_79->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_81), ((float)il2cpp_codegen_subtract((float)L_78, (float)(7.5f))), ((float)il2cpp_codegen_subtract((float)L_80, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t2_18(L_81);
		// t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_82 = __this->get_address_of_tmid_20();
		float L_83 = L_82->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_84 = __this->get_address_of_tmid_20();
		float L_85 = L_84->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_86), ((float)il2cpp_codegen_subtract((float)L_83, (float)(7.5f))), ((float)il2cpp_codegen_add((float)L_85, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t3_19(L_86);
		// t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = __this->get_tmid_20();
		float L_88 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_87, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_88)), L_89, /*hidden argument*/NULL);
		__this->set_t1_17(L_90);
		// t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = __this->get_tmid_20();
		float L_92 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_91, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_92)), L_93, /*hidden argument*/NULL);
		__this->set_t2_18(L_94);
		// t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = __this->get_tmid_20();
		float L_96 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_95, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_96)), L_97, /*hidden argument*/NULL);
		__this->set_t3_19(L_98);
	}

IL_035a:
	{
		// if (tmid.y <= -1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_99 = __this->get_address_of_tmid_20();
		float L_100 = L_99->get_y_3();
		if ((!(((float)L_100) <= ((float)(-1.0f)))))
		{
			goto IL_0474;
		}
	}
	{
		// tmid.y = grid.screenSize.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_101 = __this->get_address_of_tmid_20();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_102 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_103 = L_102->get_address_of_screenSize_0();
		float L_104 = L_103->get_y_3();
		L_101->set_y_3(L_104);
		// t1 = new Vector3(tmid.x + 15f, tmid.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_105 = __this->get_address_of_tmid_20();
		float L_106 = L_105->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_107 = __this->get_address_of_tmid_20();
		float L_108 = L_107->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_109), ((float)il2cpp_codegen_add((float)L_106, (float)(15.0f))), L_108, /*hidden argument*/NULL);
		__this->set_t1_17(L_109);
		// t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_110 = __this->get_address_of_tmid_20();
		float L_111 = L_110->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_112 = __this->get_address_of_tmid_20();
		float L_113 = L_112->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		memset((&L_114), 0, sizeof(L_114));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_114), ((float)il2cpp_codegen_subtract((float)L_111, (float)(7.5f))), ((float)il2cpp_codegen_subtract((float)L_113, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t2_18(L_114);
		// t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_115 = __this->get_address_of_tmid_20();
		float L_116 = L_115->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_117 = __this->get_address_of_tmid_20();
		float L_118 = L_117->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_119), ((float)il2cpp_codegen_subtract((float)L_116, (float)(7.5f))), ((float)il2cpp_codegen_add((float)L_118, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t3_19(L_119);
		// t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120 = __this->get_tmid_20();
		float L_121 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_120, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_121)), L_122, /*hidden argument*/NULL);
		__this->set_t1_17(L_123);
		// t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = __this->get_tmid_20();
		float L_125 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		L_127 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_124, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_125)), L_126, /*hidden argument*/NULL);
		__this->set_t2_18(L_127);
		// t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128 = __this->get_tmid_20();
		float L_129 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		L_131 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_128, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_129)), L_130, /*hidden argument*/NULL);
		__this->set_t3_19(L_131);
	}

IL_0474:
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_132;
		L_132 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_0489;
		}
	}
	{
		// Movement(accelerate);
		float L_133 = __this->get_accelerate_10();
		ShipFlying_Movement_mB122CD298A51ADF0A4F448865B347E9C32CE4F7E(__this, L_133, /*hidden argument*/NULL);
	}

IL_0489:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_134;
		L_134 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_134)
		{
			goto IL_049f;
		}
	}
	{
		// Movement(-accelerate);
		float L_135 = __this->get_accelerate_10();
		ShipFlying_Movement_mB122CD298A51ADF0A4F448865B347E9C32CE4F7E(__this, ((-L_135)), /*hidden argument*/NULL);
	}

IL_049f:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_136;
		L_136 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_051c;
		}
	}
	{
		// float angle = rotationSpee;
		float L_137 = __this->get_rotationSpee_9();
		V_0 = L_137;
		// angleRotation += rotationSpee;
		float L_138 = __this->get_angleRotation_14();
		float L_139 = __this->get_rotationSpee_9();
		__this->set_angleRotation_14(((float)il2cpp_codegen_add((float)L_138, (float)L_139)));
		// t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140 = __this->get_tmid_20();
		float L_141 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143;
		L_143 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_140, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_141)), L_142, /*hidden argument*/NULL);
		__this->set_t1_17(L_143);
		// t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144 = __this->get_tmid_20();
		float L_145 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147;
		L_147 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_144, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_145)), L_146, /*hidden argument*/NULL);
		__this->set_t2_18(L_147);
		// t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148 = __this->get_tmid_20();
		float L_149 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		L_151 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_148, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_149)), L_150, /*hidden argument*/NULL);
		__this->set_t3_19(L_151);
	}

IL_051c:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_152;
		L_152 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_152)
		{
			goto IL_059a;
		}
	}
	{
		// float angle = -rotationSpee;
		float L_153 = __this->get_rotationSpee_9();
		V_1 = ((-L_153));
		// angleRotation -= rotationSpee;
		float L_154 = __this->get_angleRotation_14();
		float L_155 = __this->get_rotationSpee_9();
		__this->set_angleRotation_14(((float)il2cpp_codegen_subtract((float)L_154, (float)L_155)));
		// t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156 = __this->get_tmid_20();
		float L_157 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159;
		L_159 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_156, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_157)), L_158, /*hidden argument*/NULL);
		__this->set_t1_17(L_159);
		// t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_160 = __this->get_tmid_20();
		float L_161 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163;
		L_163 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_160, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_161)), L_162, /*hidden argument*/NULL);
		__this->set_t2_18(L_163);
		// t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164 = __this->get_tmid_20();
		float L_165 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167;
		L_167 = DrawingTools_RotatePoint_m9CA920CEF51651C1A9557E75F2E3E684595F19E3(L_164, ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_165)), L_166, /*hidden argument*/NULL);
		__this->set_t3_19(L_167);
	}

IL_059a:
	{
		// if (Input.GetKey(KeyCode.W) == false && Input.GetKey(KeyCode.S) == false)
		bool L_168;
		L_168 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (L_168)
		{
			goto IL_05b2;
		}
	}
	{
		bool L_169;
		L_169 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (L_169)
		{
			goto IL_05b2;
		}
	}
	{
		// Driftin();
		ShipFlying_Driftin_m3BB9CE3755188C6D383A522F8D522BCF47050381(__this, /*hidden argument*/NULL);
	}

IL_05b2:
	{
		// if(hit)
		bool L_170 = __this->get_hit_21();
		if (!L_170)
		{
			goto IL_06c6;
		}
	}
	{
		// Debug.Log("Ship was hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB08A4DC0266063098080257C6BE1EDE91272EA9B, /*hidden argument*/NULL);
		// lives--;
		float L_171 = __this->get_lives_15();
		__this->set_lives_15(((float)il2cpp_codegen_subtract((float)L_171, (float)(1.0f))));
		// if(lives == 0)
		float L_172 = __this->get_lives_15();
		if ((!(((float)L_172) == ((float)(0.0f)))))
		{
			goto IL_05fd;
		}
	}
	{
		// gameOver.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173 = __this->get_gameOver_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_173, (bool)1, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		goto IL_06bf;
	}

IL_05fd:
	{
		// tmid = new Vector3(grid.origin.x, grid.origin.y);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_174 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_175 = L_174->get_address_of_origin_1();
		float L_176 = L_175->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_177 = __this->get_grid_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_178 = L_177->get_address_of_origin_1();
		float L_179 = L_178->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180;
		memset((&L_180), 0, sizeof(L_180));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_180), L_176, L_179, /*hidden argument*/NULL);
		__this->set_tmid_20(L_180);
		// t1 = new Vector3(tmid.x + 15f, tmid.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_181 = __this->get_address_of_tmid_20();
		float L_182 = L_181->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_183 = __this->get_address_of_tmid_20();
		float L_184 = L_183->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		memset((&L_185), 0, sizeof(L_185));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_185), ((float)il2cpp_codegen_add((float)L_182, (float)(15.0f))), L_184, /*hidden argument*/NULL);
		__this->set_t1_17(L_185);
		// t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_186 = __this->get_address_of_tmid_20();
		float L_187 = L_186->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_188 = __this->get_address_of_tmid_20();
		float L_189 = L_188->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_190;
		memset((&L_190), 0, sizeof(L_190));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_190), ((float)il2cpp_codegen_subtract((float)L_187, (float)(7.5f))), ((float)il2cpp_codegen_subtract((float)L_189, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t2_18(L_190);
		// t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_191 = __this->get_address_of_tmid_20();
		float L_192 = L_191->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_193 = __this->get_address_of_tmid_20();
		float L_194 = L_193->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		memset((&L_195), 0, sizeof(L_195));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_195), ((float)il2cpp_codegen_subtract((float)L_192, (float)(7.5f))), ((float)il2cpp_codegen_add((float)L_194, (float)(7.5f))), /*hidden argument*/NULL);
		__this->set_t3_19(L_195);
		// velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_196;
		L_196 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_velocity_13(L_196);
		// angleRotation = 0;
		__this->set_angleRotation_14((0.0f));
	}

IL_06bf:
	{
		// hit = false;
		__this->set_hit_21((bool)0);
	}

IL_06c6:
	{
		// ship.Lines.Add(new Line(t1, t2, Color.white));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_197 = __this->get_ship_8();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_198 = L_197->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200 = __this->get_t2_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_201;
		L_201 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_202;
		memset((&L_202), 0, sizeof(L_202));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_202), L_199, L_200, L_201, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_203 = L_202;
		RuntimeObject * L_204 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_203);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_198, (RuntimeObject*)L_204, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// ship.Lines.Add(new Line(t2, t3, Color.white));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_205 = __this->get_ship_8();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_206 = L_205->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208 = __this->get_t3_19();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_209;
		L_209 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_210;
		memset((&L_210), 0, sizeof(L_210));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_210), L_207, L_208, L_209, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_211 = L_210;
		RuntimeObject * L_212 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_211);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_206, (RuntimeObject*)L_212, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// ship.Lines.Add(new Line(t3, t1, Color.white));
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_213 = __this->get_ship_8();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_214 = L_213->get_Lines_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_216 = __this->get_t1_17();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_217;
		L_217 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_218;
		memset((&L_218), 0, sizeof(L_218));
		Line__ctor_mEEF5A0E9B076E01EE82A2A1676A8BEC721F3958E((&L_218), L_215, L_216, L_217, /*hidden argument*/NULL);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_219 = L_218;
		RuntimeObject * L_220 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_219);
		List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6(L_214, (RuntimeObject*)L_220, /*hidden argument*/List_1_Add_m9DD75635C10C68B87E4A3A7B90094EDCC2C09BE6_RuntimeMethod_var);
		// ship.Draw(grid);
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_221 = __this->get_ship_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_222 = __this->get_grid_7();
		VirtActionInvoker1< Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * >::Invoke(6 /* System.Void DrawingObject::Draw(Lab1/Grid2D) */, L_221, L_222);
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_223;
		L_223 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_223)
		{
			goto IL_0786;
		}
	}
	{
		// AstroidManager.instance.bullets.Add(Instantiate(bullet, t1, Quaternion.identity));
		AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE * L_224 = ((AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_StaticFields*)il2cpp_codegen_static_fields_for(AstroidManager_t104F9F7131E0221D298A4FE6FB19B78FF200BAEE_il2cpp_TypeInfo_var))->get_instance_10();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_225 = L_224->get_bullets_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_226 = __this->get_bullet_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_227 = __this->get_t1_17();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_228;
		L_228 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_229;
		L_229 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_226, L_227, L_228, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_225, L_229, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0786:
	{
		// ship.Lines.Clear();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_230 = __this->get_ship_8();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_231 = L_230->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_231, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShipFlying::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying_Movement_mB122CD298A51ADF0A4F448865B347E9C32CE4F7E (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, float ___accelerateion0, const RuntimeMethod* method)
{
	{
		// radians = Mathf.Deg2Rad * angleRotation;
		float L_0 = __this->get_angleRotation_14();
		__this->set_radians_16(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_0)));
		// velocity.x += Mathf.Cos(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_velocity_13();
		float* L_2 = L_1->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		float L_5 = __this->get_radians_16();
		float L_6;
		L_6 = cosf(L_5);
		float L_7 = ___accelerateion0;
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_3) = (float)((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)L_8))));
		// if (velocity.x >= 3)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_velocity_13();
		float L_10 = L_9->get_x_2();
		if ((!(((float)L_10) >= ((float)(3.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// velocity.x = 3f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_velocity_13();
		L_11->set_x_2((3.0f));
		// }
		goto IL_007a;
	}

IL_0058:
	{
		// else if(velocity.x <= -3)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_velocity_13();
		float L_13 = L_12->get_x_2();
		if ((!(((float)L_13) <= ((float)(-3.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// velocity.x = -3f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_velocity_13();
		L_14->set_x_2((-3.0f));
	}

IL_007a:
	{
		// velocity.y += Mathf.Sin(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_velocity_13();
		float* L_16 = L_15->get_address_of_y_3();
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float L_19 = __this->get_radians_16();
		float L_20;
		L_20 = sinf(L_19);
		float L_21 = ___accelerateion0;
		float L_22;
		L_22 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_17) = (float)((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (float)L_22))));
		// if (velocity.y >= 3)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_velocity_13();
		float L_24 = L_23->get_y_3();
		if ((!(((float)L_24) >= ((float)(3.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		// velocity.y = 3f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_velocity_13();
		L_25->set_y_3((3.0f));
		// }
		goto IL_00e2;
	}

IL_00c0:
	{
		// else if (velocity.y <= -3)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_velocity_13();
		float L_27 = L_26->get_y_3();
		if ((!(((float)L_27) <= ((float)(-3.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		// velocity.y = -3f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_velocity_13();
		L_28->set_y_3((-3.0f));
	}

IL_00e2:
	{
		// tmid += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_tmid_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_30, /*hidden argument*/NULL);
		__this->set_tmid_20(L_31);
		// t1 += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_33, /*hidden argument*/NULL);
		__this->set_t1_17(L_34);
		// t2 += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_36, /*hidden argument*/NULL);
		__this->set_t2_18(L_37);
		// t3 += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_39, /*hidden argument*/NULL);
		__this->set_t3_19(L_40);
		// }
		return;
	}
}
// System.Void ShipFlying::Driftin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying_Driftin_m3BB9CE3755188C6D383A522F8D522BCF47050381 (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, const RuntimeMethod* method)
{
	{
		// tmid += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_tmid_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_tmid_20(L_2);
		// t1 += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_t1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		__this->set_t1_17(L_5);
		// t2 += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_t2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		__this->set_t2_18(L_8);
		// t3 += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_t3_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_velocity_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		__this->set_t3_19(L_11);
		// }
		return;
	}
}
// System.Void ShipFlying::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipFlying__ctor_mA8A547ABBD642D5FB67DE4B378490A10CCDFAD21 (ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Lab1.Grid2D grid = new Lab1.Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_0, /*hidden argument*/NULL);
		__this->set_grid_7(L_0);
		// DrawingObject ship = new DrawingObject();
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_1 = (DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A *)il2cpp_codegen_object_new(DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A_il2cpp_TypeInfo_var);
		DrawingObject__ctor_mA0513B7D6FE06F0526DBFB811F68B2DB42DEE6B3(L_1, /*hidden argument*/NULL);
		__this->set_ship_8(L_1);
		// public float rotationSpee = 0.5f;
		__this->set_rotationSpee_9((0.5f));
		// public float mass = 4;
		__this->set_mass_11((4.0f));
		// public float lives = 3;
		__this->set_lives_15((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void a2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a2_Start_m246587C2A92E54F834B1FD13EDA8C67669419715 (a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = Random.Range(1111, 9999);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)1111), ((int32_t)9999), /*hidden argument*/NULL);
		__this->set_ID_7(L_0);
		// instance = this;
		((a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7_StaticFields*)il2cpp_codegen_static_fields_for(a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7_il2cpp_TypeInfo_var))->set_instance_15(__this);
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_1 = __this->get_grid_4();
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_3/(int32_t)2)))), /*hidden argument*/NULL);
		L_1->set_origin_1(L_4);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_5 = __this->get_grid_4();
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_8), ((float)((float)L_6)), ((float)((float)L_7)), /*hidden argument*/NULL);
		L_5->set_screenSize_0(L_8);
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_start_6();
		int32_t L_10;
		L_10 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_9->set_x_2(((float)((float)L_11)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_start_6();
		int32_t L_13;
		L_13 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_12->set_y_3(((float)((float)L_14)));
		// radius = Random.Range(radiusMin, radiusMax);
		float L_15 = __this->get_radiusMin_10();
		float L_16 = __this->get_radiusMax_11();
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_15, L_16, /*hidden argument*/NULL);
		__this->set_radius_8(L_17);
		// angleRotation = Random.Range(-180, 180);
		int32_t L_18;
		L_18 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		__this->set_angleRotation_13(((float)((float)L_18)));
		// }
		return;
	}
}
// System.Void a2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a2_Update_m03B5D78E6A6B56B8D3F7F79D16295C8EF245E3AF (a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68117DD4CA956FBED8998897536097E8F4D493F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (start.x >= grid.screenSize.x + 15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_start_6();
		float L_1 = L_0->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_2 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = L_2->get_address_of_screenSize_0();
		float L_4 = L_3->get_x_2();
		if ((!(((float)L_1) >= ((float)((float)il2cpp_codegen_add((float)L_4, (float)(15.0f)))))))
		{
			goto IL_0033;
		}
	}
	{
		// start.x = -14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_start_6();
		L_5->set_x_2((-14.0f));
	}

IL_0033:
	{
		// if (start.x <= -15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_start_6();
		float L_7 = L_6->get_x_2();
		if ((!(((float)L_7) <= ((float)(-15.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		// start.x = grid.screenSize.x + 14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_start_6();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_9 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = L_9->get_address_of_screenSize_0();
		float L_11 = L_10->get_x_2();
		L_8->set_x_2(((float)il2cpp_codegen_add((float)L_11, (float)(14.0f))));
	}

IL_0066:
	{
		// if (start.y >= grid.screenSize.y + 15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_start_6();
		float L_13 = L_12->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_14 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = L_14->get_address_of_screenSize_0();
		float L_16 = L_15->get_y_3();
		if ((!(((float)L_13) >= ((float)((float)il2cpp_codegen_add((float)L_16, (float)(15.0f)))))))
		{
			goto IL_0099;
		}
	}
	{
		// start.y = -14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_start_6();
		L_17->set_y_3((-14.0f));
	}

IL_0099:
	{
		// if (start.y <= -15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_start_6();
		float L_19 = L_18->get_y_3();
		if ((!(((float)L_19) <= ((float)(-15.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		// start.y = grid.screenSize.y + 14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_start_6();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_21 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = L_21->get_address_of_screenSize_0();
		float L_23 = L_22->get_y_3();
		L_20->set_y_3(((float)il2cpp_codegen_add((float)L_23, (float)(14.0f))));
	}

IL_00cc:
	{
		// if (destroyed == false)
		bool L_24 = __this->get_destroyed_14();
		if (L_24)
		{
			goto IL_00ff;
		}
	}
	{
		// AstroidManager.AstroidDrawing(start, radius, 15, Color.red, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_start_6();
		float L_26 = __this->get_radius_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_28 = __this->get_grid_4();
		AstroidManager_AstroidDrawing_mAEBFE66AD84734948CCCB0DE206DD305A1C432EF(L_25, L_26, ((int32_t)15), L_27, L_28, /*hidden argument*/NULL);
		// Movement(acc);
		float L_29 = __this->get_acc_9();
		a2_Movement_mB117126805E38D0363A5FB5ED47AE3A92DB1790D(__this, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ff:
	{
		// Debug.Log("astroid hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral68117DD4CA956FBED8998897536097E8F4D493F5, /*hidden argument*/NULL);
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_start_6();
		int32_t L_31;
		L_31 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_32;
		L_32 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_30->set_x_2(((float)((float)L_32)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_start_6();
		int32_t L_34;
		L_34 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_35;
		L_35 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_33->set_y_3(((float)((float)L_35)));
		// radius = Random.Range(radiusMin, radiusMax);
		float L_36 = __this->get_radiusMin_10();
		float L_37 = __this->get_radiusMax_11();
		float L_38;
		L_38 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_36, L_37, /*hidden argument*/NULL);
		__this->set_radius_8(L_38);
		// angleRotation = Random.Range(-180, 180);
		int32_t L_39;
		L_39 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		__this->set_angleRotation_13(((float)((float)L_39)));
		// Score.instace.score++;
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_40 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_instace_7();
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_41 = L_40;
		int32_t L_42 = L_41->get_score_6();
		L_41->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		// destroyed = false;
		__this->set_destroyed_14((bool)0);
		// }
		return;
	}
}
// System.Void a2::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a2_Movement_mB117126805E38D0363A5FB5ED47AE3A92DB1790D (a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * __this, float ___accelerateion0, const RuntimeMethod* method)
{
	{
		// radians = Mathf.Deg2Rad * angleRotation;
		float L_0 = __this->get_angleRotation_13();
		__this->set_radians_12(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_0)));
		// velocity.x = Mathf.Cos(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_velocity_5();
		float L_2 = __this->get_radians_12();
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = ___accelerateion0;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_1->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)));
		// velocity.y = Mathf.Sin(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_velocity_5();
		float L_7 = __this->get_radians_12();
		float L_8;
		L_8 = sinf(L_7);
		float L_9 = ___accelerateion0;
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_6->set_y_3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)L_10)));
		// start += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_start_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_velocity_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_12, /*hidden argument*/NULL);
		__this->set_start_6(L_13);
		// }
		return;
	}
}
// System.Void a2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a2__ctor_m4F8E03287A3AC5DF42E7F8D8B2FC0FAE7668C847 (a2_tA6CC86402983B0BEF826F803D72EC71FE90B86F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Lab1.Grid2D grid = new Lab1.Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_0, /*hidden argument*/NULL);
		__this->set_grid_4(L_0);
		// public float acc = 60;
		__this->set_acc_9((60.0f));
		// public float radiusMin = 10;
		__this->set_radiusMin_10((10.0f));
		// public float radiusMax = 40;
		__this->set_radiusMax_11((40.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void a3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a3_Start_m34B763C4888C8B2021D8BE28062000222A0E0B8E (a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = Random.Range(1111, 9999);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)1111), ((int32_t)9999), /*hidden argument*/NULL);
		__this->set_ID_7(L_0);
		// instance = this;
		((a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD_StaticFields*)il2cpp_codegen_static_fields_for(a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD_il2cpp_TypeInfo_var))->set_instance_15(__this);
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_1 = __this->get_grid_4();
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_3/(int32_t)2)))), /*hidden argument*/NULL);
		L_1->set_origin_1(L_4);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_5 = __this->get_grid_4();
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_8), ((float)((float)L_6)), ((float)((float)L_7)), /*hidden argument*/NULL);
		L_5->set_screenSize_0(L_8);
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_start_6();
		int32_t L_10;
		L_10 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_9->set_x_2(((float)((float)L_11)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_start_6();
		int32_t L_13;
		L_13 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_12->set_y_3(((float)((float)L_14)));
		// radius = Random.Range(radiusMin, radiusMax);
		float L_15 = __this->get_radiusMin_10();
		float L_16 = __this->get_radiusMax_11();
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_15, L_16, /*hidden argument*/NULL);
		__this->set_radius_8(L_17);
		// angleRotation = Random.Range(-180, 180);
		int32_t L_18;
		L_18 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		__this->set_angleRotation_13(((float)((float)L_18)));
		// }
		return;
	}
}
// System.Void a3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a3_Update_m551A083A0B5830FF73A75F4E98E937ADC440844B (a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68117DD4CA956FBED8998897536097E8F4D493F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (start.x >= grid.screenSize.x + 15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_start_6();
		float L_1 = L_0->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_2 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = L_2->get_address_of_screenSize_0();
		float L_4 = L_3->get_x_2();
		if ((!(((float)L_1) >= ((float)((float)il2cpp_codegen_add((float)L_4, (float)(15.0f)))))))
		{
			goto IL_0033;
		}
	}
	{
		// start.x = -14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_start_6();
		L_5->set_x_2((-14.0f));
	}

IL_0033:
	{
		// if (start.x <= -15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_start_6();
		float L_7 = L_6->get_x_2();
		if ((!(((float)L_7) <= ((float)(-15.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		// start.x = grid.screenSize.x + 14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_start_6();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_9 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = L_9->get_address_of_screenSize_0();
		float L_11 = L_10->get_x_2();
		L_8->set_x_2(((float)il2cpp_codegen_add((float)L_11, (float)(14.0f))));
	}

IL_0066:
	{
		// if (start.y >= grid.screenSize.y + 15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_start_6();
		float L_13 = L_12->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_14 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = L_14->get_address_of_screenSize_0();
		float L_16 = L_15->get_y_3();
		if ((!(((float)L_13) >= ((float)((float)il2cpp_codegen_add((float)L_16, (float)(15.0f)))))))
		{
			goto IL_0099;
		}
	}
	{
		// start.y = -14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_start_6();
		L_17->set_y_3((-14.0f));
	}

IL_0099:
	{
		// if (start.y <= -15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_start_6();
		float L_19 = L_18->get_y_3();
		if ((!(((float)L_19) <= ((float)(-15.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		// start.y = grid.screenSize.y + 14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_start_6();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_21 = __this->get_grid_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = L_21->get_address_of_screenSize_0();
		float L_23 = L_22->get_y_3();
		L_20->set_y_3(((float)il2cpp_codegen_add((float)L_23, (float)(14.0f))));
	}

IL_00cc:
	{
		// if (destroyed == false)
		bool L_24 = __this->get_destroyed_14();
		if (L_24)
		{
			goto IL_00ff;
		}
	}
	{
		// AstroidManager.AstroidDrawing(start, radius, 15, Color.red, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_start_6();
		float L_26 = __this->get_radius_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_28 = __this->get_grid_4();
		AstroidManager_AstroidDrawing_mAEBFE66AD84734948CCCB0DE206DD305A1C432EF(L_25, L_26, ((int32_t)15), L_27, L_28, /*hidden argument*/NULL);
		// Movement(acc);
		float L_29 = __this->get_acc_9();
		a3_Movement_m23696D4E13CFC36AA12377DBA9E4959435295F2D(__this, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ff:
	{
		// Debug.Log("astroid hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral68117DD4CA956FBED8998897536097E8F4D493F5, /*hidden argument*/NULL);
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_start_6();
		int32_t L_31;
		L_31 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_32;
		L_32 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_30->set_x_2(((float)((float)L_32)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_start_6();
		int32_t L_34;
		L_34 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_35;
		L_35 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_33->set_y_3(((float)((float)L_35)));
		// radius = Random.Range(radiusMin, radiusMax);
		float L_36 = __this->get_radiusMin_10();
		float L_37 = __this->get_radiusMax_11();
		float L_38;
		L_38 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_36, L_37, /*hidden argument*/NULL);
		__this->set_radius_8(L_38);
		// angleRotation = Random.Range(-180, 180);
		int32_t L_39;
		L_39 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		__this->set_angleRotation_13(((float)((float)L_39)));
		// Score.instace.score++;
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_40 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_instace_7();
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_41 = L_40;
		int32_t L_42 = L_41->get_score_6();
		L_41->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		// destroyed = false;
		__this->set_destroyed_14((bool)0);
		// }
		return;
	}
}
// System.Void a3::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a3_Movement_m23696D4E13CFC36AA12377DBA9E4959435295F2D (a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * __this, float ___accelerateion0, const RuntimeMethod* method)
{
	{
		// radians = Mathf.Deg2Rad * angleRotation;
		float L_0 = __this->get_angleRotation_13();
		__this->set_radians_12(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_0)));
		// velocity.x = Mathf.Cos(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_velocity_5();
		float L_2 = __this->get_radians_12();
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = ___accelerateion0;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_1->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)));
		// velocity.y = Mathf.Sin(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_velocity_5();
		float L_7 = __this->get_radians_12();
		float L_8;
		L_8 = sinf(L_7);
		float L_9 = ___accelerateion0;
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_6->set_y_3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)L_10)));
		// start += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_start_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_velocity_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_12, /*hidden argument*/NULL);
		__this->set_start_6(L_13);
		// }
		return;
	}
}
// System.Void a3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a3__ctor_m825E9EDBD2A7CA7A221FB5478635FAB602D99924 (a3_tCF27EBEEAE6CF9382E1816922B54CFEF542451CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Lab1.Grid2D grid = new Lab1.Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_0, /*hidden argument*/NULL);
		__this->set_grid_4(L_0);
		// public float acc = 60;
		__this->set_acc_9((60.0f));
		// public float radiusMin = 10;
		__this->set_radiusMin_10((10.0f));
		// public float radiusMax = 40;
		__this->set_radiusMax_11((40.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void astroid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void astroid_Start_m78FA66EF3411F011E42E325504C8412B594B3769 (astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = Random.Range(1111, 9999);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)1111), ((int32_t)9999), /*hidden argument*/NULL);
		__this->set_ID_8(L_0);
		// instance = this;
		((astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_StaticFields*)il2cpp_codegen_static_fields_for(astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939_il2cpp_TypeInfo_var))->set_instance_16(__this);
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_1 = __this->get_grid_5();
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_3/(int32_t)2)))), /*hidden argument*/NULL);
		L_1->set_origin_1(L_4);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_5 = __this->get_grid_5();
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_8), ((float)((float)L_6)), ((float)((float)L_7)), /*hidden argument*/NULL);
		L_5->set_screenSize_0(L_8);
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_start_7();
		int32_t L_10;
		L_10 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_9->set_x_2(((float)((float)L_11)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_start_7();
		int32_t L_13;
		L_13 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_12->set_y_3(((float)((float)L_14)));
		goto IL_00c5;
	}

IL_008f:
	{
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_start_7();
		int32_t L_16;
		L_16 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_15->set_x_2(((float)((float)L_17)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_start_7();
		int32_t L_19;
		L_19 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_20;
		L_20 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_18->set_y_3(((float)((float)L_20)));
	}

IL_00c5:
	{
		// while (((ShipFlying.instance.t1.x - start.x) * (ShipFlying.instance.t1.x - start.x)) + ((ShipFlying.instance.t1.y - start.y) * (ShipFlying.instance.t1.y - start.y)) <= 2500)
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_21 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = L_21->get_address_of_t1_17();
		float L_23 = L_22->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_start_7();
		float L_25 = L_24->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_26 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = L_26->get_address_of_t1_17();
		float L_28 = L_27->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_start_7();
		float L_30 = L_29->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_31 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = L_31->get_address_of_t1_17();
		float L_33 = L_32->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_start_7();
		float L_35 = L_34->get_y_3();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_36 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = L_36->get_address_of_t1_17();
		float L_38 = L_37->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_start_7();
		float L_40 = L_39->get_y_3();
		if ((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_23, (float)L_25)), (float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_33, (float)L_35)), (float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_40))))))) <= ((float)(2500.0f))))
		{
			goto IL_008f;
		}
	}
	{
		// radius = Random.Range(radiusMin, radiusMax);
		float L_41 = __this->get_radiusMin_11();
		float L_42 = __this->get_radiusMax_12();
		float L_43;
		L_43 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_41, L_42, /*hidden argument*/NULL);
		__this->set_radius_9(L_43);
		// angleRotation = Random.Range(-180, 180);
		int32_t L_44;
		L_44 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		__this->set_angleRotation_14(((float)((float)L_44)));
		// holder.transform.rotation = Quaternion.Euler(new Vector3(0, 0, angleRotation));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_holder_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		float L_47 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_48), (0.0f), (0.0f), L_47, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_48, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_46, L_49, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void astroid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void astroid_Update_mC9BBB26377D447B2A9D3854D0FCEAA3B9DA7CB20 (astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// holder.transform.position = start;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_holder_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_start_7();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// if (start.x >= grid.screenSize.x + 15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_start_7();
		float L_4 = L_3->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_5 = __this->get_grid_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = L_5->get_address_of_screenSize_0();
		float L_7 = L_6->get_x_2();
		if ((!(((float)L_4) >= ((float)((float)il2cpp_codegen_add((float)L_7, (float)(15.0f)))))))
		{
			goto IL_0049;
		}
	}
	{
		// start.x = -14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_start_7();
		L_8->set_x_2((-14.0f));
	}

IL_0049:
	{
		// if (start.x <= -15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_start_7();
		float L_10 = L_9->get_x_2();
		if ((!(((float)L_10) <= ((float)(-15.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// start.x = grid.screenSize.x + 14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_start_7();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_12 = __this->get_grid_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = L_12->get_address_of_screenSize_0();
		float L_14 = L_13->get_x_2();
		L_11->set_x_2(((float)il2cpp_codegen_add((float)L_14, (float)(14.0f))));
	}

IL_007c:
	{
		// if (start.y >= grid.screenSize.y + 15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_start_7();
		float L_16 = L_15->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_17 = __this->get_grid_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = L_17->get_address_of_screenSize_0();
		float L_19 = L_18->get_y_3();
		if ((!(((float)L_16) >= ((float)((float)il2cpp_codegen_add((float)L_19, (float)(15.0f)))))))
		{
			goto IL_00af;
		}
	}
	{
		// start.y = -14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_start_7();
		L_20->set_y_3((-14.0f));
	}

IL_00af:
	{
		// if (start.y <= -15)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_start_7();
		float L_22 = L_21->get_y_3();
		if ((!(((float)L_22) <= ((float)(-15.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		// start.y = grid.screenSize.y + 14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_start_7();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_24 = __this->get_grid_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = L_24->get_address_of_screenSize_0();
		float L_26 = L_25->get_y_3();
		L_23->set_y_3(((float)il2cpp_codegen_add((float)L_26, (float)(14.0f))));
	}

IL_00e2:
	{
		// if (destroyed == false)
		bool L_27 = __this->get_destroyed_15();
		if (L_27)
		{
			goto IL_0119;
		}
	}
	{
		// AstroidManager.AstroidDrawing(start, radius, 15, Color.red, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_start_7();
		float L_29 = __this->get_radius_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_31 = __this->get_grid_5();
		AstroidManager_AstroidDrawing_mAEBFE66AD84734948CCCB0DE206DD305A1C432EF(L_28, L_29, ((int32_t)15), L_30, L_31, /*hidden argument*/NULL);
		// Movement(acc);
		float L_32 = __this->get_acc_10();
		astroid_Movement_mDC0B6291AD60C24E38B1C65514CBB1440CCD6385(__this, L_32, /*hidden argument*/NULL);
		// }
		goto IL_0270;
	}

IL_0119:
	{
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_start_7();
		int32_t L_34;
		L_34 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_35;
		L_35 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_33->set_x_2(((float)((float)L_35)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = __this->get_address_of_start_7();
		int32_t L_37;
		L_37 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_38;
		L_38 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_36->set_y_3(((float)((float)L_38)));
		goto IL_0187;
	}

IL_0151:
	{
		// start.x = Random.Range(10, Screen.width - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_start_7();
		int32_t L_40;
		L_40 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_41;
		L_41 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_39->set_x_2(((float)((float)L_41)));
		// start.y = Random.Range(10, Screen.height - 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_start_7();
		int32_t L_43;
		L_43 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_44;
		L_44 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		L_42->set_y_3(((float)((float)L_44)));
	}

IL_0187:
	{
		// while (((ShipFlying.instance.t1.x - start.x) * (ShipFlying.instance.t1.x - start.x)) + ((ShipFlying.instance.t1.y - start.y) * (ShipFlying.instance.t1.y - start.y)) <= 2500)
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_45 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = L_45->get_address_of_t1_17();
		float L_47 = L_46->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_start_7();
		float L_49 = L_48->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_50 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = L_50->get_address_of_t1_17();
		float L_52 = L_51->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = __this->get_address_of_start_7();
		float L_54 = L_53->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_55 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_56 = L_55->get_address_of_t1_17();
		float L_57 = L_56->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_58 = __this->get_address_of_start_7();
		float L_59 = L_58->get_y_3();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_60 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_61 = L_60->get_address_of_t1_17();
		float L_62 = L_61->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_63 = __this->get_address_of_start_7();
		float L_64 = L_63->get_y_3();
		if ((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_49)), (float)((float)il2cpp_codegen_subtract((float)L_52, (float)L_54)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_57, (float)L_59)), (float)((float)il2cpp_codegen_subtract((float)L_62, (float)L_64))))))) <= ((float)(2500.0f))))
		{
			goto IL_0151;
		}
	}
	{
		// radius = Random.Range(radiusMin, radiusMax);
		float L_65 = __this->get_radiusMin_11();
		float L_66 = __this->get_radiusMax_12();
		float L_67;
		L_67 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_65, L_66, /*hidden argument*/NULL);
		__this->set_radius_9(L_67);
		// angleRotation = Random.Range(-180, 180);
		int32_t L_68;
		L_68 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		__this->set_angleRotation_14(((float)((float)L_68)));
		// holder.transform.rotation = Quaternion.Euler(new Vector3(0, 0, angleRotation));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_holder_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		float L_71 = __this->get_angleRotation_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_72), (0.0f), (0.0f), L_71, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_73;
		L_73 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_72, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_70, L_73, /*hidden argument*/NULL);
		// Score.instace.score++;
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_74 = ((Score_tE07CBD9780DFC212BE43719819F512E8861103C7_StaticFields*)il2cpp_codegen_static_fields_for(Score_tE07CBD9780DFC212BE43719819F512E8861103C7_il2cpp_TypeInfo_var))->get_instace_7();
		Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * L_75 = L_74;
		int32_t L_76 = L_75->get_score_6();
		L_75->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1)));
		// destroyed = false;
		__this->set_destroyed_15((bool)0);
	}

IL_0270:
	{
		// if (((ShipFlying.instance.t1.x - start.x) * (ShipFlying.instance.t1.x - start.x)) + ((ShipFlying.instance.t1.y - start.y) * (ShipFlying.instance.t1.y - start.y)) <= (((start.x + radius) - start.x )* ((start.x + radius) - start.x)) + (((start.y + radius) - start.y) * ((start.y + radius)- start.y)) || ((ShipFlying.instance.t2.x - start.x) * (ShipFlying.instance.t2.x - start.x)) + ((ShipFlying.instance.t2.y - start.y) * (ShipFlying.instance.t2.y - start.y)) <= (((start.x + radius) - start.x) * ((start.x + radius) - start.x)) + (((start.y + radius) - start.y) * ((start.y + radius) - start.y)) || ((ShipFlying.instance.t3.x - start.x) * (ShipFlying.instance.t3.x - start.x)) + ((ShipFlying.instance.t3.y - start.y) * (ShipFlying.instance.t3.y - start.y)) <= (((start.x + radius) - start.x) * ((start.x + radius) - start.x)) + (((start.y + radius) - start.y) * ((start.y + radius) - start.y)))
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_77 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_78 = L_77->get_address_of_t1_17();
		float L_79 = L_78->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_80 = __this->get_address_of_start_7();
		float L_81 = L_80->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_82 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_83 = L_82->get_address_of_t1_17();
		float L_84 = L_83->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = __this->get_address_of_start_7();
		float L_86 = L_85->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_87 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_88 = L_87->get_address_of_t1_17();
		float L_89 = L_88->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_90 = __this->get_address_of_start_7();
		float L_91 = L_90->get_y_3();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_92 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_93 = L_92->get_address_of_t1_17();
		float L_94 = L_93->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_95 = __this->get_address_of_start_7();
		float L_96 = L_95->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_97 = __this->get_address_of_start_7();
		float L_98 = L_97->get_x_2();
		float L_99 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_100 = __this->get_address_of_start_7();
		float L_101 = L_100->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_102 = __this->get_address_of_start_7();
		float L_103 = L_102->get_x_2();
		float L_104 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_105 = __this->get_address_of_start_7();
		float L_106 = L_105->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_107 = __this->get_address_of_start_7();
		float L_108 = L_107->get_y_3();
		float L_109 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_110 = __this->get_address_of_start_7();
		float L_111 = L_110->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_112 = __this->get_address_of_start_7();
		float L_113 = L_112->get_y_3();
		float L_114 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_115 = __this->get_address_of_start_7();
		float L_116 = L_115->get_y_3();
		if ((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_79, (float)L_81)), (float)((float)il2cpp_codegen_subtract((float)L_84, (float)L_86)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_89, (float)L_91)), (float)((float)il2cpp_codegen_subtract((float)L_94, (float)L_96))))))) <= ((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_98, (float)L_99)), (float)L_101)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_103, (float)L_104)), (float)L_106)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_108, (float)L_109)), (float)L_111)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_113, (float)L_114)), (float)L_116)))))))))
		{
			goto IL_053a;
		}
	}
	{
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_117 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_118 = L_117->get_address_of_t2_18();
		float L_119 = L_118->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_120 = __this->get_address_of_start_7();
		float L_121 = L_120->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_122 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_123 = L_122->get_address_of_t2_18();
		float L_124 = L_123->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_125 = __this->get_address_of_start_7();
		float L_126 = L_125->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_127 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_128 = L_127->get_address_of_t2_18();
		float L_129 = L_128->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_130 = __this->get_address_of_start_7();
		float L_131 = L_130->get_y_3();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_132 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_133 = L_132->get_address_of_t2_18();
		float L_134 = L_133->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_135 = __this->get_address_of_start_7();
		float L_136 = L_135->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_137 = __this->get_address_of_start_7();
		float L_138 = L_137->get_x_2();
		float L_139 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_140 = __this->get_address_of_start_7();
		float L_141 = L_140->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_142 = __this->get_address_of_start_7();
		float L_143 = L_142->get_x_2();
		float L_144 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_145 = __this->get_address_of_start_7();
		float L_146 = L_145->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_147 = __this->get_address_of_start_7();
		float L_148 = L_147->get_y_3();
		float L_149 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_150 = __this->get_address_of_start_7();
		float L_151 = L_150->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_152 = __this->get_address_of_start_7();
		float L_153 = L_152->get_y_3();
		float L_154 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_155 = __this->get_address_of_start_7();
		float L_156 = L_155->get_y_3();
		if ((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_119, (float)L_121)), (float)((float)il2cpp_codegen_subtract((float)L_124, (float)L_126)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_129, (float)L_131)), (float)((float)il2cpp_codegen_subtract((float)L_134, (float)L_136))))))) <= ((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_138, (float)L_139)), (float)L_141)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_143, (float)L_144)), (float)L_146)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_148, (float)L_149)), (float)L_151)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_153, (float)L_154)), (float)L_156)))))))))
		{
			goto IL_053a;
		}
	}
	{
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_157 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_158 = L_157->get_address_of_t3_19();
		float L_159 = L_158->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_160 = __this->get_address_of_start_7();
		float L_161 = L_160->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_162 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_163 = L_162->get_address_of_t3_19();
		float L_164 = L_163->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_165 = __this->get_address_of_start_7();
		float L_166 = L_165->get_x_2();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_167 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_168 = L_167->get_address_of_t3_19();
		float L_169 = L_168->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_170 = __this->get_address_of_start_7();
		float L_171 = L_170->get_y_3();
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_172 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_173 = L_172->get_address_of_t3_19();
		float L_174 = L_173->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_175 = __this->get_address_of_start_7();
		float L_176 = L_175->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_177 = __this->get_address_of_start_7();
		float L_178 = L_177->get_x_2();
		float L_179 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_180 = __this->get_address_of_start_7();
		float L_181 = L_180->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_182 = __this->get_address_of_start_7();
		float L_183 = L_182->get_x_2();
		float L_184 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_185 = __this->get_address_of_start_7();
		float L_186 = L_185->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_187 = __this->get_address_of_start_7();
		float L_188 = L_187->get_y_3();
		float L_189 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_190 = __this->get_address_of_start_7();
		float L_191 = L_190->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_192 = __this->get_address_of_start_7();
		float L_193 = L_192->get_y_3();
		float L_194 = __this->get_radius_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_195 = __this->get_address_of_start_7();
		float L_196 = L_195->get_y_3();
		if ((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_159, (float)L_161)), (float)((float)il2cpp_codegen_subtract((float)L_164, (float)L_166)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_169, (float)L_171)), (float)((float)il2cpp_codegen_subtract((float)L_174, (float)L_176))))))) <= ((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_178, (float)L_179)), (float)L_181)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_183, (float)L_184)), (float)L_186)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_188, (float)L_189)), (float)L_191)), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_193, (float)L_194)), (float)L_196))))))))))
		{
			goto IL_0545;
		}
	}

IL_053a:
	{
		// ShipFlying.instance.hit = true;
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_197 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		L_197->set_hit_21((bool)1);
	}

IL_0545:
	{
		// }
		return;
	}
}
// System.Void astroid::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void astroid_OnTriggerEnter_m112FF3300B1F7904B72319A24A982A5EE191C734 (astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void astroid::Movement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void astroid_Movement_mDC0B6291AD60C24E38B1C65514CBB1440CCD6385 (astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * __this, float ___accelerateion0, const RuntimeMethod* method)
{
	{
		// radians = Mathf.Deg2Rad * angleRotation;
		float L_0 = __this->get_angleRotation_14();
		__this->set_radians_13(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_0)));
		// velocity.x = Mathf.Cos(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_velocity_6();
		float L_2 = __this->get_radians_13();
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = ___accelerateion0;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_1->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)));
		// velocity.y = Mathf.Sin(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_velocity_6();
		float L_7 = __this->get_radians_13();
		float L_8;
		L_8 = sinf(L_7);
		float L_9 = ___accelerateion0;
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_6->set_y_3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)L_10)));
		// start += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_start_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_velocity_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_12, /*hidden argument*/NULL);
		__this->set_start_7(L_13);
		// }
		return;
	}
}
// System.Void astroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void astroid__ctor_m5FB62E21B3B7C0499900EB0F15DD2F31C58A78B5 (astroid_tAF58AD3ED71BACB8AAD2B0243F88440E21169939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Lab1.Grid2D grid = new Lab1.Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_0, /*hidden argument*/NULL);
		__this->set_grid_5(L_0);
		// public float acc = 60;
		__this->set_acc_10((60.0f));
		// public float radiusMin = 10;
		__this->set_radiusMin_11((10.0f));
		// public float radiusMax = 40;
		__this->set_radiusMax_12((40.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void died::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void died_Start_m9A1796AAFB93A1C41CEA01D8688AAAC9DA901F3D (died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014 * __this, const RuntimeMethod* method)
{
	{
		// Died();
		RuntimeObject* L_0;
		L_0 = died_Died_m8EE686E6A341A74493FEA41C10150B006BA924DD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void died::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void died_Update_mC3BBC0635C52CECDD45BA6C791683EB1091D7197 (died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator died::Died()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* died_Died_m8EE686E6A341A74493FEA41C10150B006BA924DD (died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * L_0 = (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 *)il2cpp_codegen_object_new(U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586_il2cpp_TypeInfo_var);
		U3CDiedU3Ed__2__ctor_m85CA836FBD486D6854087BC23DF7C13082A84802(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void died::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void died__ctor_m364006420E7266971DE15546696877062F4C06F6 (died_tE4B9FB652189B95F35E6C530E4B0D81CE82A1014 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_Update_m6D0A21F57C38AE84D8A97EB0BE123E873C531579 (menu_tE5FA1740AE0DD6F386AF3E646994D5116D686FBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63ABA6F7D63C173B0A343FB3CEA0F7243C8949F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDFD4D20C33290BB70BBA904B4E928860ABAE131);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("Ship");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralEDFD4D20C33290BB70BBA904B4E928860ABAE131, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if(Input.GetKeyDown(KeyCode.Escape))
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log("game quited");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral63ABA6F7D63C173B0A343FB3CEA0F7243C8949F9, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu__ctor_m37BD26AC972C8F9BA045730ED71AB419C97624D6 (menu_tE5FA1740AE0DD6F386AF3E646994D5116D686FBC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void shot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shot_Start_m3BE5AEB544020DD7BEF59C044B8B07E189151521 (shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_StaticFields*)il2cpp_codegen_static_fields_for(shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2_il2cpp_TypeInfo_var))->set_instance_5(__this);
		// bulletspot = ShipFlying.instance.t1;
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_0 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0->get_t1_17();
		__this->set_bulletspot_8(L_1);
		// rotation = ShipFlying.instance.angleRotation;
		ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863 * L_2 = ((ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_StaticFields*)il2cpp_codegen_static_fields_for(ShipFlying_tBDF96FC15C0FFD95AE5BF6021983280A341D5863_il2cpp_TypeInfo_var))->get_instance_6();
		float L_3 = L_2->get_angleRotation_14();
		__this->set_rotation_11(L_3);
		// grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_4 = __this->get_grid_6();
		int32_t L_5;
		L_5 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), ((float)((float)((int32_t)((int32_t)L_5/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_6/(int32_t)2)))), /*hidden argument*/NULL);
		L_4->set_origin_1(L_7);
		// grid.screenSize = new Vector3(Screen.width, Screen.height);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_8 = __this->get_grid_6();
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_11), ((float)((float)L_9)), ((float)((float)L_10)), /*hidden argument*/NULL);
		L_8->set_screenSize_0(L_11);
		// }
		return;
	}
}
// System.Void shot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shot_Update_m01FE99A0C5091EB7EF399004DFFCF47D628F6D98 (shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// holder.transform.position = bulletspot;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_holder_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_bulletspot_8();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// if (bulletspot.x >= grid.screenSize.x + 1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_bulletspot_8();
		float L_4 = L_3->get_x_2();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_5 = __this->get_grid_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = L_5->get_address_of_screenSize_0();
		float L_7 = L_6->get_x_2();
		if ((!(((float)L_4) >= ((float)((float)il2cpp_codegen_add((float)L_7, (float)(1.0f)))))))
		{
			goto IL_0049;
		}
	}
	{
		// bulletspot.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_bulletspot_8();
		L_8->set_x_2((0.0f));
	}

IL_0049:
	{
		// if (bulletspot.x <= -1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_bulletspot_8();
		float L_10 = L_9->get_x_2();
		if ((!(((float)L_10) <= ((float)(-1.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// bulletspot.x = grid.screenSize.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_bulletspot_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_12 = __this->get_grid_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = L_12->get_address_of_screenSize_0();
		float L_14 = L_13->get_x_2();
		L_11->set_x_2(L_14);
	}

IL_0076:
	{
		// if (bulletspot.y >= grid.screenSize.y + 1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_bulletspot_8();
		float L_16 = L_15->get_y_3();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_17 = __this->get_grid_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = L_17->get_address_of_screenSize_0();
		float L_19 = L_18->get_y_3();
		if ((!(((float)L_16) >= ((float)((float)il2cpp_codegen_add((float)L_19, (float)(1.0f)))))))
		{
			goto IL_00a9;
		}
	}
	{
		// bulletspot.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_bulletspot_8();
		L_20->set_y_3((0.0f));
	}

IL_00a9:
	{
		// if (bulletspot.y <= -1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_bulletspot_8();
		float L_22 = L_21->get_y_3();
		if ((!(((float)L_22) <= ((float)(-1.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		// bulletspot.y = grid.screenSize.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_bulletspot_8();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_24 = __this->get_grid_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = L_24->get_address_of_screenSize_0();
		float L_26 = L_25->get_y_3();
		L_23->set_y_3(L_26);
	}

IL_00d6:
	{
		// AstroidManager.AstroidDrawing(bulletspot, 3, 15, Color.white, grid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_bulletspot_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_29 = __this->get_grid_6();
		AstroidManager_AstroidDrawing_mAEBFE66AD84734948CCCB0DE206DD305A1C432EF(L_27, (3.0f), ((int32_t)15), L_28, L_29, /*hidden argument*/NULL);
		// Movement(acc, rotation);
		float L_30 = __this->get_acc_10();
		float L_31 = __this->get_rotation_11();
		shot_Movement_mAD04342463FBAD09282969234AB827B1395EC835(__this, L_30, L_31, /*hidden argument*/NULL);
		// Destroy(holder, 3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_holder_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_32, (3.0f), /*hidden argument*/NULL);
		// if (destroyed)
		bool L_33 = __this->get_destroyed_12();
		if (!L_33)
		{
			goto IL_0128;
		}
	}
	{
		// Destroy(holder);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_holder_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_34, /*hidden argument*/NULL);
	}

IL_0128:
	{
		// }
		return;
	}
}
// System.Void shot::Movement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shot_Movement_mAD04342463FBAD09282969234AB827B1395EC835 (shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * __this, float ___accelerateion0, float ___rotation1, const RuntimeMethod* method)
{
	{
		// radians = Mathf.Deg2Rad * rotation;
		float L_0 = ___rotation1;
		__this->set_radians_9(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_0)));
		// velocity.x = Mathf.Cos(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_velocity_7();
		float L_2 = __this->get_radians_9();
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = ___accelerateion0;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_1->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)));
		// velocity.y = Mathf.Sin(radians) * accelerateion * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_velocity_7();
		float L_7 = __this->get_radians_9();
		float L_8;
		L_8 = sinf(L_7);
		float L_9 = ___accelerateion0;
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_6->set_y_3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)L_10)));
		// bulletspot += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_bulletspot_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_velocity_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_12, /*hidden argument*/NULL);
		__this->set_bulletspot_8(L_13);
		// }
		return;
	}
}
// System.Void shot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shot__ctor_m752F5FAFE2CA6CA4D1740238C0F5F35ED470E031 (shot_t34B818D2DB7FCFC015E0144F12C7ED81EA0C41E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Lab1.Grid2D grid = new Lab1.Grid2D();
		Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * L_0 = (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 *)il2cpp_codegen_object_new(Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7_il2cpp_TypeInfo_var);
		Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE(L_0, /*hidden argument*/NULL);
		__this->set_grid_6(L_0);
		// public float acc = 300;
		__this->set_acc_10((300.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Lab1/<WUP>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWUPU3Ed__33__ctor_m17B8DFCE3F1555B683617F18F8FCE14AA0F677EB (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Lab1/<WUP>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWUPU3Ed__33_System_IDisposable_Dispose_mBEC64438B08512769F50D98DFB65E42A6D8D7146 (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Lab1/<WUP>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWUPU3Ed__33_MoveNext_m0C3EE862A195B8D276BE7BAE51D73AEF19EF5385 (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// spinDiamond.Lines.Clear();
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_4 = V_1;
		DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * L_5 = L_4->get_spinDiamond_24();
		List_1_t224CC6CC8D3181945C2483F6136B2912ACFB15F3 * L_6 = L_5->get_Lines_8();
		List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6(L_6, /*hidden argument*/List_1_Clear_mFF5455A97F09415180C6C9F08EEC8B386597D3F6_RuntimeMethod_var);
		// count++;
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_7 = V_1;
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_8 = V_1;
		int32_t L_9 = L_8->get_count_33();
		L_7->set_count_33(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0055:
	{
		__this->set_U3CU3E1__state_0((-1));
		// numb = test(count);
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_11 = V_1;
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_12 = V_1;
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_13 = V_1;
		int32_t L_14 = L_13->get_count_33();
		float L_15;
		L_15 = Lab1_test_m9F8E9F3EFC43740E32C36A419CADD6EB6A64F697(L_12, ((float)((float)L_14)), /*hidden argument*/NULL);
		L_11->set_numb_32(L_15);
		// waitForFiveSeconds = null;
		Lab1_t0348904B6BEBC3EF10C21432C0ADECC2B09BCBF3 * L_16 = V_1;
		L_16->set_waitForFiveSeconds_31((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Lab1/<WUP>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWUPU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3239DB23E2292D4937395652D509057D9AE7B6E8 (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Lab1/<WUP>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWUPU3Ed__33_System_Collections_IEnumerator_Reset_m5AB0607AE74AFE203FFEFF697956C662EAC0E2C6 (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWUPU3Ed__33_System_Collections_IEnumerator_Reset_m5AB0607AE74AFE203FFEFF697956C662EAC0E2C6_RuntimeMethod_var)));
	}
}
// System.Object Lab1/<WUP>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWUPU3Ed__33_System_Collections_IEnumerator_get_Current_mE015F2F6868B7205CA0C3D256FEF5813CACCFF03 (U3CWUPU3Ed__33_tB0BD3C55151633C002701F2B36D616D6E13B26CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Lab1/Grid2D::DrawLine(Line,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_DrawLine_m49F8747DBB7214FF5E8098AADD0687B90AD474A5 (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  ___line0, bool ___DrawOnGrid1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Glint.AddCommand(line);
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_0 = ___line0;
		Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A  L_1 = L_0;
		RuntimeObject * L_2 = Box(Line_t57C54D858CA72DAE79A0CA36963C7CDF17AA982A_il2cpp_TypeInfo_var, &L_1);
		Glint_AddCommand_mEDBF0A1FC2B130CA232557D703CCAAEAD546752B((RuntimeObject*)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lab1/Grid2D::DrawObject(DrawingObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D_DrawObject_mEA791CAFCDB3F4C6FC55CE117D2131021F568247 (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, DrawingObject_t038C876721754BE0CFFA59731E431D73B82E613A * ___lineObj0, bool ___DrawOnGrid1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single Lab1/Grid2D::ScaleGrid2Screen(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Grid2D_ScaleGrid2Screen_m03D301CB69D5FD3FEF3AE8F79F0D1502C2E853F6 (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return (value * gridSize);
		float L_0 = ___value0;
		float L_1 = __this->get_gridSize_2();
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
// System.Single Lab1/Grid2D::ScaleScreen2Grid(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Grid2D_ScaleScreen2Grid_mC3D5AD5223141A7FA943D39DB71DDAE6CCAA76A7 (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return (value / gridSize);
		float L_0 = ___value0;
		float L_1 = __this->get_gridSize_2();
		return ((float)((float)L_0/(float)L_1));
	}
}
// System.Void Lab1/Grid2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid2D__ctor_mC7B32192B5FBA8FD6A252EAE74BC31D4E0AC43BE (Grid2D_tFCEA1CB533CF48C2E91A650FD010A8F1CE8A36F7 * __this, const RuntimeMethod* method)
{
	{
		// public float gridSize = 25f;
		__this->set_gridSize_2((25.0f));
		// float minGridSize = 2f;
		__this->set_minGridSize_3((2.0f));
		// public float originSize = 20f;
		__this->set_originSize_4((20.0f));
		// public int divisionCount = 5;
		__this->set_divisionCount_5(5);
		// int minDivisionCount = 2;
		__this->set_minDivisionCount_6(2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void died/<Died>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDiedU3Ed__2__ctor_m85CA836FBD486D6854087BC23DF7C13082A84802 (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void died/<Died>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDiedU3Ed__2_System_IDisposable_Dispose_mED17DB9A9ADFE512F2297DECB1B1650FB4FDD1DE (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean died/<Died>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDiedU3Ed__2_MoveNext_m596316CB61254A96C244658B7D077E08B3DFC42E (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC639AEFB98077EF99F4B7A149A3BAA89903206F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(5);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_3 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_3, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("main menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC639AEFB98077EF99F4B7A149A3BAA89903206F2, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object died/<Died>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDiedU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1ED04A20837225C6CA0096E7A6A36502B4CEDC0 (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void died/<Died>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDiedU3Ed__2_System_Collections_IEnumerator_Reset_m6E2473A200960EDD08ECA61D214C0B991C65625C (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDiedU3Ed__2_System_Collections_IEnumerator_Reset_m6E2473A200960EDD08ECA61D214C0B991C65625C_RuntimeMethod_var)));
	}
}
// System.Object died/<Died>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDiedU3Ed__2_System_Collections_IEnumerator_get_Current_m8C8F001CFA6A2689E40069B0AD537594CE854F4F (U3CDiedU3Ed__2_t49AF3F976BF5D11E14FEA90BB1BF562FB6AFB586 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD6DEE0463955B4EA3B3F107BEDFD508D63A3B810_gshared_inline (Queue_1_tAF58D49E7970470F6FB07DE94113E27E309453CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
